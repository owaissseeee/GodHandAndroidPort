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

// Function: func_0038BB48
// Address: 0x38bb48 - 0x38bb70
void func_0038BB48_0x38bb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038BB48_0x38bb48");
#endif

    ctx->pc = 0x38bb48u;

    // 0x38bb48: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38BB48u;
    {
        const bool branch_taken_0x38bb48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB48u;
        // 0x38bb4c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bb48) {
            ctx->pc = 0x38BB5Cu;
            goto label_38bb5c;
        }
    }
    ctx->pc = 0x38BB50u;
    // 0x38bb50: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x38bb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x38bb54: 0x3e00008  jr          $ra
    ctx->pc = 0x38BB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB54u;
        // 0x38bb58: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BB5Cu;
label_38bb5c:
    // 0x38bb5c: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x38bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x38bb60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38bb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x38bb64: 0x3e00008  jr          $ra
    ctx->pc = 0x38BB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BB64u;
        // 0x38bb68: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BB6Cu;
    // 0x38bb6c: 0x0  nop
    ctx->pc = 0x38bb6cu;
    // NOP
    ctx->pc = 0x38bb70u;
}
