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

// Function: func_003497F8
// Address: 0x3497f8 - 0x349820
void func_003497F8_0x3497f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003497F8_0x3497f8");
#endif

    switch (ctx->pc) {
        case 0x34980cu: goto label_34980c;
        default: break;
    }

    ctx->pc = 0x3497f8u;

    // 0x3497f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3497f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3497fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3497fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x349800: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x349800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x349804: 0xc0d14ac  jal         func_3452B0
    ctx->pc = 0x349804u;
    SET_GPR_U32(ctx, 31, 0x34980Cu);
    ctx->pc = 0x349808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349804u;
    // 0x349808: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x349804u, 0x34980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34980Cu;
label_34980c:
    // 0x34980c: 0xac50188c  sw          $s0, 0x188C($v0)
    ctx->pc = 0x34980cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6284), GPR_U32(ctx, 16));
    // 0x349810: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x349810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x349814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x349814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349818: 0x3e00008  jr          $ra
    ctx->pc = 0x349818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349818u;
        // 0x34981c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349820u;
}
