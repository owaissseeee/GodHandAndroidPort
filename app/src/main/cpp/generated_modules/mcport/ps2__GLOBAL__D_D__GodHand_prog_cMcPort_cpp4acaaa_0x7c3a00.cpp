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
// Function: _GLOBAL_$D$D__GodHand_prog_cMcPort.cpp4acaaa
// Address: 0x7c3a00 - 0x7c3a20
void ps2__GLOBAL__D_D__GodHand_prog_cMcPort_cpp4acaaa_0x7c3a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GLOBAL__D_D__GodHand_prog_cMcPort_cpp4acaaa_0x7c3a00");
#endif

    switch (ctx->pc) {
        case 0x7c3a14u: goto label_7c3a14;
        default: break;
    }

    ctx->pc = 0x7c3a00u;

    // 0x7c3a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c3a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c3a04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7c3a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3a08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c3a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3a0c: 0xc1f0e6e  jal         func_7C39B8
    ctx->pc = 0x7C3A0Cu;
    SET_GPR_U32(ctx, 31, 0x7C3A14u);
    ctx->pc = 0x7C3A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3A0Cu;
    // 0x7c3a10: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C39B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C39B8u, 0x7C3A0Cu, 0x7C3A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3A14u;
label_7c3a14:
    // 0x7c3a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3a18: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3A18u;
        // 0x7c3a1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3A20u;
}
} // namespace gh_mcport
