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

// Function: func_002D9F08
// Address: 0x2d9f08 - 0x2d9f30
void func_002D9F08_0x2d9f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D9F08_0x2d9f08");
#endif

    switch (ctx->pc) {
        case 0x2d9f1cu: goto label_2d9f1c;
        default: break;
    }

    ctx->pc = 0x2d9f08u;

    // 0x2d9f08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9f0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d9f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9f10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9f14: 0xc0b67a6  jal         func_2D9E98
    ctx->pc = 0x2D9F14u;
    SET_GPR_U32(ctx, 31, 0x2D9F1Cu);
    ctx->pc = 0x2D9F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9F14u;
    // 0x2d9f18: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9E98u, 0x2D9F14u, 0x2D9F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9F1Cu;
label_2d9f1c:
    // 0x2d9f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9f20: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F20u;
        // 0x2d9f24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9F28u;
    // 0x2d9f28: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2d9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2d9f2c: 0x0  nop
    ctx->pc = 0x2d9f2cu;
    // NOP
    ctx->pc = 0x2d9f30u;
}
