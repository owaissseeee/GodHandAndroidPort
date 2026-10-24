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

// Function: func_002BE4E8
// Address: 0x2be4e8 - 0x2be510
void func_002BE4E8_0x2be4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BE4E8_0x2be4e8");
#endif

    switch (ctx->pc) {
        case 0x2be504u: goto label_2be504;
        default: break;
    }

    ctx->pc = 0x2be4e8u;

    // 0x2be4e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2be4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2be4ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be4f0: 0x8c8504c0  lw          $a1, 0x4C0($a0)
    ctx->pc = 0x2be4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1216)));
    // 0x2be4f4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE4F4u;
    {
        const bool branch_taken_0x2be4f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE4F4u;
        // 0x2be4f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be4f4) {
            ctx->pc = 0x2BE508u;
            goto label_2be508;
        }
    }
    ctx->pc = 0x2BE4FCu;
    // 0x2be4fc: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x2BE4FCu;
    SET_GPR_U32(ctx, 31, 0x2BE504u);
    ctx->pc = 0x2BE500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE4FCu;
    // 0x2be500: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x2BE4FCu, 0x2BE504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE504u;
label_2be504:
    // 0x2be504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2be508:
    // 0x2be508: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE508u;
        // 0x2be50c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE510u;
}
