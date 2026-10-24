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

// Function: cEm_breakHeldWeapons
// Address: 0x26bb70 - 0x26bbd0
void cEm_breakHeldWeapons_0x26bb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm_breakHeldWeapons_0x26bb70");
#endif

    switch (ctx->pc) {
        case 0x26bb98u: goto label_26bb98;
        case 0x26bbacu: goto label_26bbac;
        default: break;
    }

    ctx->pc = 0x26bb70u;

    // 0x26bb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26bb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26bb74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26bb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26bb78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26bb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26bb7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26bb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26bb80: 0x8c820564  lw          $v0, 0x564($a0)
    ctx->pc = 0x26bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x26bb84: 0x38420211  xori        $v0, $v0, 0x211
    ctx->pc = 0x26bb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)529);
    // 0x26bb88: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x26BB88u;
    {
        const bool branch_taken_0x26bb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB88u;
        // 0x26bb8c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb88) {
            ctx->pc = 0x26BBC0u;
            goto label_26bbc0;
        }
    }
    ctx->pc = 0x26BB90u;
    // 0x26bb90: 0x24900710  addiu       $s0, $a0, 0x710
    ctx->pc = 0x26bb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
    // 0x26bb94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26bb94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bb98:
    // 0x26bb98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26bb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26bb9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BB9Cu;
    {
        const bool branch_taken_0x26bb9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BB9Cu;
        // 0x26bba0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bb9c) {
            ctx->pc = 0x26BBB0u;
            goto label_26bbb0;
        }
    }
    ctx->pc = 0x26BBA4u;
    // 0x26bba4: 0xc074206  jal         func_1D0818
    ctx->pc = 0x26BBA4u;
    SET_GPR_U32(ctx, 31, 0x26BBACu);
    ctx->pc = 0x1D0818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0818u, 0x26BBA4u, 0x26BBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BBACu;
label_26bbac:
    // 0x26bbac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x26bbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_26bbb0:
    // 0x26bbb0: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x26bbb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x26bbb4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26BBB4u;
    {
        const bool branch_taken_0x26bbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBB4u;
        // 0x26bbb8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbb4) {
            ctx->pc = 0x26BB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26bb98;
        }
    }
    ctx->pc = 0x26BBBCu;
    // 0x26bbbc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26bbbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26bbc0:
    // 0x26bbc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26bbc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bbc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26bbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x26BBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBC8u;
        // 0x26bbcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BBD0u;
}
