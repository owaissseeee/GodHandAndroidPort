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

// Function: _IO_sgetn
// Address: 0x38c9e8 - 0x38ca10
void ps2__IO_sgetn_0x38c9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_sgetn_0x38c9e8");
#endif

    switch (ctx->pc) {
        case 0x38c9e8u: goto label_38c9e8;
        case 0x38c9ecu: goto label_38c9ec;
        case 0x38c9f0u: goto label_38c9f0;
        case 0x38c9f4u: goto label_38c9f4;
        case 0x38c9f8u: goto label_38c9f8;
        case 0x38c9fcu: goto label_38c9fc;
        case 0x38ca00u: goto label_38ca00;
        case 0x38ca04u: goto label_38ca04;
        case 0x38ca08u: goto label_38ca08;
        case 0x38ca0cu: goto label_38ca0c;
        default: break;
    }

    ctx->pc = 0x38c9e8u;

label_38c9e8:
    // 0x38c9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38c9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_38c9ec:
    // 0x38c9ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38c9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38c9f0:
    // 0x38c9f0: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x38c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_38c9f4:
    // 0x38c9f4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x38c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_38c9f8:
    // 0x38c9f8: 0x40f809  jalr        $v0
label_38c9fc:
    if (ctx->pc == 0x38C9FCu) {
        ctx->pc = 0x38CA00u;
        goto label_38ca00;
    }
    ctx->pc = 0x38C9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38CA00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C9F8u, 0x38CA00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CA00u;
label_38ca00:
    // 0x38ca00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38ca00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38ca04:
    // 0x38ca04: 0x3e00008  jr          $ra
label_38ca08:
    if (ctx->pc == 0x38CA08u) {
        ctx->pc = 0x38CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA04u;
        // 0x38ca08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CA0Cu;
        goto label_38ca0c;
    }
    ctx->pc = 0x38CA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CA04u;
        // 0x38ca08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CA0Cu;
label_38ca0c:
    // 0x38ca0c: 0x0  nop
    ctx->pc = 0x38ca0cu;
    // NOP
    ctx->pc = 0x38ca10u;
}
