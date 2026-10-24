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

// Function: sfhds_IsPrvate2PketStart
// Address: 0x34d160 - 0x34d188
void sfhds_IsPrvate2PketStart_0x34d160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfhds_IsPrvate2PketStart_0x34d160");
#endif

    switch (ctx->pc) {
        case 0x34d170u: goto label_34d170;
        default: break;
    }

    ctx->pc = 0x34d160u;

    // 0x34d160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34d160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34d164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34d164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34d168: 0xc0d3462  jal         func_34D188
    ctx->pc = 0x34D168u;
    SET_GPR_U32(ctx, 31, 0x34D170u);
    ctx->pc = 0x34D188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D188u, 0x34D168u, 0x34D170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D170u;
label_34d170:
    // 0x34d170: 0x384201bf  xori        $v0, $v0, 0x1BF
    ctx->pc = 0x34d170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)447);
    // 0x34d174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34d174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d178: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x34d178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x34d17c: 0x3e00008  jr          $ra
    ctx->pc = 0x34D17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D17Cu;
        // 0x34d180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D184u;
    // 0x34d184: 0x0  nop
    ctx->pc = 0x34d184u;
    // NOP
    ctx->pc = 0x34d188u;
}
