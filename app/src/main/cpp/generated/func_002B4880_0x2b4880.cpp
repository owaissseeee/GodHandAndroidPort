#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_002B4880
// Address: 0x2b4880 - 0x2b48a0
void func_002B4880_0x2b4880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4880_0x2b4880");
#endif

    switch (ctx->pc) {
        case 0x2b4894u: goto label_2b4894;
        default: break;
    }

    ctx->pc = 0x2b4880u;

    // 0x2b4880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4884: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b4884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b488c: 0xc0ad214  jal         func_2B4850
    ctx->pc = 0x2B488Cu;
    SET_GPR_U32(ctx, 31, 0x2B4894u);
    ctx->pc = 0x2B4890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B488Cu;
    // 0x2b4890: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4850u, 0x2B488Cu, 0x2B4894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4894u;
label_2b4894:
    // 0x2b4894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4898: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4898u;
        // 0x2b489c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B48A0u;
}
