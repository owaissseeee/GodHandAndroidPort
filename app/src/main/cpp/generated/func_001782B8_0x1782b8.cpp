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

// Function: func_001782B8
// Address: 0x1782b8 - 0x178340
void func_001782B8_0x1782b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001782B8_0x1782b8");
#endif

    switch (ctx->pc) {
        case 0x1782e0u: goto label_1782e0;
        case 0x1782f0u: goto label_1782f0;
        case 0x178310u: goto label_178310;
        default: break;
    }

    ctx->pc = 0x1782b8u;

    // 0x1782b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1782b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1782bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1782bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1782c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1782c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1782c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1782c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1782c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1782cc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1782ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1782d0: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1782d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1782d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1782d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1782d8: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x1782D8u;
    SET_GPR_U32(ctx, 31, 0x1782E0u);
    ctx->pc = 0x1782DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1782D8u;
    // 0x1782dc: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x1782D8u, 0x1782E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1782E0u;
label_1782e0:
    // 0x1782e0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1782e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1782e4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1782e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1782e8: 0x244213c0  addiu       $v0, $v0, 0x13C0
    ctx->pc = 0x1782e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5056));
    // 0x1782ec: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1782ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1782f0:
    // 0x1782f0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1782f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1782f4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1782f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1782f8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1782f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1782fc: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1782fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178300: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x178300u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178308: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x178308u;
    SET_GPR_U32(ctx, 31, 0x178310u);
    ctx->pc = 0x17830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178308u;
    // 0x17830c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x178308u, 0x178310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178310u;
label_178310:
    // 0x178310: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x178310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x178314: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x178314u;
    {
        const bool branch_taken_0x178314 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x178318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178314u;
        // 0x178318: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178314) {
            ctx->pc = 0x1782F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1782f0;
        }
    }
    ctx->pc = 0x17831Cu;
    // 0x17831c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17831cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178320: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x178320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178324: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x178324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178328: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17832c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17832cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178334: 0x3e00008  jr          $ra
    ctx->pc = 0x178334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178334u;
        // 0x178338: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17833Cu;
    // 0x17833c: 0x0  nop
    ctx->pc = 0x17833cu;
    // NOP
    ctx->pc = 0x178340u;
}
