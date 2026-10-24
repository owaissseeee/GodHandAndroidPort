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

// Function: _i2b
// Address: 0x38f980 - 0x38f9b8
void _i2b_0x38f980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_i2b_0x38f980");
#endif

    switch (ctx->pc) {
        case 0x38f998u: goto label_38f998;
        default: break;
    }

    ctx->pc = 0x38f980u;

    // 0x38f980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38f980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38f984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38f984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38f988: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38f988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f98c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38f98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38f990: 0xc0e3d6e  jal         func_38F5B8
    ctx->pc = 0x38F990u;
    SET_GPR_U32(ctx, 31, 0x38F998u);
    ctx->pc = 0x38F994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F990u;
    // 0x38f994: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F5B8u, 0x38F990u, 0x38F998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F998u;
label_38f998:
    // 0x38f998: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38f998u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f99c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38f99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38f9a0: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x38f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x38f9a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38f9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f9a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38f9a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f9ac: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x38f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x38f9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x38F9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9B0u;
        // 0x38f9b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F9B8u;
}
