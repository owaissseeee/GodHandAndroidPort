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

// Function: func_0035BB40
// Address: 0x35bb40 - 0x35bb60
void func_0035BB40_0x35bb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035BB40_0x35bb40");
#endif

    ctx->pc = 0x35bb40u;

    // 0x35bb40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35bb44: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x35bb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x35bb48: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x35bb48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x35bb4c: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x35bb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x35bb50: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x35bb50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x35bb54: 0x3e00008  jr          $ra
    ctx->pc = 0x35BB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BB54u;
        // 0x35bb58: 0xfc800010  sd          $zero, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BB5Cu;
    // 0x35bb5c: 0x0  nop
    ctx->pc = 0x35bb5cu;
    // NOP
    ctx->pc = 0x35bb60u;
}
