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

// Function: func_00171C90
// Address: 0x171c90 - 0x171d20
void func_00171C90_0x171c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00171C90_0x171c90");
#endif

    switch (ctx->pc) {
        case 0x171cb8u: goto label_171cb8;
        case 0x171cc8u: goto label_171cc8;
        case 0x171ce8u: goto label_171ce8;
        default: break;
    }

    ctx->pc = 0x171c90u;

    // 0x171c90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x171c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x171c94: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x171c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x171c98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x171c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171c9c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x171c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x171ca0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x171ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x171ca4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x171ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x171ca8: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x171ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x171cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171cb0: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x171CB0u;
    SET_GPR_U32(ctx, 31, 0x171CB8u);
    ctx->pc = 0x171CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171CB0u;
    // 0x171cb4: 0x26300610  addiu       $s0, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x171CB0u, 0x171CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171CB8u;
label_171cb8:
    // 0x171cb8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x171cb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x171cbc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x171cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x171cc0: 0x24420ef0  addiu       $v0, $v0, 0xEF0
    ctx->pc = 0x171cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3824));
    // 0x171cc4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x171cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_171cc8:
    // 0x171cc8: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x171cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x171ccc: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x171cccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x171cd0: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x171cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x171cd4: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x171cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x171cd8: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x171cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x171cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ce0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x171CE0u;
    SET_GPR_U32(ctx, 31, 0x171CE8u);
    ctx->pc = 0x171CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171CE0u;
    // 0x171ce4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x171CE0u, 0x171CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171CE8u;
label_171ce8:
    // 0x171ce8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x171ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x171cec: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x171CECu;
    {
        const bool branch_taken_0x171cec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x171CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171CECu;
        // 0x171cf0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171cec) {
            ctx->pc = 0x171CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171cc8;
        }
    }
    ctx->pc = 0x171CF4u;
    // 0x171cf4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x171cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171cf8: 0xae200d90  sw          $zero, 0xD90($s1)
    ctx->pc = 0x171cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3472), GPR_U32(ctx, 0));
    // 0x171cfc: 0xae200da8  sw          $zero, 0xDA8($s1)
    ctx->pc = 0x171cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3496), GPR_U32(ctx, 0));
    // 0x171d00: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x171d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171d04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x171d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171d08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x171d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171d0c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x171d0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171d14: 0x3e00008  jr          $ra
    ctx->pc = 0x171D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D14u;
        // 0x171d18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171D1Cu;
    // 0x171d1c: 0x0  nop
    ctx->pc = 0x171d1cu;
    // NOP
    ctx->pc = 0x171d20u;
}
