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

// Function: func_001A81D8
// Address: 0x1a81d8 - 0x1a8200
void func_001A81D8_0x1a81d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A81D8_0x1a81d8");
#endif

    switch (ctx->pc) {
        case 0x1a81f4u: goto label_1a81f4;
        default: break;
    }

    ctx->pc = 0x1a81d8u;

    // 0x1a81d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a81d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a81dc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a81dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a81e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a81e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a81e4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1a81e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a81e8: 0x24427690  addiu       $v0, $v0, 0x7690
    ctx->pc = 0x1a81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30352));
    // 0x1a81ec: 0xc06efc0  jal         func_1BBF00
    ctx->pc = 0x1A81ECu;
    SET_GPR_U32(ctx, 31, 0x1A81F4u);
    ctx->pc = 0x1A81F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A81ECu;
    // 0x1a81f0: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF00u, 0x1A81ECu, 0x1A81F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A81F4u;
label_1a81f4:
    // 0x1a81f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a81f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a81f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A81F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A81FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81F8u;
        // 0x1a81fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A81F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8200u;
}
