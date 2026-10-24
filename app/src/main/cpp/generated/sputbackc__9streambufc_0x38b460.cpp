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

// Function: sputbackc__9streambufc
// Address: 0x38b460 - 0x38b480
void sputbackc__9streambufc_0x38b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sputbackc__9streambufc_0x38b460");
#endif

    switch (ctx->pc) {
        case 0x38b474u: goto label_38b474;
        default: break;
    }

    ctx->pc = 0x38b460u;

    // 0x38b460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38b460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38b464: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x38b464u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x38b468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38b468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38b46c: 0xc0e3346  jal         func_38CD18
    ctx->pc = 0x38B46Cu;
    SET_GPR_U32(ctx, 31, 0x38B474u);
    ctx->pc = 0x38B470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B46Cu;
    // 0x38b470: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD18u, 0x38B46Cu, 0x38B474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B474u;
label_38b474:
    // 0x38b474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38b474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b478: 0x3e00008  jr          $ra
    ctx->pc = 0x38B478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B478u;
        // 0x38b47c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B480u;
}
