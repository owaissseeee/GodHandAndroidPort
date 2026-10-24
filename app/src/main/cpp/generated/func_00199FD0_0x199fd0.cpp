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

// Function: func_00199FD0
// Address: 0x199fd0 - 0x19a058
void func_00199FD0_0x199fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00199FD0_0x199fd0");
#endif

    switch (ctx->pc) {
        case 0x199ff8u: goto label_199ff8;
        case 0x19a008u: goto label_19a008;
        case 0x19a028u: goto label_19a028;
        default: break;
    }

    ctx->pc = 0x199fd0u;

    // 0x199fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x199fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x199fd4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x199fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x199fd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fdc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x199fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x199fe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x199fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x199fe4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x199fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x199fe8: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x199fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x199fec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199ff0: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x199FF0u;
    SET_GPR_U32(ctx, 31, 0x199FF8u);
    ctx->pc = 0x199FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199FF0u;
    // 0x199ff4: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x199FF0u, 0x199FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199FF8u;
label_199ff8:
    // 0x199ff8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x199ff8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x199ffc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x199ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19a000: 0x24425290  addiu       $v0, $v0, 0x5290
    ctx->pc = 0x19a000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21136));
    // 0x19a004: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19a004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19a008:
    // 0x19a008: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19a008u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a00c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19a00cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a010: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19a010u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a014: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19a014u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a018: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19a018u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a01c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a020: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19A020u;
    SET_GPR_U32(ctx, 31, 0x19A028u);
    ctx->pc = 0x19A024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A020u;
    // 0x19a024: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19A020u, 0x19A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A028u;
label_19a028:
    // 0x19a028: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19a028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19a02c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19A02Cu;
    {
        const bool branch_taken_0x19a02c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A02Cu;
        // 0x19a030: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a02c) {
            ctx->pc = 0x19A008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a008;
        }
    }
    ctx->pc = 0x19A034u;
    // 0x19a034: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19a034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a038: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19a038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a03c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19a03cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a040: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19a040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a044: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19a044u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a04c: 0x3e00008  jr          $ra
    ctx->pc = 0x19A04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A04Cu;
        // 0x19a050: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A054u;
    // 0x19a054: 0x0  nop
    ctx->pc = 0x19a054u;
    // NOP
    ctx->pc = 0x19a058u;
}
