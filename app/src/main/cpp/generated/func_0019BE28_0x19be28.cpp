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

// Function: func_0019BE28
// Address: 0x19be28 - 0x19beb0
void func_0019BE28_0x19be28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019BE28_0x19be28");
#endif

    switch (ctx->pc) {
        case 0x19be50u: goto label_19be50;
        case 0x19be60u: goto label_19be60;
        case 0x19be80u: goto label_19be80;
        default: break;
    }

    ctx->pc = 0x19be28u;

    // 0x19be28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19be28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19be2c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19be2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19be30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19be30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be34: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19be34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19be38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19be38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19be3c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19be3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19be40: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x19be40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19be44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19be44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19be48: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x19BE48u;
    SET_GPR_U32(ctx, 31, 0x19BE50u);
    ctx->pc = 0x19BE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE48u;
    // 0x19be4c: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x19BE48u, 0x19BE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE50u;
label_19be50:
    // 0x19be50: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19be50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19be54: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19be54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19be58: 0x244259d8  addiu       $v0, $v0, 0x59D8
    ctx->pc = 0x19be58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23000));
    // 0x19be5c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19be5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19be60:
    // 0x19be60: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19be60u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19be64: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19be64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19be68: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19be68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19be6c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19be6cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19be70: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19be70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19be74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19be74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be78: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19BE78u;
    SET_GPR_U32(ctx, 31, 0x19BE80u);
    ctx->pc = 0x19BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE78u;
    // 0x19be7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19BE78u, 0x19BE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE80u;
label_19be80:
    // 0x19be80: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19be80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19be84: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19BE84u;
    {
        const bool branch_taken_0x19be84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE84u;
        // 0x19be88: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be84) {
            ctx->pc = 0x19BE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19be60;
        }
    }
    ctx->pc = 0x19BE8Cu;
    // 0x19be8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19be8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be90: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19be90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19be94: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19be94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19be98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19be98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19be9c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19be9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bea4: 0x3e00008  jr          $ra
    ctx->pc = 0x19BEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEA4u;
        // 0x19bea8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BEACu;
    // 0x19beac: 0x0  nop
    ctx->pc = 0x19beacu;
    // NOP
    ctx->pc = 0x19beb0u;
}
