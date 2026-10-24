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

// Function: func_001F7D20
// Address: 0x1f7d20 - 0x1f7d48
void func_001F7D20_0x1f7d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F7D20_0x1f7d20");
#endif

    switch (ctx->pc) {
        case 0x1f7d34u: goto label_1f7d34;
        default: break;
    }

    ctx->pc = 0x1f7d20u;

    // 0x1f7d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7d24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f7d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7d2c: 0xc07de8c  jal         func_1F7A30
    ctx->pc = 0x1F7D2Cu;
    SET_GPR_U32(ctx, 31, 0x1F7D34u);
    ctx->pc = 0x1F7D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7D2Cu;
    // 0x1f7d30: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7A30u, 0x1F7D2Cu, 0x1F7D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D34u;
label_1f7d34:
    // 0x1f7d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7d38: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D38u;
        // 0x1f7d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7D40u;
    // 0x1f7d40: 0x0  nop
    ctx->pc = 0x1f7d40u;
    // NOP
    // 0x1f7d44: 0x0  nop
    ctx->pc = 0x1f7d44u;
    // NOP
    ctx->pc = 0x1f7d48u;
}
