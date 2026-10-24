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

// Function: func_0019AC18
// Address: 0x19ac18 - 0x19aca0
void func_0019AC18_0x19ac18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019AC18_0x19ac18");
#endif

    switch (ctx->pc) {
        case 0x19ac40u: goto label_19ac40;
        case 0x19ac50u: goto label_19ac50;
        case 0x19ac70u: goto label_19ac70;
        default: break;
    }

    ctx->pc = 0x19ac18u;

    // 0x19ac18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19ac18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19ac1c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19ac1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19ac20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19ac20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac24: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19ac24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19ac28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19ac28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19ac2c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19ac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19ac30: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x19ac30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19ac34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ac34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ac38: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x19AC38u;
    SET_GPR_U32(ctx, 31, 0x19AC40u);
    ctx->pc = 0x19AC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC38u;
    // 0x19ac3c: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x19AC38u, 0x19AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC40u;
label_19ac40:
    // 0x19ac40: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19ac40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19ac44: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19ac48: 0x24425718  addiu       $v0, $v0, 0x5718
    ctx->pc = 0x19ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22296));
    // 0x19ac4c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19ac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19ac50:
    // 0x19ac50: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19ac50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19ac54: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19ac54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19ac58: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19ac5c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19ac60: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19ac64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ac64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac68: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19AC68u;
    SET_GPR_U32(ctx, 31, 0x19AC70u);
    ctx->pc = 0x19AC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC68u;
    // 0x19ac6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19AC68u, 0x19AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC70u;
label_19ac70:
    // 0x19ac70: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19ac70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19ac74: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19AC74u;
    {
        const bool branch_taken_0x19ac74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC74u;
        // 0x19ac78: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac74) {
            ctx->pc = 0x19AC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ac50;
        }
    }
    ctx->pc = 0x19AC7Cu;
    // 0x19ac7c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19ac7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac80: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19ac80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ac84: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19ac84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ac88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19ac88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ac8c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19ac8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ac90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ac90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ac94: 0x3e00008  jr          $ra
    ctx->pc = 0x19AC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC94u;
        // 0x19ac98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AC9Cu;
    // 0x19ac9c: 0x0  nop
    ctx->pc = 0x19ac9cu;
    // NOP
    ctx->pc = 0x19aca0u;
}
