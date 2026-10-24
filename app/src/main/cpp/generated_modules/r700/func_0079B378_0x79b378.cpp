#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r700_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r700
{
// Function: func_0079B378
// Address: 0x79b378 - 0x79b460
void func_0079B378_0x79b378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B378_0x79b378");
#endif

    switch (ctx->pc) {
        case 0x79b3b4u: goto label_79b3b4;
        case 0x79b3e0u: goto label_79b3e0;
        case 0x79b408u: goto label_79b408;
        case 0x79b428u: goto label_79b428;
        case 0x79b448u: goto label_79b448;
        default: break;
    }

    ctx->pc = 0x79b378u;

    // 0x79b378: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79b378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79b37c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79b380: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79b380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79b384: 0x2442c300  addiu       $v0, $v0, -0x3D00
    ctx->pc = 0x79b384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951680));
    // 0x79b388: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x79b388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b38c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79b38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79b390: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x79b390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x79b394: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79b394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79b398: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79b398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79b39c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79b3a0: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79b3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x79b3a4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x79b3a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b3a8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79b3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b3ac: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B3ACu;
    SET_GPR_U32(ctx, 31, 0x79B3B4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B3ACu, 0x79B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3B4u;
label_79b3b4:
    // 0x79b3b4: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x79b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79b3b8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x79b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b3bc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B3BCu;
    {
        const bool branch_taken_0x79b3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3BCu;
        // 0x79b3c0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3bc) {
            ctx->pc = 0x79B3D8u;
            goto label_79b3d8;
        }
    }
    ctx->pc = 0x79B3C4u;
    // 0x79b3c4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x79b3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x79b3c8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x79b3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b3cc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x79b3ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x79b3d0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x79b3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b3d4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x79b3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_79b3d8:
    // 0x79b3d8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B3D8u;
    SET_GPR_U32(ctx, 31, 0x79B3E0u);
    ctx->pc = 0x79B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3D8u;
    // 0x79b3dc: 0x3c107fff  lui         $s0, 0x7FFF (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32767 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B3D8u, 0x79B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3E0u;
label_79b3e0:
    // 0x79b3e0: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x79b3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x79b3e4: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x79b3e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x79b3e8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79b3ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79b3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b3f0: 0x8c43d6e8  lw          $v1, -0x2918($v0)
    ctx->pc = 0x79b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x79b3f4: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x79b3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    // 0x79b3f8: 0x8c621f20  lw          $v0, 0x1F20($v1)
    ctx->pc = 0x79b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7968)));
    // 0x79b3fc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x79b3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x79b400: 0xc0a56ce  jal         func_295B38
    ctx->pc = 0x79B400u;
    SET_GPR_U32(ctx, 31, 0x79B408u);
    ctx->pc = 0x79B404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B400u;
    // 0x79b404: 0xac621f20  sw          $v0, 0x1F20($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 7968), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x79B400u, 0x79B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B408u;
label_79b408:
    // 0x79b408: 0x8e237a8c  lw          $v1, 0x7A8C($s1)
    ctx->pc = 0x79b408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
    // 0x79b40c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x79b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x79b410: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79b410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79b414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79b414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b418: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x79b418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x79b41c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79b41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79b420: 0xc1e6b64  jal         func_79AD90
    ctx->pc = 0x79B420u;
    SET_GPR_U32(ctx, 31, 0x79B428u);
    ctx->pc = 0x79B424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B420u;
    // 0x79b424: 0xae237a8c  sw          $v1, 0x7A8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 31372), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD90u, 0x79B420u, 0x79B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B428u;
label_79b428:
    // 0x79b428: 0x8e227a8c  lw          $v0, 0x7A8C($s1)
    ctx->pc = 0x79b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
    // 0x79b42c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x79b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x79b430: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79b430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79b434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b438: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79b438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79b43c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79b440: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x79B440u;
    SET_GPR_U32(ctx, 31, 0x79B448u);
    ctx->pc = 0x79B444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B440u;
    // 0x79b444: 0xae227a8c  sw          $v0, 0x7A8C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 31372), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x79B440u, 0x79B448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B448u;
label_79b448:
    // 0x79b448: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79b448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b44c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79b44cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b450: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79b450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b454: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b458: 0x3e00008  jr          $ra
    ctx->pc = 0x79B458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B458u;
        // 0x79b45c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B460u;
}
} // namespace gh_r700
