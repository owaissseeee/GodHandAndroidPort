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

// Function: cCoreSave_setGameLevel1_1F9AD0
// Address: 0x1f9ad0 - 0x1f9af0
void cCoreSave_setGameLevel1_1F9AD0_0x1f9ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setGameLevel1_1F9AD0_0x1f9ad0");
#endif

    switch (ctx->pc) {
        case 0x1f9ae0u: goto label_1f9ae0;
        default: break;
    }

    ctx->pc = 0x1f9ad0u;

    // 0x1f9ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f9ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9ad8: 0xc07e852  jal         func_1FA148
    ctx->pc = 0x1F9AD8u;
    SET_GPR_U32(ctx, 31, 0x1F9AE0u);
    ctx->pc = 0x1F9ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9AD8u;
    // 0x1f9adc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA148u, 0x1F9AD8u, 0x1F9AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9AE0u;
label_1f9ae0:
    // 0x1f9ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9AE4u;
        // 0x1f9ae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9AECu;
    // 0x1f9aec: 0x0  nop
    ctx->pc = 0x1f9aecu;
    // NOP
    ctx->pc = 0x1f9af0u;
}
