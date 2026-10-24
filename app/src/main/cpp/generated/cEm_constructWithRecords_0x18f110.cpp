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

// Function: cEm_constructWithRecords
// Address: 0x18f110 - 0x18f1a0
void cEm_constructWithRecords_0x18f110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm_constructWithRecords_0x18f110");
#endif

    switch (ctx->pc) {
        case 0x18f130u: goto label_18f130;
        case 0x18f150u: goto label_18f150;
        case 0x18f170u: goto label_18f170;
        default: break;
    }

    ctx->pc = 0x18f110u;

    // 0x18f110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18f110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18f114: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18f114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18f118: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18f118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18f11c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18f11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18f120: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18f120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18f124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f128: 0xc071f66  jal         func_1C7D98
    ctx->pc = 0x18F128u;
    SET_GPR_U32(ctx, 31, 0x18F130u);
    ctx->pc = 0x18F12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F128u;
    // 0x18f12c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D98u, 0x18F128u, 0x18F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F130u;
label_18f130:
    // 0x18f130: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x18f130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x18f134: 0x24633e48  addiu       $v1, $v1, 0x3E48
    ctx->pc = 0x18f134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15944));
    // 0x18f138: 0xae230214  sw          $v1, 0x214($s1)
    ctx->pc = 0x18f138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 3));
    // 0x18f13c: 0xfa200660  sqc2        $vf0, 0x660($s1)
    ctx->pc = 0x18f13cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1632), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18f140: 0xfa200670  sqc2        $vf0, 0x670($s1)
    ctx->pc = 0x18f140u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1648), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18f144: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x18f144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18f148: 0x26300680  addiu       $s0, $s1, 0x680
    ctx->pc = 0x18f148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1664));
    // 0x18f14c: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x18f14cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18f150:
    // 0x18f150: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x18f150u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18f154: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x18f154u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18f158: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x18f158u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18f15c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x18f15cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18f160: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x18f160u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18f164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f168: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x18F168u;
    SET_GPR_U32(ctx, 31, 0x18F170u);
    ctx->pc = 0x18F16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F168u;
    // 0x18f16c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18F168u, 0x18F170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F170u;
label_18f170:
    // 0x18f170: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x18f170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x18f174: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x18F174u;
    {
        const bool branch_taken_0x18f174 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x18F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F174u;
        // 0x18f178: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f174) {
            ctx->pc = 0x18F150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f150;
        }
    }
    ctx->pc = 0x18F17Cu;
    // 0x18f17c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18f17cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f180: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18f180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f184: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18f184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f188: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f18c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18f18cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f194: 0x3e00008  jr          $ra
    ctx->pc = 0x18F194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F194u;
        // 0x18f198: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F19Cu;
    // 0x18f19c: 0x0  nop
    ctx->pc = 0x18f19cu;
    // NOP
    ctx->pc = 0x18f1a0u;
}
