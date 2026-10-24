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

// Function: FreeResourceNode_2D3710
// Address: 0x2d3710 - 0x2d3750
void FreeResourceNode_2D3710_0x2d3710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeResourceNode_2D3710_0x2d3710");
#endif

    switch (ctx->pc) {
        case 0x2d3734u: goto label_2d3734;
        case 0x2d373cu: goto label_2d373c;
        default: break;
    }

    ctx->pc = 0x2d3710u;

    // 0x2d3710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3714: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d3714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d3718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d371c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d371cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3720: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d3720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3724: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3724u;
    {
        const bool branch_taken_0x2d3724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3724) {
            ctx->pc = 0x2D3734u;
            goto label_2d3734;
        }
    }
    ctx->pc = 0x2D372Cu;
    // 0x2d372c: 0xc0d17b2  jal         func_345EC8
    ctx->pc = 0x2D372Cu;
    SET_GPR_U32(ctx, 31, 0x2D3734u);
    ctx->pc = 0x345EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345EC8u, 0x2D372Cu, 0x2D3734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3734u;
label_2d3734:
    // 0x2d3734: 0xc0b503e  jal         func_2D40F8
    ctx->pc = 0x2D3734u;
    SET_GPR_U32(ctx, 31, 0x2D373Cu);
    ctx->pc = 0x2D3738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3734u;
    // 0x2d3738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D40F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D40F8u, 0x2D3734u, 0x2D373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D373Cu;
label_2d373c:
    // 0x2d373c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d373cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3744: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3744u;
        // 0x2d3748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D374Cu;
    // 0x2d374c: 0x0  nop
    ctx->pc = 0x2d374cu;
    // NOP
    ctx->pc = 0x2d3750u;
}
