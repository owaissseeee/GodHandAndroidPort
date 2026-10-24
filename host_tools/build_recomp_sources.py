#!/usr/bin/env python3
import os
import sys
import glob
import shutil
import hashlib
import subprocess
from pathlib import Path

EXPECTED_ELF_SHA256 = "1742f95bef65bdb2aa57b7a77df4ac7619a092e9646e1ea325bc32ec8a64f3cd"

def sha256_file(path: Path) -> str:
    h = hashlib.sha256()
    with open(path, "rb") as f:
        for chunk in iter(lambda: f.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest().lower()

def locate_or_extract_boot_elf(source_path: Path, build_dir: Path) -> Path:
    build_dir.mkdir(parents=True, exist_ok=True)
    target_elf = build_dir / "SLUS_215.03"
    if source_path.is_dir():
        for cand in [source_path / "SLUS_215.03", source_path / "slus_215.03"]:
            if cand.exists():
                shutil.copy2(cand, target_elf)
                break
        else:
            raise FileNotFoundError(f"SLUS_215.03 not found in extracted folder: {source_path}")
    else:
        sys.path.insert(0, str(Path(__file__).parent.parent))
        import build as gh_build
        data = gh_build.iso_read_root_file(str(source_path), "SLUS_215.03")
        target_elf.write_bytes(data)

    actual_hash = sha256_file(target_elf)
    if actual_hash != EXPECTED_ELF_SHA256:
        print(f"[WARN] SLUS_215.03 SHA-256 ({actual_hash}) differs from NTSC-U v1.00 ({EXPECTED_ELF_SHA256})")
    else:
        print(f"[OK] Verified SLUS_215.03 SHA-256: {actual_hash}")
    return target_elf

def generate_unity_batches(gen_dir: Path, out_unity_dir: Path, num_batches: int = 64):
    out_unity_dir.mkdir(parents=True, exist_ok=True)
    all_cpp = sorted(gen_dir.glob("*.cpp"))
    if not all_cpp:
        raise RuntimeError(f"No generated .cpp files found in {gen_dir}")

    # Keep register_functions.cpp in its own unity batch for compiler performance
    cpp_files = [f for f in all_cpp if f.name != "register_functions.cpp"]
    reg_file = gen_dir / "register_functions.cpp"

    batch_size = (len(cpp_files) + num_batches - 1) // num_batches
    batch_paths = []
    for idx in range(num_batches):
        slice_files = cpp_files[idx * batch_size : (idx + 1) * batch_size]
        if not slice_files:
            break
        batch_file = out_unity_dir / f"gh_unity_batch_{idx:02d}.cpp"
        with open(batch_file, "w", encoding="utf-8") as bf:
            bf.write("// Auto-generated Unity Batch for Android NDK ARM64 compilation\n")
            bf.write('#include "simd_arm64_compat.h"\n')
            for cf in slice_files:
                rel = os.path.relpath(cf, out_unity_dir).replace("\\", "/")
                bf.write(f'#include "{rel}"\n')
        batch_paths.append(batch_file)

    if reg_file.exists():
        reg_batch = out_unity_dir / "gh_unity_batch_register.cpp"
        with open(reg_batch, "w", encoding="utf-8") as bf:
            bf.write("// Auto-generated Unity Batch for register_functions.cpp\n")
            bf.write('#include "simd_arm64_compat.h"\n')
            rel = os.path.relpath(reg_file, out_unity_dir).replace("\\", "/")
            bf.write(f'#include "{rel}"\n')
        batch_paths.append(reg_batch)

    print(f"[OK] Created {len(batch_paths)} Unity batch files covering {len(all_cpp)} functions.")

def main():
    if len(sys.argv) < 2:
        print("Usage: python3 host_tools/build_recomp_sources.py <path_to_iso_or_extracted_dir>")
        sys.exit(1)

    root_dir = Path(__file__).resolve().parent.parent
    src_input = Path(sys.argv[1]).resolve()
    build_dir = root_dir / "build"
    cpp_root = root_dir / "app" / "src" / "main" / "cpp"
    gen_dir = cpp_root / "generated"
    unity_dir = cpp_root / "generated_unity"

    # 1. Extract and verify SLUS_215.03
    locate_or_extract_boot_elf(src_input, build_dir)

    # 2. Locate or build host ps2_recomp tool
    ps2_recomp_bin = root_dir / "build_host_recomp" / ("ps2_recomp.exe" if os.name == "nt" else "ps2_recomp")
    if not ps2_recomp_bin.exists():
        ps2_recomp_bin = root_dir / "build_host_recomp" / "ps2xRecomp" / ("ps2_recomp.exe" if os.name == "nt" else "ps2_recomp")
    if not ps2_recomp_bin.exists():
        host_build = root_dir / "build_host_recomp"
        subprocess.run([
            "cmake", "-S", str(root_dir / "app/src/main/cpp/runtime/ps2xRecomp"),
            "-B", str(host_build), "-GNinja", "-DCMAKE_BUILD_TYPE=Release"
        ], check=True)
        subprocess.run(["cmake", "--build", str(host_build), "--target", "ps2_recomp"], check=True)

    # 3. Run ps2_recomp on recomp/godhand.toml
    gen_dir.mkdir(parents=True, exist_ok=True)
    subprocess.run([str(ps2_recomp_bin), "godhand.toml"], cwd=str(root_dir / "recomp"), check=True)

    # 4. Generate 64 Unity Batches for fast Android NDK compilation
    generate_unity_batches(gen_dir, unity_dir, num_batches=64)

    # 5. Extract and emit SNR2 .rel modules
    snr2_script = root_dir / "host_tools" / "snr2" / "snr2.py"
    subprocess.run([sys.executable, str(snr2_script), "--iso", str(src_input), "extract"], check=True)

    gen_mod_script = root_dir / "host_tools" / "snr2" / "gen_modules.py"
    env = os.environ.copy()
    env["GODHAND_ISO"] = str(src_input)
    env["GODHAND_RECOMP"] = str(ps2_recomp_bin)
    subprocess.run([sys.executable, str(gen_mod_script)], env=env, check=True)

    build_script = root_dir / "build.py"
    subprocess.run([sys.executable, str(build_script), "modules"], env=env, check=True)

    print("[SUCCESS] All SLUS_215.03 and SNR2 .rel C++ sources generated and batched for Android NDK!")

if __name__ == "__main__":
    main()
