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

// Function: func_0019BBB8
// Address: 0x19bbb8 - 0x19bc40
void func_0019BBB8_0x19bbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019BBB8_0x19bbb8");
#endif

    switch (ctx->pc) {
        case 0x19bbe0u: goto label_19bbe0;
        case 0x19bbf0u: goto label_19bbf0;
        case 0x19bc10u: goto label_19bc10;
        default: break;
    }

    ctx->pc = 0x19bbb8u;

    // 0x19bbb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19bbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19bbbc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19bbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19bbc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19bbc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbc4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19bbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19bbc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19bbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19bbcc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19bbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19bbd0: 0x2412000b  addiu       $s2, $zero, 0xB
    ctx->pc = 0x19bbd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x19bbd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bbd8: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x19BBD8u;
    SET_GPR_U32(ctx, 31, 0x19BBE0u);
    ctx->pc = 0x19BBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BBD8u;
    // 0x19bbdc: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x19BBD8u, 0x19BBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BBE0u;
label_19bbe0:
    // 0x19bbe0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19bbe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19bbe4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19bbe8: 0x244258f0  addiu       $v0, $v0, 0x58F0
    ctx->pc = 0x19bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22768));
    // 0x19bbec: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19bbecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19bbf0:
    // 0x19bbf0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19bbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19bbf4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19bbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19bbf8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19bbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19bbfc: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19bbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19bc00: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19bc00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19bc04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc08: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19BC08u;
    SET_GPR_U32(ctx, 31, 0x19BC10u);
    ctx->pc = 0x19BC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC08u;
    // 0x19bc0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19BC08u, 0x19BC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC10u;
label_19bc10:
    // 0x19bc10: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19bc10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19bc14: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19BC14u;
    {
        const bool branch_taken_0x19bc14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC14u;
        // 0x19bc18: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc14) {
            ctx->pc = 0x19BBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bbf0;
        }
    }
    ctx->pc = 0x19BC1Cu;
    // 0x19bc1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19bc1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc20: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19bc20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bc24: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19bc24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19bc28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19bc28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19bc2c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19bc2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bc30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bc30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bc34: 0x3e00008  jr          $ra
    ctx->pc = 0x19BC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC34u;
        // 0x19bc38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BC3Cu;
    // 0x19bc3c: 0x0  nop
    ctx->pc = 0x19bc3cu;
    // NOP
    ctx->pc = 0x19bc40u;
}
