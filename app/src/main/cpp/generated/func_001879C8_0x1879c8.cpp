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

// Function: func_001879C8
// Address: 0x1879c8 - 0x187a50
void func_001879C8_0x1879c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001879C8_0x1879c8");
#endif

    switch (ctx->pc) {
        case 0x1879f0u: goto label_1879f0;
        case 0x187a00u: goto label_187a00;
        case 0x187a20u: goto label_187a20;
        default: break;
    }

    ctx->pc = 0x1879c8u;

    // 0x1879c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1879c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1879cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1879ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1879d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1879d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1879d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1879d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1879d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1879d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1879dc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1879dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1879e0: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x1879e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1879e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1879e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1879e8: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x1879E8u;
    SET_GPR_U32(ctx, 31, 0x1879F0u);
    ctx->pc = 0x1879ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1879E8u;
    // 0x1879ec: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x1879E8u, 0x1879F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1879F0u;
label_1879f0:
    // 0x1879f0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1879f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1879f4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1879f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1879f8: 0x24423230  addiu       $v0, $v0, 0x3230
    ctx->pc = 0x1879f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12848));
    // 0x1879fc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1879fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_187a00:
    // 0x187a00: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x187a00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x187a04: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x187a04u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x187a08: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x187a08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x187a0c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x187a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x187a10: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x187a10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x187a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a18: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x187A18u;
    SET_GPR_U32(ctx, 31, 0x187A20u);
    ctx->pc = 0x187A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187A18u;
    // 0x187a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x187A18u, 0x187A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187A20u;
label_187a20:
    // 0x187a20: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x187a20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x187a24: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x187A24u;
    {
        const bool branch_taken_0x187a24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x187A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A24u;
        // 0x187a28: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a24) {
            ctx->pc = 0x187A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187a00;
        }
    }
    ctx->pc = 0x187A2Cu;
    // 0x187a2c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x187a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187a30: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x187a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187a34: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x187a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187a38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x187a38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187a3c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x187a3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187a44: 0x3e00008  jr          $ra
    ctx->pc = 0x187A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A44u;
        // 0x187a48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187A4Cu;
    // 0x187a4c: 0x0  nop
    ctx->pc = 0x187a4cu;
    // NOP
    ctx->pc = 0x187a50u;
}
