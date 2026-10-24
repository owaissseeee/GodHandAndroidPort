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

// Function: cCoreSave_setLevelPoint
// Address: 0x1fa638 - 0x1fa658
void cCoreSave_setLevelPoint_0x1fa638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setLevelPoint_0x1fa638");
#endif

    ctx->pc = 0x1fa638u;

    // 0x1fa638: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1fa638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1fa63c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fa63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa640: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA640u;
    {
        const bool branch_taken_0x1fa640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA640u;
        // 0x1fa644: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa640) {
            ctx->pc = 0x1FA64Cu;
            goto label_1fa64c;
        }
    }
    ctx->pc = 0x1FA648u;
    // 0x1fa648: 0xa485001c  sh          $a1, 0x1C($a0)
    ctx->pc = 0x1fa648u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 5));
label_1fa64c:
    // 0x1fa64c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA654u;
    // 0x1fa654: 0x0  nop
    ctx->pc = 0x1fa654u;
    // NOP
    ctx->pc = 0x1fa658u;
}
