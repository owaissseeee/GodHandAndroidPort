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

// Function: func_002C0A08
// Address: 0x2c0a08 - 0x2c0a28
void func_002C0A08_0x2c0a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C0A08_0x2c0a08");
#endif

    switch (ctx->pc) {
        case 0x2c0a18u: goto label_2c0a18;
        default: break;
    }

    ctx->pc = 0x2c0a08u;

    // 0x2c0a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0a0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0a10: 0xc0ab9fc  jal         func_2AE7F0
    ctx->pc = 0x2C0A10u;
    SET_GPR_U32(ctx, 31, 0x2C0A18u);
    ctx->pc = 0x2C0A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0A10u;
    // 0x2c0a14: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE7F0u, 0x2C0A10u, 0x2C0A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0A18u;
label_2c0a18:
    // 0x2c0a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A1Cu;
        // 0x2c0a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0A24u;
    // 0x2c0a24: 0x0  nop
    ctx->pc = 0x2c0a24u;
    // NOP
    ctx->pc = 0x2c0a28u;
}
