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

// Function: cDataManager_resetKind
// Address: 0x1fed78 - 0x1fee00
void cDataManager_resetKind_0x1fed78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDataManager_resetKind_0x1fed78");
#endif

    switch (ctx->pc) {
        case 0x1fedb0u: goto label_1fedb0;
        case 0x1fedccu: goto label_1fedcc;
        default: break;
    }

    ctx->pc = 0x1fed78u;

    // 0x1fed78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fed78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fed7c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1fed7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1fed80: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1fed80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1fed84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fed84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed88: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1fed88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1fed8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fed8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed90: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1fed90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1fed94: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1fed94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fed98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fed98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1fed9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fed9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1feda0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1feda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1feda4: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FEDA4u;
    {
        const bool branch_taken_0x1feda4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1FEDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDA4u;
        // 0x1feda8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feda4) {
            ctx->pc = 0x1FEDE0u;
            goto label_1fede0;
        }
    }
    ctx->pc = 0x1FEDACu;
    // 0x1fedac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fedacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fedb0:
    // 0x1fedb0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1fedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fedb4: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1fedb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fedb8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1fedb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1fedbc: 0x54740004  bnel        $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEDBCu;
    {
        const bool branch_taken_0x1fedbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x1fedbc) {
            ctx->pc = 0x1FEDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEDBCu;
            // 0x1fedc0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEDD0u;
            goto label_1fedd0;
        }
    }
    ctx->pc = 0x1FEDC4u;
    // 0x1fedc4: 0xc07fcb8  jal         func_1FF2E0
    ctx->pc = 0x1FEDC4u;
    SET_GPR_U32(ctx, 31, 0x1FEDCCu);
    ctx->pc = 0x1FEDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEDC4u;
    // 0x1fedc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF2E0u, 0x1FEDC4u, 0x1FEDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEDCCu;
label_1fedcc:
    // 0x1fedcc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1fedccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fedd0:
    // 0x1fedd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fedd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fedd4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1fedd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fedd8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1FEDD8u;
    {
        const bool branch_taken_0x1fedd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDD8u;
        // 0x1feddc: 0x2652005c  addiu       $s2, $s2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fedd8) {
            ctx->pc = 0x1FEDB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fedb0;
        }
    }
    ctx->pc = 0x1FEDE0u;
label_1fede0:
    // 0x1fede0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1fede0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fede4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1fede4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fede8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fede8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fedec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1fedecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fedf0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1fedf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fedf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fedf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fedf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEDF8u;
        // 0x1fedfc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEE00u;
}
