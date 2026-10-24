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

// Function: sceSifExitRpc
// Address: 0x3b2aa0 - 0x3b2ac8
void sceSifExitRpc_0x3b2aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifExitRpc_0x3b2aa0");
#endif

    switch (ctx->pc) {
        case 0x3b2ab0u: goto label_3b2ab0;
        default: break;
    }

    ctx->pc = 0x3b2aa0u;

    // 0x3b2aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b2aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b2aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b2aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b2aa8: 0xc0ec914  jal         func_3B2450
    ctx->pc = 0x3B2AA8u;
    SET_GPR_U32(ctx, 31, 0x3B2AB0u);
    ctx->pc = 0x3B2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2450u, 0x3B2AA8u, 0x3B2AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2AB0u;
label_3b2ab0:
    // 0x3b2ab0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3b2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3b2ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b2ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2ab8: 0xac40ae54  sw          $zero, -0x51AC($v0)
    ctx->pc = 0x3b2ab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FAE54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAE54u, _value); } while (0);
    // 0x3b2abc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2ABCu;
        // 0x3b2ac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2AC4u;
    // 0x3b2ac4: 0x0  nop
    ctx->pc = 0x3b2ac4u;
    // NOP
    ctx->pc = 0x3b2ac8u;
}
