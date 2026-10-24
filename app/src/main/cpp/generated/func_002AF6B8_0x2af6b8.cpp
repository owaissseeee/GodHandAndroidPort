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

// Function: func_002AF6B8
// Address: 0x2af6b8 - 0x2af6e0
void func_002AF6B8_0x2af6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AF6B8_0x2af6b8");
#endif

    ctx->pc = 0x2af6b8u;

    // 0x2af6b8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF6B8u;
    {
        const bool branch_taken_0x2af6b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6B8u;
        // 0x2af6bc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af6b8) {
            ctx->pc = 0x2AF6CCu;
            goto label_2af6cc;
        }
    }
    ctx->pc = 0x2AF6C0u;
    // 0x2af6c0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2af6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2af6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6C4u;
        // 0x2af6c8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF6CCu;
label_2af6cc:
    // 0x2af6cc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2af6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2af6d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2af6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2af6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6D4u;
        // 0x2af6d8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF6DCu;
    // 0x2af6dc: 0x0  nop
    ctx->pc = 0x2af6dcu;
    // NOP
    ctx->pc = 0x2af6e0u;
}
