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

// Function: func_002B2A58
// Address: 0x2b2a58 - 0x2b2a88
void func_002B2A58_0x2b2a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2A58_0x2b2a58");
#endif

    switch (ctx->pc) {
        case 0x2b2a74u: goto label_2b2a74;
        default: break;
    }

    ctx->pc = 0x2b2a58u;

    // 0x2b2a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b2a5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b2a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2a60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2a64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b2a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2a68: 0xa0430070  sb          $v1, 0x70($v0)
    ctx->pc = 0x2b2a68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b2a6c: 0xc0acaa2  jal         func_2B2A88
    ctx->pc = 0x2B2A6Cu;
    SET_GPR_U32(ctx, 31, 0x2B2A74u);
    ctx->pc = 0x2B2A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2A6Cu;
    // 0x2b2a70: 0xa04000a4  sb          $zero, 0xA4($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 164), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2A88u, 0x2B2A6Cu, 0x2B2A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2A74u;
label_2b2a74:
    // 0x2b2a74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2a78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A7Cu;
        // 0x2b2a80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2A84u;
    // 0x2b2a84: 0x0  nop
    ctx->pc = 0x2b2a84u;
    // NOP
    ctx->pc = 0x2b2a88u;
}
