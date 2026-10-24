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

// Function: cCoreSave_setState155
// Address: 0x1fadc0 - 0x1fadf0
void cCoreSave_setState155_0x1fadc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setState155_0x1fadc0");
#endif

    ctx->pc = 0x1fadc0u;

    // 0x1fadc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fadc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FADC4u;
    {
        const bool branch_taken_0x1fadc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADC4u;
        // 0x1fadc8: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fadc4) {
            ctx->pc = 0x1FADE8u;
            goto label_1fade8;
        }
    }
    ctx->pc = 0x1FADCCu;
    // 0x1fadcc: 0xa0450155  sb          $a1, 0x155($v0)
    ctx->pc = 0x1fadccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 341), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fadd0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fadd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fadd4: 0x90820155  lbu         $v0, 0x155($a0)
    ctx->pc = 0x1fadd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 341)));
    // 0x1fadd8: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x1fadd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1faddc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FADDCu;
    {
        const bool branch_taken_0x1faddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADDCu;
        // 0x1fade0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faddc) {
            ctx->pc = 0x1FADE8u;
            goto label_1fade8;
        }
    }
    ctx->pc = 0x1FADE4u;
    // 0x1fade4: 0xa0820155  sb          $v0, 0x155($a0)
    ctx->pc = 0x1fade4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 341), (uint8_t)GPR_U32(ctx, 2));
label_1fade8:
    // 0x1fade8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FADE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FADE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FADF0u;
}
