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

// Function: IsByte2F5Eq7_WhenByte2F4Zero_10B670
// Address: 0x10b670 - 0x10b698
void IsByte2F5Eq7_WhenByte2F4Zero_10B670_0x10b670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsByte2F5Eq7_WhenByte2F4Zero_10B670_0x10b670");
#endif

    ctx->pc = 0x10b670u;

    // 0x10b670: 0x908202f4  lbu         $v0, 0x2F4($a0)
    ctx->pc = 0x10b670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x10b674: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B674u;
    {
        const bool branch_taken_0x10b674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b674) {
            ctx->pc = 0x10B68Cu;
            goto label_10b68c;
        }
    }
    ctx->pc = 0x10B67Cu;
    // 0x10b67c: 0x908202f5  lbu         $v0, 0x2F5($a0)
    ctx->pc = 0x10b67cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x10b680: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x10b680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x10b684: 0x3e00008  jr          $ra
    ctx->pc = 0x10B684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B684u;
        // 0x10b688: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B68Cu;
label_10b68c:
    // 0x10b68c: 0x3e00008  jr          $ra
    ctx->pc = 0x10B68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B68Cu;
        // 0x10b690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B694u;
    // 0x10b694: 0x0  nop
    ctx->pc = 0x10b694u;
    // NOP
    ctx->pc = 0x10b698u;
}
