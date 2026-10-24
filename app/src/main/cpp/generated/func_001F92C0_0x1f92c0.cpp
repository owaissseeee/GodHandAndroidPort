#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_001F92C0
// Address: 0x1f92c0 - 0x1f9848
void func_001F92C0_0x1f92c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F92C0_0x1f92c0");
#endif

    switch (ctx->pc) {
        case 0x1f9348u: goto label_1f9348;
        case 0x1f937cu: goto label_1f937c;
        case 0x1f938cu: goto label_1f938c;
        case 0x1f939cu: goto label_1f939c;
        case 0x1f93a8u: goto label_1f93a8;
        case 0x1f9498u: goto label_1f9498;
        case 0x1f94b0u: goto label_1f94b0;
        case 0x1f94f0u: goto label_1f94f0;
        case 0x1f9520u: goto label_1f9520;
        case 0x1f9538u: goto label_1f9538;
        case 0x1f95acu: goto label_1f95ac;
        case 0x1f962cu: goto label_1f962c;
        case 0x1f96d8u: goto label_1f96d8;
        case 0x1f9748u: goto label_1f9748;
        case 0x1f9760u: goto label_1f9760;
        default: break;
    }

    ctx->pc = 0x1f92c0u;

    // 0x1f92c0: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x1f92c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x1f92c4: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x1f92c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
    // 0x1f92c8: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x1f92c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
    // 0x1f92cc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1f92ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f92d0: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x1f92d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
    // 0x1f92d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f92d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92d8: 0xe7b40260  swc1        $f20, 0x260($sp)
    ctx->pc = 0x1f92d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x1f92dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f92dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f92e0: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x1f92e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
    // 0x1f92e4: 0x7fb40210  sq          $s4, 0x210($sp)
    ctx->pc = 0x1f92e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 20));
    // 0x1f92e8: 0x7fb50200  sq          $s5, 0x200($sp)
    ctx->pc = 0x1f92e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 21));
    // 0x1f92ec: 0x7fb601f0  sq          $s6, 0x1F0($sp)
    ctx->pc = 0x1f92ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 22));
    // 0x1f92f0: 0x7fb701e0  sq          $s7, 0x1E0($sp)
    ctx->pc = 0x1f92f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 23));
    // 0x1f92f4: 0x7fbe01d0  sq          $fp, 0x1D0($sp)
    ctx->pc = 0x1f92f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 30));
    // 0x1f92f8: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x1f92f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x1f92fc: 0xe7b60270  swc1        $f22, 0x270($sp)
    ctx->pc = 0x1f92fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x1f9300: 0xe7b50268  swc1        $f21, 0x268($sp)
    ctx->pc = 0x1f9300u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x1f9304: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f9304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9308: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f9308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f930c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1f930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9310: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1f9310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f9314: 0xafa60190  sw          $a2, 0x190($sp)
    ctx->pc = 0x1f9314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 6));
    // 0x1f9318: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1f9318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f931c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1f931cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f9320: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1f9320u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f9324: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f9324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f9328: 0xafa70194  sw          $a3, 0x194($sp)
    ctx->pc = 0x1f9328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 7));
    // 0x1f932c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1f932cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f9330: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1f9330u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9334: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1f9334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f9338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f933c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f933cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9340: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1F9340u;
    SET_GPR_U32(ctx, 31, 0x1F9348u);
    ctx->pc = 0x1F9344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9340u;
    // 0x1f9344: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1F9340u, 0x1F9348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9348u;
label_1f9348:
    // 0x1f9348: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1f9348u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f934c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1f934cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f9350: 0x27be0010  addiu       $fp, $sp, 0x10
    ctx->pc = 0x1f9350u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f9354: 0x13be0006  beq         $sp, $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F9354u;
    {
        const bool branch_taken_0x1f9354 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 30));
        ctx->pc = 0x1F9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9354u;
        // 0x1f9358: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9354) {
            ctx->pc = 0x1F9370u;
            goto label_1f9370;
        }
    }
    ctx->pc = 0x1F935Cu;
    // 0x1f935c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1f935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9360: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1f9360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f9364: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f9364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f9368: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1f9368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f936c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1f936cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1f9370:
    // 0x1f9370: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1f9370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f9374: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x1F9374u;
    SET_GPR_U32(ctx, 31, 0x1F937Cu);
    ctx->pc = 0x1F9378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9374u;
    // 0x1f9378: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x1F9374u, 0x1F937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F937Cu;
