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

// Function: cScenario_taskExec_2C38D8
// Address: 0x2c38d8 - 0x2c3920
void cScenario_taskExec_2C38D8_0x2c38d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_taskExec_2C38D8_0x2c38d8");
#endif

    switch (ctx->pc) {
        case 0x2c38f4u: goto label_2c38f4;
        case 0x2c3904u: goto label_2c3904;
        default: break;
    }

    ctx->pc = 0x2c38d8u;

    // 0x2c38d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c38d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c38dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c38dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c38e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c38e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c38e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c38e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c38e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c38ec: 0xc0b553c  jal         func_2D54F0
    ctx->pc = 0x2C38ECu;
    SET_GPR_U32(ctx, 31, 0x2C38F4u);
    ctx->pc = 0x2C38F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C38ECu;
    // 0x2c38f0: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D54F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D54F0u, 0x2C38ECu, 0x2C38F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C38F4u;
label_2c38f4:
    // 0x2c38f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c38f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c38f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38fc: 0xc0b0e5a  jal         func_2C3968
    ctx->pc = 0x2C38FCu;
    SET_GPR_U32(ctx, 31, 0x2C3904u);
    ctx->pc = 0x2C3900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C38FCu;
    // 0x2c3900: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3968u, 0x2C38FCu, 0x2C3904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3904u;
label_2c3904:
    // 0x2c3904: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c3904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3908: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c390c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c390cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c3910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3914: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3914u;
        // 0x2c3918: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C391Cu;
    // 0x2c391c: 0x0  nop
    ctx->pc = 0x2c391cu;
    // NOP
    ctx->pc = 0x2c3920u;
}
