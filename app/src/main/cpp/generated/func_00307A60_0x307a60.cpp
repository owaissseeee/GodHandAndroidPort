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

// Function: func_00307A60
// Address: 0x307a60 - 0x307b28
void func_00307A60_0x307a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00307A60_0x307a60");
#endif

    switch (ctx->pc) {
        case 0x307aa8u: goto label_307aa8;
        case 0x307ab0u: goto label_307ab0;
        case 0x307ad4u: goto label_307ad4;
        case 0x307b00u: goto label_307b00;
        default: break;
    }

    ctx->pc = 0x307a60u;

    // 0x307a60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x307a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x307a64: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x307a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x307a68: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x307a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x307a6c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x307a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x307a70: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x307a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x307a74: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x307a74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a78: 0x8c52ae50  lw          $s2, -0x51B0($v0)
    ctx->pc = 0x307a78u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5CAE50u));
    // 0x307a7c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x307a7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a80: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x307a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x307a84: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x307a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x307a88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x307a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x307a8c: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x307A8Cu;
    {
        const bool branch_taken_0x307a8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x307A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307A8Cu;
        // 0x307a90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a8c) {
            ctx->pc = 0x307AF8u;
            goto label_307af8;
        }
    }
    ctx->pc = 0x307A94u;
    // 0x307a94: 0x9642002a  lhu         $v0, 0x2A($s2)
    ctx->pc = 0x307a94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x307a98: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x307A98u;
    {
        const bool branch_taken_0x307a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307A98u;
        // 0x307a9c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a98) {
            ctx->pc = 0x307AF8u;
            goto label_307af8;
        }
    }
    ctx->pc = 0x307AA0u;
    // 0x307aa0: 0x3c130075  lui         $s3, 0x75
    ctx->pc = 0x307aa0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)117 << 16));
    // 0x307aa4: 0x26a4ae50  addiu       $a0, $s5, -0x51B0
    ctx->pc = 0x307aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946384));
label_307aa8:
    // 0x307aa8: 0xc04ccee  jal         func_1333B8
    ctx->pc = 0x307AA8u;
    SET_GPR_U32(ctx, 31, 0x307AB0u);
    ctx->pc = 0x307AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307AA8u;
    // 0x307aac: 0x3225ffff  andi        $a1, $s1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1333B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1333B8u, 0x307AA8u, 0x307AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307AB0u;
label_307ab0:
    // 0x307ab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x307ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307ab4: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x307AB4u;
    {
        const bool branch_taken_0x307ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ab4) {
            ctx->pc = 0x307AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307AB4u;
            // 0x307ab8: 0x9642002a  lhu         $v0, 0x2A($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307AE8u;
            goto label_307ae8;
        }
    }
    ctx->pc = 0x307ABCu;
    // 0x307abc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x307abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x307ac0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307AC0u;
    {
        const bool branch_taken_0x307ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ac0) {
            ctx->pc = 0x307AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307AC0u;
            // 0x307ac4: 0x9642002a  lhu         $v0, 0x2A($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307AE8u;
            goto label_307ae8;
        }
    }
    ctx->pc = 0x307AC8u;
    // 0x307ac8: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x307ac8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x307acc: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x307ACCu;
    SET_GPR_U32(ctx, 31, 0x307AD4u);
    ctx->pc = 0x307AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307ACCu;
    // 0x307ad0: 0x26644c38  addiu       $a0, $s3, 0x4C38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 19512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x307ACCu, 0x307AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307AD4u;
label_307ad4:
    // 0x307ad4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x307AD4u;
    {
        const bool branch_taken_0x307ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307ad4) {
            ctx->pc = 0x307AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307AD4u;
            // 0x307ad8: 0x9642002a  lhu         $v0, 0x2A($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307AE8u;
            goto label_307ae8;
        }
    }
    ctx->pc = 0x307ADCu;
    // 0x307adc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x307adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x307ae0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x307ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x307ae4: 0x9642002a  lhu         $v0, 0x2A($s2)
    ctx->pc = 0x307ae4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
label_307ae8:
    // 0x307ae8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x307ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x307aec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x307aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x307af0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x307AF0u;
    {
        const bool branch_taken_0x307af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307AF0u;
        // 0x307af4: 0x26a4ae50  addiu       $a0, $s5, -0x51B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307af0) {
            ctx->pc = 0x307AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307aa8;
        }
    }
    ctx->pc = 0x307AF8u;
label_307af8:
    // 0x307af8: 0xc0c2350  jal         func_308D40
    ctx->pc = 0x307AF8u;
    SET_GPR_U32(ctx, 31, 0x307B00u);
    ctx->pc = 0x307AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307AF8u;
    // 0x307afc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308D40u, 0x307AF8u, 0x307B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B00u;
label_307b00:
    // 0x307b00: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x307b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x307b04: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x307b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x307b08: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x307b08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x307b0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x307b0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x307b10: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x307b10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x307b14: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x307b14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x307B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307B1Cu;
        // 0x307b20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307B24u;
    // 0x307b24: 0x0  nop
    ctx->pc = 0x307b24u;
    // NOP
    ctx->pc = 0x307b28u;
}
