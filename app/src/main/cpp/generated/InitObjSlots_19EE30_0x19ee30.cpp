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

// Function: InitObjSlots_19EE30
// Address: 0x19ee30 - 0x19eeb8
void InitObjSlots_19EE30_0x19ee30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjSlots_19EE30_0x19ee30");
#endif

    switch (ctx->pc) {
        case 0x19ee58u: goto label_19ee58;
        case 0x19ee68u: goto label_19ee68;
        case 0x19ee88u: goto label_19ee88;
        default: break;
    }

    ctx->pc = 0x19ee30u;

    // 0x19ee30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19ee30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19ee34: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19ee34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19ee38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19ee38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee3c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19ee3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19ee40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19ee40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19ee44: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19ee44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19ee48: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x19ee48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19ee4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ee4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ee50: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x19EE50u;
    SET_GPR_U32(ctx, 31, 0x19EE58u);
    ctx->pc = 0x19EE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EE50u;
    // 0x19ee54: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x19EE50u, 0x19EE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EE58u;
label_19ee58:
    // 0x19ee58: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19ee58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19ee5c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19ee60: 0x244266f0  addiu       $v0, $v0, 0x66F0
    ctx->pc = 0x19ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26352));
    // 0x19ee64: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19ee64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19ee68:
    // 0x19ee68: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19ee68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19ee6c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19ee6cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19ee70: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19ee70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19ee74: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19ee74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19ee78: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19ee78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19ee7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ee7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee80: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19EE80u;
    SET_GPR_U32(ctx, 31, 0x19EE88u);
    ctx->pc = 0x19EE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EE80u;
    // 0x19ee84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19EE80u, 0x19EE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EE88u;
label_19ee88:
    // 0x19ee88: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19ee88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19ee8c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19EE8Cu;
    {
        const bool branch_taken_0x19ee8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19EE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EE8Cu;
        // 0x19ee90: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ee8c) {
            ctx->pc = 0x19EE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ee68;
        }
    }
    ctx->pc = 0x19EE94u;
    // 0x19ee94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19ee94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ee98: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19ee98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ee9c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19ee9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19eea0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19eea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19eea4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19eea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19eea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19eea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19eeac: 0x3e00008  jr          $ra
    ctx->pc = 0x19EEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EEACu;
        // 0x19eeb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EEB4u;
    // 0x19eeb4: 0x0  nop
    ctx->pc = 0x19eeb4u;
    // NOP
    ctx->pc = 0x19eeb8u;
}
