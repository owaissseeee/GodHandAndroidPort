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

// Function: cCoreSave_setGameLevel5_1F9AF0
// Address: 0x1f9af0 - 0x1f9b10
void cCoreSave_setGameLevel5_1F9AF0_0x1f9af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setGameLevel5_1F9AF0_0x1f9af0");
#endif

    switch (ctx->pc) {
        case 0x1f9b00u: goto label_1f9b00;
        default: break;
    }

    ctx->pc = 0x1f9af0u;

    // 0x1f9af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f9af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9af8: 0xc07e852  jal         func_1FA148
    ctx->pc = 0x1F9AF8u;
    SET_GPR_U32(ctx, 31, 0x1F9B00u);
    ctx->pc = 0x1F9AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9AF8u;
    // 0x1f9afc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA148u, 0x1F9AF8u, 0x1F9B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B00u;
label_1f9b00:
    // 0x1f9b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9b04: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B04u;
        // 0x1f9b08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9B0Cu;
    // 0x1f9b0c: 0x0  nop
    ctx->pc = 0x1f9b0cu;
    // NOP
    ctx->pc = 0x1f9b10u;
}
