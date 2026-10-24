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

// Function: Forward297B40_298ED0
// Address: 0x298ed0 - 0x298ef8
void Forward297B40_298ED0_0x298ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward297B40_298ED0_0x298ed0");
#endif

    switch (ctx->pc) {
        case 0x298eecu: goto label_298eec;
        default: break;
    }

    ctx->pc = 0x298ed0u;

    // 0x298ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298ed4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x298ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x298ed8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x298ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x298edc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298ee0: 0x24846af0  addiu       $a0, $a0, 0x6AF0
    ctx->pc = 0x298ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    // 0x298ee4: 0xc0a5ed0  jal         func_297B40
    ctx->pc = 0x298EE4u;
    SET_GPR_U32(ctx, 31, 0x298EECu);
    ctx->pc = 0x298EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298EE4u;
    // 0x298ee8: 0x24a58ef8  addiu       $a1, $a1, -0x7108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B40u, 0x298EE4u, 0x298EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298EECu;
label_298eec:
    // 0x298eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x298EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298EF0u;
        // 0x298ef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298EF8u;
}
