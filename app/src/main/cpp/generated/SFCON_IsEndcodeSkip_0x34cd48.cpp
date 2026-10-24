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

// Function: SFCON_IsEndcodeSkip
// Address: 0x34cd48 - 0x34cd68
void SFCON_IsEndcodeSkip_0x34cd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFCON_IsEndcodeSkip_0x34cd48");
#endif

    switch (ctx->pc) {
        case 0x34cd58u: goto label_34cd58;
        default: break;
    }

    ctx->pc = 0x34cd48u;

    // 0x34cd48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34cd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34cd4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34cd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34cd50: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34CD50u;
    SET_GPR_U32(ctx, 31, 0x34CD58u);
    ctx->pc = 0x34CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CD50u;
    // 0x34cd54: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34CD50u, 0x34CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CD58u;
label_34cd58:
    // 0x34cd58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34cd58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34cd5c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x34cd5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x34cd60: 0x3e00008  jr          $ra
    ctx->pc = 0x34CD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CD60u;
        // 0x34cd64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CD68u;
}
