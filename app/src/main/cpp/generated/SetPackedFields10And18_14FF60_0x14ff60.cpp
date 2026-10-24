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

// Function: SetPackedFields10And18_14FF60
// Address: 0x14ff60 - 0x14ff80
void SetPackedFields10And18_14FF60_0x14ff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPackedFields10And18_14FF60_0x14ff60");
#endif

    ctx->pc = 0x14ff60u;

    // 0x14ff60: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14ff64: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x14ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x14ff68: 0xfc800018  sd          $zero, 0x18($a0)
    ctx->pc = 0x14ff68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 0));
    // 0x14ff6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14ff6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14ff70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14ff70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14ff74: 0x3e00008  jr          $ra
    ctx->pc = 0x14FF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF74u;
        // 0x14ff78: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FF7Cu;
    // 0x14ff7c: 0x0  nop
    ctx->pc = 0x14ff7cu;
    // NOP
    ctx->pc = 0x14ff80u;
}
