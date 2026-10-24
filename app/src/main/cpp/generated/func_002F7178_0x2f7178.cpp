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

// Function: func_002F7178
// Address: 0x2f7178 - 0x2f71a0
void func_002F7178_0x2f7178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F7178_0x2f7178");
#endif

    switch (ctx->pc) {
        case 0x2f7194u: goto label_2f7194;
        default: break;
    }

    ctx->pc = 0x2f7178u;

    // 0x2f7178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f7178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f717c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2f717cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2f7180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f7180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f7184: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2f7184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7188: 0x2442f6d8  addiu       $v0, $v0, -0x928
    ctx->pc = 0x2f7188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964952));
    // 0x2f718c: 0xc0baf14  jal         func_2EBC50
    ctx->pc = 0x2F718Cu;
    SET_GPR_U32(ctx, 31, 0x2F7194u);
    ctx->pc = 0x2F7190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F718Cu;
    // 0x2f7190: 0xac6200f0  sw          $v0, 0xF0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBC50u, 0x2F718Cu, 0x2F7194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7194u;
label_2f7194:
    // 0x2f7194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f7194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7198: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7198u;
        // 0x2f719c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F71A0u;
}
