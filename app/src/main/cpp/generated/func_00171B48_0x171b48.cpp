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

// Function: func_00171B48
// Address: 0x171b48 - 0x171b70
void func_00171B48_0x171b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00171B48_0x171b48");
#endif

    switch (ctx->pc) {
        case 0x171b64u: goto label_171b64;
        default: break;
    }

    ctx->pc = 0x171b48u;

    // 0x171b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171b4c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x171b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x171b50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171b54: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x171b54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b58: 0x24420d68  addiu       $v0, $v0, 0xD68
    ctx->pc = 0x171b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3432));
    // 0x171b5c: 0xc06f594  jal         func_1BD650
    ctx->pc = 0x171B5Cu;
    SET_GPR_U32(ctx, 31, 0x171B64u);
    ctx->pc = 0x171B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B5Cu;
    // 0x171b60: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD650u, 0x171B5Cu, 0x171B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171B64u;
label_171b64:
    // 0x171b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171b68: 0x3e00008  jr          $ra
    ctx->pc = 0x171B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B68u;
        // 0x171b6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171B70u;
}
