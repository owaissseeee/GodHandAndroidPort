import os
from pathlib import Path

def main():
    root = Path(r"C:\GodHandPort")
    mod_dir = root / "app" / "src" / "main" / "cpp" / "generated_modules"
    out_unity = root / "app" / "src" / "main" / "cpp" / "generated_modules_unity"
    out_unity.mkdir(parents=True, exist_ok=True)

    packs = sorted(mod_dir.glob("*/*_pack.cpp"))
    print(f"Found {len(packs)} module packs.")

    decls = []
    refs = []

    for p in packs:
        m_name = p.parent.name
        decls.append(f"    extern const ModulePack kModulePack_{m_name};\n")
        refs.append(f"        &kModulePack_{m_name},\n")
        
        # Unity file for this module
        u_file = out_unity / f"gh_mod_unity_{m_name}.cpp"
        all_cpps = sorted(p.parent.glob("*.cpp"))
        with open(u_file, "w", encoding="utf-8") as f:
            f.write(f"// Auto-generated Unity Batch for SNR2 module: {m_name}\n")
            f.write('#include "simd_arm64_compat.h"\n')
            for cf in all_cpps:
                rel = os.path.relpath(cf, out_unity).replace("\\", "/")
                f.write(f'#include "{rel}"\n')

    # Write module_index.cpp
    idx_file = root / "app" / "src" / "main" / "cpp" / "src" / "godhand" / "module_index.cpp"
    with open(idx_file, "w", encoding="utf-8") as f:
        f.write("// Generated module_index.cpp for God Hand SNR2 overlays\n")
        f.write('#include "godhand/module_registry.h"\n')
        f.write("namespace godhand {\n")
        for d in decls:
            f.write(d)
        f.write("    const ModulePack *const *modulePacks(size_t &count) {\n")
        f.write("        static const ModulePack *const packs[] = {\n")
        for r in refs:
            f.write(r)
        f.write("            nullptr\n")
        f.write("        };\n")
        f.write(f"        count = {len(packs)}u;\n")
        f.write("        return packs;\n")
        f.write("    }\n")
        f.write("} // namespace godhand\n")

    print(f"[OK] Generated module_index.cpp with {len(packs)} modules and {len(packs)} module unity batches.")

if __name__ == "__main__":
    main()
