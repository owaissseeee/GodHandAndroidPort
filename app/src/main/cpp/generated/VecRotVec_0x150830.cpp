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

// Function: VecRotVec
// Address: 0x150830 - 0x150888
void VecRotVec_0x150830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VecRotVec_0x150830");
#endif

    switch (ctx->pc) {
        case 0x150858u: goto label_150858;
        case 0x150868u: goto label_150868;
        default: break;
    }

    ctx->pc = 0x150830u;

    // 0x150830: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x150830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x150834: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x150834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x150838: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x150838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x15083c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15083cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150844: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x150844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150848: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x150848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15084c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15084cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150850: 0xc051dca  jal         func_147728
    ctx->pc = 0x150850u;
    SET_GPR_U32(ctx, 31, 0x150858u);
    ctx->pc = 0x150854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150850u;
    // 0x150854: 0x30e600ff  andi        $a2, $a3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x150850u, 0x150858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150858u;
label_150858:
    // 0x150858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15085c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15085cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150860: 0xc054236  jal         func_1508D8
    ctx->pc = 0x150860u;
    SET_GPR_U32(ctx, 31, 0x150868u);
    ctx->pc = 0x150864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150860u;
    // 0x150864: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1508D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1508D8u, 0x150860u, 0x150868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150868u;
label_150868:
    // 0x150868: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x150868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15086c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x15086cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150870: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x150870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150874: 0x3e00008  jr          $ra
    ctx->pc = 0x150874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150874u;
        // 0x150878: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15087Cu;
    // 0x15087c: 0x0  nop
    ctx->pc = 0x15087cu;
    // NOP
    // 0x150880: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x150880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x150884: 0x0  nop
    ctx->pc = 0x150884u;
    // NOP
    ctx->pc = 0x150888u;
}
