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

// Function: func_003AE8C0
// Address: 0x3ae8c0 - 0x3ae8f8
void func_003AE8C0_0x3ae8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AE8C0_0x3ae8c0");
#endif

    ctx->pc = 0x3ae8c0u;

    // 0x3ae8c0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3AE8C0u;
    {
        const bool branch_taken_0x3ae8c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE8C0u;
        // 0x3ae8c4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae8c0) {
            ctx->pc = 0x3AE8ECu;
            goto label_3ae8ec;
        }
    }
    ctx->pc = 0x3AE8C8u;
    // 0x3ae8c8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3ae8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ae8cc: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x3ae8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x3ae8d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3ae8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3ae8d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3ae8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3ae8d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ae8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ae8dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3ae8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3ae8e0: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x3ae8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x3ae8e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3ae8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3ae8e8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3ae8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_3ae8ec:
    // 0x3ae8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE8F4u;
    // 0x3ae8f4: 0x0  nop
    ctx->pc = 0x3ae8f4u;
    // NOP
    ctx->pc = 0x3ae8f8u;
}
