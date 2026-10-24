#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: _GLOBAL_$I$D__GodHand_Prog_st2_r206.cpptWaaaa
// Address: 0x79a928 - 0x79a948
void ps2__GLOBAL__I_D__GodHand_Prog_st2_r206_cpptWaaaa_0x79a928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GLOBAL__I_D__GodHand_Prog_st2_r206_cpptWaaaa_0x79a928");
#endif

    switch (ctx->pc) {
        case 0x79a93cu: goto label_79a93c;
        default: break;
    }

    ctx->pc = 0x79a928u;

    // 0x79a928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a92c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a934: 0xc1e6a26  jal         func_79A898
    ctx->pc = 0x79A934u;
    SET_GPR_U32(ctx, 31, 0x79A93Cu);
    ctx->pc = 0x79A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A934u;
    // 0x79a938: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A898u, 0x79A934u, 0x79A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A93Cu;
label_79a93c:
    // 0x79a93c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a940: 0x3e00008  jr          $ra
    ctx->pc = 0x79A940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A940u;
        // 0x79a944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A948u;
}
} // namespace gh_r206
