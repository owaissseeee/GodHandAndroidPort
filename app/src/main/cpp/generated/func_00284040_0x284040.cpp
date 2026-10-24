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

// Function: func_00284040
// Address: 0x284040 - 0x284068
void func_00284040_0x284040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00284040_0x284040");
#endif

    switch (ctx->pc) {
        case 0x28405cu: goto label_28405c;
        default: break;
    }

    ctx->pc = 0x284040u;

    // 0x284040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x284040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x284044: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x284044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x284048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28404c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x28404cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284050: 0x24428948  addiu       $v0, $v0, -0x76B8
    ctx->pc = 0x284050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936904));
    // 0x284054: 0xc0a9cf2  jal         func_2A73C8
    ctx->pc = 0x284054u;
    SET_GPR_U32(ctx, 31, 0x28405Cu);
    ctx->pc = 0x284058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284054u;
    // 0x284058: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A73C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A73C8u, 0x284054u, 0x28405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28405Cu;
label_28405c:
    // 0x28405c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28405cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284060: 0x3e00008  jr          $ra
    ctx->pc = 0x284060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284060u;
        // 0x284064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284068u;
}
