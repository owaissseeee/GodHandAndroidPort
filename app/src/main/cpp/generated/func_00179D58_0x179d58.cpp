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

// Function: func_00179D58
// Address: 0x179d58 - 0x179de0
void func_00179D58_0x179d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00179D58_0x179d58");
#endif

    switch (ctx->pc) {
        case 0x179d80u: goto label_179d80;
        case 0x179d90u: goto label_179d90;
        case 0x179db0u: goto label_179db0;
        default: break;
    }

    ctx->pc = 0x179d58u;

    // 0x179d58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x179d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x179d5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x179d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x179d60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179d64: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x179d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x179d68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x179d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x179d6c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x179d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x179d70: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x179d70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x179d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x179d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x179d78: 0xc071f66  jal         func_1C7D98
    ctx->pc = 0x179D78u;
    SET_GPR_U32(ctx, 31, 0x179D80u);
    ctx->pc = 0x179D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179D78u;
    // 0x179d7c: 0x26300660  addiu       $s0, $s1, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D98u, 0x179D78u, 0x179D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179D80u;
label_179d80:
    // 0x179d80: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x179d80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x179d84: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x179d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x179d88: 0x24421938  addiu       $v0, $v0, 0x1938
    ctx->pc = 0x179d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6456));
    // 0x179d8c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x179d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_179d90:
    // 0x179d90: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x179d90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x179d94: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x179d94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x179d98: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x179d98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x179d9c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x179d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x179da0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x179da0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x179da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179da8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x179DA8u;
    SET_GPR_U32(ctx, 31, 0x179DB0u);
    ctx->pc = 0x179DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179DA8u;
    // 0x179dac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x179DA8u, 0x179DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179DB0u;
label_179db0:
    // 0x179db0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x179db0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x179db4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x179DB4u;
    {
        const bool branch_taken_0x179db4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x179DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DB4u;
        // 0x179db8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179db4) {
            ctx->pc = 0x179D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179d90;
        }
    }
    ctx->pc = 0x179DBCu;
    // 0x179dbc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x179dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179dc0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x179dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179dc4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x179dc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179dc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x179dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179dcc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x179dccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x179DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DD4u;
        // 0x179dd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179DDCu;
    // 0x179ddc: 0x0  nop
    ctx->pc = 0x179ddcu;
    // NOP
    ctx->pc = 0x179de0u;
}
