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

// Function: func_001AE798
// Address: 0x1ae798 - 0x1ae8b0
void func_001AE798_0x1ae798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AE798_0x1ae798");
#endif

    switch (ctx->pc) {
        case 0x1ae7c0u: goto label_1ae7c0;
        case 0x1ae7d0u: goto label_1ae7d0;
        case 0x1ae7f0u: goto label_1ae7f0;
        case 0x1ae878u: goto label_1ae878;
        default: break;
    }

    ctx->pc = 0x1ae798u;

    // 0x1ae798: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ae798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ae79c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ae79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ae7a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ae7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ae7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ae7a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ae7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ae7ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ae7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ae7b0: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1ae7b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ae7b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae7b8: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1AE7B8u;
    SET_GPR_U32(ctx, 31, 0x1AE7C0u);
    ctx->pc = 0x1AE7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7B8u;
    // 0x1ae7bc: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1AE7B8u, 0x1AE7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7C0u;
label_1ae7c0:
    // 0x1ae7c0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1ae7c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae7c4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1ae7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1ae7c8: 0x24428090  addiu       $v0, $v0, -0x7F70
    ctx->pc = 0x1ae7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934672));
    // 0x1ae7cc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1ae7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1ae7d0:
    // 0x1ae7d0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1ae7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae7d4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1ae7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae7d8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1ae7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae7dc: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1ae7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae7e0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1ae7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7e8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1AE7E8u;
    SET_GPR_U32(ctx, 31, 0x1AE7F0u);
    ctx->pc = 0x1AE7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7E8u;
    // 0x1ae7ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1AE7E8u, 0x1AE7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7F0u;
label_1ae7f0:
    // 0x1ae7f0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1ae7f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1ae7f4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AE7F4u;
    {
        const bool branch_taken_0x1ae7f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1AE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7F4u;
        // 0x1ae7f8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae7f4) {
            ctx->pc = 0x1AE7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae7d0;
        }
    }
    ctx->pc = 0x1AE7FCu;
    // 0x1ae7fc: 0x26220990  addiu       $v0, $s1, 0x990
    ctx->pc = 0x1ae7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2448));
    // 0x1ae800: 0xfa2009e0  sqc2        $vf0, 0x9E0($s1)
    ctx->pc = 0x1ae800u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2528), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae804: 0xfa2009f0  sqc2        $vf0, 0x9F0($s1)
    ctx->pc = 0x1ae804u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2544), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae808: 0xfa200a00  sqc2        $vf0, 0xA00($s1)
    ctx->pc = 0x1ae808u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2560), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae80c: 0xfa200a10  sqc2        $vf0, 0xA10($s1)
    ctx->pc = 0x1ae80cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2576), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae810: 0xfa200a20  sqc2        $vf0, 0xA20($s1)
    ctx->pc = 0x1ae810u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2592), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae814: 0xfa200a30  sqc2        $vf0, 0xA30($s1)
    ctx->pc = 0x1ae814u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2608), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae818: 0xfa200a40  sqc2        $vf0, 0xA40($s1)
    ctx->pc = 0x1ae818u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2624), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae81c: 0xfa200a50  sqc2        $vf0, 0xA50($s1)
    ctx->pc = 0x1ae81cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2640), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae820: 0xfa200a60  sqc2        $vf0, 0xA60($s1)
    ctx->pc = 0x1ae820u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2656), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae824: 0xfa200a70  sqc2        $vf0, 0xA70($s1)
    ctx->pc = 0x1ae824u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2672), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae828: 0xfa200a80  sqc2        $vf0, 0xA80($s1)
    ctx->pc = 0x1ae828u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2688), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae82c: 0xfa200a90  sqc2        $vf0, 0xA90($s1)
    ctx->pc = 0x1ae82cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2704), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae830: 0xfa200aa0  sqc2        $vf0, 0xAA0($s1)
    ctx->pc = 0x1ae830u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2720), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae834: 0xfa200ab0  sqc2        $vf0, 0xAB0($s1)
    ctx->pc = 0x1ae834u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2736), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ae838: 0xa2200990  sb          $zero, 0x990($s1)
    ctx->pc = 0x1ae838u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2448), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae83c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ae83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae840: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x1ae840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    // 0x1ae844: 0x2623099c  addiu       $v1, $s1, 0x99C
    ctx->pc = 0x1ae844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2460));
    // 0x1ae848: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1ae848u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae84c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1ae84cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae850: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ae850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ae854: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1ae854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1ae858: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1ae858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1ae85c: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1ae85cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1ae860: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1ae860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1ae864: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1ae864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1ae868: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x1ae868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x1ae86c: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x1ae86cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x1ae870: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x1ae870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
    // 0x1ae874: 0x0  nop
    ctx->pc = 0x1ae874u;
    // NOP
label_1ae878:
    // 0x1ae878: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ae878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1ae87c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ae87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ae880: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x1ae880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ae884: 0x0  nop
    ctx->pc = 0x1ae884u;
    // NOP
    // 0x1ae888: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AE888u;
    {
        const bool branch_taken_0x1ae888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE888u;
        // 0x1ae88c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae888) {
            ctx->pc = 0x1AE878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae878;
        }
    }
    ctx->pc = 0x1AE890u;
    // 0x1ae890: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ae890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae894: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ae894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae898: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ae898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae89c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ae89cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae8a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ae8a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae8a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8A8u;
        // 0x1ae8ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE8B0u;
}
