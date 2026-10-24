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

// Function: func_0026BAD8
// Address: 0x26bad8 - 0x26bb70
void func_0026BAD8_0x26bad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026BAD8_0x26bad8");
#endif

    switch (ctx->pc) {
        case 0x26bb20u: goto label_26bb20;
        case 0x26bb30u: goto label_26bb30;
        default: break;
    }

    ctx->pc = 0x26bad8u;

    // 0x26bad8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26bad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26badc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x26badcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x26bae0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x26bae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x26bae4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26bae4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bae8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x26bae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x26baec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x26baecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x26baf0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26baf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x26baf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26baf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26baf8: 0x8c820564  lw          $v0, 0x564($a0)
    ctx->pc = 0x26baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x26bafc: 0x38420211  xori        $v0, $v0, 0x211
    ctx->pc = 0x26bafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)529);
    // 0x26bb00: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26BB00u;
    {
        const bool branch_taken_0x26bb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB00u;
        // 0x26bb04: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb00) {
            ctx->pc = 0x26BB50u;
            goto label_26bb50;
        }
    }
    ctx->pc = 0x26BB08u;
    // 0x26bb08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26bb08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bb0c: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x26BB0Cu;
    {
        const bool branch_taken_0x26bb0c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB0Cu;
        // 0x26bb10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb0c) {
            ctx->pc = 0x26BB50u;
            goto label_26bb50;
        }
    }
    ctx->pc = 0x26BB14u;
    // 0x26bb14: 0x24900710  addiu       $s0, $a0, 0x710
    ctx->pc = 0x26bb14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
    // 0x26bb18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26bb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26bb1c: 0x0  nop
    ctx->pc = 0x26bb1cu;
    // NOP
label_26bb20:
    // 0x26bb20: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BB20u;
    {
        const bool branch_taken_0x26bb20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB20u;
        // 0x26bb24: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb20) {
            ctx->pc = 0x26BB34u;
            goto label_26bb34;
        }
    }
    ctx->pc = 0x26BB28u;
    // 0x26bb28: 0xc073fa2  jal         func_1CFE88
    ctx->pc = 0x26BB28u;
    SET_GPR_U32(ctx, 31, 0x26BB30u);
    ctx->pc = 0x26BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB28u;
    // 0x26bb2c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFE88u, 0x26BB28u, 0x26BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB30u;
label_26bb30:
    // 0x26bb30: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x26bb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_26bb34:
    // 0x26bb34: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x26bb34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x26bb38: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x26bb38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x26bb3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BB3Cu;
    {
        const bool branch_taken_0x26bb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB3Cu;
        // 0x26bb40: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb3c) {
            ctx->pc = 0x26BB50u;
            goto label_26bb50;
        }
    }
    ctx->pc = 0x26BB44u;
    // 0x26bb44: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x26bb44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x26bb48: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x26BB48u;
    {
        const bool branch_taken_0x26bb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bb48) {
            ctx->pc = 0x26BB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BB48u;
            // 0x26bb4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26bb20;
        }
    }
    ctx->pc = 0x26BB50u;
label_26bb50:
    // 0x26bb50: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x26bb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26bb54: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x26bb54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26bb58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26bb58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26bb5c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x26bb5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bb60: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x26bb60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bb64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26bb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bb68: 0x3e00008  jr          $ra
    ctx->pc = 0x26BB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB68u;
        // 0x26bb6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BB70u;
}
