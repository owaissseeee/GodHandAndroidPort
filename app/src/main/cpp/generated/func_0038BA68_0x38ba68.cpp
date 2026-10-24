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

// Function: func_0038BA68
// Address: 0x38ba68 - 0x38ba88
void func_0038BA68_0x38ba68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038BA68_0x38ba68");
#endif

    switch (ctx->pc) {
        case 0x38ba7cu: goto label_38ba7c;
        default: break;
    }

    ctx->pc = 0x38ba68u;

    // 0x38ba68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38ba68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38ba6c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x38ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x38ba70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38ba70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38ba74: 0xc0e384e  jal         func_38E138
    ctx->pc = 0x38BA74u;
    SET_GPR_U32(ctx, 31, 0x38BA7Cu);
    ctx->pc = 0x38BA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38BA74u;
    // 0x38ba78: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E138u, 0x38BA74u, 0x38BA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BA7Cu;
label_38ba7c:
    // 0x38ba7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38ba7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ba80: 0x3e00008  jr          $ra
    ctx->pc = 0x38BA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BA80u;
        // 0x38ba84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BA88u;
}
