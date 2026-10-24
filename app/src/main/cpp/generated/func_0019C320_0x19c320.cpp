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

// Function: func_0019C320
// Address: 0x19c320 - 0x19c3a8
void func_0019C320_0x19c320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019C320_0x19c320");
#endif

    switch (ctx->pc) {
        case 0x19c348u: goto label_19c348;
        case 0x19c358u: goto label_19c358;
        case 0x19c378u: goto label_19c378;
        default: break;
    }

    ctx->pc = 0x19c320u;

    // 0x19c320: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19c320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19c324: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19c324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19c328: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19c328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c32c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19c32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19c330: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19c330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19c334: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19c334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19c338: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x19c338u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19c33c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c340: 0xc06efae  jal         func_1BBEB8
    ctx->pc = 0x19C340u;
    SET_GPR_U32(ctx, 31, 0x19C348u);
    ctx->pc = 0x19C344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C340u;
    // 0x19c344: 0x26300650  addiu       $s0, $s1, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBEB8u, 0x19C340u, 0x19C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C348u;
label_19c348:
    // 0x19c348: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19c348u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c34c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19c350: 0x24425b90  addiu       $v0, $v0, 0x5B90
    ctx->pc = 0x19c350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23440));
    // 0x19c354: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19c354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19c358:
    // 0x19c358: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19c358u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19c35c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19c35cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19c360: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19c360u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19c364: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19c364u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19c368: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19c368u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19c36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c370: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19C370u;
    SET_GPR_U32(ctx, 31, 0x19C378u);
    ctx->pc = 0x19C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C370u;
    // 0x19c374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19C370u, 0x19C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C378u;
label_19c378:
    // 0x19c378: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19c378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19c37c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19C37Cu;
    {
        const bool branch_taken_0x19c37c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C37Cu;
        // 0x19c380: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c37c) {
            ctx->pc = 0x19C358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c358;
        }
    }
    ctx->pc = 0x19C384u;
    // 0x19c384: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19c384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c388: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19c388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c38c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19c38cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c390: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19c390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c394: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19c394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c39c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C39Cu;
        // 0x19c3a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C3A4u;
    // 0x19c3a4: 0x0  nop
    ctx->pc = 0x19c3a4u;
    // NOP
    ctx->pc = 0x19c3a8u;
}
