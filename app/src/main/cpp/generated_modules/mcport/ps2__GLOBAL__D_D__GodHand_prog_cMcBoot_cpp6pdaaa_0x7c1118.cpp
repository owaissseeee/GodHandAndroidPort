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
// Function: _GLOBAL_$D$D__GodHand_prog_cMcBoot.cpp6pdaaa
// Address: 0x7c1118 - 0x7c1138
void ps2__GLOBAL__D_D__GodHand_prog_cMcBoot_cpp6pdaaa_0x7c1118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GLOBAL__D_D__GodHand_prog_cMcBoot_cpp6pdaaa_0x7c1118");
#endif

    switch (ctx->pc) {
        case 0x7c112cu: goto label_7c112c;
        default: break;
    }

    ctx->pc = 0x7c1118u;

    // 0x7c1118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c1118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c111c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7c111cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c1120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c1124: 0xc1f0424  jal         func_7C1090
    ctx->pc = 0x7C1124u;
    SET_GPR_U32(ctx, 31, 0x7C112Cu);
    ctx->pc = 0x7C1128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1124u;
    // 0x7c1128: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C1090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C1090u, 0x7C1124u, 0x7C112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C112Cu;
label_7c112c:
    // 0x7c112c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c112cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c1130: 0x3e00008  jr          $ra
    ctx->pc = 0x7C1130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C1134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1130u;
        // 0x7c1134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C1130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C1138u;
}
} // namespace gh_mcport
