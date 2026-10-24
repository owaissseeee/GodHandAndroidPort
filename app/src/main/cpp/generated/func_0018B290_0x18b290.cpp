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

// Function: func_0018B290
// Address: 0x18b290 - 0x18b318
void func_0018B290_0x18b290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018B290_0x18b290");
#endif

    switch (ctx->pc) {
        case 0x18b2b8u: goto label_18b2b8;
        case 0x18b2c8u: goto label_18b2c8;
        case 0x18b2e8u: goto label_18b2e8;
        default: break;
    }

    ctx->pc = 0x18b290u;

    // 0x18b290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18b290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18b294: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18b294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18b298: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18b298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b29c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18b29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18b2a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18b2a4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18b2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18b2a8: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x18b2a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18b2ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b2b0: 0xc071f66  jal         func_1C7D98
    ctx->pc = 0x18B2B0u;
    SET_GPR_U32(ctx, 31, 0x18B2B8u);
    ctx->pc = 0x18B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B2B0u;
    // 0x18b2b4: 0x26300660  addiu       $s0, $s1, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D98u, 0x18B2B0u, 0x18B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B2B8u;
label_18b2b8:
    // 0x18b2b8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x18b2b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18b2bc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18b2c0: 0x244237e8  addiu       $v0, $v0, 0x37E8
    ctx->pc = 0x18b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14312));
    // 0x18b2c4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x18b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_18b2c8:
    // 0x18b2c8: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x18b2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18b2cc: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x18b2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18b2d0: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x18b2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18b2d4: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x18b2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18b2d8: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x18b2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18b2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2e0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x18B2E0u;
    SET_GPR_U32(ctx, 31, 0x18B2E8u);
    ctx->pc = 0x18B2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B2E0u;
    // 0x18b2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18B2E0u, 0x18B2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B2E8u;
label_18b2e8:
    // 0x18b2e8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x18b2e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x18b2ec: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x18B2ECu;
    {
        const bool branch_taken_0x18b2ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x18B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B2ECu;
        // 0x18b2f0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b2ec) {
            ctx->pc = 0x18B2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b2c8;
        }
    }
    ctx->pc = 0x18B2F4u;
    // 0x18b2f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18b2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b2f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18b2f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b2fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18b2fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b300: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b300u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b304: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18b304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b30c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B30Cu;
        // 0x18b310: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B314u;
    // 0x18b314: 0x0  nop
    ctx->pc = 0x18b314u;
    // NOP
    ctx->pc = 0x18b318u;
}