label_1f937c:
    // 0x1f937c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f937cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9380: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1f9380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f9384: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x1F9384u;
    SET_GPR_U32(ctx, 31, 0x1F938Cu);
    ctx->pc = 0x1F9388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9384u;
    // 0x1f9388: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x1F9384u, 0x1F938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F938Cu;
label_1f938c:
    // 0x1f938c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1f938cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1f9390: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1f9390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f9394: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x1F9394u;
    SET_GPR_U32(ctx, 31, 0x1F939Cu);
    ctx->pc = 0x1F9398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9394u;
    // 0x1f9398: 0x27b30020  addiu       $s3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x1F9394u, 0x1F939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F939Cu;
label_1f939c:
    // 0x1f939c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1f939cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f93a0: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x1F93A0u;
    SET_GPR_U32(ctx, 31, 0x1F93A8u);
    ctx->pc = 0x1F93A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F93A0u;
    // 0x1f93a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x1F93A0u, 0x1F93A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F93A8u;
label_1f93a8:
    // 0x1f93a8: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x1f93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1f93ac: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x1f93acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1f93b0: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x1f93b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x1f93b4: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x1f93b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1f93b8: 0xafa3019c  sw          $v1, 0x19C($sp)
    ctx->pc = 0x1f93b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 3));
    // 0x1f93bc: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1f93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1f93c0: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x1f93c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1f93c4: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x1f93c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x1f93c8: 0xafa301ac  sw          $v1, 0x1AC($sp)
    ctx->pc = 0x1f93c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 3));
    // 0x1f93cc: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1f93ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f93d0: 0xafa601a4  sw          $a2, 0x1A4($sp)
    ctx->pc = 0x1f93d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 6));
    // 0x1f93d4: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1f93d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1f93d8: 0x27b700f0  addiu       $s7, $sp, 0xF0
    ctx->pc = 0x1f93d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1f93dc: 0x27b60180  addiu       $s6, $sp, 0x180
    ctx->pc = 0x1f93dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1f93e0: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x1f93e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f93e4: 0x27b50130  addiu       $s5, $sp, 0x130
    ctx->pc = 0x1f93e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1f93e8: 0xc6440014  lwc1        $f4, 0x14($s2)
    ctx->pc = 0x1f93e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f93ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f93ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f93f0: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x1f93f0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
    // 0x1f93f4: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1f93f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f93f8: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x1f93f8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x1f93fc: 0x46000147  neg.s       $f5, $f0
    ctx->pc = 0x1f93fcu;
    ctx->f[5] = FPU_NEG_S(ctx->f[0]);
    // 0x1f9400: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x1f9400u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f9404: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1f9404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1f9408: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1f9408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1f940c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1f940cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1f9410: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x1f9410u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1f9414: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1f9414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1f9418: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1f9418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1f941c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1f941cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f9420: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x1f9420u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f9424: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1f9424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f9428: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1f9428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1f942c: 0xe4640008  swc1        $f4, 0x8($v1)
    ctx->pc = 0x1f942cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1f9430: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1f9430u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f9434: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x1f9434u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1f9438: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1f9438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1f943c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1f943cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1f9440: 0xe4640008  swc1        $f4, 0x8($v1)
    ctx->pc = 0x1f9440u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1f9444: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1f9444u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f9448: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x1f9448u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1f944c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x1f944cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f9450: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x1f9450u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1f9454: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1f9454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1f9458: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1f9458u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f945c: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x1f945cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1f9460: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1f9460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1f9464: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x1f9464u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1f9468: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1f9468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1f946c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1f946cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f9470: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x1f9470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1f9474: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x1f9474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f9478: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1f9478u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f947c: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x1f947cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1f9480: 0xe4640008  swc1        $f4, 0x8($v1)
    ctx->pc = 0x1f9480u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1f9484: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x1f9484u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1f9488: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x1f9488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1f948c: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x1f948cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1f9490: 0xe4640008  swc1        $f4, 0x8($v1)
    ctx->pc = 0x1f9490u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1f9494: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1f9494u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1f9498:
    // 0x1f9498: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1f9498u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f949c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1f949cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f94a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f94a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f94a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1f94a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f94a8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1F94A8u;
    SET_GPR_U32(ctx, 31, 0x1F94B0u);
    ctx->pc = 0x1F94ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F94A8u;
    // 0x1f94ac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1F94A8u, 0x1F94B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F94B0u;
