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

// Function: func_00176C30
// Address: 0x176c30 - 0x176cb8
void func_00176C30_0x176c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00176C30_0x176c30");
#endif

    switch (ctx->pc) {
        case 0x176c58u: goto label_176c58;
        case 0x176c68u: goto label_176c68;
        case 0x176c88u: goto label_176c88;
        default: break;
    }

    ctx->pc = 0x176c30u;

    // 0x176c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x176c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x176c34: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x176c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x176c38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x176c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176c3c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x176c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x176c40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x176c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x176c44: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x176c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x176c48: 0x24120012  addiu       $s2, $zero, 0x12
    ctx->pc = 0x176c48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x176c4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x176c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176c50: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x176C50u;
    SET_GPR_U32(ctx, 31, 0x176C58u);
    ctx->pc = 0x176C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C50u;
    // 0x176c54: 0x26300610  addiu       $s0, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x176C50u, 0x176C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176C58u;
label_176c58:
    // 0x176c58: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x176c58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x176c5c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x176c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x176c60: 0x244212e8  addiu       $v0, $v0, 0x12E8
    ctx->pc = 0x176c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4840));
    // 0x176c64: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x176c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_176c68:
    // 0x176c68: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x176c68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x176c6c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x176c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x176c70: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x176c70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x176c74: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x176c74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x176c78: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x176c78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x176c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176c80: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x176C80u;
    SET_GPR_U32(ctx, 31, 0x176C88u);
    ctx->pc = 0x176C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176C80u;
    // 0x176c84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x176C80u, 0x176C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176C88u;
label_176c88:
    // 0x176c88: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x176c88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x176c8c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x176C8Cu;
    {
        const bool branch_taken_0x176c8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x176C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176C8Cu;
        // 0x176c90: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c8c) {
            ctx->pc = 0x176C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176c68;
        }
    }
    ctx->pc = 0x176C94u;
    // 0x176c94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x176c94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176c98: 0xae200d30  sw          $zero, 0xD30($s1)
    ctx->pc = 0x176c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3376), GPR_U32(ctx, 0));
    // 0x176c9c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x176c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176ca0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x176ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176ca4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x176ca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176ca8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x176ca8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x176CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176CB0u;
        // 0x176cb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176CB8u;
}
