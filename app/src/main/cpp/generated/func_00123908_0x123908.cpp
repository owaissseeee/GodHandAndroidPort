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

// Function: func_00123908
// Address: 0x123908 - 0x123938
void func_00123908_0x123908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00123908_0x123908");
#endif

    switch (ctx->pc) {
        case 0x123928u: goto label_123928;
        default: break;
    }

    ctx->pc = 0x123908u;

    // 0x123908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12390c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x12390cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x123910: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x123910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x123914: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x123914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123918: 0x24503050  addiu       $s0, $v0, 0x3050
    ctx->pc = 0x123918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
    // 0x12391c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12391cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123920: 0xc04e3e2  jal         func_138F88
    ctx->pc = 0x123920u;
    SET_GPR_U32(ctx, 31, 0x123928u);
    ctx->pc = 0x123924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123920u;
    // 0x123924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138F88u, 0x123920u, 0x123928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123928u;
label_123928:
    // 0x123928: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x123928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12392c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12392cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123930: 0x3e00008  jr          $ra
    ctx->pc = 0x123930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123930u;
        // 0x123934: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123938u;
}
