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

// Function: cScenario_waitCam
// Address: 0x2c4078 - 0x2c40c8
void cScenario_waitCam_0x2c4078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_waitCam_0x2c4078");
#endif

    switch (ctx->pc) {
        case 0x2c4098u: goto label_2c4098;
        case 0x2c40a4u: goto label_2c40a4;
        case 0x2c40acu: goto label_2c40ac;
        default: break;
    }

    ctx->pc = 0x2c4078u;

    // 0x2c4078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c407c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c407cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c4080: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c4084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c4084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c408c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C408Cu;
    {
        const bool branch_taken_0x2c408c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C408Cu;
        // 0x2c4090: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c408c) {
            ctx->pc = 0x2C40A4u;
            goto label_2c40a4;
        }
    }
    ctx->pc = 0x2C4094u;
    // 0x2c4094: 0x0  nop
    ctx->pc = 0x2c4094u;
    // NOP
label_2c4098:
    // 0x2c4098: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x2c4098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x2c409c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x2C409Cu;
    SET_GPR_U32(ctx, 31, 0x2C40A4u);
    ctx->pc = 0x2C40A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C409Cu;
    // 0x2c40a0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x2C409Cu, 0x2C40A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40A4u;
label_2c40a4:
    // 0x2c40a4: 0xc0b1010  jal         func_2C4040
    ctx->pc = 0x2C40A4u;
    SET_GPR_U32(ctx, 31, 0x2C40ACu);
    ctx->pc = 0x2C40A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C40A4u;
    // 0x2c40a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4040u, 0x2C40A4u, 0x2C40ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C40ACu;
label_2c40ac:
    // 0x2c40ac: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C40ACu;
    {
        const bool branch_taken_0x2c40ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C40B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40ACu;
        // 0x2c40b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40ac) {
            ctx->pc = 0x2C4098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4098;
        }
    }
    ctx->pc = 0x2C40B4u;
    // 0x2c40b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c40b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c40b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c40b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c40bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c40bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c40c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C40C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C40C0u;
        // 0x2c40c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C40C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C40C8u;
}
