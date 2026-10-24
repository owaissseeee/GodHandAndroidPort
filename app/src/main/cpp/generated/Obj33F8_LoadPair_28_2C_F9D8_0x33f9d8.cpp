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

// Function: Obj33F8_LoadPair_28_2C_F9D8
// Address: 0x33f9d8 - 0x33fa00
void Obj33F8_LoadPair_28_2C_F9D8_0x33f9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj33F8_LoadPair_28_2C_F9D8_0x33f9d8");
#endif

    ctx->pc = 0x33f9d8u;

    // 0x33f9d8: 0x94830028  lhu         $v1, 0x28($a0)
    ctx->pc = 0x33f9d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x33f9dc: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x33f9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x33f9e0: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x33f9e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x33f9e4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x33f9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x33f9e8: 0x9483002c  lhu         $v1, 0x2C($a0)
    ctx->pc = 0x33f9e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x33f9ec: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x33f9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x33f9f0: 0x9482002e  lhu         $v0, 0x2E($a0)
    ctx->pc = 0x33f9f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x33f9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x33F9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F9F4u;
        // 0x33f9f8: 0xa4c20002  sh          $v0, 0x2($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F9FCu;
    // 0x33f9fc: 0x0  nop
    ctx->pc = 0x33f9fcu;
    // NOP
    ctx->pc = 0x33fa00u;
}
