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

// Function: cScenario_taskExec
// Address: 0x2c3920 - 0x2c3968
void cScenario_taskExec_0x2c3920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_taskExec_0x2c3920");
#endif

    switch (ctx->pc) {
        case 0x2c393cu: goto label_2c393c;
        case 0x2c394cu: goto label_2c394c;
        default: break;
    }

    ctx->pc = 0x2c3920u;

    // 0x2c3920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c3920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c3924: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c3928: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c392c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c392cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c3930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c3930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c3934: 0xc0b5560  jal         func_2D5580
    ctx->pc = 0x2C3934u;
    SET_GPR_U32(ctx, 31, 0x2C393Cu);
    ctx->pc = 0x2C3938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3934u;
    // 0x2c3938: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5580u, 0x2C3934u, 0x2C393Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C393Cu;
label_2c393c:
    // 0x2c393c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c393cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c3940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3944: 0xc0b0e5a  jal         func_2C3968
    ctx->pc = 0x2C3944u;
    SET_GPR_U32(ctx, 31, 0x2C394Cu);
    ctx->pc = 0x2C3948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3944u;
    // 0x2c3948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3968u, 0x2C3944u, 0x2C394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C394Cu;
label_2c394c:
    // 0x2c394c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c394cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3954: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c3954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c3958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c395c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C395Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C395Cu;
        // 0x2c3960: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C395Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3964u;
    // 0x2c3964: 0x0  nop
    ctx->pc = 0x2c3964u;
    // NOP
    ctx->pc = 0x2c3968u;
}
