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

// Function: sceMpegClearRefBuff
// Address: 0x39ac58 - 0x39acd8
void sceMpegClearRefBuff_0x39ac58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMpegClearRefBuff_0x39ac58");
#endif

    ctx->pc = 0x39ac58u;

    // 0x39ac58: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x39ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x39ac5c: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x39ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
    // 0x39ac60: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39AC60u;
    {
        const bool branch_taken_0x39ac60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ac60) {
            ctx->pc = 0x39AC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AC60u;
            // 0x39ac64: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AC68u;
            goto label_39ac68;
        }
    }
    ctx->pc = 0x39AC68u;
label_39ac68:
    // 0x39ac68: 0x8c6201d8  lw          $v0, 0x1D8($v1)
    ctx->pc = 0x39ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 472)));
    // 0x39ac6c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39AC6Cu;
    {
        const bool branch_taken_0x39ac6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ac6c) {
            ctx->pc = 0x39AC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AC6Cu;
            // 0x39ac70: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AC74u;
            goto label_39ac74;
        }
    }
    ctx->pc = 0x39AC74u;
label_39ac74:
    // 0x39ac74: 0x8c6201e8  lw          $v0, 0x1E8($v1)
    ctx->pc = 0x39ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x39ac78: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39AC78u;
    {
        const bool branch_taken_0x39ac78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ac78) {
            ctx->pc = 0x39AC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AC78u;
            // 0x39ac7c: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AC80u;
            goto label_39ac80;
        }
    }
    ctx->pc = 0x39AC80u;
label_39ac80:
    // 0x39ac80: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x39ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
    // 0x39ac84: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39AC84u;
    {
        const bool branch_taken_0x39ac84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ac84) {
            ctx->pc = 0x39AC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AC84u;
            // 0x39ac88: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AC8Cu;
            goto label_39ac8c;
        }
    }
    ctx->pc = 0x39AC8Cu;
label_39ac8c:
    // 0x39ac8c: 0x8c6201dc  lw          $v0, 0x1DC($v1)
    ctx->pc = 0x39ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 476)));
    // 0x39ac90: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39AC90u;
    {
        const bool branch_taken_0x39ac90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ac90) {
            ctx->pc = 0x39AC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AC90u;
            // 0x39ac94: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39AC98u;
            goto label_39ac98;
        }
    }
    ctx->pc = 0x39AC98u;
label_39ac98:
    // 0x39ac98: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x39ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
    // 0x39ac9c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39AC9Cu;
    {
        const bool branch_taken_0x39ac9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39ac9c) {
            ctx->pc = 0x39ACA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39AC9Cu;
            // 0x39aca0: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39ACA4u;
            goto label_39aca4;
        }
    }
    ctx->pc = 0x39ACA4u;
label_39aca4:
    // 0x39aca4: 0x3e00008  jr          $ra
    ctx->pc = 0x39ACA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ACA4u;
        // 0x39aca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39ACA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39ACACu;
    // 0x39acac: 0x0  nop
    ctx->pc = 0x39acacu;
    // NOP
    // 0x39acb0: 0xac60008c  sw          $zero, 0x8C($v1)
    ctx->pc = 0x39acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
    // 0x39acb4: 0x0  nop
    ctx->pc = 0x39acb4u;
    // NOP
    // 0x39acb8: 0x8c6200e0  lw          $v0, 0xE0($v1)
    ctx->pc = 0x39acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x39acbc: 0x0  nop
    ctx->pc = 0x39acbcu;
    // NOP
    // 0x39acc0: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x39acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x39acc4: 0x0  nop
    ctx->pc = 0x39acc4u;
    // NOP
    // 0x39acc8: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x39acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x39accc: 0x0  nop
    ctx->pc = 0x39acccu;
    // NOP
    // 0x39acd0: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x39acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x39acd4: 0x0  nop
    ctx->pc = 0x39acd4u;
    // NOP
    ctx->pc = 0x39acd8u;
}
