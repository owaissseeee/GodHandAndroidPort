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

// Function: InitObjSlots_191AB0
// Address: 0x191ab0 - 0x191b38
void InitObjSlots_191AB0_0x191ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjSlots_191AB0_0x191ab0");
#endif

    switch (ctx->pc) {
        case 0x191ad8u: goto label_191ad8;
        case 0x191ae8u: goto label_191ae8;
        case 0x191b08u: goto label_191b08;
        default: break;
    }

    ctx->pc = 0x191ab0u;

    // 0x191ab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x191ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x191ab4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x191ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x191ab8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x191ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191abc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x191abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x191ac0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x191ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x191ac4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x191ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x191ac8: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x191ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x191acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191ad0: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x191AD0u;
    SET_GPR_U32(ctx, 31, 0x191AD8u);
    ctx->pc = 0x191AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191AD0u;
    // 0x191ad4: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x191AD0u, 0x191AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191AD8u;
label_191ad8:
    // 0x191ad8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x191ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x191adc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x191adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x191ae0: 0x24424040  addiu       $v0, $v0, 0x4040
    ctx->pc = 0x191ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16448));
    // 0x191ae4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x191ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_191ae8:
    // 0x191ae8: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x191ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x191aec: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x191aecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x191af0: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x191af0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x191af4: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x191af4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x191af8: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x191af8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x191afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191b00: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x191B00u;
    SET_GPR_U32(ctx, 31, 0x191B08u);
    ctx->pc = 0x191B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191B00u;
    // 0x191b04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x191B00u, 0x191B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191B08u;
label_191b08:
    // 0x191b08: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x191b08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x191b0c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x191B0Cu;
    {
        const bool branch_taken_0x191b0c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x191B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B0Cu;
        // 0x191b10: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b0c) {
            ctx->pc = 0x191AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191ae8;
        }
    }
    ctx->pc = 0x191B14u;
    // 0x191b14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x191b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191b18: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x191b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191b1c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x191b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191b20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x191b20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191b24: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x191b24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x191B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B2Cu;
        // 0x191b30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191B34u;
    // 0x191b34: 0x0  nop
    ctx->pc = 0x191b34u;
    // NOP
    ctx->pc = 0x191b38u;
}
