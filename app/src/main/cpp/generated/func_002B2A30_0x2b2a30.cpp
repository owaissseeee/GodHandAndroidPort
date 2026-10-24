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

// Function: func_002B2A30
// Address: 0x2b2a30 - 0x2b2a58
void func_002B2A30_0x2b2a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2A30_0x2b2a30");
#endif

    switch (ctx->pc) {
        case 0x2b2a48u: goto label_2b2a48;
        default: break;
    }

    ctx->pc = 0x2b2a30u;

    // 0x2b2a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b2a34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b2a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2a3c: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x2b2a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2a40: 0xc0acaa2  jal         func_2B2A88
    ctx->pc = 0x2B2A40u;
    SET_GPR_U32(ctx, 31, 0x2B2A48u);
    ctx->pc = 0x2B2A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2A40u;
    // 0x2b2a44: 0xa04000a4  sb          $zero, 0xA4($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 164), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2A88u, 0x2B2A40u, 0x2B2A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2A48u;
label_2b2a48:
    // 0x2b2a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2a4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2a50: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A50u;
        // 0x2b2a54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2A58u;
}
