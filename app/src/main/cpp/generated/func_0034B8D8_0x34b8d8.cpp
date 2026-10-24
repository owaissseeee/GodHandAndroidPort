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

// Function: func_0034B8D8
// Address: 0x34b8d8 - 0x34b8f8
void func_0034B8D8_0x34b8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034B8D8_0x34b8d8");
#endif

    switch (ctx->pc) {
        case 0x34b8e8u: goto label_34b8e8;
        default: break;
    }

    ctx->pc = 0x34b8d8u;

    // 0x34b8d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b8dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34b8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34b8e0: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34B8E0u;
    SET_GPR_U32(ctx, 31, 0x34B8E8u);
    ctx->pc = 0x34B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B8E0u;
    // 0x34b8e4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34B8E0u, 0x34B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B8E8u;
label_34b8e8:
    // 0x34b8e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34b8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b8ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34b8ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x34B8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B8F0u;
        // 0x34b8f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B8F8u;
}
