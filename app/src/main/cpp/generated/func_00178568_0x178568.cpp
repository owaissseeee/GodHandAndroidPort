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

// Function: func_00178568
// Address: 0x178568 - 0x1785f0
void func_00178568_0x178568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178568_0x178568");
#endif

    switch (ctx->pc) {
        case 0x178590u: goto label_178590;
        case 0x1785a0u: goto label_1785a0;
        case 0x1785c0u: goto label_1785c0;
        default: break;
    }

    ctx->pc = 0x178568u;

    // 0x178568: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x178568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17856c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17856cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x178570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178574: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x178574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x178578: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17857c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17857cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x178580: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x178580u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x178584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178588: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x178588u;
    SET_GPR_U32(ctx, 31, 0x178590u);
    ctx->pc = 0x17858Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178588u;
    // 0x17858c: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x178588u, 0x178590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178590u;
label_178590:
    // 0x178590: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x178590u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178594: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x178594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x178598: 0x244214a8  addiu       $v0, $v0, 0x14A8
    ctx->pc = 0x178598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5288));
    // 0x17859c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x17859cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1785a0:
    // 0x1785a0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1785a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1785a4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1785a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1785a8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1785a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1785ac: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1785acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1785b0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1785b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1785b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1785b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785b8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1785B8u;
    SET_GPR_U32(ctx, 31, 0x1785C0u);
    ctx->pc = 0x1785BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1785B8u;
    // 0x1785bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1785B8u, 0x1785C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1785C0u;
label_1785c0:
    // 0x1785c0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1785c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1785c4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1785C4u;
    {
        const bool branch_taken_0x1785c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1785C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785C4u;
        // 0x1785c8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1785c4) {
            ctx->pc = 0x1785A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1785a0;
        }
    }
    ctx->pc = 0x1785CCu;
    // 0x1785cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1785ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1785d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1785d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1785d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1785d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1785d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1785dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1785dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1785e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1785e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1785e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1785E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1785E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785E4u;
        // 0x1785e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1785E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1785ECu;
    // 0x1785ec: 0x0  nop
    ctx->pc = 0x1785ecu;
    // NOP
    ctx->pc = 0x1785f0u;
}
