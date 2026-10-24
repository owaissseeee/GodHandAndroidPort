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

// Function: Forward297B40_2981B0
// Address: 0x2981b0 - 0x2981d8
void Forward297B40_2981B0_0x2981b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward297B40_2981B0_0x2981b0");
#endif

    switch (ctx->pc) {
        case 0x2981ccu: goto label_2981cc;
        default: break;
    }

    ctx->pc = 0x2981b0u;

    // 0x2981b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2981b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2981b4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2981b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2981b8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2981b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2981bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2981bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2981c0: 0x24846af0  addiu       $a0, $a0, 0x6AF0
    ctx->pc = 0x2981c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    // 0x2981c4: 0xc0a5ed0  jal         func_297B40
    ctx->pc = 0x2981C4u;
    SET_GPR_U32(ctx, 31, 0x2981CCu);
    ctx->pc = 0x2981C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2981C4u;
    // 0x2981c8: 0x24a581d8  addiu       $a1, $a1, -0x7E28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B40u, 0x2981C4u, 0x2981CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2981CCu;
label_2981cc:
    // 0x2981cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2981ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2981d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2981D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2981D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981D0u;
        // 0x2981d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2981D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2981D8u;
}
