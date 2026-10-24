#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: _GLOBAL_$I$D__GodHand_prog_st2_r200.cpp6dcaaa
// Address: 0x79a7b0 - 0x79a7d0
void ps2__GLOBAL__I_D__GodHand_prog_st2_r200_cpp6dcaaa_0x79a7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GLOBAL__I_D__GodHand_prog_st2_r200_cpp6dcaaa_0x79a7b0");
#endif

    switch (ctx->pc) {
        case 0x79a7c4u: goto label_79a7c4;
        default: break;
    }

    ctx->pc = 0x79a7b0u;

    // 0x79a7b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a7b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a7b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a7bc: 0xc1e69ac  jal         func_79A6B0
    ctx->pc = 0x79A7BCu;
    SET_GPR_U32(ctx, 31, 0x79A7C4u);
    ctx->pc = 0x79A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7BCu;
    // 0x79a7c0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6B0u, 0x79A7BCu, 0x79A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7C4u;
label_79a7c4:
    // 0x79a7c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7C8u;
        // 0x79a7cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A7D0u;
}
} // namespace gh_r200
