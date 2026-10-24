#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: Trans__16r301CannonGameId
// Address: 0x79d488 - 0x79d4a8
void Trans__16r301CannonGameId_0x79d488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trans__16r301CannonGameId_0x79d488");
#endif

    switch (ctx->pc) {
        case 0x79d498u: goto label_79d498;
        default: break;
    }

    ctx->pc = 0x79d488u;

    // 0x79d488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79d488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79d48c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79d48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79d490: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x79D490u;
    SET_GPR_U32(ctx, 31, 0x79D498u);
    ctx->pc = 0x79D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D490u;
    // 0x79d494: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x79D490u, 0x79D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D498u;
label_79d498:
    // 0x79d498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79d498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79d49c: 0x3e00008  jr          $ra
    ctx->pc = 0x79D49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D49Cu;
        // 0x79d4a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D4A4u;
    // 0x79d4a4: 0x0  nop
    ctx->pc = 0x79d4a4u;
    // NOP
    ctx->pc = 0x79d4a8u;
}
} // namespace gh_r301
