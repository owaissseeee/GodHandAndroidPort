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

// Function: func_00178D30
// Address: 0x178d30 - 0x178db8
void func_00178D30_0x178d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178D30_0x178d30");
#endif

    switch (ctx->pc) {
        case 0x178d58u: goto label_178d58;
        case 0x178d68u: goto label_178d68;
        case 0x178d88u: goto label_178d88;
        default: break;
    }

    ctx->pc = 0x178d30u;

    // 0x178d30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x178d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x178d34: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x178d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x178d38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178d38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d3c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x178d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x178d40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x178d44: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x178d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x178d48: 0x24120011  addiu       $s2, $zero, 0x11
    ctx->pc = 0x178d48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x178d4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178d50: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x178D50u;
    SET_GPR_U32(ctx, 31, 0x178D58u);
    ctx->pc = 0x178D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178D50u;
    // 0x178d54: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x178D50u, 0x178D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D58u;
label_178d58:
    // 0x178d58: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x178d58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178d5c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x178d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x178d60: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x178d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x178d64: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x178d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_178d68:
    // 0x178d68: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x178d68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178d6c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x178d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178d70: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x178d70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178d74: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x178d74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178d78: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x178d78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d80: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x178D80u;
    SET_GPR_U32(ctx, 31, 0x178D88u);
    ctx->pc = 0x178D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178D80u;
    // 0x178d84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x178D80u, 0x178D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178D88u;
label_178d88:
    // 0x178d88: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x178d88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x178d8c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x178D8Cu;
    {
        const bool branch_taken_0x178d8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x178D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D8Cu;
        // 0x178d90: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d8c) {
            ctx->pc = 0x178D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178d68;
        }
    }
    ctx->pc = 0x178D94u;
    // 0x178d94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x178d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178d98: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x178d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178d9c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x178d9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178da0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178da4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x178da4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178da8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178dac: 0x3e00008  jr          $ra
    ctx->pc = 0x178DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DACu;
        // 0x178db0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178DB4u;
    // 0x178db4: 0x0  nop
    ctx->pc = 0x178db4u;
    // NOP
    ctx->pc = 0x178db8u;
}
