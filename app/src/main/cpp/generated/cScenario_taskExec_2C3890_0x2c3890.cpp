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

// Function: cScenario_taskExec_2C3890
// Address: 0x2c3890 - 0x2c38d8
void cScenario_taskExec_2C3890_0x2c3890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_taskExec_2C3890_0x2c3890");
#endif

    switch (ctx->pc) {
        case 0x2c38acu: goto label_2c38ac;
        case 0x2c38bcu: goto label_2c38bc;
        default: break;
    }

    ctx->pc = 0x2c3890u;

    // 0x2c3890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c3890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c3894: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c3898: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c389c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c389cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c38a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c38a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c38a4: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x2C38A4u;
    SET_GPR_U32(ctx, 31, 0x2C38ACu);
    ctx->pc = 0x2C38A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C38A4u;
    // 0x2c38a8: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5470u, 0x2C38A4u, 0x2C38ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C38ACu;
label_2c38ac:
    // 0x2c38ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c38acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c38b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38b4: 0xc0b0e5a  jal         func_2C3968
    ctx->pc = 0x2C38B4u;
    SET_GPR_U32(ctx, 31, 0x2C38BCu);
    ctx->pc = 0x2C38B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C38B4u;
    // 0x2c38b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3968u, 0x2C38B4u, 0x2C38BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C38BCu;
label_2c38bc:
    // 0x2c38bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c38bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c38c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c38c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c38c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c38c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c38c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c38cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C38CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C38D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38CCu;
        // 0x2c38d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C38CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C38D4u;
    // 0x2c38d4: 0x0  nop
    ctx->pc = 0x2c38d4u;
    // NOP
    ctx->pc = 0x2c38d8u;
}
