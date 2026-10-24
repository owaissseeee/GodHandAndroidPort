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

// Function: searchStmId
// Address: 0x35da58 - 0x35daa0
void searchStmId_0x35da58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("searchStmId_0x35da58");
#endif

    switch (ctx->pc) {
        case 0x35da70u: goto label_35da70;
        default: break;
    }

    ctx->pc = 0x35da58u;

    // 0x35da58: 0x24830180  addiu       $v1, $a0, 0x180
    ctx->pc = 0x35da58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x35da5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35da5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35da60: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x35da60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x35da64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35DA64u;
    {
        const bool branch_taken_0x35da64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA64u;
        // 0x35da68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35da64) {
            ctx->pc = 0x35DA88u;
            goto label_35da88;
        }
    }
    ctx->pc = 0x35DA6Cu;
    // 0x35da6c: 0x0  nop
    ctx->pc = 0x35da6cu;
    // NOP
label_35da70:
    // 0x35da70: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x35da70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x35da74: 0x28c3001a  slti        $v1, $a2, 0x1A
    ctx->pc = 0x35da74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x35da78: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35DA78u;
    {
        const bool branch_taken_0x35da78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA78u;
        // 0x35da7c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35da78) {
            ctx->pc = 0x35DA98u;
            goto label_35da98;
        }
    }
    ctx->pc = 0x35DA80u;
    // 0x35da80: 0x24430180  addiu       $v1, $v0, 0x180
    ctx->pc = 0x35da80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x35da84: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x35da84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_35da88:
    // 0x35da88: 0x0  nop
    ctx->pc = 0x35da88u;
    // NOP
    // 0x35da8c: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x35DA8Cu;
    {
        const bool branch_taken_0x35da8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x35da8c) {
            ctx->pc = 0x35DA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35DA8Cu;
            // 0x35da90: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35DA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35da70;
        }
    }
    ctx->pc = 0x35DA94u;
    // 0x35da94: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x35da94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_35da98:
    // 0x35da98: 0x3e00008  jr          $ra
    ctx->pc = 0x35DA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA98u;
        // 0x35da9c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DAA0u;
}
