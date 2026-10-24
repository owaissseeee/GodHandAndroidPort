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

// Function: Tramp_ostream___ls_38A548
// Address: 0x38a548 - 0x38a568
void Tramp_ostream___ls_38A548_0x38a548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_ostream___ls_38A548_0x38a548");
#endif

    switch (ctx->pc) {
        case 0x38a558u: goto label_38a558;
        default: break;
    }

    ctx->pc = 0x38a548u;

    // 0x38a548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a54c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a550: 0xc0e238c  jal         func_388E30
    ctx->pc = 0x38A550u;
    SET_GPR_U32(ctx, 31, 0x38A558u);
    ctx->pc = 0x388E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388E30u, 0x38A550u, 0x38A558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A558u;
label_38a558:
    // 0x38a558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a55c: 0x3e00008  jr          $ra
    ctx->pc = 0x38A55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A55Cu;
        // 0x38a560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A564u;
    // 0x38a564: 0x0  nop
    ctx->pc = 0x38a564u;
    // NOP
    ctx->pc = 0x38a568u;
}
