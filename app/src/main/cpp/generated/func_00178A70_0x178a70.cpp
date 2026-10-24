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

// Function: func_00178A70
// Address: 0x178a70 - 0x178af8
void func_00178A70_0x178a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178A70_0x178a70");
#endif

    switch (ctx->pc) {
        case 0x178a98u: goto label_178a98;
        case 0x178aa8u: goto label_178aa8;
        case 0x178ac8u: goto label_178ac8;
        default: break;
    }

    ctx->pc = 0x178a70u;

    // 0x178a70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x178a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x178a74: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x178a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x178a78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178a7c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x178a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x178a80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x178a84: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x178a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x178a88: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x178a88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x178a8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178a90: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x178A90u;
    SET_GPR_U32(ctx, 31, 0x178A98u);
    ctx->pc = 0x178A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A90u;
    // 0x178a94: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x178A90u, 0x178A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178A98u;
label_178a98:
    // 0x178a98: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x178a98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178a9c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x178a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x178aa0: 0x24421658  addiu       $v0, $v0, 0x1658
    ctx->pc = 0x178aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5720));
    // 0x178aa4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x178aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_178aa8:
    // 0x178aa8: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x178aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178aac: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x178aacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178ab0: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x178ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178ab4: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x178ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178ab8: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x178ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x178abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ac0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x178AC0u;
    SET_GPR_U32(ctx, 31, 0x178AC8u);
    ctx->pc = 0x178AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178AC0u;
    // 0x178ac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x178AC0u, 0x178AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178AC8u;
label_178ac8:
    // 0x178ac8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x178ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x178acc: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x178ACCu;
    {
        const bool branch_taken_0x178acc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x178AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178ACCu;
        // 0x178ad0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178acc) {
            ctx->pc = 0x178AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178aa8;
        }
    }
    ctx->pc = 0x178AD4u;
    // 0x178ad4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x178ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ad8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x178ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178adc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x178adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178ae0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178ae4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x178ae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178aec: 0x3e00008  jr          $ra
    ctx->pc = 0x178AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AECu;
        // 0x178af0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178AF4u;
    // 0x178af4: 0x0  nop
    ctx->pc = 0x178af4u;
    // NOP
    ctx->pc = 0x178af8u;
}
