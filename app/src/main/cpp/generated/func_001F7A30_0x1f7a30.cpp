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

// Function: func_001F7A30
// Address: 0x1f7a30 - 0x1f7ae8
void func_001F7A30_0x1f7a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F7A30_0x1f7a30");
#endif

    switch (ctx->pc) {
        case 0x1f7a78u: goto label_1f7a78;
        case 0x1f7aa8u: goto label_1f7aa8;
        case 0x1f7abcu: goto label_1f7abc;
        default: break;
    }

    ctx->pc = 0x1f7a30u;

    // 0x1f7a30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f7a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f7a34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f7a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f7a38: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f7a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f7a3c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f7a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f7a40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f7a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f7a44: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f7a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1f7a48: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f7a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1f7a4c: 0x14a2001d  bne         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F7A4Cu;
    {
        const bool branch_taken_0x1f7a4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A4Cu;
        // 0x1f7a50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a4c) {
            ctx->pc = 0x1F7AC4u;
            goto label_1f7ac4;
        }
    }
    ctx->pc = 0x1F7A54u;
    // 0x1f7a54: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F7A54u;
    {
        const bool branch_taken_0x1f7a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A54u;
        // 0x1f7a58: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a54) {
            ctx->pc = 0x1F7AC4u;
            goto label_1f7ac4;
        }
    }
    ctx->pc = 0x1F7A5Cu;
    // 0x1f7a5c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1f7a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1f7a60: 0x24448288  addiu       $a0, $v0, -0x7D78
    ctx->pc = 0x1f7a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935176));
    // 0x1f7a64: 0x2463c2d8  addiu       $v1, $v1, -0x3D28
    ctx->pc = 0x1f7a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951640));
    // 0x1f7a68: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x1f7a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1f7a6c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f7a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f7a70: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1f7a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f7a74: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1f7a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f7a78:
    // 0x1f7a78: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1f7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1f7a7c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1f7a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f7a80: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1f7a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1f7a84: 0x0  nop
    ctx->pc = 0x1f7a84u;
    // NOP
    // 0x1f7a88: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F7A88u;
    {
        const bool branch_taken_0x1f7a88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1F7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A88u;
        // 0x1f7a8c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a88) {
            ctx->pc = 0x1F7A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7a78;
        }
    }
    ctx->pc = 0x1F7A90u;
    // 0x1f7a90: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1f7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1f7a94: 0x24900104  addiu       $s0, $a0, 0x104
    ctx->pc = 0x1f7a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
    // 0x1f7a98: 0x2454c2b0  addiu       $s4, $v0, -0x3D50
    ctx->pc = 0x1f7a98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951600));
    // 0x1f7a9c: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1f7a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f7aa0: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x1f7aa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f7aa4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1f7aa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f7aa8:
    // 0x1f7aa8: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1f7aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x1f7aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ab0: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x1f7ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x1f7ab4: 0xc07deba  jal         func_1F7AE8
    ctx->pc = 0x1F7AB4u;
    SET_GPR_U32(ctx, 31, 0x1F7ABCu);
    ctx->pc = 0x1F7AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7AB4u;
    // 0x1f7ab8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7AE8u, 0x1F7AB4u, 0x1F7ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7ABCu;
label_1f7abc:
    // 0x1f7abc: 0x1632fffa  bne         $s1, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F7ABCu;
    {
        const bool branch_taken_0x1f7abc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1F7AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7ABCu;
        // 0x1f7ac0: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7abc) {
            ctx->pc = 0x1F7AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7aa8;
        }
    }
    ctx->pc = 0x1F7AC4u;
label_1f7ac4:
    // 0x1f7ac4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f7ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7ac8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f7ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7acc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f7accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7ad0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f7ad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7ad4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f7ad4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7ADCu;
        // 0x1f7ae0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7AE4u;
    // 0x1f7ae4: 0x0  nop
    ctx->pc = 0x1f7ae4u;
    // NOP
    ctx->pc = 0x1f7ae8u;
}
