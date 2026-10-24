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

// Function: func_00188F80
// Address: 0x188f80 - 0x189008
void func_00188F80_0x188f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00188F80_0x188f80");
#endif

    switch (ctx->pc) {
        case 0x188fa8u: goto label_188fa8;
        case 0x188fb8u: goto label_188fb8;
        case 0x188fd8u: goto label_188fd8;
        default: break;
    }

    ctx->pc = 0x188f80u;

    // 0x188f80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x188f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x188f84: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x188f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x188f88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x188f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f8c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x188f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x188f90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188f94: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x188f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x188f98: 0x24120011  addiu       $s2, $zero, 0x11
    ctx->pc = 0x188f98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x188f9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188fa0: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x188FA0u;
    SET_GPR_U32(ctx, 31, 0x188FA8u);
    ctx->pc = 0x188FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188FA0u;
    // 0x188fa4: 0x26300610  addiu       $s0, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x188FA0u, 0x188FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188FA8u;
label_188fa8:
    // 0x188fa8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x188fa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188fac: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x188facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x188fb0: 0x24423608  addiu       $v0, $v0, 0x3608
    ctx->pc = 0x188fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13832));
    // 0x188fb4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x188fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_188fb8:
    // 0x188fb8: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x188fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188fbc: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x188fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188fc0: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x188fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188fc4: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x188fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188fc8: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x188fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188fd0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x188FD0u;
    SET_GPR_U32(ctx, 31, 0x188FD8u);
    ctx->pc = 0x188FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188FD0u;
    // 0x188fd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x188FD0u, 0x188FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188FD8u;
label_188fd8:
    // 0x188fd8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x188fd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x188fdc: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x188FDCu;
    {
        const bool branch_taken_0x188fdc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x188FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FDCu;
        // 0x188fe0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fdc) {
            ctx->pc = 0x188FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188fb8;
        }
    }
    ctx->pc = 0x188FE4u;
    // 0x188fe4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x188fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188fe8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x188fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188fec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x188fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188ff0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188ff4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x188ff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x188FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FFCu;
        // 0x189000: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189004u;
    // 0x189004: 0x0  nop
    ctx->pc = 0x189004u;
    // NOP
    ctx->pc = 0x189008u;
}