label_1f94b0:
    // 0x1f94b0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1f94b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f94b4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1f94b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f94b8: 0x123e0006  beq         $s1, $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F94B8u;
    {
        const bool branch_taken_0x1f94b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 30));
        ctx->pc = 0x1F94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94B8u;
        // 0x1f94bc: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94b8) {
            ctx->pc = 0x1F94D4u;
            goto label_1f94d4;
        }
    }
    ctx->pc = 0x1F94C0u;
    // 0x1f94c0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1f94c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1f94c4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1f94c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f94c8: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1f94c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1f94cc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1f94ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f94d0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1f94d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1f94d4:
    // 0x1f94d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f94d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1f94d8: 0x2e820008  sltiu       $v0, $s4, 0x8
    ctx->pc = 0x1f94d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f94dc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1F94DCu;
    {
        const bool branch_taken_0x1f94dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F94DCu;
        // 0x1f94e0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f94dc) {
            ctx->pc = 0x1F9498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9498;
        }
    }
    ctx->pc = 0x1F94E4u;
    // 0x1f94e4: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1f94e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f94e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f94e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f94ec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f94ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f94f0:
    // 0x1f94f0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1f94f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1f94f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f94f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f94f8: 0x0  nop
    ctx->pc = 0x1f94f8u;
    // NOP
    // 0x1f94fc: 0x0  nop
    ctx->pc = 0x1f94fcu;
    // NOP
    // 0x1f9500: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F9500u;
    {
        const bool branch_taken_0x1f9500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F9504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9500u;
        // 0x1f9504: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9500) {
            ctx->pc = 0x1F94F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f94f0;
        }
    }
    ctx->pc = 0x1F9508u;
    // 0x1f9508: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1f9508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1f950c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f950cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9510: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f9510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f9514: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x1f9514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x1f9518: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x1f9518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
    // 0x1f951c: 0x0  nop
    ctx->pc = 0x1f951cu;
    // NOP
label_1f9520:
    // 0x1f9520: 0x8fa601b0  lw          $a2, 0x1B0($sp)
    ctx->pc = 0x1f9520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1f9524: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1f9524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1f9528: 0x2442c380  addiu       $v0, $v0, -0x3C80
    ctx->pc = 0x1f9528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951808));
    // 0x1f952c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f952cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9530: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x1f9530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1f9534: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x1f9534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1f9538:
    // 0x1f9538: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f9538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f953c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f953cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f9540: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1f9540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1f9544: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1f9544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1f9548: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9548u;
    {
        const bool branch_taken_0x1f9548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9548u;
        // 0x1f954c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9548) {
            ctx->pc = 0x1F9568u;
            goto label_1f9568;
        }
    }
    ctx->pc = 0x1F9550u;
    // 0x1f9550: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f9550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9554: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1f9554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1f9558: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1f9558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f955c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1f955cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1f9560: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1f9560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9564: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1f9564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1f9568:
    // 0x1f9568: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f9568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1f956c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1f956cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f9570: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1F9570u;
    {
        const bool branch_taken_0x1f9570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9570u;
        // 0x1f9574: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9570) {
            ctx->pc = 0x1F9538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9538;
        }
    }
    ctx->pc = 0x1F9578u;
    // 0x1f9578: 0xfba00160  sqc2        $vf0, 0x160($sp)
    ctx->pc = 0x1f9578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1f957c: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x1f957cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1f9580: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1f9580u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1f9584: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1f9584u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f9588: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1f9588u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f958c: 0xfba40160  sqc2        $vf4, 0x160($sp)
    ctx->pc = 0x1f958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f9590: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x1f9590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1f9594: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1f9594u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f9598: 0xfba40150  sqc2        $vf4, 0x150($sp)
    ctx->pc = 0x1f9598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f959c: 0xfba00160  sqc2        $vf0, 0x160($sp)
    ctx->pc = 0x1f959cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1f95a0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1f95a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f95a4: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1F95A4u;
    SET_GPR_U32(ctx, 31, 0x1F95ACu);
    ctx->pc = 0x1F95A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F95A4u;
    // 0x1f95a8: 0x8fa401a4  lw          $a0, 0x1A4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1F95A4u, 0x1F95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F95ACu;
