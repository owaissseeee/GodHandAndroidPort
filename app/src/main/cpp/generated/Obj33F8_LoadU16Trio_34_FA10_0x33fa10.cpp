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

// Function: Obj33F8_LoadU16Trio_34_FA10
// Address: 0x33fa10 - 0x33fa30
void Obj33F8_LoadU16Trio_34_FA10_0x33fa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj33F8_LoadU16Trio_34_FA10_0x33fa10");
#endif

    ctx->pc = 0x33fa10u;

    // 0x33fa10: 0x94820034  lhu         $v0, 0x34($a0)
    ctx->pc = 0x33fa10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x33fa14: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x33fa14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x33fa18: 0x94830036  lhu         $v1, 0x36($a0)
    ctx->pc = 0x33fa18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x33fa1c: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x33fa1cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x33fa20: 0x94820038  lhu         $v0, 0x38($a0)
    ctx->pc = 0x33fa20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x33fa24: 0x3e00008  jr          $ra
    ctx->pc = 0x33FA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA24u;
        // 0x33fa28: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FA2Cu;
    // 0x33fa2c: 0x0  nop
    ctx->pc = 0x33fa2cu;
    // NOP
    ctx->pc = 0x33fa30u;
}
