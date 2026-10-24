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

// Function: InitVu0SlotArray5B_1A0608
// Address: 0x1a0608 - 0x1a0690
void InitVu0SlotArray5B_1A0608_0x1a0608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitVu0SlotArray5B_1A0608_0x1a0608");
#endif

    switch (ctx->pc) {
        case 0x1a0630u: goto label_1a0630;
        case 0x1a0640u: goto label_1a0640;
        case 0x1a0660u: goto label_1a0660;
        default: break;
    }

    ctx->pc = 0x1a0608u;

    // 0x1a0608: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a060c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a060cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a0610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0614: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a0614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a0618: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a0618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a061c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a061cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a0620: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1a0620u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a0624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0628: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x1A0628u;
    SET_GPR_U32(ctx, 31, 0x1A0630u);
    ctx->pc = 0x1A062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0628u;
    // 0x1a062c: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x1A0628u, 0x1A0630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0630u;
label_1a0630:
    // 0x1a0630: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1a0630u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0634: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a0634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a0638: 0x24426b80  addiu       $v0, $v0, 0x6B80
    ctx->pc = 0x1a0638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27520));
    // 0x1a063c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1a063cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1a0640:
    // 0x1a0640: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1a0640u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a0644: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1a0644u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a0648: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1a0648u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a064c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1a064cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a0650: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1a0650u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a0654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0658: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1A0658u;
    SET_GPR_U32(ctx, 31, 0x1A0660u);
    ctx->pc = 0x1A065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0658u;
    // 0x1a065c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A0658u, 0x1A0660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0660u;
label_1a0660:
    // 0x1a0660: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1a0660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1a0664: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A0664u;
    {
        const bool branch_taken_0x1a0664 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A0668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0664u;
        // 0x1a0668: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0664) {
            ctx->pc = 0x1A0640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0640;
        }
    }
    ctx->pc = 0x1A066Cu;
    // 0x1a066c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a066cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0670: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a0670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0674: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a0674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0678: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0678u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a067c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a067cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0684: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0684u;
        // 0x1a0688: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A068Cu;
    // 0x1a068c: 0x0  nop
    ctx->pc = 0x1a068cu;
    // NOP
    ctx->pc = 0x1a0690u;
}
