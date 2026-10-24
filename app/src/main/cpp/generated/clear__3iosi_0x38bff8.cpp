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

// Function: clear__3iosi
// Address: 0x38bff8 - 0x38c010
void clear__3iosi_0x38bff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("clear__3iosi_0x38bff8");
#endif

    ctx->pc = 0x38bff8u;

    // 0x38bff8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38bffc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x38BFFCu;
    {
        const bool branch_taken_0x38bffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bffc) {
            ctx->pc = 0x38C000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38BFFCu;
            // 0x38c000: 0x34a50004  ori         $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C004u;
            goto label_38c004;
        }
    }
    ctx->pc = 0x38C004u;
label_38c004:
    // 0x38c004: 0x3e00008  jr          $ra
    ctx->pc = 0x38C004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C004u;
        // 0x38c008: 0xa085001a  sb          $a1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C00Cu;
    // 0x38c00c: 0x0  nop
    ctx->pc = 0x38c00cu;
    // NOP
    ctx->pc = 0x38c010u;
}
