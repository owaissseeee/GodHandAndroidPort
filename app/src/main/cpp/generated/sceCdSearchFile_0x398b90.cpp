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

// Function: sceCdSearchFile
// Address: 0x398b90 - 0x398bb0
void sceCdSearchFile_0x398b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdSearchFile_0x398b90");
#endif

    switch (ctx->pc) {
        case 0x398ba0u: goto label_398ba0;
        default: break;
    }

    ctx->pc = 0x398b90u;

    // 0x398b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x398b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x398b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x398b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x398b98: 0xc0e6224  jal         func_398890
    ctx->pc = 0x398B98u;
    SET_GPR_U32(ctx, 31, 0x398BA0u);
    ctx->pc = 0x398B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398B98u;
    // 0x398b9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398890u, 0x398B98u, 0x398BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398BA0u;
label_398ba0:
    // 0x398ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x398BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398BA4u;
        // 0x398ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398BACu;
    // 0x398bac: 0x0  nop
    ctx->pc = 0x398bacu;
    // NOP
    ctx->pc = 0x398bb0u;
}
