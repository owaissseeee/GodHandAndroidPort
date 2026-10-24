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

// Function: SetField5CAndForward_12D178
// Address: 0x12d178 - 0x12d1a8
void SetField5CAndForward_12D178_0x12d178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField5CAndForward_12D178_0x12d178");
#endif

    switch (ctx->pc) {
        case 0x12d19cu: goto label_12d19c;
        default: break;
    }

    ctx->pc = 0x12d178u;

    // 0x12d178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d17c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x12d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x12d180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d184: 0x2442d5a8  addiu       $v0, $v0, -0x2A58
    ctx->pc = 0x12d184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956456));
    // 0x12d188: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x12d188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x12d18c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D18Cu;
    {
        const bool branch_taken_0x12d18c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D18Cu;
        // 0x12d190: 0xac82005c  sw          $v0, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d18c) {
            ctx->pc = 0x12D19Cu;
            goto label_12d19c;
        }
    }
    ctx->pc = 0x12D194u;
    // 0x12d194: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x12D194u;
    SET_GPR_U32(ctx, 31, 0x12D19Cu);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x12D194u, 0x12D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D19Cu;
label_12d19c:
    // 0x12d19c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x12D1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1A0u;
        // 0x12d1a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D1A8u;
}
