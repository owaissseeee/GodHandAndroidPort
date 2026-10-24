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

// Function: func_00183848
// Address: 0x183848 - 0x1838d8
void func_00183848_0x183848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00183848_0x183848");
#endif

    switch (ctx->pc) {
        case 0x183870u: goto label_183870;
        case 0x183880u: goto label_183880;
        case 0x1838a0u: goto label_1838a0;
        default: break;
    }

    ctx->pc = 0x183848u;

    // 0x183848: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x183848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18384c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18384cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x183850: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x183850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183854: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x183854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x183858: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x183858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18385c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18385cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x183860: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x183860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x183864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183868: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x183868u;
    SET_GPR_U32(ctx, 31, 0x183870u);
    ctx->pc = 0x18386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183868u;
    // 0x18386c: 0x26300670  addiu       $s0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x183868u, 0x183870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183870u;
label_183870:
    // 0x183870: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x183870u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x183874: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x183874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x183878: 0x24422eb8  addiu       $v0, $v0, 0x2EB8
    ctx->pc = 0x183878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11960));
    // 0x18387c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x18387cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_183880:
    // 0x183880: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x183880u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x183884: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x183884u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x183888: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x183888u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18388c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x18388cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x183890: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x183890u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x183894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183898: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x183898u;
    SET_GPR_U32(ctx, 31, 0x1838A0u);
    ctx->pc = 0x18389Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183898u;
    // 0x18389c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x183898u, 0x1838A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1838A0u;
label_1838a0:
    // 0x1838a0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1838a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1838a4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1838A4u;
    {
        const bool branch_taken_0x1838a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1838A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838A4u;
        // 0x1838a8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1838a4) {
            ctx->pc = 0x183880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183880;
        }
    }
    ctx->pc = 0x1838ACu;
    // 0x1838ac: 0xfa200df0  sqc2        $vf0, 0xDF0($s1)
    ctx->pc = 0x1838acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 3568), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1838b0: 0xfa200e00  sqc2        $vf0, 0xE00($s1)
    ctx->pc = 0x1838b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 3584), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1838b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1838b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1838b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1838bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1838bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1838c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1838c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1838c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1838c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1838c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1838c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1838cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1838CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1838D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838CCu;
        // 0x1838d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1838CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1838D4u;
    // 0x1838d4: 0x0  nop
    ctx->pc = 0x1838d4u;
    // NOP
    ctx->pc = 0x1838d8u;
}
