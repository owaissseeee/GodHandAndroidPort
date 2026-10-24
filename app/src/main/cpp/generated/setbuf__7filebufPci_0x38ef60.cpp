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

// Function: setbuf__7filebufPci
// Address: 0x38ef60 - 0x38ef80
void setbuf__7filebufPci_0x38ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setbuf__7filebufPci_0x38ef60");
#endif

    switch (ctx->pc) {
        case 0x38ef70u: goto label_38ef70;
        default: break;
    }

    ctx->pc = 0x38ef60u;

    // 0x38ef60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38ef60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38ef64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38ef64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38ef68: 0xc0e4a8c  jal         func_392A30
    ctx->pc = 0x38EF68u;
    SET_GPR_U32(ctx, 31, 0x38EF70u);
    ctx->pc = 0x38EF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EF68u;
    // 0x38ef6c: 0xc0302d  daddu       $a2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392A30u, 0x38EF68u, 0x38EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EF70u;
label_38ef70:
    // 0x38ef70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38ef70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ef74: 0x3e00008  jr          $ra
    ctx->pc = 0x38EF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF74u;
        // 0x38ef78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EF7Cu;
    // 0x38ef7c: 0x0  nop
    ctx->pc = 0x38ef7cu;
    // NOP
    ctx->pc = 0x38ef80u;
}
