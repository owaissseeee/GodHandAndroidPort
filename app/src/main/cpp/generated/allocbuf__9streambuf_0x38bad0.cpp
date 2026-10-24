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

// Function: allocbuf__9streambuf
// Address: 0x38bad0 - 0x38baf8
void allocbuf__9streambuf_0x38bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("allocbuf__9streambuf_0x38bad0");
#endif

    switch (ctx->pc) {
        case 0x38baecu: goto label_38baec;
        default: break;
    }

    ctx->pc = 0x38bad0u;

    // 0x38bad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38bad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38bad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38bad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38bad8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x38bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x38badc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38BADCu;
    {
        const bool branch_taken_0x38badc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BADCu;
        // 0x38bae0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38badc) {
            ctx->pc = 0x38BAF0u;
            goto label_38baf0;
        }
    }
    ctx->pc = 0x38BAE4u;
    // 0x38bae4: 0xc0e2ce2  jal         func_38B388
    ctx->pc = 0x38BAE4u;
    SET_GPR_U32(ctx, 31, 0x38BAECu);
    ctx->pc = 0x38B388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B388u, 0x38BAE4u, 0x38BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38BAECu;
label_38baec:
    // 0x38baec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38baecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38baf0:
    // 0x38baf0: 0x3e00008  jr          $ra
    ctx->pc = 0x38BAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BAF0u;
        // 0x38baf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38BAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38BAF8u;
}
