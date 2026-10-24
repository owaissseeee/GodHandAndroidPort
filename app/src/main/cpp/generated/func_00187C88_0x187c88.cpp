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

// Function: func_00187C88
// Address: 0x187c88 - 0x187d10
void func_00187C88_0x187c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00187C88_0x187c88");
#endif

    switch (ctx->pc) {
        case 0x187cb0u: goto label_187cb0;
        case 0x187cc0u: goto label_187cc0;
        case 0x187ce0u: goto label_187ce0;
        default: break;
    }

    ctx->pc = 0x187c88u;

    // 0x187c88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x187c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x187c8c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x187c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x187c90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x187c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c94: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x187c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x187c98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x187c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x187c9c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x187c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x187ca0: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x187ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x187ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187ca8: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x187CA8u;
    SET_GPR_U32(ctx, 31, 0x187CB0u);
    ctx->pc = 0x187CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187CA8u;
    // 0x187cac: 0x26300610  addiu       $s0, $s1, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x187CA8u, 0x187CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187CB0u;
label_187cb0:
    // 0x187cb0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x187cb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x187cb4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x187cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x187cb8: 0x24423338  addiu       $v0, $v0, 0x3338
    ctx->pc = 0x187cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13112));
    // 0x187cbc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x187cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_187cc0:
    // 0x187cc0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x187cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x187cc4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x187cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x187cc8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x187cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x187ccc: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x187cccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x187cd0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x187cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x187cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187cd8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x187CD8u;
    SET_GPR_U32(ctx, 31, 0x187CE0u);
    ctx->pc = 0x187CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187CD8u;
    // 0x187cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x187CD8u, 0x187CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187CE0u;
label_187ce0:
    // 0x187ce0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x187ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x187ce4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x187CE4u;
    {
        const bool branch_taken_0x187ce4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x187CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CE4u;
        // 0x187ce8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ce4) {
            ctx->pc = 0x187CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187cc0;
        }
    }
    ctx->pc = 0x187CECu;
    // 0x187cec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x187cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187cf0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x187cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187cf4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x187cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187cf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x187cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187cfc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x187cfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187d04: 0x3e00008  jr          $ra
    ctx->pc = 0x187D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187D04u;
        // 0x187d08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187D0Cu;
    // 0x187d0c: 0x0  nop
    ctx->pc = 0x187d0cu;
    // NOP
    ctx->pc = 0x187d10u;
}
