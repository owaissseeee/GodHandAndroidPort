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

// Function: func_0030DA08
// Address: 0x30da08 - 0x30dad8
void func_0030DA08_0x30da08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030DA08_0x30da08");
#endif

    switch (ctx->pc) {
        case 0x30da3cu: goto label_30da3c;
        case 0x30da58u: goto label_30da58;
        case 0x30da64u: goto label_30da64;
        case 0x30da74u: goto label_30da74;
        case 0x30da88u: goto label_30da88;
        case 0x30da9cu: goto label_30da9c;
        case 0x30daacu: goto label_30daac;
        case 0x30dab4u: goto label_30dab4;
        default: break;
    }

    ctx->pc = 0x30da08u;

    // 0x30da08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30da08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30da0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30da0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da10: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x30da10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x30da14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30da14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30da18: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x30da18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x30da1c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x30da1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x30da20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x30da20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x30da24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30da24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30da28: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x30da28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x30da2c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x30da2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x30da30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30da30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30da34: 0xc0ad2fa  jal         func_2B4BE8
    ctx->pc = 0x30DA34u;
    SET_GPR_U32(ctx, 31, 0x30DA3Cu);
    ctx->pc = 0x30DA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DA34u;
    // 0x30da38: 0x260479d0  addiu       $a0, $s0, 0x79D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 31184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BE8u, 0x30DA34u, 0x30DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA3Cu;
label_30da3c:
    // 0x30da3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30da3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da40: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x30da40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da44: 0x3c120075  lui         $s2, 0x75
    ctx->pc = 0x30da44u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)117 << 16));
    // 0x30da48: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x30da48u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x30da4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30DA4Cu;
    {
        const bool branch_taken_0x30da4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA4Cu;
        // 0x30da50: 0x3c150031  lui         $s5, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da4c) {
            ctx->pc = 0x30DA64u;
            goto label_30da64;
        }
    }
    ctx->pc = 0x30DA54u;
    // 0x30da54: 0x0  nop
    ctx->pc = 0x30da54u;
    // NOP
label_30da58:
    // 0x30da58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30da58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30da5c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x30DA5Cu;
    SET_GPR_U32(ctx, 31, 0x30DA64u);
    ctx->pc = 0x30DA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DA5Cu;
    // 0x30da60: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x30DA5Cu, 0x30DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA64u;
label_30da64:
    // 0x30da64: 0x267079d0  addiu       $s0, $s3, 0x79D0
    ctx->pc = 0x30da64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 31184));
    // 0x30da68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30da68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da6c: 0xc0ad3b2  jal         func_2B4EC8
    ctx->pc = 0x30DA6Cu;
    SET_GPR_U32(ctx, 31, 0x30DA74u);
    ctx->pc = 0x30DA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DA6Cu;
    // 0x30da70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4EC8u, 0x30DA6Cu, 0x30DA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA74u;
label_30da74:
    // 0x30da74: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30DA74u;
    {
        const bool branch_taken_0x30da74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DA74u;
        // 0x30da78: 0x26422c00  addiu       $v0, $s2, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da74) {
            ctx->pc = 0x30DA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30da58;
        }
    }
    ctx->pc = 0x30DA7Cu;
    // 0x30da7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30da7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da80: 0xc0ad35a  jal         func_2B4D68
    ctx->pc = 0x30DA80u;
    SET_GPR_U32(ctx, 31, 0x30DA88u);
    ctx->pc = 0x30DA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DA80u;
    // 0x30da84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4D68u, 0x30DA80u, 0x30DA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA88u;
label_30da88:
    // 0x30da88: 0x26502c00  addiu       $s0, $s2, 0x2C00
    ctx->pc = 0x30da88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 11264));
    // 0x30da8c: 0x26855998  addiu       $a1, $s4, 0x5998
    ctx->pc = 0x30da8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 22936));
    // 0x30da90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30da90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da94: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x30DA94u;
    SET_GPR_U32(ctx, 31, 0x30DA9Cu);
    ctx->pc = 0x30DA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DA94u;
    // 0x30da98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5470u, 0x30DA94u, 0x30DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DA9Cu;
label_30da9c:
    // 0x30da9c: 0x26a5d5c8  addiu       $a1, $s5, -0x2A38
    ctx->pc = 0x30da9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956488));
    // 0x30daa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30daa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30daa4: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x30DAA4u;
    SET_GPR_U32(ctx, 31, 0x30DAACu);
    ctx->pc = 0x30DAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DAA4u;
    // 0x30daa8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5470u, 0x30DAA4u, 0x30DAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DAACu;
label_30daac:
    // 0x30daac: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x30DAACu;
    SET_GPR_U32(ctx, 31, 0x30DAB4u);
    ctx->pc = 0x30DAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DAACu;
    // 0x30dab0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x30DAACu, 0x30DAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DAB4u;
label_30dab4:
    // 0x30dab4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x30dab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30dab8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x30dab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30dabc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x30dabcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30dac0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30dac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30dac4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x30dac4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30dac8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x30dac8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30dacc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30daccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30dad0: 0x3e00008  jr          $ra
    ctx->pc = 0x30DAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DAD0u;
        // 0x30dad4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DAD8u;
}
