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

// Function: func_0033ADC0
// Address: 0x33adc0 - 0x33adf8
void func_0033ADC0_0x33adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033ADC0_0x33adc0");
#endif

    switch (ctx->pc) {
        case 0x33ade0u: goto label_33ade0;
        default: break;
    }

    ctx->pc = 0x33adc0u;

    // 0x33adc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33adc4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x33adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x33adc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33adc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33adcc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33adccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33add0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33add0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x33add4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33add4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33add8: 0xc0ceb42  jal         func_33AD08
    ctx->pc = 0x33ADD8u;
    SET_GPR_U32(ctx, 31, 0x33ADE0u);
    ctx->pc = 0x33ADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ADD8u;
    // 0x33addc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AD08u, 0x33ADD8u, 0x33ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ADE0u;
label_33ade0:
    // 0x33ade0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x33ade0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x33ade4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33ade4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33ade8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33ade8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33adec: 0x3e00008  jr          $ra
    ctx->pc = 0x33ADECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ADECu;
        // 0x33adf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ADECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33ADF4u;
    // 0x33adf4: 0x0  nop
    ctx->pc = 0x33adf4u;
    // NOP
    ctx->pc = 0x33adf8u;
}
