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

// Function: cScenario_release
// Address: 0x2c3858 - 0x2c3890
void cScenario_release_0x2c3858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_release_0x2c3858");
#endif

    switch (ctx->pc) {
        case 0x2c386cu: goto label_2c386c;
        case 0x2c3874u: goto label_2c3874;
        case 0x2c387cu: goto label_2c387c;
        default: break;
    }

    ctx->pc = 0x2c3858u;

    // 0x2c3858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c385c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c385cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c3860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c3860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c3864: 0xc0b1378  jal         func_2C4DE0
    ctx->pc = 0x2C3864u;
    SET_GPR_U32(ctx, 31, 0x2C386Cu);
    ctx->pc = 0x2C3868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3864u;
    // 0x2c3868: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4DE0u, 0x2C3864u, 0x2C386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C386Cu;
label_2c386c:
    // 0x2c386c: 0xc0b0e08  jal         func_2C3820
    ctx->pc = 0x2C386Cu;
    SET_GPR_U32(ctx, 31, 0x2C3874u);
    ctx->pc = 0x2C3870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C386Cu;
    // 0x2c3870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3820u, 0x2C386Cu, 0x2C3874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3874u;
label_2c3874:
    // 0x2c3874: 0xc0b55aa  jal         func_2D56A8
    ctx->pc = 0x2C3874u;
    SET_GPR_U32(ctx, 31, 0x2C387Cu);
    ctx->pc = 0x2C3878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3874u;
    // 0x2c3878: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D56A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D56A8u, 0x2C3874u, 0x2C387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C387Cu;
label_2c387c:
    // 0x2c387c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c387cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c3880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3884: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3884u;
        // 0x2c3888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C388Cu;
    // 0x2c388c: 0x0  nop
    ctx->pc = 0x2c388cu;
    // NOP
    ctx->pc = 0x2c3890u;
}
