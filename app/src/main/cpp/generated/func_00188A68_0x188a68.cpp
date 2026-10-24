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

// Function: func_00188A68
// Address: 0x188a68 - 0x188af0
void func_00188A68_0x188a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00188A68_0x188a68");
#endif

    switch (ctx->pc) {
        case 0x188a90u: goto label_188a90;
        case 0x188aa0u: goto label_188aa0;
        case 0x188ac0u: goto label_188ac0;
        default: break;
    }

    ctx->pc = 0x188a68u;

    // 0x188a68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x188a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x188a6c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x188a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x188a70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x188a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188a74: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x188a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x188a78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188a7c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x188a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x188a80: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x188a80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x188a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188a88: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x188A88u;
    SET_GPR_U32(ctx, 31, 0x188A90u);
    ctx->pc = 0x188A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188A88u;
    // 0x188a8c: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x188A88u, 0x188A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188A90u;
label_188a90:
    // 0x188a90: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x188a90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188a94: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x188a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x188a98: 0x24423400  addiu       $v0, $v0, 0x3400
    ctx->pc = 0x188a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13312));
    // 0x188a9c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x188a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_188aa0:
    // 0x188aa0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x188aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188aa4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x188aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188aa8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x188aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188aac: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x188aacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188ab0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x188ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ab8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x188AB8u;
    SET_GPR_U32(ctx, 31, 0x188AC0u);
    ctx->pc = 0x188ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188AB8u;
    // 0x188abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x188AB8u, 0x188AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188AC0u;
label_188ac0:
    // 0x188ac0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x188ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x188ac4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x188AC4u;
    {
        const bool branch_taken_0x188ac4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x188AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AC4u;
        // 0x188ac8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ac4) {
            ctx->pc = 0x188AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188aa0;
        }
    }
    ctx->pc = 0x188ACCu;
    // 0x188acc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x188accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ad0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x188ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188ad4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x188ad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188ad8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188ad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188adc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x188adcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x188AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AE4u;
        // 0x188ae8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188AECu;
    // 0x188aec: 0x0  nop
    ctx->pc = 0x188aecu;
    // NOP
    ctx->pc = 0x188af0u;
}
