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

// Function: func_0016F988
// Address: 0x16f988 - 0x16fa10
void func_0016F988_0x16f988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016F988_0x16f988");
#endif

    switch (ctx->pc) {
        case 0x16f9b0u: goto label_16f9b0;
        case 0x16f9c0u: goto label_16f9c0;
        case 0x16f9e0u: goto label_16f9e0;
        default: break;
    }

    ctx->pc = 0x16f988u;

    // 0x16f988: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16f988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16f98c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16f98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16f990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16f990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f994: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16f994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16f998: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16f998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16f99c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16f99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x16f9a0: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x16f9a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16f9a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f9a8: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x16F9A8u;
    SET_GPR_U32(ctx, 31, 0x16F9B0u);
    ctx->pc = 0x16F9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F9A8u;
    // 0x16f9ac: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x16F9A8u, 0x16F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F9B0u;
label_16f9b0:
    // 0x16f9b0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x16f9b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16f9b4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x16f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x16f9b8: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x16f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x16f9bc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x16f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_16f9c0:
    // 0x16f9c0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x16f9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16f9c4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x16f9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16f9c8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x16f9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16f9cc: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x16f9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16f9d0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x16f9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16f9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f9d8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x16F9D8u;
    SET_GPR_U32(ctx, 31, 0x16F9E0u);
    ctx->pc = 0x16F9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F9D8u;
    // 0x16f9dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x16F9D8u, 0x16F9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F9E0u;
label_16f9e0:
    // 0x16f9e0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x16f9e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x16f9e4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x16F9E4u;
    {
        const bool branch_taken_0x16f9e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x16F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9E4u;
        // 0x16f9e8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f9e4) {
            ctx->pc = 0x16F9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f9c0;
        }
    }
    ctx->pc = 0x16F9ECu;
    // 0x16f9ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16f9ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f9f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16f9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f9f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16f9f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f9f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16f9f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f9fc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16f9fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fa00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fa00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fa04: 0x3e00008  jr          $ra
    ctx->pc = 0x16FA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FA04u;
        // 0x16fa08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FA0Cu;
    // 0x16fa0c: 0x0  nop
    ctx->pc = 0x16fa0cu;
    // NOP
    ctx->pc = 0x16fa10u;
}
