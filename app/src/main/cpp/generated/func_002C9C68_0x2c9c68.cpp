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

// Function: func_002C9C68
// Address: 0x2c9c68 - 0x2c9c88
void func_002C9C68_0x2c9c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C9C68_0x2c9c68");
#endif

    switch (ctx->pc) {
        case 0x2c9c7cu: goto label_2c9c7c;
        default: break;
    }

    ctx->pc = 0x2c9c68u;

    // 0x2c9c68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c9c6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c9c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9c74: 0xc0b270e  jal         func_2C9C38
    ctx->pc = 0x2C9C74u;
    SET_GPR_U32(ctx, 31, 0x2C9C7Cu);
    ctx->pc = 0x2C9C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9C74u;
    // 0x2c9c78: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9C38u, 0x2C9C74u, 0x2C9C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C7Cu;
label_2c9c7c:
    // 0x2c9c7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9c80: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C80u;
        // 0x2c9c84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9C88u;
}
