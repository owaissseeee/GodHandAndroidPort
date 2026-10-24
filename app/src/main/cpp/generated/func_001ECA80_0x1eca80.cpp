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

// Function: func_001ECA80
// Address: 0x1eca80 - 0x1ecaf0
void func_001ECA80_0x1eca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ECA80_0x1eca80");
#endif

    switch (ctx->pc) {
        case 0x1ecab4u: goto label_1ecab4;
        case 0x1ecab8u: goto label_1ecab8;
        case 0x1ecac4u: goto label_1ecac4;
        default: break;
    }

    ctx->pc = 0x1eca80u;

    // 0x1eca80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1eca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1eca84: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1eca84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1eca88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eca88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca8c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1eca8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1eca90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eca90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1eca94: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1eca94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1eca98: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1eca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1eca9c: 0x2412002c  addiu       $s2, $zero, 0x2C
    ctx->pc = 0x1eca9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1ecaa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ecaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ecaa4: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x1ecaa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1ecaa8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ecaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1ecaac: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1ECAACu;
    SET_GPR_U32(ctx, 31, 0x1ECAB4u);
    ctx->pc = 0x1ECAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECAACu;
    // 0x1ecab0: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1ECAACu, 0x1ECAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECAB4u;
label_1ecab4:
    // 0x1ecab4: 0x0  nop
    ctx->pc = 0x1ecab4u;
    // NOP
label_1ecab8:
    // 0x1ecab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ecab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecabc: 0xc0b5758  jal         func_2D5D60
    ctx->pc = 0x1ECABCu;
    SET_GPR_U32(ctx, 31, 0x1ECAC4u);
    ctx->pc = 0x1ECAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECABCu;
    // 0x1ecac0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D60u, 0x1ECABCu, 0x1ECAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECAC4u;
label_1ecac4:
    // 0x1ecac4: 0x0  nop
    ctx->pc = 0x1ecac4u;
    // NOP
    // 0x1ecac8: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ECAC8u;
    {
        const bool branch_taken_0x1ecac8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1ECACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAC8u;
        // 0x1ecacc: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecac8) {
            ctx->pc = 0x1ECAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecab8;
        }
    }
    ctx->pc = 0x1ECAD0u;
    // 0x1ecad0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ecad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecad4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ecad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ecad8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ecad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ecadc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ecadcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecae0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ecae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ecae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECAE8u;
        // 0x1ecaec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECAF0u;
}
