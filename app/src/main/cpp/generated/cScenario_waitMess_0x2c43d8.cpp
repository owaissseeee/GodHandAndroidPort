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

// Function: cScenario_waitMess
// Address: 0x2c43d8 - 0x2c4440
void cScenario_waitMess_0x2c43d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_waitMess_0x2c43d8");
#endif

    switch (ctx->pc) {
        case 0x2c4400u: goto label_2c4400;
        case 0x2c440cu: goto label_2c440c;
        case 0x2c4414u: goto label_2c4414;
        case 0x2c4424u: goto label_2c4424;
        default: break;
    }

    ctx->pc = 0x2c43d8u;

    // 0x2c43d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c43d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c43dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c43dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2c43e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c43e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c43e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c43e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c43e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2c43e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2c43ec: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2c43ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2c43f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c43f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c43f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C43F4u;
    {
        const bool branch_taken_0x2c43f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C43F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43F4u;
        // 0x2c43f8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c43f4) {
            ctx->pc = 0x2C440Cu;
            goto label_2c440c;
        }
    }
    ctx->pc = 0x2C43FCu;
    // 0x2c43fc: 0x0  nop
    ctx->pc = 0x2c43fcu;
    // NOP
label_2c4400:
    // 0x2c4400: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c4400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4404: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x2C4404u;
    SET_GPR_U32(ctx, 31, 0x2C440Cu);
    ctx->pc = 0x2C4408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4404u;
    // 0x2c4408: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x2C4404u, 0x2C440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C440Cu;
label_2c440c:
    // 0x2c440c: 0xc0b10d4  jal         func_2C4350
    ctx->pc = 0x2C440Cu;
    SET_GPR_U32(ctx, 31, 0x2C4414u);
    ctx->pc = 0x2C4410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C440Cu;
    // 0x2c4410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4350u, 0x2C440Cu, 0x2C4414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4414u;
label_2c4414:
    // 0x2c4414: 0x1052fffa  beq         $v0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C4414u;
    {
        const bool branch_taken_0x2c4414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2C4418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4414u;
        // 0x2c4418: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4414) {
            ctx->pc = 0x2C4400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4400;
        }
    }
    ctx->pc = 0x2C441Cu;
    // 0x2c441c: 0xc0b10e4  jal         func_2C4390
    ctx->pc = 0x2C441Cu;
    SET_GPR_U32(ctx, 31, 0x2C4424u);
    ctx->pc = 0x2C4420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C441Cu;
    // 0x2c4420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4390u, 0x2C441Cu, 0x2C4424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4424u;
label_2c4424:
    // 0x2c4424: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c4424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4428: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c4428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c442c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2c442cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4434: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4434u;
        // 0x2c4438: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C443Cu;
    // 0x2c443c: 0x0  nop
    ctx->pc = 0x2c443cu;
    // NOP
    ctx->pc = 0x2c4440u;
}
