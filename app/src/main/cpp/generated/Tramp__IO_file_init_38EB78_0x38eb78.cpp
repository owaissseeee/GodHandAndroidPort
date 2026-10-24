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

// Function: Tramp__IO_file_init_38EB78
// Address: 0x38eb78 - 0x38eb98
void Tramp__IO_file_init_38EB78_0x38eb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp__IO_file_init_38EB78_0x38eb78");
#endif

    switch (ctx->pc) {
        case 0x38eb88u: goto label_38eb88;
        default: break;
    }

    ctx->pc = 0x38eb78u;

    // 0x38eb78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38eb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38eb7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38eb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38eb80: 0xc0e49c6  jal         func_392718
    ctx->pc = 0x38EB80u;
    SET_GPR_U32(ctx, 31, 0x38EB88u);
    ctx->pc = 0x392718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392718u, 0x38EB80u, 0x38EB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EB88u;
label_38eb88:
    // 0x38eb88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38eb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38eb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x38EB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EB8Cu;
        // 0x38eb90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EB94u;
    // 0x38eb94: 0x0  nop
    ctx->pc = 0x38eb94u;
    // NOP
    ctx->pc = 0x38eb98u;
}
