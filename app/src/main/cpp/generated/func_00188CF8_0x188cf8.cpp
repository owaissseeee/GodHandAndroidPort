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

// Function: func_00188CF8
// Address: 0x188cf8 - 0x188d80
void func_00188CF8_0x188cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00188CF8_0x188cf8");
#endif

    switch (ctx->pc) {
        case 0x188d20u: goto label_188d20;
        case 0x188d30u: goto label_188d30;
        case 0x188d50u: goto label_188d50;
        default: break;
    }

    ctx->pc = 0x188cf8u;

    // 0x188cf8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x188cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x188cfc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x188cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x188d00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x188d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d04: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x188d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x188d08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188d0c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x188d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x188d10: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x188d10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x188d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188d18: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x188D18u;
    SET_GPR_U32(ctx, 31, 0x188D20u);
    ctx->pc = 0x188D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188D18u;
    // 0x188d1c: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x188D18u, 0x188D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188D20u;
label_188d20:
    // 0x188d20: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x188d20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188d24: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x188d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x188d28: 0x244234e8  addiu       $v0, $v0, 0x34E8
    ctx->pc = 0x188d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13544));
    // 0x188d2c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x188d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_188d30:
    // 0x188d30: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x188d30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188d34: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x188d34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188d38: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x188d38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188d3c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x188d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188d40: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x188d40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x188d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d48: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x188D48u;
    SET_GPR_U32(ctx, 31, 0x188D50u);
    ctx->pc = 0x188D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188D48u;
    // 0x188d4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x188D48u, 0x188D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188D50u;
label_188d50:
    // 0x188d50: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x188d50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x188d54: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x188D54u;
    {
        const bool branch_taken_0x188d54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x188D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D54u;
        // 0x188d58: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d54) {
            ctx->pc = 0x188D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188d30;
        }
    }
    ctx->pc = 0x188D5Cu;
    // 0x188d5c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x188d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d60: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x188d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188d64: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x188d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188d68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188d68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188d6c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x188d6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188d74: 0x3e00008  jr          $ra
    ctx->pc = 0x188D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D74u;
        // 0x188d78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188D7Cu;
    // 0x188d7c: 0x0  nop
    ctx->pc = 0x188d7cu;
    // NOP
    ctx->pc = 0x188d80u;
}
