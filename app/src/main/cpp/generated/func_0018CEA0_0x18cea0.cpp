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

// Function: func_0018CEA0
// Address: 0x18cea0 - 0x18cf28
void func_0018CEA0_0x18cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018CEA0_0x18cea0");
#endif

    switch (ctx->pc) {
        case 0x18cec8u: goto label_18cec8;
        case 0x18ced8u: goto label_18ced8;
        case 0x18cef8u: goto label_18cef8;
        default: break;
    }

    ctx->pc = 0x18cea0u;

    // 0x18cea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18cea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18cea4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18cea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18cea8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18cea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ceac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18ceacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18ceb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ceb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ceb4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18ceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18ceb8: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x18ceb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18cebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18cebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18cec0: 0xc071f66  jal         func_1C7D98
    ctx->pc = 0x18CEC0u;
    SET_GPR_U32(ctx, 31, 0x18CEC8u);
    ctx->pc = 0x18CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CEC0u;
    // 0x18cec4: 0x26300660  addiu       $s0, $s1, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D98u, 0x18CEC0u, 0x18CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CEC8u;
label_18cec8:
    // 0x18cec8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x18cec8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18cecc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18ced0: 0x244239c8  addiu       $v0, $v0, 0x39C8
    ctx->pc = 0x18ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14792));
    // 0x18ced4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x18ced4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_18ced8:
    // 0x18ced8: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x18ced8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18cedc: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x18cedcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18cee0: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x18cee0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18cee4: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x18cee4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18cee8: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x18cee8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18ceec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ceecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cef0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x18CEF0u;
    SET_GPR_U32(ctx, 31, 0x18CEF8u);
    ctx->pc = 0x18CEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CEF0u;
    // 0x18cef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18CEF0u, 0x18CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CEF8u;
label_18cef8:
    // 0x18cef8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x18cef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x18cefc: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x18CEFCu;
    {
        const bool branch_taken_0x18cefc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x18CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CEFCu;
        // 0x18cf00: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cefc) {
            ctx->pc = 0x18CED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ced8;
        }
    }
    ctx->pc = 0x18CF04u;
    // 0x18cf04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18cf04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf08: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18cf08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18cf0c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18cf0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cf10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18cf10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cf14: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18cf14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cf18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18cf18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x18CF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF1Cu;
        // 0x18cf20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CF24u;
    // 0x18cf24: 0x0  nop
    ctx->pc = 0x18cf24u;
    // NOP
    ctx->pc = 0x18cf28u;
}
