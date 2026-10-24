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

// Function: func_0016F698
// Address: 0x16f698 - 0x16f720
void func_0016F698_0x16f698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016F698_0x16f698");
#endif

    switch (ctx->pc) {
        case 0x16f6c0u: goto label_16f6c0;
        case 0x16f6d0u: goto label_16f6d0;
        case 0x16f6f0u: goto label_16f6f0;
        default: break;
    }

    ctx->pc = 0x16f698u;

    // 0x16f698: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16f698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16f69c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16f69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16f6a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16f6a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16f6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16f6a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16f6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16f6ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16f6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x16f6b0: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x16f6b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16f6b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f6b8: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x16F6B8u;
    SET_GPR_U32(ctx, 31, 0x16F6C0u);
    ctx->pc = 0x16F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F6B8u;
    // 0x16f6bc: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x16F6B8u, 0x16F6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F6C0u;
label_16f6c0:
    // 0x16f6c0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x16f6c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16f6c4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x16f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x16f6c8: 0x24420158  addiu       $v0, $v0, 0x158
    ctx->pc = 0x16f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 344));
    // 0x16f6cc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x16f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_16f6d0:
    // 0x16f6d0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x16f6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16f6d4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x16f6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16f6d8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x16f6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16f6dc: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x16f6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16f6e0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x16f6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x16f6e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6e8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x16F6E8u;
    SET_GPR_U32(ctx, 31, 0x16F6F0u);
    ctx->pc = 0x16F6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F6E8u;
    // 0x16f6ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x16F6E8u, 0x16F6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F6F0u;
label_16f6f0:
    // 0x16f6f0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x16f6f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x16f6f4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x16F6F4u;
    {
        const bool branch_taken_0x16f6f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x16F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6F4u;
        // 0x16f6f8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6f4) {
            ctx->pc = 0x16F6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f6d0;
        }
    }
    ctx->pc = 0x16F6FCu;
    // 0x16f6fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16f6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f700: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16f700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f704: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16f704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f708: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16f708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f70c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16f70cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f714: 0x3e00008  jr          $ra
    ctx->pc = 0x16F714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F714u;
        // 0x16f718: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F71Cu;
    // 0x16f71c: 0x0  nop
    ctx->pc = 0x16f71cu;
    // NOP
    ctx->pc = 0x16f720u;
}
