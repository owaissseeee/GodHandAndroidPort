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

// Function: pl00_ckAtkActBtnEnable
// Address: 0x12bf50 - 0x12bfb8
void pl00_ckAtkActBtnEnable_0x12bf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pl00_ckAtkActBtnEnable_0x12bf50");
#endif

    switch (ctx->pc) {
        case 0x12bf80u: goto label_12bf80;
        case 0x12bf94u: goto label_12bf94;
        default: break;
    }

    ctx->pc = 0x12bf50u;

    // 0x12bf50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bf54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12bf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12bf58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bf5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12bf5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf60: 0x8e0206a0  lw          $v0, 0x6A0($s0)
    ctx->pc = 0x12bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x12bf64: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12BF64u;
    {
        const bool branch_taken_0x12bf64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF64u;
        // 0x12bf68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf64) {
            ctx->pc = 0x12BFA4u;
            goto label_12bfa4;
        }
    }
    ctx->pc = 0x12BF6Cu;
    // 0x12bf6c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x12bf6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x12bf70: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12BF70u;
    {
        const bool branch_taken_0x12bf70 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x12BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF70u;
        // 0x12bf74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf70) {
            ctx->pc = 0x12BFA4u;
            goto label_12bfa4;
        }
    }
    ctx->pc = 0x12BF78u;
    // 0x12bf78: 0xc042da6  jal         func_10B698
    ctx->pc = 0x12BF78u;
    SET_GPR_U32(ctx, 31, 0x12BF80u);
    ctx->pc = 0x12BF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BF78u;
    // 0x12bf7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x12BF78u, 0x12BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF80u;
label_12bf80:
    // 0x12bf80: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12BF80u;
    {
        const bool branch_taken_0x12bf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BF80u;
        // 0x12bf84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bf80) {
            ctx->pc = 0x12BFA4u;
            goto label_12bfa4;
        }
    }
    ctx->pc = 0x12BF88u;
    // 0x12bf88: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x12bf88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x12bf8c: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x12BF8Cu;
    SET_GPR_U32(ctx, 31, 0x12BF94u);
    ctx->pc = 0x12BF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BF8Cu;
    // 0x12bf90: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x12BF8Cu, 0x12BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BF94u;
label_12bf94:
    // 0x12bf94: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12BF94u;
    {
        const bool branch_taken_0x12bf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bf94) {
            ctx->pc = 0x12BF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12BF94u;
            // 0x12bf98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12BFA4u;
            goto label_12bfa4;
        }
    }
    ctx->pc = 0x12BF9Cu;
    // 0x12bf9c: 0x920215f5  lbu         $v0, 0x15F5($s0)
    ctx->pc = 0x12bf9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5621)));
    // 0x12bfa0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12bfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_12bfa4:
    // 0x12bfa4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12bfa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bfa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bfa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bfac: 0x3e00008  jr          $ra
    ctx->pc = 0x12BFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BFACu;
        // 0x12bfb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BFB4u;
    // 0x12bfb4: 0x0  nop
    ctx->pc = 0x12bfb4u;
    // NOP
    ctx->pc = 0x12bfb8u;
}
