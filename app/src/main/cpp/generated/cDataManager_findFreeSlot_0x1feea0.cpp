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

// Function: cDataManager_findFreeSlot
// Address: 0x1feea0 - 0x1fef30
void cDataManager_findFreeSlot_0x1feea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDataManager_findFreeSlot_0x1feea0");
#endif

    switch (ctx->pc) {
        case 0x1feec8u: goto label_1feec8;
        case 0x1feed4u: goto label_1feed4;
        default: break;
    }

    ctx->pc = 0x1feea0u;

    // 0x1feea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1feea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1feea4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1feea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1feea8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1feea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1feeac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1feeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1feeb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1feeb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feeb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1feeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1feeb8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1feeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1feebc: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FEEBCu;
    {
        const bool branch_taken_0x1feebc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1FEEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEBCu;
        // 0x1feec0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feebc) {
            ctx->pc = 0x1FEF10u;
            goto label_1fef10;
        }
    }
    ctx->pc = 0x1FEEC4u;
    // 0x1feec4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1feec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1feec8:
    // 0x1feec8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1feec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1feecc: 0xc07fc36  jal         func_1FF0D8
    ctx->pc = 0x1FEECCu;
    SET_GPR_U32(ctx, 31, 0x1FEED4u);
    ctx->pc = 0x1FEED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEECCu;
    // 0x1feed0: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF0D8u, 0x1FEECCu, 0x1FEED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEED4u;
label_1feed4:
    // 0x1feed4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1FEED4u;
    {
        const bool branch_taken_0x1feed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1feed4) {
            ctx->pc = 0x1FEED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEED4u;
            // 0x1feed8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEF00u;
            goto label_1fef00;
        }
    }
    ctx->pc = 0x1FEEDCu;
    // 0x1feedc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1feedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1feee0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1feee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1feee4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1feee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1feee8: 0x318ba  dsrl        $v1, $v1, 2
    ctx->pc = 0x1feee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 2);
    // 0x1feeec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1feeecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1feef0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEEF0u;
    {
        const bool branch_taken_0x1feef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1feef0) {
            ctx->pc = 0x1FEEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEEF0u;
            // 0x1feef4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEF00u;
            goto label_1fef00;
        }
    }
    ctx->pc = 0x1FEEF8u;
    // 0x1feef8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEEF8u;
    {
        const bool branch_taken_0x1feef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEEF8u;
        // 0x1feefc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feef8) {
            ctx->pc = 0x1FEF14u;
            goto label_1fef14;
        }
    }
    ctx->pc = 0x1FEF00u;
label_1fef00:
    // 0x1fef00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fef00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fef04: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1fef04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fef08: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1FEF08u;
    {
        const bool branch_taken_0x1fef08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF08u;
        // 0x1fef0c: 0x2652005c  addiu       $s2, $s2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef08) {
            ctx->pc = 0x1FEEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1feec8;
        }
    }
    ctx->pc = 0x1FEF10u;
label_1fef10:
    // 0x1fef10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fef14:
    // 0x1fef14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fef14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fef18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fef18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fef1c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fef1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fef20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fef20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fef24: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF24u;
        // 0x1fef28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEF2Cu;
    // 0x1fef2c: 0x0  nop
    ctx->pc = 0x1fef2cu;
    // NOP
    ctx->pc = 0x1fef30u;
}
