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

// Function: cCoreSave_addTensionItem
// Address: 0x1fadf0 - 0x1fae28
void cCoreSave_addTensionItem_0x1fadf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addTensionItem_0x1fadf0");
#endif

    ctx->pc = 0x1fadf0u;

    // 0x1fadf0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fadf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fadf4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FADF4u;
    {
        const bool branch_taken_0x1fadf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADF4u;
        // 0x1fadf8: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fadf4) {
            ctx->pc = 0x1FAE20u;
            goto label_1fae20;
        }
    }
    ctx->pc = 0x1FADFCu;
    // 0x1fadfc: 0x90620155  lbu         $v0, 0x155($v1)
    ctx->pc = 0x1fadfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 341)));
    // 0x1fae00: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1fae00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1fae04: 0xa0620155  sb          $v0, 0x155($v1)
    ctx->pc = 0x1fae04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 341), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fae08: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fae08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fae0c: 0x90820155  lbu         $v0, 0x155($a0)
    ctx->pc = 0x1fae0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 341)));
    // 0x1fae10: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x1fae10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1fae14: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAE14u;
    {
        const bool branch_taken_0x1fae14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE14u;
        // 0x1fae18: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae14) {
            ctx->pc = 0x1FAE20u;
            goto label_1fae20;
        }
    }
    ctx->pc = 0x1FAE1Cu;
    // 0x1fae1c: 0xa0820155  sb          $v0, 0x155($a0)
    ctx->pc = 0x1fae1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 341), (uint8_t)GPR_U32(ctx, 2));
label_1fae20:
    // 0x1fae20: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAE28u;
}
