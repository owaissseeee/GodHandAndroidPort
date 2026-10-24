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

// Function: func_001A3A98
// Address: 0x1a3a98 - 0x1a3b20
void func_001A3A98_0x1a3a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A3A98_0x1a3a98");
#endif

    switch (ctx->pc) {
        case 0x1a3ac0u: goto label_1a3ac0;
        case 0x1a3ad0u: goto label_1a3ad0;
        case 0x1a3af0u: goto label_1a3af0;
        default: break;
    }

    ctx->pc = 0x1a3a98u;

    // 0x1a3a98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a3a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a3a9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a3a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a3aa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3aa4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a3aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a3aa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a3aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a3aac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a3aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a3ab0: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x1a3ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a3ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3ab8: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x1A3AB8u;
    SET_GPR_U32(ctx, 31, 0x1A3AC0u);
    ctx->pc = 0x1A3ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3AB8u;
    // 0x1a3abc: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x1A3AB8u, 0x1A3AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3AC0u;
label_1a3ac0:
    // 0x1a3ac0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1a3ac0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a3ac4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a3ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a3ac8: 0x24427060  addiu       $v0, $v0, 0x7060
    ctx->pc = 0x1a3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28768));
    // 0x1a3acc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1a3accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1a3ad0:
    // 0x1a3ad0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1a3ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a3ad4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1a3ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a3ad8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1a3ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a3adc: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1a3adcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a3ae0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1a3ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a3ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ae8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1A3AE8u;
    SET_GPR_U32(ctx, 31, 0x1A3AF0u);
    ctx->pc = 0x1A3AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3AE8u;
    // 0x1a3aec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A3AE8u, 0x1A3AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3AF0u;
label_1a3af0:
    // 0x1a3af0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1a3af0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1a3af4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A3AF4u;
    {
        const bool branch_taken_0x1a3af4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A3AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AF4u;
        // 0x1a3af8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3af4) {
            ctx->pc = 0x1A3AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3ad0;
        }
    }
    ctx->pc = 0x1A3AFCu;
    // 0x1a3afc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a3afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3b00: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a3b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3b04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a3b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3b08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a3b08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3b0c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a3b0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3b14: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B14u;
        // 0x1a3b18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3B1Cu;
    // 0x1a3b1c: 0x0  nop
    ctx->pc = 0x1a3b1cu;
    // NOP
    ctx->pc = 0x1a3b20u;
}
