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

// Function: func_001A8150
// Address: 0x1a8150 - 0x1a81d8
void func_001A8150_0x1a8150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A8150_0x1a8150");
#endif

    switch (ctx->pc) {
        case 0x1a8178u: goto label_1a8178;
        case 0x1a8188u: goto label_1a8188;
        case 0x1a81a8u: goto label_1a81a8;
        default: break;
    }

    ctx->pc = 0x1a8150u;

    // 0x1a8150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a8150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a8154: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a8154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a8158: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a8158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a815c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a815cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a8160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a8160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a8164: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a8164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a8168: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a8168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a816c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a816cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8170: 0xc06efae  jal         func_1BBEB8
    ctx->pc = 0x1A8170u;
    SET_GPR_U32(ctx, 31, 0x1A8178u);
    ctx->pc = 0x1A8174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8170u;
    // 0x1a8174: 0x26300650  addiu       $s0, $s1, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBEB8u, 0x1A8170u, 0x1A8178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8178u;
label_1a8178:
    // 0x1a8178: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1a8178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a817c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a817cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a8180: 0x24427690  addiu       $v0, $v0, 0x7690
    ctx->pc = 0x1a8180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30352));
    // 0x1a8184: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1a8184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1a8188:
    // 0x1a8188: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1a8188u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a818c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1a818cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a8190: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1a8190u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a8194: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1a8194u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a8198: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1a8198u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a819c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a819cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81a0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1A81A0u;
    SET_GPR_U32(ctx, 31, 0x1A81A8u);
    ctx->pc = 0x1A81A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A81A0u;
    // 0x1a81a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A81A0u, 0x1A81A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A81A8u;
label_1a81a8:
    // 0x1a81a8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1a81a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1a81ac: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A81ACu;
    {
        const bool branch_taken_0x1a81ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A81B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81ACu;
        // 0x1a81b0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a81ac) {
            ctx->pc = 0x1A8188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8188;
        }
    }
    ctx->pc = 0x1A81B4u;
    // 0x1a81b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a81b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a81b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a81bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a81bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a81c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a81c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a81c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a81c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a81c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a81c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a81cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A81CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A81D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81CCu;
        // 0x1a81d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A81CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A81D4u;
    // 0x1a81d4: 0x0  nop
    ctx->pc = 0x1a81d4u;
    // NOP
    ctx->pc = 0x1a81d8u;
}
