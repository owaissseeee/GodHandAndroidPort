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

// Function: cSndSeRecent_Clear
// Address: 0x2cc4a0 - 0x2cc4b8
void cSndSeRecent_Clear_0x2cc4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndSeRecent_Clear_0x2cc4a0");
#endif

    ctx->pc = 0x2cc4a0u;

    // 0x2cc4a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cc4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc4a4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2cc4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2cc4a8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2cc4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4ACu;
        // 0x2cc4b0: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC4B4u;
    // 0x2cc4b4: 0x0  nop
    ctx->pc = 0x2cc4b4u;
    // NOP
    ctx->pc = 0x2cc4b8u;
}
