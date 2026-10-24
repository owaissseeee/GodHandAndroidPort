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

// Function: func_00376CF8
// Address: 0x376cf8 - 0x376d28
void func_00376CF8_0x376cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00376CF8_0x376cf8");
#endif

    ctx->pc = 0x376cf8u;

    // 0x376cf8: 0x94820016  lhu         $v0, 0x16($a0)
    ctx->pc = 0x376cf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x376cfc: 0xa4a20016  sh          $v0, 0x16($a1)
    ctx->pc = 0x376cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x376d00: 0x94830024  lhu         $v1, 0x24($a0)
    ctx->pc = 0x376d00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x376d04: 0xa4a30018  sh          $v1, 0x18($a1)
    ctx->pc = 0x376d04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x376d08: 0x94820026  lhu         $v0, 0x26($a0)
    ctx->pc = 0x376d08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x376d0c: 0xa4a2001a  sh          $v0, 0x1A($a1)
    ctx->pc = 0x376d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x376d10: 0x94830028  lhu         $v1, 0x28($a0)
    ctx->pc = 0x376d10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x376d14: 0xa4a3001c  sh          $v1, 0x1C($a1)
    ctx->pc = 0x376d14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x376d18: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x376d18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x376d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x376D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376D1Cu;
        // 0x376d20: 0xa4a2001e  sh          $v0, 0x1E($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 30), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376D24u;
    // 0x376d24: 0x0  nop
    ctx->pc = 0x376d24u;
    // NOP
    ctx->pc = 0x376d28u;
}
