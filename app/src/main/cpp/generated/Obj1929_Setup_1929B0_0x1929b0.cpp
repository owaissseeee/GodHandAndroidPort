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

// Function: Obj1929_Setup_1929B0
// Address: 0x1929b0 - 0x192a38
void Obj1929_Setup_1929B0_0x1929b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj1929_Setup_1929B0_0x1929b0");
#endif

    switch (ctx->pc) {
        case 0x1929d8u: goto label_1929d8;
        case 0x1929e8u: goto label_1929e8;
        case 0x192a08u: goto label_192a08;
        default: break;
    }

    ctx->pc = 0x1929b0u;

    // 0x1929b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1929b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1929b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1929b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1929b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1929b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1929bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1929c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1929c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1929c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1929c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1929c8: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1929c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1929cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1929ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1929d0: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x1929D0u;
    SET_GPR_U32(ctx, 31, 0x1929D8u);
    ctx->pc = 0x1929D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1929D0u;
    // 0x1929d4: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x1929D0u, 0x1929D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1929D8u;
label_1929d8:
    // 0x1929d8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1929d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1929dc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1929dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1929e0: 0x244243f0  addiu       $v0, $v0, 0x43F0
    ctx->pc = 0x1929e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17392));
    // 0x1929e4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1929e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1929e8:
    // 0x1929e8: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1929e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1929ec: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1929ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1929f0: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1929f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1929f4: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1929f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1929f8: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1929f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1929fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1929fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a00: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x192A00u;
    SET_GPR_U32(ctx, 31, 0x192A08u);
    ctx->pc = 0x192A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192A00u;
    // 0x192a04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x192A00u, 0x192A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A08u;
label_192a08:
    // 0x192a08: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x192a08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x192a0c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x192A0Cu;
    {
        const bool branch_taken_0x192a0c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x192A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A0Cu;
        // 0x192a10: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192a0c) {
            ctx->pc = 0x1929E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1929e8;
        }
    }
    ctx->pc = 0x192A14u;
    // 0x192a14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x192a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a18: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x192a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192a1c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x192a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192a20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x192a20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192a24: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x192a24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x192A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192A2Cu;
        // 0x192a30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192A34u;
    // 0x192a34: 0x0  nop
    ctx->pc = 0x192a34u;
    // NOP
    ctx->pc = 0x192a38u;
}
