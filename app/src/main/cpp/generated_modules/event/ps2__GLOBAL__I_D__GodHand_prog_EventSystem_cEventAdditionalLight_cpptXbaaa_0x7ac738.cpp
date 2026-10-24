#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: _GLOBAL_$I$D__GodHand_prog_EventSystem_cEventAdditionalLight.cpptXbaaa
// Address: 0x7ac738 - 0x7ac758
void ps2__GLOBAL__I_D__GodHand_prog_EventSystem_cEventAdditionalLight_cpptXbaaa_0x7ac738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GLOBAL__I_D__GodHand_prog_EventSystem_cEventAdditionalLight_cpptXbaaa_0x7ac738");
#endif

    switch (ctx->pc) {
        case 0x7ac74cu: goto label_7ac74c;
        default: break;
    }

    ctx->pc = 0x7ac738u;

    // 0x7ac738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ac738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7ac73c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7ac73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ac740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ac740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ac744: 0xc1eb1c2  jal         func_7AC708
    ctx->pc = 0x7AC744u;
    SET_GPR_U32(ctx, 31, 0x7AC74Cu);
    ctx->pc = 0x7AC748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC744u;
    // 0x7ac748: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AC708u, 0x7AC744u, 0x7AC74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC74Cu;
label_7ac74c:
    // 0x7ac74c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ac74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ac750: 0x3e00008  jr          $ra
    ctx->pc = 0x7AC750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC750u;
        // 0x7ac754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AC750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AC758u;
}
} // namespace gh_event
