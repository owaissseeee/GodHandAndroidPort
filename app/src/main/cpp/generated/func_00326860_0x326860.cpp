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

// Function: func_00326860
// Address: 0x326860 - 0x326890
void func_00326860_0x326860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00326860_0x326860");
#endif

    switch (ctx->pc) {
        case 0x326878u: goto label_326878;
        default: break;
    }

    ctx->pc = 0x326860u;

    // 0x326860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x326864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x326868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x326868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32686c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32686cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x326870: 0xc0cf48c  jal         func_33D230
    ctx->pc = 0x326870u;
    SET_GPR_U32(ctx, 31, 0x326878u);
    ctx->pc = 0x326874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326870u;
    // 0x326874: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D230u, 0x326870u, 0x326878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326878u;
label_326878:
    // 0x326878: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x326878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x32687c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32687cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x326880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326884: 0x3e00008  jr          $ra
    ctx->pc = 0x326884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326884u;
        // 0x326888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32688Cu;
    // 0x32688c: 0x0  nop
    ctx->pc = 0x32688cu;
    // NOP
    ctx->pc = 0x326890u;
}
