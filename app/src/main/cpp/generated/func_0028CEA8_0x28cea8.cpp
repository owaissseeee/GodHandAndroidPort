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

// Function: func_0028CEA8
// Address: 0x28cea8 - 0x28ced8
void func_0028CEA8_0x28cea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028CEA8_0x28cea8");
#endif

    switch (ctx->pc) {
        case 0x28cec8u: goto label_28cec8;
        default: break;
    }

    ctx->pc = 0x28cea8u;

    // 0x28cea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28cea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ceac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ceacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ceb0: 0x8c861630  lw          $a2, 0x1630($a0)
    ctx->pc = 0x28ceb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5680)));
    // 0x28ceb4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CEB4u;
    {
        const bool branch_taken_0x28ceb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEB4u;
        // 0x28ceb8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ceb4) {
            ctx->pc = 0x28CEC8u;
            goto label_28cec8;
        }
    }
    ctx->pc = 0x28CEBCu;
    // 0x28cebc: 0x8c840564  lw          $a0, 0x564($a0)
    ctx->pc = 0x28cebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x28cec0: 0xc0b7e18  jal         func_2DF860
    ctx->pc = 0x28CEC0u;
    SET_GPR_U32(ctx, 31, 0x28CEC8u);
    ctx->pc = 0x28CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CEC0u;
    // 0x28cec4: 0x24a715b0  addiu       $a3, $a1, 0x15B0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 5552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF860u, 0x28CEC0u, 0x28CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CEC8u;
label_28cec8:
    // 0x28cec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28cec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cecc: 0x3e00008  jr          $ra
    ctx->pc = 0x28CECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CECCu;
        // 0x28ced0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CED4u;
    // 0x28ced4: 0x0  nop
    ctx->pc = 0x28ced4u;
    // NOP
    ctx->pc = 0x28ced8u;
}