label_1f95ac:
    // 0x1f95ac: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1f95acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f95b0: 0x0  nop
    ctx->pc = 0x1f95b0u;
    // NOP
    // 0x1f95b4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1F95B4u;
    {
        const bool branch_taken_0x1f95b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F95B4u;
        // 0x1f95b8: 0xc7a30150  lwc1        $f3, 0x150($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f95b4) {
            ctx->pc = 0x1F95F0u;
            goto label_1f95f0;
        }
    }
    ctx->pc = 0x1F95BCu;
    // 0x1f95bc: 0x0  nop
    ctx->pc = 0x1f95bcu;
    // NOP
    // 0x1f95c0: 0x0  nop
    ctx->pc = 0x1f95c0u;
    // NOP
    // 0x1f95c4: 0x4600b083  div.s       $f2, $f22, $f0
    ctx->pc = 0x1f95c4u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[0]);
    // 0x1f95c8: 0xc7a40154  lwc1        $f4, 0x154($sp)
    ctx->pc = 0x1f95c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f95cc: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x1f95ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f95d0: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x1f95d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f95d4: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x1f95d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x1f95d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f95d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1f95dc: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1f95dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1f95e0: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1f95e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1f95e4: 0xe7a10168  swc1        $f1, 0x168($sp)
    ctx->pc = 0x1f95e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1f95e8: 0xe7a30160  swc1        $f3, 0x160($sp)
    ctx->pc = 0x1f95e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1f95ec: 0xe7a40164  swc1        $f4, 0x164($sp)
    ctx->pc = 0x1f95ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_1f95f0:
    // 0x1f95f0: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1f95f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1f95f4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1f95f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f95f8: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x1f95f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f95fc: 0xfba00180  sqc2        $vf0, 0x180($sp)
    ctx->pc = 0x1f95fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1f9600: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1f9600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1f9604: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x1f9604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1f9608: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1f9608u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f960c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x1f960cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f9610: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1f9610u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f9614: 0xfba40180  sqc2        $vf4, 0x180($sp)
    ctx->pc = 0x1f9614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f9618: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x1f9618u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1f961c: 0xfba40170  sqc2        $vf4, 0x170($sp)
    ctx->pc = 0x1f961cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f9620: 0xfba00180  sqc2        $vf0, 0x180($sp)
    ctx->pc = 0x1f9620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1f9624: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1F9624u;
    SET_GPR_U32(ctx, 31, 0x1F962Cu);
    ctx->pc = 0x1F9628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9624u;
    // 0x1f9628: 0x8fa401ac  lw          $a0, 0x1AC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1F9624u, 0x1F962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F962Cu;
