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

// Function: cEvent_startReleaseObj
// Address: 0x297a88 - 0x297aa8
void cEvent_startReleaseObj_0x297a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_startReleaseObj_0x297a88");
#endif

    switch (ctx->pc) {
        case 0x297a9cu: goto label_297a9c;
        default: break;
    }

    ctx->pc = 0x297a88u;

    // 0x297a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297a8c: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297a8cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297A8Cu) & 0xFFFFu)) << 16));
    // 0x297a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297a94: 0xc000000  jal         func_000000
    ctx->pc = 0x297A94u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x297A94u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x297A9Cu);
        ctx->pc = 0x297A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A94u;
        // 0x297a98: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297A98u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297A94u, 0x297A9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297A9Cu;
label_297a9c:
    // 0x297a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x297AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297AA0u;
        // 0x297aa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297AA8u;
}
