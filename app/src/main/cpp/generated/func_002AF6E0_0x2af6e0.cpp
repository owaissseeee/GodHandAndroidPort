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

// Function: func_002AF6E0
// Address: 0x2af6e0 - 0x2af708
void func_002AF6E0_0x2af6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AF6E0_0x2af6e0");
#endif

    ctx->pc = 0x2af6e0u;

    // 0x2af6e0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF6E0u;
    {
        const bool branch_taken_0x2af6e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6E0u;
        // 0x2af6e4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af6e0) {
            ctx->pc = 0x2AF6F4u;
            goto label_2af6f4;
        }
    }
    ctx->pc = 0x2AF6E8u;
    // 0x2af6e8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2af6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2af6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6ECu;
        // 0x2af6f0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF6F4u;
label_2af6f4:
    // 0x2af6f4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2af6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2af6f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2af6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2af6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6FCu;
        // 0x2af700: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF704u;
    // 0x2af704: 0x0  nop
    ctx->pc = 0x2af704u;
    // NOP
    ctx->pc = 0x2af708u;
}
