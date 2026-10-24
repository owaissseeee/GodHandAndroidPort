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

// Function: cWorldLight_Gaibu_set_off
// Address: 0x2d8de0 - 0x2d8e18
void cWorldLight_Gaibu_set_off_0x2d8de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cWorldLight_Gaibu_set_off_0x2d8de0");
#endif

    ctx->pc = 0x2d8de0u;

    // 0x2d8de0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d8de4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2d8de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2d8de8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d8de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d8dec: 0xa0836170  sb          $v1, 0x6170($a0)
    ctx->pc = 0x2d8decu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24944), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d8df0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DF0u;
        // 0x2d8df4: 0xac806284  sw          $zero, 0x6284($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 25220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8DF8u;
    // 0x2d8df8: 0xac626284  sw          $v0, 0x6284($v1)
    ctx->pc = 0x2d8df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 25220), GPR_U32(ctx, 2));
    // 0x2d8dfc: 0x0  nop
    ctx->pc = 0x2d8dfcu;
    // NOP
    // 0x2d8e00: 0xac626284  sw          $v0, 0x6284($v1)
    ctx->pc = 0x2d8e00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 25220), GPR_U32(ctx, 2));
    // 0x2d8e04: 0x0  nop
    ctx->pc = 0x2d8e04u;
    // NOP
    // 0x2d8e08: 0xac826284  sw          $v0, 0x6284($a0)
    ctx->pc = 0x2d8e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25220), GPR_U32(ctx, 2));
    // 0x2d8e0c: 0x0  nop
    ctx->pc = 0x2d8e0cu;
    // NOP
    // 0x2d8e10: 0xac826284  sw          $v0, 0x6284($a0)
    ctx->pc = 0x2d8e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25220), GPR_U32(ctx, 2));
    // 0x2d8e14: 0x0  nop
    ctx->pc = 0x2d8e14u;
    // NOP
    ctx->pc = 0x2d8e18u;
}
