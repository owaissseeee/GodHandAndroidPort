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

// Function: func_003571D0
// Address: 0x3571d0 - 0x3571f8
void func_003571D0_0x3571d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003571D0_0x3571d0");
#endif

    switch (ctx->pc) {
        case 0x3571e0u: goto label_3571e0;
        default: break;
    }

    ctx->pc = 0x3571d0u;

    // 0x3571d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3571d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3571d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3571d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3571d8: 0xc0d5c7e  jal         func_3571F8
    ctx->pc = 0x3571D8u;
    SET_GPR_U32(ctx, 31, 0x3571E0u);
    ctx->pc = 0x3571F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3571F8u, 0x3571D8u, 0x3571E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3571E0u;
label_3571e0:
    // 0x3571e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3571e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3571e4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3571e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3571e8: 0xac40e304  sw          $zero, -0x1CFC($v0)
    ctx->pc = 0x3571e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EE304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE304u, _value); } while (0);
    // 0x3571ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3571ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3571F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3571ECu;
        // 0x3571f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3571ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3571F4u;
    // 0x3571f4: 0x0  nop
    ctx->pc = 0x3571f4u;
    // NOP
    ctx->pc = 0x3571f8u;
}
