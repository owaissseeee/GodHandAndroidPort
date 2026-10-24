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
// Function: _GLOBAL_$I$D__GodHand_prog_st3_r301CannonGame.cppyEbaaa
// Address: 0x79d1a8 - 0x79d1c8
void ps2__GLOBAL__I_D__GodHand_prog_st3_r301CannonGame_cppyEbaaa_0x79d1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GLOBAL__I_D__GodHand_prog_st3_r301CannonGame_cppyEbaaa_0x79d1a8");
#endif

    switch (ctx->pc) {
        case 0x79d1bcu: goto label_79d1bc;
        default: break;
    }

    ctx->pc = 0x79d1a8u;

    // 0x79d1a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79d1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79d1ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79d1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79d1b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79d1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79d1b4: 0xc1e7456  jal         func_79D158
    ctx->pc = 0x79D1B4u;
    SET_GPR_U32(ctx, 31, 0x79D1BCu);
    ctx->pc = 0x79D1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D1B4u;
    // 0x79d1b8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D158u, 0x79D1B4u, 0x79D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D1BCu;
label_79d1bc:
    // 0x79d1bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79d1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79d1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x79D1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D1C0u;
        // 0x79d1c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D1C8u;
}
} // namespace gh_r301
