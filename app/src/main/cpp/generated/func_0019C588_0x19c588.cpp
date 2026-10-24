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

// Function: func_0019C588
// Address: 0x19c588 - 0x19c610
void func_0019C588_0x19c588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019C588_0x19c588");
#endif

    switch (ctx->pc) {
        case 0x19c5b0u: goto label_19c5b0;
        case 0x19c5c0u: goto label_19c5c0;
        case 0x19c5e0u: goto label_19c5e0;
        default: break;
    }

    ctx->pc = 0x19c588u;

    // 0x19c588: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19c588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19c58c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19c58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19c590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19c590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c594: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19c594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19c598: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19c598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19c59c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19c59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19c5a0: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x19c5a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19c5a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c5a8: 0xc071f66  jal         func_1C7D98
    ctx->pc = 0x19C5A8u;
    SET_GPR_U32(ctx, 31, 0x19C5B0u);
    ctx->pc = 0x19C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C5A8u;
    // 0x19c5ac: 0x26300660  addiu       $s0, $s1, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D98u, 0x19C5A8u, 0x19C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C5B0u;
label_19c5b0:
    // 0x19c5b0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19c5b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c5b4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19c5b8: 0x24425c78  addiu       $v0, $v0, 0x5C78
    ctx->pc = 0x19c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23672));
    // 0x19c5bc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19c5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19c5c0:
    // 0x19c5c0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19c5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19c5c4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19c5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19c5c8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19c5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19c5cc: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19c5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19c5d0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19c5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19c5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5d8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19C5D8u;
    SET_GPR_U32(ctx, 31, 0x19C5E0u);
    ctx->pc = 0x19C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C5D8u;
    // 0x19c5dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19C5D8u, 0x19C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C5E0u;
label_19c5e0:
    // 0x19c5e0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19c5e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19c5e4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19C5E4u;
    {
        const bool branch_taken_0x19c5e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5E4u;
        // 0x19c5e8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c5e4) {
            ctx->pc = 0x19C5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c5c0;
        }
    }
    ctx->pc = 0x19C5ECu;
    // 0x19c5ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19c5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19c5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c5f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19c5f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c5f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19c5f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c5fc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19c5fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c604: 0x3e00008  jr          $ra
    ctx->pc = 0x19C604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C604u;
        // 0x19c608: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C60Cu;
    // 0x19c60c: 0x0  nop
    ctx->pc = 0x19c60cu;
    // NOP
    ctx->pc = 0x19c610u;
}
