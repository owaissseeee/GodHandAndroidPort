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

// Function: SetField35CAndForward_139C58
// Address: 0x139c58 - 0x139c88
void SetField35CAndForward_139C58_0x139c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField35CAndForward_139C58_0x139c58");
#endif

    switch (ctx->pc) {
        case 0x139c7cu: goto label_139c7c;
        default: break;
    }

    ctx->pc = 0x139c58u;

    // 0x139c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139c5c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x139c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x139c60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139c64: 0x2442d8f8  addiu       $v0, $v0, -0x2708
    ctx->pc = 0x139c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957304));
    // 0x139c68: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x139c68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x139c6c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139C6Cu;
    {
        const bool branch_taken_0x139c6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x139C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C6Cu;
        // 0x139c70: 0xac82035c  sw          $v0, 0x35C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139c6c) {
            ctx->pc = 0x139C7Cu;
            goto label_139c7c;
        }
    }
    ctx->pc = 0x139C74u;
    // 0x139c74: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x139C74u;
    SET_GPR_U32(ctx, 31, 0x139C7Cu);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x139C74u, 0x139C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C7Cu;
label_139c7c:
    // 0x139c7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139c80: 0x3e00008  jr          $ra
    ctx->pc = 0x139C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139C80u;
        // 0x139c84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139C88u;
}
