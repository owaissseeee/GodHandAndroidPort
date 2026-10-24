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

// Function: cCoreSave_addKeyNum
// Address: 0x1faa18 - 0x1faa68
void cCoreSave_addKeyNum_0x1faa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addKeyNum_0x1faa18");
#endif

    ctx->pc = 0x1faa18u;

    // 0x1faa18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1faa18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1faa1c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1FAA1Cu;
    {
        const bool branch_taken_0x1faa1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faa1c) {
            ctx->pc = 0x1FAA5Cu;
            goto label_1faa5c;
        }
    }
    ctx->pc = 0x1FAA24u;
    // 0x1faa24: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1faa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1faa28: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1faa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1faa2c: 0xac62006c  sw          $v0, 0x6C($v1)
    ctx->pc = 0x1faa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
    // 0x1faa30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1faa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1faa34: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1faa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1faa38: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1faa38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1faa3c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAA3Cu;
    {
        const bool branch_taken_0x1faa3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1faa3c) {
            ctx->pc = 0x1FAA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAA3Cu;
            // 0x1faa40: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAA50u;
            goto label_1faa50;
        }
    }
    ctx->pc = 0x1FAA44u;
    // 0x1faa44: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1faa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1faa48: 0xac62006c  sw          $v0, 0x6C($v1)
    ctx->pc = 0x1faa48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
    // 0x1faa4c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1faa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1faa50:
    // 0x1faa50: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x1faa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x1faa54: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FAA54u;
    {
        const bool branch_taken_0x1faa54 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1faa54) {
            ctx->pc = 0x1FAA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAA54u;
            // 0x1faa58: 0xac80006c  sw          $zero, 0x6C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAA5Cu;
            goto label_1faa5c;
        }
    }
    ctx->pc = 0x1FAA5Cu;
label_1faa5c:
    // 0x1faa5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAA64u;
    // 0x1faa64: 0x0  nop
    ctx->pc = 0x1faa64u;
    // NOP
    ctx->pc = 0x1faa68u;
}
