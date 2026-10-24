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

// Function: func_001FFDE0
// Address: 0x1ffde0 - 0x1ffe00
void func_001FFDE0_0x1ffde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FFDE0_0x1ffde0");
#endif

    switch (ctx->pc) {
        case 0x1ffdf4u: goto label_1ffdf4;
        default: break;
    }

    ctx->pc = 0x1ffde0u;

    // 0x1ffde0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ffde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ffde4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ffde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffde8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ffde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ffdec: 0xc07ff6c  jal         func_1FFDB0
    ctx->pc = 0x1FFDECu;
    SET_GPR_U32(ctx, 31, 0x1FFDF4u);
    ctx->pc = 0x1FFDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFDECu;
    // 0x1ffdf0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFDB0u, 0x1FFDECu, 0x1FFDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFDF4u;
label_1ffdf4:
    // 0x1ffdf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ffdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffdf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFDF8u;
        // 0x1ffdfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFE00u;
}
