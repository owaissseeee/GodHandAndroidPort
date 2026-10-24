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

// Function: cMessCommon_getCodeSize
// Address: 0x2af1f8 - 0x2af218
void cMessCommon_getCodeSize_0x2af1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessCommon_getCodeSize_0x2af1f8");
#endif

    ctx->pc = 0x2af1f8u;

    // 0x2af1f8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2af1f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2af1fc: 0x413c2  srl         $v0, $a0, 15
    ctx->pc = 0x2af1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 15));
    // 0x2af200: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF200u;
    {
        const bool branch_taken_0x2af200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF200u;
        // 0x2af204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af200) {
            ctx->pc = 0x2AF210u;
            goto label_2af210;
        }
    }
    ctx->pc = 0x2AF208u;
    // 0x2af208: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF208u;
        // 0x2af20c: 0x3082000f  andi        $v0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF210u;
label_2af210:
    // 0x2af210: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF218u;
}