label_1f962c:
    // 0x1f962c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1f962cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9630: 0x0  nop
    ctx->pc = 0x1f9630u;
    // NOP
    // 0x1f9634: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1F9634u;
    {
        const bool branch_taken_0x1f9634 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9634u;
        // 0x1f9638: 0xc7a30170  lwc1        $f3, 0x170($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9634) {
            ctx->pc = 0x1F9670u;
            goto label_1f9670;
        }
    }
    ctx->pc = 0x1F963Cu;
    // 0x1f963c: 0x0  nop
    ctx->pc = 0x1f963cu;
    // NOP
    // 0x1f9640: 0x0  nop
    ctx->pc = 0x1f9640u;
    // NOP
    // 0x1f9644: 0x4600b083  div.s       $f2, $f22, $f0
    ctx->pc = 0x1f9644u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[0]);
    // 0x1f9648: 0xc7a40174  lwc1        $f4, 0x174($sp)
    ctx->pc = 0x1f9648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f964c: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x1f964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9650: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x1f9650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9654: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x1f9654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x1f9658: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f9658u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1f965c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1f965cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1f9660: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1f9660u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1f9664: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x1f9664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x1f9668: 0xe7a30180  swc1        $f3, 0x180($sp)
    ctx->pc = 0x1f9668u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1f966c: 0xe7a40184  swc1        $f4, 0x184($sp)
    ctx->pc = 0x1f966cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_1f9670:
    // 0x1f9670: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x1f9670u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1f9674: 0xfba40160  sqc2        $vf4, 0x160($sp)
    ctx->pc = 0x1f9674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f9678: 0xc7a20148  lwc1        $f2, 0x148($sp)
    ctx->pc = 0x1f9678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f967c: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x1f967cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9680: 0xc7a40144  lwc1        $f4, 0x144($sp)
    ctx->pc = 0x1f9680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f9684: 0xc7a70168  lwc1        $f7, 0x168($sp)
    ctx->pc = 0x1f9684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1f9688: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x1f9688u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1f968c: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1f968cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9690: 0xc7a30160  lwc1        $f3, 0x160($sp)
    ctx->pc = 0x1f9690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f9694: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x1f9694u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x1f9698: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1f9698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f969c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f969cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f96a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f96a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f96a4: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1f96a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1f96a8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1f96a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1f96ac: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1f96acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1f96b0: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x1f96b0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x1f96b4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1f96b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1f96b8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1f96b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1f96bc: 0xe7a50130  swc1        $f5, 0x130($sp)
    ctx->pc = 0x1f96bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1f96c0: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x1f96c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1f96c4: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x1f96c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x1f96c8: 0xe6b4000c  swc1        $f20, 0xC($s5)
    ctx->pc = 0x1f96c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x1f96cc: 0xfba00180  sqc2        $vf0, 0x180($sp)
    ctx->pc = 0x1f96ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1f96d0: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1F96D0u;
    SET_GPR_U32(ctx, 31, 0x1F96D8u);
    ctx->pc = 0x1F96D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F96D0u;
    // 0x1f96d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1F96D0u, 0x1F96D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96D8u;
label_1f96d8:
    // 0x1f96d8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1f96d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f96dc: 0x0  nop
    ctx->pc = 0x1f96dcu;
    // NOP
    // 0x1f96e0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1F96E0u;
    {
        const bool branch_taken_0x1f96e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F96E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96E0u;
        // 0x1f96e4: 0xc7a30130  lwc1        $f3, 0x130($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96e0) {
            ctx->pc = 0x1F971Cu;
            goto label_1f971c;
        }
    }
    ctx->pc = 0x1F96E8u;
    // 0x1f96e8: 0x0  nop
    ctx->pc = 0x1f96e8u;
    // NOP
    // 0x1f96ec: 0x0  nop
    ctx->pc = 0x1f96ecu;
    // NOP
    // 0x1f96f0: 0x4600a083  div.s       $f2, $f20, $f0
    ctx->pc = 0x1f96f0u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x1f96f4: 0xc7a40134  lwc1        $f4, 0x134($sp)
    ctx->pc = 0x1f96f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f96f8: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x1f96f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f96fc: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1f96fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9700: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x1f9700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x1f9704: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f9704u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1f9708: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1f9708u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1f970c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1f970cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1f9710: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x1f9710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x1f9714: 0xe7a30180  swc1        $f3, 0x180($sp)
    ctx->pc = 0x1f9714u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1f9718: 0xe7a40184  swc1        $f4, 0x184($sp)
    ctx->pc = 0x1f9718u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_1f971c:
    // 0x1f971c: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x1f971cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1f9720: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1f9720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f9724: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x1f9724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1f9728: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1F9728u;
    {
        const bool branch_taken_0x1f9728 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1F972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9728u;
        // 0x1f972c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9728) {
            ctx->pc = 0x1F97DCu;
            goto label_1f97dc;
        }
    }
    ctx->pc = 0x1F9730u;
    // 0x1f9730: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1f9730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1f9734: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x1f9734u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x1f9738: 0x27b40140  addiu       $s4, $sp, 0x140
    ctx->pc = 0x1f9738u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1f973c: 0x24710010  addiu       $s1, $v1, 0x10
    ctx->pc = 0x1f973cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1f9740: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1f9740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9744: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1f9744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f9748:
    // 0x1f9748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f974c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f974cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9750: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1f9750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9754: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1f9754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f9758: 0xc04d96e  jal         func_1365B8
    ctx->pc = 0x1F9758u;
    SET_GPR_U32(ctx, 31, 0x1F9760u);
    ctx->pc = 0x1F975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9758u;
    // 0x1f975c: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365B8u, 0x1F9758u, 0x1F9760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9760u;
