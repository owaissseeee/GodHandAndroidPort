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

// Function: func_002A98D8
// Address: 0x2a98d8 - 0x2a9908
void func_002A98D8_0x2a98d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A98D8_0x2a98d8");
#endif

    switch (ctx->pc) {
        case 0x2a98fcu: goto label_2a98fc;
        default: break;
    }

    ctx->pc = 0x2a98d8u;

    // 0x2a98d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a98d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a98dc: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2a98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2a98e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a98e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a98e4: 0x2442aef8  addiu       $v0, $v0, -0x5108
    ctx->pc = 0x2a98e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946552));
    // 0x2a98e8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2a98e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2a98ec: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A98ECu;
    {
        const bool branch_taken_0x2a98ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A98F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98ECu;
        // 0x2a98f0: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a98ec) {
            ctx->pc = 0x2A98FCu;
            goto label_2a98fc;
        }
    }
    ctx->pc = 0x2A98F4u;
    // 0x2a98f4: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x2A98F4u;
    SET_GPR_U32(ctx, 31, 0x2A98FCu);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x2A98F4u, 0x2A98FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A98FCu;
label_2a98fc:
    // 0x2a98fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a98fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9900: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9900u;
        // 0x2a9904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9908u;
}
