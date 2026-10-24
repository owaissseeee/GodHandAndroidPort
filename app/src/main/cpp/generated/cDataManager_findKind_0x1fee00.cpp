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

// Function: cDataManager_findKind
// Address: 0x1fee00 - 0x1feea0
void cDataManager_findKind_0x1fee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDataManager_findKind_0x1fee00");
#endif

    switch (ctx->pc) {
        case 0x1fee40u: goto label_1fee40;
        case 0x1fee4cu: goto label_1fee4c;
        default: break;
    }

    ctx->pc = 0x1fee00u;

    // 0x1fee00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fee04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fee04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fee08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fee08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1fee0c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1fee0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1fee10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fee10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fee14: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1fee14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1fee18: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1fee18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1fee1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fee1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fee20: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1fee20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1fee24: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x1fee24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fee28: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1fee28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1fee2c: 0x12220013  beq         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FEE2Cu;
    {
        const bool branch_taken_0x1fee2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FEE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE2Cu;
        // 0x1fee30: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee2c) {
            ctx->pc = 0x1FEE7Cu;
            goto label_1fee7c;
        }
    }
    ctx->pc = 0x1FEE34u;
    // 0x1fee34: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x1fee34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1fee38: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1fee38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fee3c: 0x2228018  mult        $s0, $s1, $v0
    ctx->pc = 0x1fee3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_1fee40:
    // 0x1fee40: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fee40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fee44: 0xc07fc36  jal         func_1FF0D8
    ctx->pc = 0x1FEE44u;
    SET_GPR_U32(ctx, 31, 0x1FEE4Cu);
    ctx->pc = 0x1FEE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEE44u;
    // 0x1fee48: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF0D8u, 0x1FEE44u, 0x1FEE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEE4Cu;
label_1fee4c:
    // 0x1fee4c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEE4Cu;
    {
        const bool branch_taken_0x1fee4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee4c) {
            ctx->pc = 0x1FEE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEE4Cu;
            // 0x1fee50: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEE70u;
            goto label_1fee70;
        }
    }
    ctx->pc = 0x1FEE54u;
    // 0x1fee54: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1fee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fee58: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1fee58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fee5c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1fee5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1fee60: 0x54730003  bnel        $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEE60u;
    {
        const bool branch_taken_0x1fee60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x1fee60) {
            ctx->pc = 0x1FEE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEE60u;
            // 0x1fee64: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEE70u;
            goto label_1fee70;
        }
    }
    ctx->pc = 0x1FEE68u;
    // 0x1fee68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEE68u;
    {
        const bool branch_taken_0x1fee68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE68u;
        // 0x1fee6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee68) {
            ctx->pc = 0x1FEE7Cu;
            goto label_1fee7c;
        }
    }
    ctx->pc = 0x1FEE70u;
label_1fee70:
    // 0x1fee70: 0x1634fff3  bne         $s1, $s4, . + 4 + (-0xD << 2)
    ctx->pc = 0x1FEE70u;
    {
        const bool branch_taken_0x1fee70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x1FEE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE70u;
        // 0x1fee74: 0x2610ffa4  addiu       $s0, $s0, -0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee70) {
            ctx->pc = 0x1FEE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fee40;
        }
    }
    ctx->pc = 0x1FEE78u;
    // 0x1fee78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fee78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fee7c:
    // 0x1fee7c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1fee7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fee80: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1fee80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fee84: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fee84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fee88: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1fee88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fee8c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1fee8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fee90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fee90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fee94: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE94u;
        // 0x1fee98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEE9Cu;
    // 0x1fee9c: 0x0  nop
    ctx->pc = 0x1fee9cu;
    // NOP
    ctx->pc = 0x1feea0u;
}
