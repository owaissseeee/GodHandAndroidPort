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

// Function: func_00181638
// Address: 0x181638 - 0x1816c0
void func_00181638_0x181638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00181638_0x181638");
#endif

    switch (ctx->pc) {
        case 0x181660u: goto label_181660;
        case 0x181670u: goto label_181670;
        case 0x181690u: goto label_181690;
        default: break;
    }

    ctx->pc = 0x181638u;

    // 0x181638: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x181638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18163c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18163cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x181640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x181640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181644: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x181644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x181648: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x181648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18164c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18164cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x181650: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x181650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181658: 0xc06efae  jal         func_1BBEB8
    ctx->pc = 0x181658u;
    SET_GPR_U32(ctx, 31, 0x181660u);
    ctx->pc = 0x18165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181658u;
    // 0x18165c: 0x26300650  addiu       $s0, $s1, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBEB8u, 0x181658u, 0x181660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181660u;
label_181660:
    // 0x181660: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x181660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x181664: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x181664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x181668: 0x24422770  addiu       $v0, $v0, 0x2770
    ctx->pc = 0x181668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10096));
    // 0x18166c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x18166cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_181670:
    // 0x181670: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x181670u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x181674: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x181674u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x181678: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x181678u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18167c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x18167cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x181680: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x181680u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x181684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181688: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x181688u;
    SET_GPR_U32(ctx, 31, 0x181690u);
    ctx->pc = 0x18168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181688u;
    // 0x18168c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x181688u, 0x181690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181690u;
label_181690:
    // 0x181690: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x181690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x181694: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x181694u;
    {
        const bool branch_taken_0x181694 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x181698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181694u;
        // 0x181698: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181694) {
            ctx->pc = 0x181670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181670;
        }
    }
    ctx->pc = 0x18169Cu;
    // 0x18169c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18169cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816a0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1816a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1816a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1816a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1816a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1816a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1816ac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1816acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1816b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1816b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1816b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1816B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1816B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816B4u;
        // 0x1816b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1816B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1816BCu;
    // 0x1816bc: 0x0  nop
    ctx->pc = 0x1816bcu;
    // NOP
    ctx->pc = 0x1816c0u;
}
