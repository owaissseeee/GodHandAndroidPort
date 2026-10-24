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

// Function: func_002DB7E0
// Address: 0x2db7e0 - 0x2db8b8
void func_002DB7E0_0x2db7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DB7E0_0x2db7e0");
#endif

    switch (ctx->pc) {
        case 0x2db7f8u: goto label_2db7f8;
        case 0x2db808u: goto label_2db808;
        case 0x2db860u: goto label_2db860;
        default: break;
    }

    ctx->pc = 0x2db7e0u;

    // 0x2db7e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2db7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2db7e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2db7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2db7e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2db7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2db7ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2db7f0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DB7F0u;
    SET_GPR_U32(ctx, 31, 0x2DB7F8u);
    ctx->pc = 0x2DB7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB7F0u;
    // 0x2db7f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DB7F0u, 0x2DB7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB7F8u;
label_2db7f8:
    // 0x2db7f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2db7f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db7fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2db7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db800: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x2DB800u;
    SET_GPR_U32(ctx, 31, 0x2DB808u);
    ctx->pc = 0x2DB804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB800u;
    // 0x2db804: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2DB800u, 0x2DB808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB808u;
label_2db808:
    // 0x2db808: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2db808u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2db80c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2db80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2db810: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2db810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db814: 0x0  nop
    ctx->pc = 0x2db814u;
    // NOP
    // 0x2db818: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2db818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db81c: 0x0  nop
    ctx->pc = 0x2db81cu;
    // NOP
    // 0x2db820: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x2DB820u;
    {
        const bool branch_taken_0x2db820 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB820u;
        // 0x2db824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db820) {
            ctx->pc = 0x2DB8A4u;
            goto label_2db8a4;
        }
    }
    ctx->pc = 0x2DB828u;
    // 0x2db828: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2db828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2db82c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2db82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db830: 0x0  nop
    ctx->pc = 0x2db830u;
    // NOP
    // 0x2db834: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2db834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db838: 0x0  nop
    ctx->pc = 0x2db838u;
    // NOP
    // 0x2db83c: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2DB83Cu;
    {
        const bool branch_taken_0x2db83c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB83Cu;
        // 0x2db840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db83c) {
            ctx->pc = 0x2DB8A4u;
            goto label_2db8a4;
        }
    }
    ctx->pc = 0x2DB844u;
    // 0x2db844: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x2db844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2db848: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2db848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db84c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2db84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2db850: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2db850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2db854: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2db854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2db858: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x2DB858u;
    SET_GPR_U32(ctx, 31, 0x2DB860u);
    ctx->pc = 0x2DB85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB858u;
    // 0x2db85c: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2DB858u, 0x2DB860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB860u;
label_2db860:
    // 0x2db860: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2db860u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2db864: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2db864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db868: 0x0  nop
    ctx->pc = 0x2db868u;
    // NOP
    // 0x2db86c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2db86cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db870: 0x0  nop
    ctx->pc = 0x2db870u;
    // NOP
    // 0x2db874: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB874u;
    {
        const bool branch_taken_0x2db874 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB874u;
        // 0x2db878: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db874) {
            ctx->pc = 0x2DB880u;
            goto label_2db880;
        }
    }
    ctx->pc = 0x2DB87Cu;
    // 0x2db87c: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2db87cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_2db880:
    // 0x2db880: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2db880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x2db884: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2db884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2db888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2db888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db88c: 0x0  nop
    ctx->pc = 0x2db88cu;
    // NOP
    // 0x2db890: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2db890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db894: 0x0  nop
    ctx->pc = 0x2db894u;
    // NOP
    // 0x2db898: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB898u;
    {
        const bool branch_taken_0x2db898 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB898u;
        // 0x2db89c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db898) {
            ctx->pc = 0x2DB8A4u;
            goto label_2db8a4;
        }
    }
    ctx->pc = 0x2DB8A0u;
    // 0x2db8a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2db8a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db8a4:
    // 0x2db8a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2db8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db8a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2db8a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db8ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8B0u;
        // 0x2db8b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB8B8u;
}
