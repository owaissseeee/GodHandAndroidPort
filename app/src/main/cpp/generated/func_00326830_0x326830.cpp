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

// Function: func_00326830
// Address: 0x326830 - 0x326860
void func_00326830_0x326830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00326830_0x326830");
#endif

    switch (ctx->pc) {
        case 0x326844u: goto label_326844;
        default: break;
    }

    ctx->pc = 0x326830u;

    // 0x326830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x326834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x326838: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x326838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32683c: 0xc0c995a  jal         func_326568
    ctx->pc = 0x32683Cu;
    SET_GPR_U32(ctx, 31, 0x326844u);
    ctx->pc = 0x326840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32683Cu;
    // 0x326840: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326568u, 0x32683Cu, 0x326844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326844u;
label_326844:
    // 0x326844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326848: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x326848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32684c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x32684cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x326850: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326854: 0x3e00008  jr          $ra
    ctx->pc = 0x326854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326854u;
        // 0x326858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32685Cu;
    // 0x32685c: 0x0  nop
    ctx->pc = 0x32685cu;
    // NOP
    ctx->pc = 0x326860u;
}
