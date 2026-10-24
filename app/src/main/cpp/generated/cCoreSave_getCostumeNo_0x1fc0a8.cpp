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

// Function: cCoreSave_getCostumeNo
// Address: 0x1fc0a8 - 0x1fc0c0
void cCoreSave_getCostumeNo_0x1fc0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getCostumeNo_0x1fc0a8");
#endif

    ctx->pc = 0x1fc0a8u;

    // 0x1fc0a8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc0ac: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC0ACu;
    {
        const bool branch_taken_0x1fc0ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC0ACu;
        // 0x1fc0b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0ac) {
            ctx->pc = 0x1FC0B8u;
            goto label_1fc0b8;
        }
    }
    ctx->pc = 0x1FC0B4u;
    // 0x1fc0b4: 0x908200ae  lbu         $v0, 0xAE($a0)
    ctx->pc = 0x1fc0b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 174)));
label_1fc0b8:
    // 0x1fc0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC0C0u;
}
