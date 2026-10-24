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

// Function: func_0019AE98
// Address: 0x19ae98 - 0x19af20
void func_0019AE98_0x19ae98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019AE98_0x19ae98");
#endif

    switch (ctx->pc) {
        case 0x19aec0u: goto label_19aec0;
        case 0x19aed0u: goto label_19aed0;
        case 0x19aef0u: goto label_19aef0;
        default: break;
    }

    ctx->pc = 0x19ae98u;

    // 0x19ae98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19ae98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19ae9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19ae9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19aea0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19aea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aea4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19aea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19aea8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19aea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19aeac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19aeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19aeb0: 0x2412000b  addiu       $s2, $zero, 0xB
    ctx->pc = 0x19aeb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x19aeb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19aeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19aeb8: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x19AEB8u;
    SET_GPR_U32(ctx, 31, 0x19AEC0u);
    ctx->pc = 0x19AEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AEB8u;
    // 0x19aebc: 0x26300610  addiu       $s0, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x19AEB8u, 0x19AEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AEC0u;
label_19aec0:
    // 0x19aec0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19aec0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19aec4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19aec8: 0x24425820  addiu       $v0, $v0, 0x5820
    ctx->pc = 0x19aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22560));
    // 0x19aecc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19aed0:
    // 0x19aed0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19aed0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19aed4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19aed4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19aed8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19aed8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19aedc: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19aedcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19aee0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19aee0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19aee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19aee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aee8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19AEE8u;
    SET_GPR_U32(ctx, 31, 0x19AEF0u);
    ctx->pc = 0x19AEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AEE8u;
    // 0x19aeec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19AEE8u, 0x19AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AEF0u;
label_19aef0:
    // 0x19aef0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19aef0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19aef4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19AEF4u;
    {
        const bool branch_taken_0x19aef4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEF4u;
        // 0x19aef8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aef4) {
            ctx->pc = 0x19AED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19aed0;
        }
    }
    ctx->pc = 0x19AEFCu;
    // 0x19aefc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19aefcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af00: 0xa2200a92  sb          $zero, 0xA92($s1)
    ctx->pc = 0x19af00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2706), (uint8_t)GPR_U32(ctx, 0));
    // 0x19af04: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19af04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19af08: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19af08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19af0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19af0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19af10: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19af10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19af14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19af14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19af18: 0x3e00008  jr          $ra
    ctx->pc = 0x19AF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF18u;
        // 0x19af1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AF20u;
}
