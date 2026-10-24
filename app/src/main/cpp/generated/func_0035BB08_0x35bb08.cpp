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

// Function: func_0035BB08
// Address: 0x35bb08 - 0x35bb40
void func_0035BB08_0x35bb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035BB08_0x35bb08");
#endif

    switch (ctx->pc) {
        case 0x35bb2cu: goto label_35bb2c;
        default: break;
    }

    ctx->pc = 0x35bb08u;

    // 0x35bb08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35bb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35bb0c: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x35bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x35bb10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35bb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35bb14: 0x24506c80  addiu       $s0, $v0, 0x6C80
    ctx->pc = 0x35bb14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27776));
    // 0x35bb18: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x35bb18u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x766C80u));
    // 0x35bb1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35BB1Cu;
    {
        const bool branch_taken_0x35bb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BB1Cu;
        // 0x35bb20: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bb1c) {
            ctx->pc = 0x35BB30u;
            goto label_35bb30;
        }
    }
    ctx->pc = 0x35BB24u;
    // 0x35bb24: 0xc0d6e96  jal         func_35BA58
    ctx->pc = 0x35BB24u;
    SET_GPR_U32(ctx, 31, 0x35BB2Cu);
    ctx->pc = 0x35BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BA58u, 0x35BB24u, 0x35BB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB2Cu;
label_35bb2c:
    // 0x35bb2c: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x35bb2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_35bb30:
    // 0x35bb30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35bb30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bb34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35bb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bb38: 0x3e00008  jr          $ra
    ctx->pc = 0x35BB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BB38u;
        // 0x35bb3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BB40u;
}
