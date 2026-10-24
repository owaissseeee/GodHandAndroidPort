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

// Function: func_0027EDF0
// Address: 0x27edf0 - 0x27ee18
void func_0027EDF0_0x27edf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027EDF0_0x27edf0");
#endif

    switch (ctx->pc) {
        case 0x27ee0cu: goto label_27ee0c;
        default: break;
    }

    ctx->pc = 0x27edf0u;

    // 0x27edf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27edf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27edf4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27edf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27edf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27edf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27edfc: 0x24a61630  addiu       $a2, $a1, 0x1630
    ctx->pc = 0x27edfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 5680));
    // 0x27ee00: 0x24a715b0  addiu       $a3, $a1, 0x15B0
    ctx->pc = 0x27ee00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 5552));
    // 0x27ee04: 0xc0b7e18  jal         func_2DF860
    ctx->pc = 0x27EE04u;
    SET_GPR_U32(ctx, 31, 0x27EE0Cu);
    ctx->pc = 0x27EE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EE04u;
    // 0x27ee08: 0x8c840564  lw          $a0, 0x564($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF860u, 0x27EE04u, 0x27EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE0Cu;
label_27ee0c:
    // 0x27ee0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27ee0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ee10: 0x3e00008  jr          $ra
    ctx->pc = 0x27EE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE10u;
        // 0x27ee14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EE18u;
}
