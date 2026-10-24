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

// Function: func_00377A28
// Address: 0x377a28 - 0x377ac0
void func_00377A28_0x377a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00377A28_0x377a28");
#endif

    switch (ctx->pc) {
        case 0x377a50u: goto label_377a50;
        case 0x377a84u: goto label_377a84;
        default: break;
    }

    ctx->pc = 0x377a28u;

    // 0x377a28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x377a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x377a2c: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x377a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x377a30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x377a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x377a34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x377a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x377a38: 0x2450cf20  addiu       $s0, $v0, -0x30E0
    ctx->pc = 0x377a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x377a3c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x377a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x377a40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x377a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377a48: 0x26120f00  addiu       $s2, $s0, 0xF00
    ctx->pc = 0x377a48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3840));
    // 0x377a4c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x377a4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x76CF20u));
label_377a50:
    // 0x377a50: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x377A50u;
    {
        const bool branch_taken_0x377a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x377a50) {
            ctx->pc = 0x377A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377A50u;
            // 0x377a54: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377A88u;
            goto label_377a88;
        }
    }
    ctx->pc = 0x377A58u;
    // 0x377a58: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x377a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x377a5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x377a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x377a60: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x377A60u;
    {
        const bool branch_taken_0x377a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x377a60) {
            ctx->pc = 0x377A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377A60u;
            // 0x377a64: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377A88u;
            goto label_377a88;
        }
    }
    ctx->pc = 0x377A68u;
    // 0x377a68: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x377a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x377a6c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x377a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x377a70: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x377A70u;
    {
        const bool branch_taken_0x377a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x377a70) {
            ctx->pc = 0x377A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377A70u;
            // 0x377a74: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377A88u;
            goto label_377a88;
        }
    }
    ctx->pc = 0x377A78u;
    // 0x377a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x377a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377a7c: 0xc0df62e  jal         func_37D8B8
    ctx->pc = 0x377A7Cu;
    SET_GPR_U32(ctx, 31, 0x377A84u);
    ctx->pc = 0x377A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377A7Cu;
    // 0x377a80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D8B8u, 0x377A7Cu, 0x377A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377A84u;
label_377a84:
    // 0x377a84: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x377a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_377a88:
    // 0x377a88: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x377a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x377a8c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x377A8Cu;
    {
        const bool branch_taken_0x377a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x377a8c) {
            ctx->pc = 0x377A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377A8Cu;
            // 0x377a90: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377a50;
        }
    }
    ctx->pc = 0x377A94u;
    // 0x377a94: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x377a94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x377a98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x377a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x377a9c: 0xa6230014  sh          $v1, 0x14($s1)
    ctx->pc = 0x377a9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x377aa0: 0x34420028  ori         $v0, $v0, 0x28
    ctx->pc = 0x377aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40);
    // 0x377aa4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x377aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377aa8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x377aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x377aac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x377aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377ab0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x377ab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x377AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377AB8u;
        // 0x377abc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377AC0u;
}
