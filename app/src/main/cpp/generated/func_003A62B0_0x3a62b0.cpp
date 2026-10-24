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

// Function: func_003A62B0
// Address: 0x3a62b0 - 0x3a62d8
void func_003A62B0_0x3a62b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A62B0_0x3a62b0");
#endif

    switch (ctx->pc) {
        case 0x3a62c8u: goto label_3a62c8;
        default: break;
    }

    ctx->pc = 0x3a62b0u;

    // 0x3a62b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a62b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a62b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a62b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a62b8: 0x8c44a62c  lw          $a0, -0x59D4($v0)
    ctx->pc = 0x3a62b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3a62bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a62bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a62c0: 0xc0e98a4  jal         func_3A6290
    ctx->pc = 0x3A62C0u;
    SET_GPR_U32(ctx, 31, 0x3A62C8u);
    ctx->pc = 0x3A6290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6290u, 0x3A62C0u, 0x3A62C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A62C8u;
label_3a62c8:
    // 0x3a62c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a62c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a62cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A62CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A62D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A62CCu;
        // 0x3a62d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A62CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A62D4u;
    // 0x3a62d4: 0x0  nop
    ctx->pc = 0x3a62d4u;
    // NOP
    ctx->pc = 0x3a62d8u;
}
