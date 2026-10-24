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

// Function: atoi
// Address: 0x3a7c48 - 0x3a7c70
void atoi_0x3a7c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("atoi_0x3a7c48");
#endif

    switch (ctx->pc) {
        case 0x3a7c5cu: goto label_3a7c5c;
        default: break;
    }

    ctx->pc = 0x3a7c48u;

    // 0x3a7c48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a7c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a7c4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a7c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7c50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a7c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a7c54: 0xc0eb430  jal         func_3AD0C0
    ctx->pc = 0x3A7C54u;
    SET_GPR_U32(ctx, 31, 0x3A7C5Cu);
    ctx->pc = 0x3A7C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7C54u;
    // 0x3a7c58: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0C0u, 0x3A7C54u, 0x3A7C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7C5Cu;
label_3a7c5c:
    // 0x3a7c5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a7c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7c60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a7c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a7c64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a7c64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3a7c68: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7C68u;
        // 0x3a7c6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7C70u;
}
