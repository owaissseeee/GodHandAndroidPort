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

// Function: func_002896B0
// Address: 0x2896b0 - 0x2896d8
void func_002896B0_0x2896b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002896B0_0x2896b0");
#endif

    ctx->pc = 0x2896b0u;

    // 0x2896b0: 0x908202f4  lbu         $v0, 0x2F4($a0)
    ctx->pc = 0x2896b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x2896b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2896B4u;
    {
        const bool branch_taken_0x2896b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2896B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2896B4u;
        // 0x2896b8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2896b4) {
            ctx->pc = 0x2896CCu;
            goto label_2896cc;
        }
    }
    ctx->pc = 0x2896BCu;
    // 0x2896bc: 0x908302f5  lbu         $v1, 0x2F5($a0)
    ctx->pc = 0x2896bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x2896c0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2896C0u;
    {
        const bool branch_taken_0x2896c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2896C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2896C0u;
        // 0x2896c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2896c0) {
            ctx->pc = 0x2896CCu;
            goto label_2896cc;
        }
    }
    ctx->pc = 0x2896C8u;
    // 0x2896c8: 0xa08202f6  sb          $v0, 0x2F6($a0)
    ctx->pc = 0x2896c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 2));
label_2896cc:
    // 0x2896cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2896CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2896CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2896D4u;
    // 0x2896d4: 0x0  nop
    ctx->pc = 0x2896d4u;
    // NOP
    ctx->pc = 0x2896d8u;
}
