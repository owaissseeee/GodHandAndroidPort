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

// Function: UnlinkAlarm
// Address: 0x3b6e40 - 0x3b6e78
void UnlinkAlarm_0x3b6e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnlinkAlarm_0x3b6e40");
#endif

    ctx->pc = 0x3b6e40u;

    // 0x3b6e40: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3b6e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b6e44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6E44u;
    {
        const bool branch_taken_0x3b6e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6E44u;
        // 0x3b6e48: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6e44) {
            ctx->pc = 0x3B6E54u;
            goto label_3b6e54;
        }
    }
    ctx->pc = 0x3B6E4Cu;
    // 0x3b6e4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6E4Cu;
    {
        const bool branch_taken_0x3b6e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6E4Cu;
        // 0x3b6e50: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6e4c) {
            ctx->pc = 0x3B6E5Cu;
            goto label_3b6e5c;
        }
    }
    ctx->pc = 0x3B6E54u;
label_3b6e54:
    // 0x3b6e54: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b6e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b6e58: 0xac43bea8  sw          $v1, -0x4158($v0)
    ctx->pc = 0x3b6e58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FBEA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBEA8u, _value); } while (0);
label_3b6e5c:
    // 0x3b6e5c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6E5Cu;
    {
        const bool branch_taken_0x3b6e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6e5c) {
            ctx->pc = 0x3B6E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B6E5Cu;
            // 0x3b6e60: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B6E70u;
            goto label_3b6e70;
        }
    }
    ctx->pc = 0x3B6E64u;
    // 0x3b6e64: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3b6e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b6e68: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3b6e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3b6e6c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3b6e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_3b6e70:
    // 0x3b6e70: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6E70u;
        // 0x3b6e74: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6E78u;
}
