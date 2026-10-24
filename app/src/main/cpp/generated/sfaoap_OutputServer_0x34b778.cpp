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

// Function: sfaoap_OutputServer
// Address: 0x34b778 - 0x34b7a8
void sfaoap_OutputServer_0x34b778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfaoap_OutputServer_0x34b778");
#endif

    switch (ctx->pc) {
        case 0x34b78cu: goto label_34b78c;
        case 0x34b794u: goto label_34b794;
        default: break;
    }

    ctx->pc = 0x34b778u;

    // 0x34b778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b77c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34b77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34b780: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34b780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34b784: 0xc0d2dea  jal         func_34B7A8
    ctx->pc = 0x34B784u;
    SET_GPR_U32(ctx, 31, 0x34B78Cu);
    ctx->pc = 0x34B788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B784u;
    // 0x34b788: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B7A8u, 0x34B784u, 0x34B78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B78Cu;
label_34b78c:
    // 0x34b78c: 0xc0d2e06  jal         func_34B818
    ctx->pc = 0x34B78Cu;
    SET_GPR_U32(ctx, 31, 0x34B794u);
    ctx->pc = 0x34B790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B78Cu;
    // 0x34b790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B818u, 0x34B78Cu, 0x34B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B794u;
label_34b794:
    // 0x34b794: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34b794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b79c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34b79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34b7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x34B7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B7A0u;
        // 0x34b7a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B7A8u;
}
