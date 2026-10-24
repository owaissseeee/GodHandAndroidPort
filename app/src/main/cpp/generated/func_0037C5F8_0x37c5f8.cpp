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

// Function: func_0037C5F8
// Address: 0x37c5f8 - 0x37c618
void func_0037C5F8_0x37c5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037C5F8_0x37c5f8");
#endif

    ctx->pc = 0x37c5f8u;

    // 0x37c5f8: 0x94a30034  lhu         $v1, 0x34($a1)
    ctx->pc = 0x37c5f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x37c5fc: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x37c5fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x37c600: 0xa4830040  sh          $v1, 0x40($a0)
    ctx->pc = 0x37c600u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x37c604: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x37c604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x37c608: 0x94a30036  lhu         $v1, 0x36($a1)
    ctx->pc = 0x37c608u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 54)));
    // 0x37c60c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x37c60cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c610: 0x3e00008  jr          $ra
    ctx->pc = 0x37C610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C610u;
        // 0x37c614: 0xa4830042  sh          $v1, 0x42($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 66), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C618u;
}
