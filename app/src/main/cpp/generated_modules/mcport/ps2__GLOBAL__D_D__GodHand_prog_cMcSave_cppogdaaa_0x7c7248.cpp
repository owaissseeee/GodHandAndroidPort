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
// Function: _GLOBAL_$D$D__GodHand_prog_cMcSave.cppogdaaa
// Address: 0x7c7248 - 0x7c7268
void ps2__GLOBAL__D_D__GodHand_prog_cMcSave_cppogdaaa_0x7c7248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GLOBAL__D_D__GodHand_prog_cMcSave_cppogdaaa_0x7c7248");
#endif

    switch (ctx->pc) {
        case 0x7c725cu: goto label_7c725c;
        default: break;
    }

    ctx->pc = 0x7c7248u;

    // 0x7c7248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c7248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c724c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7c724cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c7250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c7254: 0xc1f1c70  jal         func_7C71C0
    ctx->pc = 0x7C7254u;
    SET_GPR_U32(ctx, 31, 0x7C725Cu);
    ctx->pc = 0x7C7258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7254u;
    // 0x7c7258: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C71C0u, 0x7C7254u, 0x7C725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C725Cu;
label_7c725c:
    // 0x7c725c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c725cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c7260: 0x3e00008  jr          $ra
    ctx->pc = 0x7C7260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7260u;
        // 0x7c7264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C7268u;
}
} // namespace gh_mcport
