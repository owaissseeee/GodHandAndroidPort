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

// Function: func_001747A8
// Address: 0x1747a8 - 0x174830
void func_001747A8_0x1747a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001747A8_0x1747a8");
#endif

    switch (ctx->pc) {
        case 0x1747d0u: goto label_1747d0;
        case 0x1747e0u: goto label_1747e0;
        case 0x174800u: goto label_174800;
        default: break;
    }

    ctx->pc = 0x1747a8u;

    // 0x1747a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1747a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1747ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1747acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1747b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1747b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1747b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1747b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1747b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1747bc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1747bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1747c0: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x1747c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1747c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1747c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1747c8: 0xc071f66  jal         func_1C7D98
    ctx->pc = 0x1747C8u;
    SET_GPR_U32(ctx, 31, 0x1747D0u);
    ctx->pc = 0x1747CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1747C8u;
    // 0x1747cc: 0x26300660  addiu       $s0, $s1, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D98u, 0x1747C8u, 0x1747D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1747D0u;
label_1747d0:
    // 0x1747d0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1747d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1747d4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1747d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1747d8: 0x244210d0  addiu       $v0, $v0, 0x10D0
    ctx->pc = 0x1747d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4304));
    // 0x1747dc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1747dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1747e0:
    // 0x1747e0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1747e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1747e4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1747e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1747e8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1747e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1747ec: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1747ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1747f0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1747f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1747f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1747f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747f8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1747F8u;
    SET_GPR_U32(ctx, 31, 0x174800u);
    ctx->pc = 0x1747FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1747F8u;
    // 0x1747fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1747F8u, 0x174800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174800u;
label_174800:
    // 0x174800: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x174800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x174804: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x174804u;
    {
        const bool branch_taken_0x174804 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x174808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174804u;
        // 0x174808: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174804) {
            ctx->pc = 0x1747E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1747e0;
        }
    }
    ctx->pc = 0x17480Cu;
    // 0x17480c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17480cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174810: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x174810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174814: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x174814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174818: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17481c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17481cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174824: 0x3e00008  jr          $ra
    ctx->pc = 0x174824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174824u;
        // 0x174828: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17482Cu;
    // 0x17482c: 0x0  nop
    ctx->pc = 0x17482cu;
    // NOP
    ctx->pc = 0x174830u;
}
