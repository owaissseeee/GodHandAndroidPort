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

// Function: func_0027EDC8
// Address: 0x27edc8 - 0x27edf0
void func_0027EDC8_0x27edc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027EDC8_0x27edc8");
#endif

    switch (ctx->pc) {
        case 0x27ede4u: goto label_27ede4;
        default: break;
    }

    ctx->pc = 0x27edc8u;

    // 0x27edc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27edc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27edcc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x27edccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27edd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27edd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27edd4: 0x24a61630  addiu       $a2, $a1, 0x1630
    ctx->pc = 0x27edd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 5680));
    // 0x27edd8: 0x24a715b0  addiu       $a3, $a1, 0x15B0
    ctx->pc = 0x27edd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 5552));
    // 0x27eddc: 0xc0b7a60  jal         func_2DE980
    ctx->pc = 0x27EDDCu;
    SET_GPR_U32(ctx, 31, 0x27EDE4u);
    ctx->pc = 0x27EDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EDDCu;
    // 0x27ede0: 0x8c840564  lw          $a0, 0x564($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE980u, 0x27EDDCu, 0x27EDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDE4u;
label_27ede4:
    // 0x27ede4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27ede4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ede8: 0x3e00008  jr          $ra
    ctx->pc = 0x27EDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EDE8u;
        // 0x27edec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EDF0u;
}
