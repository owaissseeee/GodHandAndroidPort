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

// Function: func_001BDE50
// Address: 0x1bde50 - 0x1bded8
void func_001BDE50_0x1bde50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BDE50_0x1bde50");
#endif

    switch (ctx->pc) {
        case 0x1bde78u: goto label_1bde78;
        case 0x1bde88u: goto label_1bde88;
        case 0x1bdea8u: goto label_1bdea8;
        default: break;
    }

    ctx->pc = 0x1bde50u;

    // 0x1bde50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bde50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bde54: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bde54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1bde58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bde58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde5c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1bde5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1bde60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bde60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bde64: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1bde64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1bde68: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x1bde68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bde6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bde6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bde70: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1BDE70u;
    SET_GPR_U32(ctx, 31, 0x1BDE78u);
    ctx->pc = 0x1BDE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE70u;
    // 0x1bde74: 0x26300600  addiu       $s0, $s1, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1BDE70u, 0x1BDE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE78u;
label_1bde78:
    // 0x1bde78: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1bde78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bde7c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1bde7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1bde80: 0x244294f0  addiu       $v0, $v0, -0x6B10
    ctx->pc = 0x1bde80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939888));
    // 0x1bde84: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1bde84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1bde88:
    // 0x1bde88: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1bde88u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bde8c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1bde8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bde90: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1bde90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bde94: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1bde94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bde98: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1bde98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bde9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bde9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdea0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1BDEA0u;
    SET_GPR_U32(ctx, 31, 0x1BDEA8u);
    ctx->pc = 0x1BDEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDEA0u;
    // 0x1bdea4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1BDEA0u, 0x1BDEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDEA8u;
label_1bdea8:
    // 0x1bdea8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1bdea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1bdeac: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1BDEACu;
    {
        const bool branch_taken_0x1bdeac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1BDEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEACu;
        // 0x1bdeb0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdeac) {
            ctx->pc = 0x1BDE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bde88;
        }
    }
    ctx->pc = 0x1BDEB4u;
    // 0x1bdeb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1bdeb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdeb8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1bdeb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bdebc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bdebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bdec0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bdec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bdec4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1bdec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdecc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDECCu;
        // 0x1bded0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDED4u;
    // 0x1bded4: 0x0  nop
    ctx->pc = 0x1bded4u;
    // NOP
    ctx->pc = 0x1bded8u;
}
