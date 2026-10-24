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

// Function: InitSlotVu0DataC_193C20
// Address: 0x193c20 - 0x193ca8
void InitSlotVu0DataC_193C20_0x193c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSlotVu0DataC_193C20_0x193c20");
#endif

    switch (ctx->pc) {
        case 0x193c48u: goto label_193c48;
        case 0x193c58u: goto label_193c58;
        case 0x193c78u: goto label_193c78;
        default: break;
    }

    ctx->pc = 0x193c20u;

    // 0x193c20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x193c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x193c24: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x193c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x193c28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x193c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c2c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x193c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x193c30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x193c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x193c34: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x193c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x193c38: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x193c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x193c3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193c40: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x193C40u;
    SET_GPR_U32(ctx, 31, 0x193C48u);
    ctx->pc = 0x193C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C40u;
    // 0x193c44: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x193C40u, 0x193C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193C48u;
label_193c48:
    // 0x193c48: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x193c48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193c4c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x193c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x193c50: 0x24424a48  addiu       $v0, $v0, 0x4A48
    ctx->pc = 0x193c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19016));
    // 0x193c54: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x193c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_193c58:
    // 0x193c58: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x193c58u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193c5c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x193c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193c60: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x193c60u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193c64: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x193c64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193c68: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x193c68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c70: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x193C70u;
    SET_GPR_U32(ctx, 31, 0x193C78u);
    ctx->pc = 0x193C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C70u;
    // 0x193c74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x193C70u, 0x193C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193C78u;
label_193c78:
    // 0x193c78: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x193c78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x193c7c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x193C7Cu;
    {
        const bool branch_taken_0x193c7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x193C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C7Cu;
        // 0x193c80: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c7c) {
            ctx->pc = 0x193C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193c58;
        }
    }
    ctx->pc = 0x193C84u;
    // 0x193c84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x193c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193c88: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x193c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193c8c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x193c8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193c90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x193c90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193c94: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x193c94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x193C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C9Cu;
        // 0x193ca0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193CA4u;
    // 0x193ca4: 0x0  nop
    ctx->pc = 0x193ca4u;
    // NOP
    ctx->pc = 0x193ca8u;
}