label_1f9760:
    // 0x1f9760: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F9760u;
    {
        const bool branch_taken_0x1f9760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9760u;
        // 0x1f9764: 0x8fa60194  lw          $a2, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9760) {
            ctx->pc = 0x1F97C4u;
            goto label_1f97c4;
        }
    }
    ctx->pc = 0x1F9768u;
    // 0x1f9768: 0xfba00140  sqc2        $vf0, 0x140($sp)
    ctx->pc = 0x1f9768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1f976c: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1f976cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f9770: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1f9770u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f9774: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1f9774u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f9778: 0xfba40140  sqc2        $vf4, 0x140($sp)
    ctx->pc = 0x1f9778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f977c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1f977cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f9780: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x1f9780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f9784: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1f9784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9788: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x1f9788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f978c: 0xc7a30134  lwc1        $f3, 0x134($sp)
    ctx->pc = 0x1f978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f9790: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x1f9790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f9794: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f9794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f9798: 0xc7a20138  lwc1        $f2, 0x138($sp)
    ctx->pc = 0x1f9798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f979c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1f979cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1f97a0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1f97a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f97a4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1f97a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1f97a8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1f97a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1f97ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1f97acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1f97b0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1f97b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f97b4: 0x0  nop
    ctx->pc = 0x1f97b4u;
    // NOP
    // 0x1f97b8: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x1F97B8u;
    {
        const bool branch_taken_0x1f97b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F97BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97B8u;
        // 0x1f97bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97b8) {
            ctx->pc = 0x1F9800u;
            goto label_1f9800;
        }
    }
    ctx->pc = 0x1F97C0u;
    // 0x1f97c0: 0x8fa60194  lw          $a2, 0x194($sp)
    ctx->pc = 0x1f97c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
label_1f97c4:
    // 0x1f97c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f97c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1f97c8: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x1f97c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1f97cc: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1f97ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1f97d0: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x1f97d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1f97d4: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1F97D4u;
    {
        const bool branch_taken_0x1f97d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F97D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97D4u;
        // 0x1f97d8: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97d4) {
            ctx->pc = 0x1F9748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9748;
        }
    }
    ctx->pc = 0x1F97DCu;
label_1f97dc:
    // 0x1f97dc: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1f97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1f97e0: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x1f97e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1f97e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f97e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f97e8: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x1f97e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x1f97ec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f97ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1f97f0: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x1f97f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f97f4: 0x1440ff4a  bnez        $v0, . + 4 + (-0xB6 << 2)
    ctx->pc = 0x1F97F4u;
    {
        const bool branch_taken_0x1f97f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97F4u;
        // 0x1f97f8: 0xafa301b0  sw          $v1, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97f4) {
            ctx->pc = 0x1F9520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9520;
        }
    }
    ctx->pc = 0x1F97FCu;
    // 0x1f97fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f97fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9800:
    // 0x1f9800: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x1f9800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1f9804: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x1f9804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1f9808: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x1f9808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1f980c: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x1f980cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1f9810: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x1f9810u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1f9814: 0x7bb50200  lq          $s5, 0x200($sp)
    ctx->pc = 0x1f9814u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1f9818: 0x7bb601f0  lq          $s6, 0x1F0($sp)
    ctx->pc = 0x1f9818u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1f981c: 0x7bb701e0  lq          $s7, 0x1E0($sp)
    ctx->pc = 0x1f981cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1f9820: 0x7bbe01d0  lq          $fp, 0x1D0($sp)
    ctx->pc = 0x1f9820u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1f9824: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x1f9824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1f9828: 0xc7b60270  lwc1        $f22, 0x270($sp)
    ctx->pc = 0x1f9828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f982c: 0xc7b50268  lwc1        $f21, 0x268($sp)
    ctx->pc = 0x1f982cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f9830: 0xc7b40260  lwc1        $f20, 0x260($sp)
    ctx->pc = 0x1f9830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f9834: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9834u;
        // 0x1f9838: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F983Cu;
    // 0x1f983c: 0x0  nop
    ctx->pc = 0x1f983cu;
    // NOP
    // 0x1f9840: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f9840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f9844: 0x0  nop
    ctx->pc = 0x1f9844u;
    // NOP
    ctx->pc = 0x1f9848u;
}
