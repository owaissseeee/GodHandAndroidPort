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

// Function: func_00318418
// Address: 0x318418 - 0x318440
void func_00318418_0x318418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00318418_0x318418");
#endif

    switch (ctx->pc) {
        case 0x318434u: goto label_318434;
        default: break;
    }

    ctx->pc = 0x318418u;

    // 0x318418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x318418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31841c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31841cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x318420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x318420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x318424: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x318424u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318428: 0x24420b28  addiu       $v0, $v0, 0xB28
    ctx->pc = 0x318428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2856));
    // 0x31842c: 0xc053a8a  jal         func_14EA28
    ctx->pc = 0x31842Cu;
    SET_GPR_U32(ctx, 31, 0x318434u);
    ctx->pc = 0x318430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31842Cu;
    // 0x318430: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EA28u, 0x31842Cu, 0x318434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318434u;
label_318434:
    // 0x318434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x318434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318438: 0x3e00008  jr          $ra
    ctx->pc = 0x318438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318438u;
        // 0x31843c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318440u;
}
