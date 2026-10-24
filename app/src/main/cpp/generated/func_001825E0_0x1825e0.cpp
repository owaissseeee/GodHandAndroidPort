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

// Function: func_001825E0
// Address: 0x1825e0 - 0x182668
void func_001825E0_0x1825e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001825E0_0x1825e0");
#endif

    switch (ctx->pc) {
        case 0x182608u: goto label_182608;
        case 0x182618u: goto label_182618;
        case 0x182638u: goto label_182638;
        default: break;
    }

    ctx->pc = 0x1825e0u;

    // 0x1825e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1825e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1825e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1825e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1825e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1825e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1825ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1825f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1825f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1825f4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1825f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1825f8: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x1825f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1825fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1825fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182600: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x182600u;
    SET_GPR_U32(ctx, 31, 0x182608u);
    ctx->pc = 0x182604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182600u;
    // 0x182604: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x182600u, 0x182608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182608u;
label_182608:
    // 0x182608: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x182608u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18260c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18260cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x182610: 0x24422928  addiu       $v0, $v0, 0x2928
    ctx->pc = 0x182610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10536));
    // 0x182614: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x182614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_182618:
    // 0x182618: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x182618u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18261c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x18261cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x182620: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x182620u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x182624: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x182624u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x182628: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x182628u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18262c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18262cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182630: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x182630u;
    SET_GPR_U32(ctx, 31, 0x182638u);
    ctx->pc = 0x182634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182630u;
    // 0x182634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x182630u, 0x182638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182638u;
label_182638:
    // 0x182638: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x182638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x18263c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x18263Cu;
    {
        const bool branch_taken_0x18263c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x182640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18263Cu;
        // 0x182640: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18263c) {
            ctx->pc = 0x182618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182618;
        }
    }
    ctx->pc = 0x182644u;
    // 0x182644: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x182644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182648: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x182648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18264c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18264cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182650: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182654: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x182654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18265c: 0x3e00008  jr          $ra
    ctx->pc = 0x18265Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18265Cu;
        // 0x182660: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18265Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182664u;
    // 0x182664: 0x0  nop
    ctx->pc = 0x182664u;
    // NOP
    ctx->pc = 0x182668u;
}
