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

// Function: Obj0000_Set_Byte_2F5_If_Field_618_GE_29
// Address: 0x1acb50 - 0x1acb78
void Obj0000_Set_Byte_2F5_If_Field_618_GE_29_0x1acb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Byte_2F5_If_Field_618_GE_29_0x1acb50");
#endif

    ctx->pc = 0x1acb50u;

    // 0x1acb50: 0x8c820618  lw          $v0, 0x618($a0)
    ctx->pc = 0x1acb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1560)));
    // 0x1acb54: 0x28420029  slti        $v0, $v0, 0x29
    ctx->pc = 0x1acb54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x1acb58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACB58u;
    {
        const bool branch_taken_0x1acb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB58u;
        // 0x1acb5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb58) {
            ctx->pc = 0x1ACB6Cu;
            goto label_1acb6c;
        }
    }
    ctx->pc = 0x1ACB60u;
    // 0x1acb60: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x1acb60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1acb64: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x1acb64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1acb68: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1acb68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_1acb6c:
    // 0x1acb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACB74u;
    // 0x1acb74: 0x0  nop
    ctx->pc = 0x1acb74u;
    // NOP
    ctx->pc = 0x1acb78u;
}
