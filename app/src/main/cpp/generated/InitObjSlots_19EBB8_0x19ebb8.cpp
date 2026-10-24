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

// Function: InitObjSlots_19EBB8
// Address: 0x19ebb8 - 0x19ec40
void InitObjSlots_19EBB8_0x19ebb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjSlots_19EBB8_0x19ebb8");
#endif

    switch (ctx->pc) {
        case 0x19ebe0u: goto label_19ebe0;
        case 0x19ebf0u: goto label_19ebf0;
        case 0x19ec10u: goto label_19ec10;
        default: break;
    }

    ctx->pc = 0x19ebb8u;

    // 0x19ebb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19ebb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19ebbc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19ebbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19ebc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19ebc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ebc4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19ebc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19ebc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19ebc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19ebcc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19ebccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19ebd0: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x19ebd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19ebd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ebd8: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x19EBD8u;
    SET_GPR_U32(ctx, 31, 0x19EBE0u);
    ctx->pc = 0x19EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EBD8u;
    // 0x19ebdc: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x19EBD8u, 0x19EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBE0u;
label_19ebe0:
    // 0x19ebe0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19ebe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19ebe4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19ebe8: 0x24426608  addiu       $v0, $v0, 0x6608
    ctx->pc = 0x19ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26120));
    // 0x19ebec: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19ebf0:
    // 0x19ebf0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19ebf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19ebf4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19ebf4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19ebf8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19ebf8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19ebfc: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19ebfcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19ec00: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19ec00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19ec04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ec04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec08: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19EC08u;
    SET_GPR_U32(ctx, 31, 0x19EC10u);
    ctx->pc = 0x19EC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EC08u;
    // 0x19ec0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19EC08u, 0x19EC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC10u;
label_19ec10:
    // 0x19ec10: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19ec10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19ec14: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19EC14u;
    {
        const bool branch_taken_0x19ec14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC14u;
        // 0x19ec18: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec14) {
            ctx->pc = 0x19EBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ebf0;
        }
    }
    ctx->pc = 0x19EC1Cu;
    // 0x19ec1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19ec1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec20: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19ec20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ec24: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19ec24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ec28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19ec28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ec2c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19ec2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ec30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ec30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ec34: 0x3e00008  jr          $ra
    ctx->pc = 0x19EC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EC34u;
        // 0x19ec38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EC3Cu;
    // 0x19ec3c: 0x0  nop
    ctx->pc = 0x19ec3cu;
    // NOP
    ctx->pc = 0x19ec40u;
}
