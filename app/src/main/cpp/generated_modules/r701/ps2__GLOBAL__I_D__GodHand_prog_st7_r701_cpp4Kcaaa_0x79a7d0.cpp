#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r701_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r701
{
// Function: _GLOBAL_$I$D__GodHand_prog_st7_r701.cpp4Kcaaa
// Address: 0x79a7d0 - 0x79a7f0
void ps2__GLOBAL__I_D__GodHand_prog_st7_r701_cpp4Kcaaa_0x79a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GLOBAL__I_D__GodHand_prog_st7_r701_cpp4Kcaaa_0x79a7d0");
#endif

    switch (ctx->pc) {
        case 0x79a7e4u: goto label_79a7e4;
        default: break;
    }

    ctx->pc = 0x79a7d0u;

    // 0x79a7d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a7d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a7d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a7dc: 0xc1e6944  jal         func_79A510
    ctx->pc = 0x79A7DCu;
    SET_GPR_U32(ctx, 31, 0x79A7E4u);
    ctx->pc = 0x79A7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7DCu;
    // 0x79a7e0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A510u, 0x79A7DCu, 0x79A7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7E4u;
label_79a7e4:
    // 0x79a7e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7E8u;
        // 0x79a7ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A7F0u;
}
} // namespace gh_r701
