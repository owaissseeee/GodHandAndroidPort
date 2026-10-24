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

// Function: cCoreSave_addVitalItem
// Address: 0x1fad88 - 0x1fadc0
void cCoreSave_addVitalItem_0x1fad88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addVitalItem_0x1fad88");
#endif

    ctx->pc = 0x1fad88u;

    // 0x1fad88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fad88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fad8c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FAD8Cu;
    {
        const bool branch_taken_0x1fad8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD8Cu;
        // 0x1fad90: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad8c) {
            ctx->pc = 0x1FADB8u;
            goto label_1fadb8;
        }
    }
    ctx->pc = 0x1FAD94u;
    // 0x1fad94: 0x90620154  lbu         $v0, 0x154($v1)
    ctx->pc = 0x1fad94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1fad98: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1fad98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fad9c: 0xa0620154  sb          $v0, 0x154($v1)
    ctx->pc = 0x1fad9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 340), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fada0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fada0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fada4: 0x90820154  lbu         $v0, 0x154($a0)
    ctx->pc = 0x1fada4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1fada8: 0x2c42000e  sltiu       $v0, $v0, 0xE
    ctx->pc = 0x1fada8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x1fadac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FADACu;
    {
        const bool branch_taken_0x1fadac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADACu;
        // 0x1fadb0: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fadac) {
            ctx->pc = 0x1FADB8u;
            goto label_1fadb8;
        }
    }
    ctx->pc = 0x1FADB4u;
    // 0x1fadb4: 0xa0820154  sb          $v0, 0x154($a0)
    ctx->pc = 0x1fadb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 340), (uint8_t)GPR_U32(ctx, 2));
label_1fadb8:
    // 0x1fadb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FADB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FADB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FADC0u;
}
