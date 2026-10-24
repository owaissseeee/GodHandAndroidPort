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

// Function: cSnd_BgmEventFade
// Address: 0x2d1768 - 0x2d1800
void cSnd_BgmEventFade_0x2d1768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEventFade_0x2d1768");
#endif

    switch (ctx->pc) {
        case 0x2d1798u: goto label_2d1798;
        case 0x2d17c4u: goto label_2d17c4;
        case 0x2d17d4u: goto label_2d17d4;
        case 0x2d17e4u: goto label_2d17e4;
        default: break;
    }

    ctx->pc = 0x2d1768u;

    // 0x2d1768: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d1768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d176c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d176cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1770: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x2d1770u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d1774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d1774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1778: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2d1778u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d177c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2d177cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2d1780: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2d1780u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d1784: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2d1784u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2d1788: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d1788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d178c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d178cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1790: 0xc0b48ac  jal         func_2D22B0
    ctx->pc = 0x2D1790u;
    SET_GPR_U32(ctx, 31, 0x2D1798u);
    ctx->pc = 0x2D1794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1790u;
    // 0x2d1794: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D22B0u, 0x2D1790u, 0x2D1798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1798u;
label_2d1798:
    // 0x2d1798: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d179c: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D179Cu;
    {
        const bool branch_taken_0x2d179c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d179c) {
            ctx->pc = 0x2D17A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D179Cu;
            // 0x2d17a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D17E8u;
            goto label_2d17e8;
        }
    }
    ctx->pc = 0x2D17A4u;
    // 0x2d17a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d17a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d17a8: 0x0  nop
    ctx->pc = 0x2d17a8u;
    // NOP
    // 0x2d17ac: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2d17acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d17b0: 0x0  nop
    ctx->pc = 0x2d17b0u;
    // NOP
    // 0x2d17b4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2D17B4u;
    {
        const bool branch_taken_0x2d17b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17B4u;
        // 0x2d17b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d17b4) {
            ctx->pc = 0x2D17D4u;
            goto label_2d17d4;
        }
    }
    ctx->pc = 0x2D17BCu;
    // 0x2d17bc: 0xc0dce4e  jal         func_373938
    ctx->pc = 0x2D17BCu;
    SET_GPR_U32(ctx, 31, 0x2D17C4u);
    ctx->pc = 0x2D17C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D17BCu;
    // 0x2d17c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373938u, 0x2D17BCu, 0x2D17C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17C4u;
label_2d17c4:
    // 0x2d17c4: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x2d17c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2d17c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d17c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d17cc: 0xc0dcd58  jal         func_373560
    ctx->pc = 0x2D17CCu;
    SET_GPR_U32(ctx, 31, 0x2D17D4u);
    ctx->pc = 0x2D17D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D17CCu;
    // 0x2d17d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373560u, 0x2D17CCu, 0x2D17D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17D4u;
label_2d17d4:
    // 0x2d17d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d17d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d17d8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2d17d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2d17dc: 0xc0b3538  jal         func_2CD4E0
    ctx->pc = 0x2D17DCu;
    SET_GPR_U32(ctx, 31, 0x2D17E4u);
    ctx->pc = 0x2D17E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D17DCu;
    // 0x2d17e0: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4E0u, 0x2D17DCu, 0x2D17E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D17E4u;
label_2d17e4:
    // 0x2d17e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d17e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d17e8:
    // 0x2d17e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d17e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d17ec: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x2d17ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d17f0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2d17f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d17f4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2d17f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d17f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D17F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D17FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D17F8u;
        // 0x2d17fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D17F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1800u;
}
