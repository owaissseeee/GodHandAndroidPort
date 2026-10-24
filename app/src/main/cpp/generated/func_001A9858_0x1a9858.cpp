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

// Function: func_001A9858
// Address: 0x1a9858 - 0x1a9938
void func_001A9858_0x1a9858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A9858_0x1a9858");
#endif

    switch (ctx->pc) {
        case 0x1a9878u: goto label_1a9878;
        case 0x1a9898u: goto label_1a9898;
        case 0x1a98b8u: goto label_1a98b8;
        case 0x1a9900u: goto label_1a9900;
        default: break;
    }

    ctx->pc = 0x1a9858u;

    // 0x1a9858: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a9858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a985c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a985cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a9860: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a9860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a9864: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a9864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a9868: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a9868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a986c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a986cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9870: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1A9870u;
    SET_GPR_U32(ctx, 31, 0x1A9878u);
    ctx->pc = 0x1A9874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9870u;
    // 0x1a9874: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1A9870u, 0x1A9878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9878u;
label_1a9878:
    // 0x1a9878: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1a9878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1a987c: 0x24637cf0  addiu       $v1, $v1, 0x7CF0
    ctx->pc = 0x1a987cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31984));
    // 0x1a9880: 0xae230214  sw          $v1, 0x214($s1)
    ctx->pc = 0x1a9880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 3));
    // 0x1a9884: 0xfa200630  sqc2        $vf0, 0x630($s1)
    ctx->pc = 0x1a9884u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1584), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a9888: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1a9888u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a988c: 0x26300640  addiu       $s0, $s1, 0x640
    ctx->pc = 0x1a988cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x1a9890: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1a9890u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a9894: 0x0  nop
    ctx->pc = 0x1a9894u;
    // NOP
label_1a9898:
    // 0x1a9898: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1a9898u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a989c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1a989cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a98a0: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1a98a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a98a4: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1a98a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a98a8: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1a98a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a98ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a98acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a98b0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1A98B0u;
    SET_GPR_U32(ctx, 31, 0x1A98B8u);
    ctx->pc = 0x1A98B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A98B0u;
    // 0x1a98b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A98B0u, 0x1A98B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A98B8u;
label_1a98b8:
    // 0x1a98b8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1a98b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1a98bc: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A98BCu;
    {
        const bool branch_taken_0x1a98bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A98C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A98BCu;
        // 0x1a98c0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a98bc) {
            ctx->pc = 0x1A9898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9898;
        }
    }
    ctx->pc = 0x1A98C4u;
    // 0x1a98c4: 0xfa2009b0  sqc2        $vf0, 0x9B0($s1)
    ctx->pc = 0x1a98c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2480), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a98c8: 0xfa2009c0  sqc2        $vf0, 0x9C0($s1)
    ctx->pc = 0x1a98c8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2496), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a98cc: 0x240204e2  addiu       $v0, $zero, 0x4E2
    ctx->pc = 0x1a98ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x1a98d0: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x1a98d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1a98d4: 0xae2209f4  sw          $v0, 0x9F4($s1)
    ctx->pc = 0x1a98d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2548), GPR_U32(ctx, 2));
    // 0x1a98d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a98d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a98dc: 0xae2309f8  sw          $v1, 0x9F8($s1)
    ctx->pc = 0x1a98dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2552), GPR_U32(ctx, 3));
    // 0x1a98e0: 0x26240614  addiu       $a0, $s1, 0x614
    ctx->pc = 0x1a98e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1556));
    // 0x1a98e4: 0xae2009d0  sw          $zero, 0x9D0($s1)
    ctx->pc = 0x1a98e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2512), GPR_U32(ctx, 0));
    // 0x1a98e8: 0xae2009d4  sw          $zero, 0x9D4($s1)
    ctx->pc = 0x1a98e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2516), GPR_U32(ctx, 0));
    // 0x1a98ec: 0xae2209ec  sw          $v0, 0x9EC($s1)
    ctx->pc = 0x1a98ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2540), GPR_U32(ctx, 2));
    // 0x1a98f0: 0xae2309f0  sw          $v1, 0x9F0($s1)
    ctx->pc = 0x1a98f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2544), GPR_U32(ctx, 3));
    // 0x1a98f4: 0xae200604  sw          $zero, 0x604($s1)
    ctx->pc = 0x1a98f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1540), GPR_U32(ctx, 0));
    // 0x1a98f8: 0xae200608  sw          $zero, 0x608($s1)
    ctx->pc = 0x1a98f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1544), GPR_U32(ctx, 0));
    // 0x1a98fc: 0x0  nop
    ctx->pc = 0x1a98fcu;
    // NOP
label_1a9900:
    // 0x1a9900: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a9900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a9904: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1a9904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1a9908: 0x0  nop
    ctx->pc = 0x1a9908u;
    // NOP
    // 0x1a990c: 0x0  nop
    ctx->pc = 0x1a990cu;
    // NOP
    // 0x1a9910: 0x4a1fffb  bgez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A9910u;
    {
        const bool branch_taken_0x1a9910 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1A9914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9910u;
        // 0x1a9914: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9910) {
            ctx->pc = 0x1A9900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9900;
        }
    }
    ctx->pc = 0x1A9918u;
    // 0x1a9918: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a9918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a991c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a991cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a9920: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a9920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a9924: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a9924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9928: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a9928u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a992c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a992cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9930: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9930u;
        // 0x1a9934: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9938u;
}
