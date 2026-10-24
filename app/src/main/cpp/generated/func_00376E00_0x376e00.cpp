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
void func_00376E00_0x376e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00376E00_0x376e00");
#endif

    switch (ctx->pc) {
        case 0x376e10u: goto label_376e10;
        case 0x376e18u: goto label_376e18;
        case 0x376e20u: goto label_376e20;
        case 0x376e28u: goto label_376e28;
        default: break;
    }

    ctx->pc = 0x376e00u;

    // 0x376e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x376e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x376e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376e08: 0xc0ddb8e  jal         func_376E38
    ctx->pc = 0x376E08u;
    SET_GPR_U32(ctx, 31, 0x376E10u);
    ctx->pc = 0x376E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376E38u, 0x376E08u, 0x376E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E10u;
label_376e10:
    // 0x376e10: 0xc0ddba8  jal         func_376EA0
    ctx->pc = 0x376E10u;
    SET_GPR_U32(ctx, 31, 0x376E18u);
    ctx->pc = 0x376EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376EA0u, 0x376E10u, 0x376E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E18u;
label_376e18:
    // 0x376e18: 0xc0ddd2a  jal         func_3774A8
    ctx->pc = 0x376E18u;
    SET_GPR_U32(ctx, 31, 0x376E20u);
    ctx->pc = 0x3774A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3774A8u, 0x376E18u, 0x376E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E20u;
label_376e20:
    // 0x376e20: 0xc0defa6  jal         func_37BE98
    ctx->pc = 0x376E20u;
    SET_GPR_U32(ctx, 31, 0x376E28u);
    ctx->pc = 0x37BE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37BE98u, 0x376E20u, 0x376E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E28u;
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
    ctx->pc = 0x376E34u;
    // 0x376e34: 0x0  nop
    ctx->pc = 0x376e34u;
    // NOP
    ctx->pc = 0x376e38u;
}
