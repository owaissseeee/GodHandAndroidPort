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

// Function: func_0031C8B8
// Address: 0x31c8b8 - 0x31c8e0
void func_0031C8B8_0x31c8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031C8B8_0x31c8b8");
#endif

    switch (ctx->pc) {
        case 0x31c8d0u: goto label_31c8d0;
        default: break;
    }

    ctx->pc = 0x31c8b8u;

    // 0x31c8b8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x31c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x31c8bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31c8bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31c8c0: 0x8c463cf0  lw          $a2, 0x3CF0($v0)
    ctx->pc = 0x31c8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3CF0u));
    // 0x31c8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c8c8: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31C8C8u;
    SET_GPR_U32(ctx, 31, 0x31C8D0u);
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31C8C8u, 0x31C8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C8D0u;
label_31c8d0:
    // 0x31c8d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x31C8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8D4u;
        // 0x31c8d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C8DCu;
    // 0x31c8dc: 0x0  nop
    ctx->pc = 0x31c8dcu;
    // NOP
    ctx->pc = 0x31c8e0u;
}
