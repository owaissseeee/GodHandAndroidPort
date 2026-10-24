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

// Function: func_001B37A8
// Address: 0x1b37a8 - 0x1b37d0
void func_001B37A8_0x1b37a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B37A8_0x1b37a8");
#endif

    switch (ctx->pc) {
        case 0x1b37c4u: goto label_1b37c4;
        default: break;
    }

    ctx->pc = 0x1b37a8u;

    // 0x1b37a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b37a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b37ac: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b37acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b37b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b37b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b37b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b37b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b37b8: 0x24428650  addiu       $v0, $v0, -0x79B0
    ctx->pc = 0x1b37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936144));
    // 0x1b37bc: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1B37BCu;
    SET_GPR_U32(ctx, 31, 0x1B37C4u);
    ctx->pc = 0x1B37C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B37BCu;
    // 0x1b37c0: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1B37BCu, 0x1B37C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B37C4u;
label_1b37c4:
    // 0x1b37c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b37c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b37c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B37C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B37CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37C8u;
        // 0x1b37cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B37C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B37D0u;
}
