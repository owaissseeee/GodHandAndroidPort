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

// Function: func_002BE838
// Address: 0x2be838 - 0x2be858
void func_002BE838_0x2be838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BE838_0x2be838");
#endif

    switch (ctx->pc) {
        case 0x2be84cu: goto label_2be84c;
        default: break;
    }

    ctx->pc = 0x2be838u;

    // 0x2be838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2be838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2be83c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2be83cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2be840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be844: 0xc0af958  jal         func_2BE560
    ctx->pc = 0x2BE844u;
    SET_GPR_U32(ctx, 31, 0x2BE84Cu);
    ctx->pc = 0x2BE848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE844u;
    // 0x2be848: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE560u, 0x2BE844u, 0x2BE84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE84Cu;
label_2be84c:
    // 0x2be84c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be850: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE850u;
        // 0x2be854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE858u;
}
