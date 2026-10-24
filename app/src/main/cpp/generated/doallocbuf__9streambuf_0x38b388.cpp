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

// Function: doallocbuf__9streambuf
// Address: 0x38b388 - 0x38b3a8
void doallocbuf__9streambuf_0x38b388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("doallocbuf__9streambuf_0x38b388");
#endif

    switch (ctx->pc) {
        case 0x38b398u: goto label_38b398;
        default: break;
    }

    ctx->pc = 0x38b388u;

    // 0x38b388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38b388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38b38c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38b38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38b390: 0xc0e31fc  jal         func_38C7F0
    ctx->pc = 0x38B390u;
    SET_GPR_U32(ctx, 31, 0x38B398u);
    ctx->pc = 0x38C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C7F0u, 0x38B390u, 0x38B398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B398u;
label_38b398:
    // 0x38b398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38b398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b39c: 0x3e00008  jr          $ra
    ctx->pc = 0x38B39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B39Cu;
        // 0x38b3a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B3A4u;
    // 0x38b3a4: 0x0  nop
    ctx->pc = 0x38b3a4u;
    // NOP
    ctx->pc = 0x38b3a8u;
}
