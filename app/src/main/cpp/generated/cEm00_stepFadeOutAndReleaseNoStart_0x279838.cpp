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

// Function: cEm00_stepFadeOutAndReleaseNoStart
// Address: 0x279838 - 0x2798d0
void cEm00_stepFadeOutAndReleaseNoStart_0x279838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepFadeOutAndReleaseNoStart_0x279838");
#endif

    switch (ctx->pc) {
        case 0x2798b0u: goto label_2798b0;
        default: break;
    }

    ctx->pc = 0x279838u;

    // 0x279838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27983c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x27983cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x279840: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x279840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279844: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x279844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x279848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27984c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27984cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279850: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x279850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x279854: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x279854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x279858: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x279858u;
    {
        const bool branch_taken_0x279858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279858u;
        // 0x27985c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279858) {
            ctx->pc = 0x279870u;
            goto label_279870;
        }
    }
    ctx->pc = 0x279860u;
    // 0x279860: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x279860u;
    {
        const bool branch_taken_0x279860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x279860) {
            ctx->pc = 0x279864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279860u;
            // 0x279864: 0xc600024c  lwc1        $f0, 0x24C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x279878u;
            goto label_279878;
        }
    }
    ctx->pc = 0x279868u;
    // 0x279868: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x279868u;
    {
        const bool branch_taken_0x279868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279868u;
        // 0x27986c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279868) {
            ctx->pc = 0x2798C0u;
            goto label_2798c0;
        }
    }
    ctx->pc = 0x279870u;
label_279870:
    // 0x279870: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x279870u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x279874: 0xc600024c  lwc1        $f0, 0x24C($s0)
    ctx->pc = 0x279874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279878:
    // 0x279878: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x279878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x27987c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27987cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x279880: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x279880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279884: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x279884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x279888: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x279888u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27988c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x27988cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279890: 0x0  nop
    ctx->pc = 0x279890u;
    // NOP
    // 0x279894: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x279894u;
    {
        const bool branch_taken_0x279894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279894u;
        // 0x279898: 0xe600024c  swc1        $f0, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279894) {
            ctx->pc = 0x2798BCu;
            goto label_2798bc;
        }
    }
    ctx->pc = 0x27989Cu;
    // 0x27989c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x27989cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2798a0: 0xe602024c  swc1        $f2, 0x24C($s0)
    ctx->pc = 0x2798a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x2798a4: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x2798a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x2798a8: 0xc0a41dc  jal         func_290770
    ctx->pc = 0x2798A8u;
    SET_GPR_U32(ctx, 31, 0x2798B0u);
    ctx->pc = 0x2798ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2798A8u;
    // 0x2798ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290770u, 0x2798A8u, 0x2798B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2798B0u;
label_2798b0:
    // 0x2798b0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2798b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2798b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2798b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2798b8: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x2798b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_2798bc:
    // 0x2798bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2798bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2798c0:
    // 0x2798c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2798c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2798c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2798C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2798C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2798C4u;
        // 0x2798c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2798C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2798CCu;
    // 0x2798cc: 0x0  nop
    ctx->pc = 0x2798ccu;
    // NOP
    ctx->pc = 0x2798d0u;
}
