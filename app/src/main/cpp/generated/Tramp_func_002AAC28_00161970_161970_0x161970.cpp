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

// Function: Tramp_func_002AAC28_00161970_161970
// Address: 0x161970 - 0x161990
void Tramp_func_002AAC28_00161970_161970_0x161970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_002AAC28_00161970_161970_0x161970");
#endif

    switch (ctx->pc) {
        case 0x161980u: goto label_161980;
        default: break;
    }

    ctx->pc = 0x161970u;

    // 0x161970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161978: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x161978u;
    SET_GPR_U32(ctx, 31, 0x161980u);
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x161978u, 0x161980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161980u;
label_161980:
    // 0x161980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161984: 0x3e00008  jr          $ra
    ctx->pc = 0x161984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161984u;
        // 0x161988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16198Cu;
    // 0x16198c: 0x0  nop
    ctx->pc = 0x16198cu;
    // NOP
    ctx->pc = 0x161990u;
}
