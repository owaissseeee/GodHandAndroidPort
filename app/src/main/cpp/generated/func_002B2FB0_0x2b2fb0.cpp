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

// Function: func_002B2FB0
// Address: 0x2b2fb0 - 0x2b2fd0
void func_002B2FB0_0x2b2fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2FB0_0x2b2fb0");
#endif

    ctx->pc = 0x2b2fb0u;

    // 0x2b2fb0: 0x8c85008c  lw          $a1, 0x8C($a0)
    ctx->pc = 0x2b2fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2b2fb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2fb8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2b2fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2b2fbc: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x2b2fbcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2b2fc0: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x2b2fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x2b2fc4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2b2fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2b2fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FC8u;
        // 0x2b2fcc: 0xa0860031  sb          $a2, 0x31($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2FD0u;
}
