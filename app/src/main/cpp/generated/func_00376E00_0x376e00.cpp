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

// Function: func_00376E00
// Address: 0x376e00 - 0x376e38
void func_00376E00_0x376e00(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00376E00_0x376e00");
#endif

    if (__builtin_expect(ctx->pc != 0x376e00u, 0)) {
        switch (ctx->pc) {
            case 0x376e10u: goto label_376e10;
            case 0x376e18u: goto label_376e18;
            case 0x376e20u: goto label_376e20;
            case 0x376e28u: goto label_376e28;
            default: break;
        }
    }


    // 0x376e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x376e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376e08: 0xc0ddb8e  jal         func_376E38
    ctx->pc = 0x376E08u;
    SET_GPR_U32(ctx, 31, 0x376E10u);
    if (!runtime->callDirectStatic(rdram, ctx, &ClearPendingFlagEvents_376E38_0x376e38, 0x376e38u, 0x376e10u)) {
        return;
    }
label_376e10:
    // 0x376e10: 0xc0ddba8  jal         func_376EA0
    ctx->pc = 0x376E10u;
    SET_GPR_U32(ctx, 31, 0x376E18u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00376EA0_0x376ea0, 0x376ea0u, 0x376e18u)) {
        return;
    }
label_376e18:
    // 0x376e18: 0xc0ddd2a  jal         func_3774A8
    ctx->pc = 0x376E18u;
    SET_GPR_U32(ctx, 31, 0x376E20u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_003774A8_0x3774a8, 0x3774a8u, 0x376e20u)) {
        return;
    }
label_376e20:
    // 0x376e20: 0xc0defa6  jal         func_37BE98
    ctx->pc = 0x376E20u;
    SET_GPR_U32(ctx, 31, 0x376E28u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0037BE98_0x37be98, 0x37be98u, 0x376e28u)) {
        return;
    }
label_376e28:
    // 0x376e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x376e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x376E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376E2Cu;
        // 0x376e30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x376e34: 0x0  nop
    // NOP
    ctx->pc = 0x376e38u;
}