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

// Function: func_00186998
// Address: 0x186998 - 0x186a20
void func_00186998_0x186998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00186998_0x186998");
#endif

    switch (ctx->pc) {
        case 0x1869c0u: goto label_1869c0;
        case 0x1869d0u: goto label_1869d0;
        case 0x1869f0u: goto label_1869f0;
        default: break;
    }

    ctx->pc = 0x186998u;

    // 0x186998: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x186998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18699c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18699cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1869a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1869a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1869a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1869a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1869a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1869a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1869ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1869acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1869b0: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1869b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1869b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1869b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1869b8: 0xc071f66  jal         func_1C7D98
    ctx->pc = 0x1869B8u;
    SET_GPR_U32(ctx, 31, 0x1869C0u);
    ctx->pc = 0x1869BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1869B8u;
    // 0x1869bc: 0x26300660  addiu       $s0, $s1, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D98u, 0x1869B8u, 0x1869C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1869C0u;
label_1869c0:
    // 0x1869c0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1869c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1869c4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1869c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1869c8: 0x24423078  addiu       $v0, $v0, 0x3078
    ctx->pc = 0x1869c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12408));
    // 0x1869cc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1869ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1869d0:
    // 0x1869d0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1869d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1869d4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1869d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1869d8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1869d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1869dc: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1869dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1869e0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1869e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1869e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1869e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1869e8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1869E8u;
    SET_GPR_U32(ctx, 31, 0x1869F0u);
    ctx->pc = 0x1869ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1869E8u;
    // 0x1869ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1869E8u, 0x1869F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1869F0u;
label_1869f0:
    // 0x1869f0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1869f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1869f4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1869F4u;
    {
        const bool branch_taken_0x1869f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1869F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1869F4u;
        // 0x1869f8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1869f4) {
            ctx->pc = 0x1869D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1869d0;
        }
    }
    ctx->pc = 0x1869FCu;
    // 0x1869fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1869fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a00: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x186a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186a04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x186a04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186a08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x186a08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186a0c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x186a0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186a14: 0x3e00008  jr          $ra
    ctx->pc = 0x186A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A14u;
        // 0x186a18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186A1Cu;
    // 0x186a1c: 0x0  nop
    ctx->pc = 0x186a1cu;
    // NOP
    ctx->pc = 0x186a20u;
}
