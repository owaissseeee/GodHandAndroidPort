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

// Function: func_001739F0
// Address: 0x1739f0 - 0x173a78
void func_001739F0_0x1739f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001739F0_0x1739f0");
#endif

    switch (ctx->pc) {
        case 0x173a18u: goto label_173a18;
        case 0x173a28u: goto label_173a28;
        case 0x173a48u: goto label_173a48;
        default: break;
    }

    ctx->pc = 0x1739f0u;

    // 0x1739f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1739f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1739f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1739f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1739f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1739f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1739fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1739fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x173a00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x173a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x173a04: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x173a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x173a08: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x173a08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x173a0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173a10: 0xc071f66  jal         func_1C7D98
    ctx->pc = 0x173A10u;
    SET_GPR_U32(ctx, 31, 0x173A18u);
    ctx->pc = 0x173A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A10u;
    // 0x173a14: 0x26300660  addiu       $s0, $s1, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D98u, 0x173A10u, 0x173A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A18u;
label_173a18:
    // 0x173a18: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x173a18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x173a1c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x173a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x173a20: 0x24420fe0  addiu       $v0, $v0, 0xFE0
    ctx->pc = 0x173a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x173a24: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x173a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_173a28:
    // 0x173a28: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x173a28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x173a2c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x173a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x173a30: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x173a30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x173a34: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x173a34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x173a38: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x173a38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x173a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a40: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x173A40u;
    SET_GPR_U32(ctx, 31, 0x173A48u);
    ctx->pc = 0x173A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173A40u;
    // 0x173a44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x173A40u, 0x173A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173A48u;
label_173a48:
    // 0x173a48: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x173a48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x173a4c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x173A4Cu;
    {
        const bool branch_taken_0x173a4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x173A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A4Cu;
        // 0x173a50: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173a4c) {
            ctx->pc = 0x173A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173a28;
        }
    }
    ctx->pc = 0x173A54u;
    // 0x173a54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x173a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173a58: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x173a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173a5c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x173a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173a60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x173a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173a64: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x173a64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173a68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x173A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173A6Cu;
        // 0x173a70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173A74u;
    // 0x173a74: 0x0  nop
    ctx->pc = 0x173a74u;
    // NOP
    ctx->pc = 0x173a78u;
}
