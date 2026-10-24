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

// Function: cCoreSave_setKeyCardNum
// Address: 0x1fa908 - 0x1fa950
void cCoreSave_setKeyCardNum_0x1fa908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setKeyCardNum_0x1fa908");
#endif

    ctx->pc = 0x1fa908u;

    // 0x1fa908: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fa908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa90c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FA90Cu;
    {
        const bool branch_taken_0x1fa90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa90c) {
            ctx->pc = 0x1FA944u;
            goto label_1fa944;
        }
    }
    ctx->pc = 0x1FA914u;
    // 0x1fa914: 0xac450068  sw          $a1, 0x68($v0)
    ctx->pc = 0x1fa914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 5));
    // 0x1fa918: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fa918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa91c: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x1fa91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1fa920: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1fa920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fa924: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA924u;
    {
        const bool branch_taken_0x1fa924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa924) {
            ctx->pc = 0x1FA928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA924u;
            // 0x1fa928: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA938u;
            goto label_1fa938;
        }
    }
    ctx->pc = 0x1FA92Cu;
    // 0x1fa92c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1fa92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1fa930: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x1fa930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
    // 0x1fa934: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fa934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fa938:
    // 0x1fa938: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x1fa938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1fa93c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FA93Cu;
    {
        const bool branch_taken_0x1fa93c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1fa93c) {
            ctx->pc = 0x1FA940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA93Cu;
            // 0x1fa940: 0xac800068  sw          $zero, 0x68($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA944u;
            goto label_1fa944;
        }
    }
    ctx->pc = 0x1FA944u;
label_1fa944:
    // 0x1fa944: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA94Cu;
    // 0x1fa94c: 0x0  nop
    ctx->pc = 0x1fa94cu;
    // NOP
    ctx->pc = 0x1fa950u;
}
