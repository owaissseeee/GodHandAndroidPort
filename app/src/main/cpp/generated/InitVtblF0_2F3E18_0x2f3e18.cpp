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

// Function: InitVtblF0_2F3E18
// Address: 0x2f3e18 - 0x2f3e40
void InitVtblF0_2F3E18_0x2f3e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitVtblF0_2F3E18_0x2f3e18");
#endif

    switch (ctx->pc) {
        case 0x2f3e34u: goto label_2f3e34;
        default: break;
    }

    ctx->pc = 0x2f3e18u;

    // 0x2f3e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f3e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f3e1c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2f3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2f3e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f3e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f3e24: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2f3e24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3e28: 0x2442efa0  addiu       $v0, $v0, -0x1060
    ctx->pc = 0x2f3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963104));
    // 0x2f3e2c: 0xc0bef8a  jal         func_2FBE28
    ctx->pc = 0x2F3E2Cu;
    SET_GPR_U32(ctx, 31, 0x2F3E34u);
    ctx->pc = 0x2F3E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3E2Cu;
    // 0x2f3e30: 0xac6200f0  sw          $v0, 0xF0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE28u, 0x2F3E2Cu, 0x2F3E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3E34u;
label_2f3e34:
    // 0x2f3e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f3e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3e38: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E38u;
        // 0x2f3e3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3E40u;
}
