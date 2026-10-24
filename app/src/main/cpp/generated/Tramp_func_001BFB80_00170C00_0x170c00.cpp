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

// Function: Tramp_func_001BFB80_00170C00
// Address: 0x170c00 - 0x170c20
void Tramp_func_001BFB80_00170C00_0x170c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001BFB80_00170C00_0x170c00");
#endif

    switch (ctx->pc) {
        case 0x170c10u: goto label_170c10;
        default: break;
    }

    ctx->pc = 0x170c00u;

    // 0x170c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170c08: 0xc06fee0  jal         func_1BFB80
    ctx->pc = 0x170C08u;
    SET_GPR_U32(ctx, 31, 0x170C10u);
    ctx->pc = 0x1BFB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB80u, 0x170C08u, 0x170C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170C10u;
label_170c10:
    // 0x170c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170c14: 0x3e00008  jr          $ra
    ctx->pc = 0x170C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170C14u;
        // 0x170c18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170C1Cu;
    // 0x170c1c: 0x0  nop
    ctx->pc = 0x170c1cu;
    // NOP
    ctx->pc = 0x170c20u;
}
