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

// Function: InitObjSlots_192F68
// Address: 0x192f68 - 0x192ff0
void InitObjSlots_192F68_0x192f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjSlots_192F68_0x192f68");
#endif

    switch (ctx->pc) {
        case 0x192f90u: goto label_192f90;
        case 0x192fa0u: goto label_192fa0;
        case 0x192fc0u: goto label_192fc0;
        default: break;
    }

    ctx->pc = 0x192f68u;

    // 0x192f68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x192f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x192f6c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x192f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x192f70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x192f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192f74: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x192f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x192f78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x192f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x192f7c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x192f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x192f80: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x192f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192f88: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x192F88u;
    SET_GPR_U32(ctx, 31, 0x192F90u);
    ctx->pc = 0x192F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F88u;
    // 0x192f8c: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x192F88u, 0x192F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192F90u;
label_192f90:
    // 0x192f90: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x192f90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192f94: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x192f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x192f98: 0x244245c0  addiu       $v0, $v0, 0x45C0
    ctx->pc = 0x192f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17856));
    // 0x192f9c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x192f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_192fa0:
    // 0x192fa0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x192fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x192fa4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x192fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x192fa8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x192fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x192fac: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x192facu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x192fb0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x192fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x192fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fb8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x192FB8u;
    SET_GPR_U32(ctx, 31, 0x192FC0u);
    ctx->pc = 0x192FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192FB8u;
    // 0x192fbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x192FB8u, 0x192FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192FC0u;
label_192fc0:
    // 0x192fc0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x192fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x192fc4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x192FC4u;
    {
        const bool branch_taken_0x192fc4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x192FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192FC4u;
        // 0x192fc8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192fc4) {
            ctx->pc = 0x192FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192fa0;
        }
    }
    ctx->pc = 0x192FCCu;
    // 0x192fcc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x192fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fd0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x192fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192fd4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x192fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192fd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x192fd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192fdc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x192fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x192FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192FE4u;
        // 0x192fe8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192FECu;
    // 0x192fec: 0x0  nop
    ctx->pc = 0x192fecu;
    // NOP
    ctx->pc = 0x192ff0u;
}
