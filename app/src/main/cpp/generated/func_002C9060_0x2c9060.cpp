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

// Function: func_002C9060
// Address: 0x2c9060 - 0x2c90a0
void func_002C9060_0x2c9060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C9060_0x2c9060");
#endif

    ctx->pc = 0x2c9060u;

    // 0x2c9060: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2c9060u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9064: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2c9064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c9068: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9068u;
    {
        const bool branch_taken_0x2c9068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9068) {
            ctx->pc = 0x2C907Cu;
            goto label_2c907c;
        }
    }
    ctx->pc = 0x2C9070u;
    // 0x2c9070: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x2c9070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2c9074: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9074u;
    {
        const bool branch_taken_0x2c9074 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9074u;
        // 0x2c9078: 0x64102b  sltu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9074) {
            ctx->pc = 0x2C9084u;
            goto label_2c9084;
        }
    }
    ctx->pc = 0x2C907Cu;
label_2c907c:
    // 0x2c907c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C907Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C907Cu;
        // 0x2c9080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C907Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9084u;
label_2c9084:
    // 0x2c9084: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9084u;
    {
        const bool branch_taken_0x2c9084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9084u;
        // 0x2c9088: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9084) {
            ctx->pc = 0x2C9098u;
            goto label_2c9098;
        }
    }
    ctx->pc = 0x2C908Cu;
    // 0x2c908c: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x2c908cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2c9090: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9090u;
        // 0x2c9094: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9098u;
label_2c9098:
    // 0x2c9098: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9098u;
        // 0x2c909c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C90A0u;
}
