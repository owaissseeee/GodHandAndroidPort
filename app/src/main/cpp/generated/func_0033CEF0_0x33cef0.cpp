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

// Function: func_0033CEF0
// Address: 0x33cef0 - 0x33cf50
void func_0033CEF0_0x33cef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033CEF0_0x33cef0");
#endif

    ctx->pc = 0x33cef0u;

    // 0x33cef0: 0x84850098  lh          $a1, 0x98($a0)
    ctx->pc = 0x33cef0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x33cef4: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x33CEF4u;
    {
        const bool branch_taken_0x33cef4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CEF4u;
        // 0x33cef8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cef4) {
            ctx->pc = 0x33CF48u;
            goto label_33cf48;
        }
    }
    ctx->pc = 0x33CEFCu;
    // 0x33cefc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33cf00: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33CF00u;
    {
        const bool branch_taken_0x33cf00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x33CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF00u;
        // 0x33cf04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cf00) {
            ctx->pc = 0x33CF28u;
            goto label_33cf28;
        }
    }
    ctx->pc = 0x33CF08u;
    // 0x33cf08: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x33cf08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x33cf0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x33cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33cf10: 0x1065000d  beq         $v1, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x33CF10u;
    {
        const bool branch_taken_0x33cf10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x33CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF10u;
        // 0x33cf14: 0x38640001  xori        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cf10) {
            ctx->pc = 0x33CF48u;
            goto label_33cf48;
        }
    }
    ctx->pc = 0x33CF18u;
    // 0x33cf18: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x33cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33cf1c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x33cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33cf20: 0x3e00008  jr          $ra
    ctx->pc = 0x33CF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF20u;
        // 0x33cf24: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CF28u;
label_33cf28:
    // 0x33cf28: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33CF28u;
    {
        const bool branch_taken_0x33cf28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x33cf28) {
            ctx->pc = 0x33CF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CF28u;
            // 0x33cf2c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CF48u;
            goto label_33cf48;
        }
    }
    ctx->pc = 0x33CF30u;
    // 0x33cf30: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x33cf30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x33cf34: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x33cf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33cf38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x33cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33cf3c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x33cf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x33cf40: 0x3e00008  jr          $ra
    ctx->pc = 0x33CF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF40u;
        // 0x33cf44: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CF48u;
label_33cf48:
    // 0x33cf48: 0x3e00008  jr          $ra
    ctx->pc = 0x33CF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CF50u;
}
