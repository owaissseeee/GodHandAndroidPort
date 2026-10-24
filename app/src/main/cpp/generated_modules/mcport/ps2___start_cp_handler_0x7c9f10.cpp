#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __start_cp_handler
// Address: 0x7c9f10 - 0x7c9f48
void ps2___start_cp_handler_0x7c9f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___start_cp_handler_0x7c9f10");
#endif

    switch (ctx->pc) {
        case 0x7c9f20u: goto label_7c9f20;
        default: break;
    }

    ctx->pc = 0x7c9f10u;

    // 0x7c9f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c9f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c9f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c9f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c9f18: 0xc1f2d0c  jal         func_7CB430
    ctx->pc = 0x7C9F18u;
    SET_GPR_U32(ctx, 31, 0x7C9F20u);
    ctx->pc = 0x7CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB430u, 0x7C9F18u, 0x7C9F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9F20u;
label_7c9f20:
    // 0x7c9f20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7c9f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7c9f24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7c9f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c9f28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c9f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c9f2c: 0xdc640020  ld          $a0, 0x20($v1)
    ctx->pc = 0x7c9f2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x7c9f30: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x7c9f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c9f34: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x7c9f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x7c9f38: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x7c9f38u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x7c9f3c: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x7c9f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x7c9f40: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C9F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9F40u;
        // 0x7c9f44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C9F48u;
}
} // namespace gh_mcport
