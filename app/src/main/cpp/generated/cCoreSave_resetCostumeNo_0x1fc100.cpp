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

// Function: cCoreSave_resetCostumeNo
// Address: 0x1fc100 - 0x1fc120
void cCoreSave_resetCostumeNo_0x1fc100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_resetCostumeNo_0x1fc100");
#endif

    ctx->pc = 0x1fc100u;

    // 0x1fc100: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fc100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc104: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC104u;
    {
        const bool branch_taken_0x1fc104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC104u;
        // 0x1fc108: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc104) {
            ctx->pc = 0x1FC118u;
            goto label_1fc118;
        }
    }
    ctx->pc = 0x1FC10Cu;
    // 0x1fc10c: 0xa06500ae  sb          $a1, 0xAE($v1)
    ctx->pc = 0x1fc10cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 174), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fc110: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc114: 0xa04500af  sb          $a1, 0xAF($v0)
    ctx->pc = 0x1fc114u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 175), (uint8_t)GPR_U32(ctx, 5));
label_1fc118:
    // 0x1fc118: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC120u;
}
