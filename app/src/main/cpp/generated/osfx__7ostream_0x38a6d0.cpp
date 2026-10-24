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

// Function: osfx__7ostream
// Address: 0x38a6d0 - 0x38a700
void osfx__7ostream_0x38a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("osfx__7ostream_0x38a6d0");
#endif

    switch (ctx->pc) {
        case 0x38a6f4u: goto label_38a6f4;
        default: break;
    }

    ctx->pc = 0x38a6d0u;

    // 0x38a6d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a6d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x38a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38a6d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a6dc: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x38a6dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x38a6e0: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x38a6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x38a6e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A6E4u;
    {
        const bool branch_taken_0x38a6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A6E4u;
        // 0x38a6e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a6e4) {
            ctx->pc = 0x38A6F8u;
            goto label_38a6f8;
        }
    }
    ctx->pc = 0x38A6ECu;
    // 0x38a6ec: 0xc0e2552  jal         func_389548
    ctx->pc = 0x38A6ECu;
    SET_GPR_U32(ctx, 31, 0x38A6F4u);
    ctx->pc = 0x389548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389548u, 0x38A6ECu, 0x38A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A6F4u;
label_38a6f4:
    // 0x38a6f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38a6f8:
    // 0x38a6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x38A6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A6F8u;
        // 0x38a6fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A700u;
}
