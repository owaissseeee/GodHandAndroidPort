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

// Function: Tramp_read__7istreamPci_38A178
// Address: 0x38a178 - 0x38a198
void Tramp_read__7istreamPci_38A178_0x38a178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_read__7istreamPci_38A178_0x38a178");
#endif

    switch (ctx->pc) {
        case 0x38a188u: goto label_38a188;
        default: break;
    }

    ctx->pc = 0x38a178u;

    // 0x38a178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a17c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a180: 0xc0e1e24  jal         func_387890
    ctx->pc = 0x38A180u;
    SET_GPR_U32(ctx, 31, 0x38A188u);
    ctx->pc = 0x387890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387890u, 0x38A180u, 0x38A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A188u;
label_38a188:
    // 0x38a188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a18c: 0x3e00008  jr          $ra
    ctx->pc = 0x38A18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A18Cu;
        // 0x38a190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A194u;
    // 0x38a194: 0x0  nop
    ctx->pc = 0x38a194u;
    // NOP
    ctx->pc = 0x38a198u;
}
