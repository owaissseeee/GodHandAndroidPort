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

// Function: func_0017B8F0
// Address: 0x17b8f0 - 0x17b940
void func_0017B8F0_0x17b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017B8F0_0x17b8f0");
#endif

    switch (ctx->pc) {
        case 0x17b920u: goto label_17b920;
        case 0x17b92cu: goto label_17b92c;
        default: break;
    }

    ctx->pc = 0x17b8f0u;

    // 0x17b8f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b8f4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17b8f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17b8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17b8fc: 0x24421bb8  addiu       $v0, $v0, 0x1BB8
    ctx->pc = 0x17b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7096));
    // 0x17b900: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b90c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17b90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b910: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x17b910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x17b914: 0x26040d80  addiu       $a0, $s0, 0xD80
    ctx->pc = 0x17b914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3456));
    // 0x17b918: 0xc0ab4a2  jal         func_2AD288
    ctx->pc = 0x17B918u;
    SET_GPR_U32(ctx, 31, 0x17B920u);
    ctx->pc = 0x17B91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B918u;
    // 0x17b91c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD288u, 0x17B918u, 0x17B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B920u;
label_17b920:
    // 0x17b920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b924: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x17B924u;
    SET_GPR_U32(ctx, 31, 0x17B92Cu);
    ctx->pc = 0x17B928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B924u;
    // 0x17b928: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x17B924u, 0x17B92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B92Cu;
label_17b92c:
    // 0x17b92c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17b92cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b938: 0x3e00008  jr          $ra
    ctx->pc = 0x17B938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B938u;
        // 0x17b93c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B940u;
}
