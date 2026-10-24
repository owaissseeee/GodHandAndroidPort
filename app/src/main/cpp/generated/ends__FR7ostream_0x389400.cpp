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

// Function: ends__FR7ostream
// Address: 0x389400 - 0x389438
void ends__FR7ostream_0x389400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ends__FR7ostream_0x389400");
#endif

    switch (ctx->pc) {
        case 0x389420u: goto label_389420;
        default: break;
    }

    ctx->pc = 0x389400u;

    // 0x389400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x389404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x389404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x389408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x389408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38940c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38940cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389410: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x389410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389414: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x389414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x389418: 0xc0e3aca  jal         func_38EB28
    ctx->pc = 0x389418u;
    SET_GPR_U32(ctx, 31, 0x389420u);
    ctx->pc = 0x38941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389418u;
    // 0x38941c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EB28u, 0x389418u, 0x389420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389420u;
label_389420:
    // 0x389420: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x389420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389424: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x389424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x389428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38942c: 0x3e00008  jr          $ra
    ctx->pc = 0x38942Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38942Cu;
        // 0x389430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38942Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389434u;
    // 0x389434: 0x0  nop
    ctx->pc = 0x389434u;
    // NOP
    ctx->pc = 0x389438u;
}
