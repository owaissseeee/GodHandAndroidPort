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

// Function: func_0018EF30
// Address: 0x18ef30 - 0x18ef58
void func_0018EF30_0x18ef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018EF30_0x18ef30");
#endif

    switch (ctx->pc) {
        case 0x18ef4cu: goto label_18ef4c;
        default: break;
    }

    ctx->pc = 0x18ef30u;

    // 0x18ef30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ef30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ef34: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18ef38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ef38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ef3c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x18ef3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef40: 0x24423d40  addiu       $v0, $v0, 0x3D40
    ctx->pc = 0x18ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15680));
    // 0x18ef44: 0xc06efc0  jal         func_1BBF00
    ctx->pc = 0x18EF44u;
    SET_GPR_U32(ctx, 31, 0x18EF4Cu);
    ctx->pc = 0x18EF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF44u;
    // 0x18ef48: 0xac620214  sw          $v0, 0x214($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF00u, 0x18EF44u, 0x18EF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF4Cu;
label_18ef4c:
    // 0x18ef4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ef4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ef50: 0x3e00008  jr          $ra
    ctx->pc = 0x18EF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF50u;
        // 0x18ef54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EF58u;
}
