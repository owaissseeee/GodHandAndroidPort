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

// Function: cOm71_SetMotion102
// Address: 0x1b20e0 - 0x1b2118
void cOm71_SetMotion102_0x1b20e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm71_SetMotion102_0x1b20e0");
#endif

    switch (ctx->pc) {
        case 0x1b210cu: goto label_1b210c;
        default: break;
    }

    ctx->pc = 0x1b20e0u;

    // 0x1b20e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b20e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b20e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b20e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b20e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b20e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b20ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b20ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20f0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b20f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b20f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b20f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20f8: 0x8c820304  lw          $v0, 0x304($a0)
    ctx->pc = 0x1b20f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 772)));
    // 0x1b20fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b20fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2100: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x1b2100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1b2104: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1B2104u;
    SET_GPR_U32(ctx, 31, 0x1B210Cu);
    ctx->pc = 0x1B2108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2104u;
    // 0x1b2108: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1B2104u, 0x1B210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B210Cu;
label_1b210c:
    // 0x1b210c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b210cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2110: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2110u;
        // 0x1b2114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2118u;
}
