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

// Function: xsputn__7filebufPCcl
// Address: 0x38f0f0 - 0x38f120
void xsputn__7filebufPCcl_0x38f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("xsputn__7filebufPCcl_0x38f0f0");
#endif

    switch (ctx->pc) {
        case 0x38f108u: goto label_38f108;
        default: break;
    }

    ctx->pc = 0x38f0f0u;

    // 0x38f0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38f0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38f0f4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x38f0f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x38f0f8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x38f0f8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x38f0fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38f0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38f100: 0xc0e4cda  jal         func_393368
    ctx->pc = 0x38F100u;
    SET_GPR_U32(ctx, 31, 0x38F108u);
    ctx->pc = 0x393368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393368u, 0x38F100u, 0x38F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F108u;
label_38f108:
    // 0x38f108: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38f108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x38f10c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38f10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f110: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x38f110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x38f114: 0x3e00008  jr          $ra
    ctx->pc = 0x38F114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F114u;
        // 0x38f118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F11Cu;
    // 0x38f11c: 0x0  nop
    ctx->pc = 0x38f11cu;
    // NOP
    ctx->pc = 0x38f120u;
}
