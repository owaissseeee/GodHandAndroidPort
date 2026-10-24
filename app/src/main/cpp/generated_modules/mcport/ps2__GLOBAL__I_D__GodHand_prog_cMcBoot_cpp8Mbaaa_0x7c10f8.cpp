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
// Function: _GLOBAL_$I$D__GodHand_prog_cMcBoot.cpp8Mbaaa
// Address: 0x7c10f8 - 0x7c1118
void ps2__GLOBAL__I_D__GodHand_prog_cMcBoot_cpp8Mbaaa_0x7c10f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GLOBAL__I_D__GodHand_prog_cMcBoot_cpp8Mbaaa_0x7c10f8");
#endif

    switch (ctx->pc) {
        case 0x7c110cu: goto label_7c110c;
        default: break;
    }

    ctx->pc = 0x7c10f8u;

    // 0x7c10f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c10f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c10fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7c10fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c1100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c1100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c1104: 0xc1f0424  jal         func_7C1090
    ctx->pc = 0x7C1104u;
    SET_GPR_U32(ctx, 31, 0x7C110Cu);
    ctx->pc = 0x7C1108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1104u;
    // 0x7c1108: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C1090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C1090u, 0x7C1104u, 0x7C110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C110Cu;
label_7c110c:
    // 0x7c110c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c110cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c1110: 0x3e00008  jr          $ra
    ctx->pc = 0x7C1110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1110u;
        // 0x7c1114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C1110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C1118u;
}
} // namespace gh_mcport
