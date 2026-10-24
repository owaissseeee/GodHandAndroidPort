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

// Function: func_0019D3C8
// Address: 0x19d3c8 - 0x19d3f0
void func_0019D3C8_0x19d3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019D3C8_0x19d3c8");
#endif

    switch (ctx->pc) {
        case 0x19d3e4u: goto label_19d3e4;
        default: break;
    }

    ctx->pc = 0x19d3c8u;

    // 0x19d3c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d3cc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19d3d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d3d4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19d3d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d3d8: 0x24425d48  addiu       $v0, $v0, 0x5D48
    ctx->pc = 0x19d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23880));
    // 0x19d3dc: 0xc06efc0  jal         func_1BBF00
    ctx->pc = 0x19D3DCu;
    SET_GPR_U32(ctx, 31, 0x19D3E4u);
    ctx->pc = 0x19D3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D3DCu;
    // 0x19d3e0: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF00u, 0x19D3DCu, 0x19D3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D3E4u;
label_19d3e4:
    // 0x19d3e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x19D3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D3E8u;
        // 0x19d3ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D3F0u;
}
