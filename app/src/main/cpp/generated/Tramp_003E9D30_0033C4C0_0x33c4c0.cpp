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

// Function: Tramp_003E9D30_0033C4C0
// Address: 0x33c4c0 - 0x33c4e8
void Tramp_003E9D30_0033C4C0_0x33c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_003E9D30_0033C4C0_0x33c4c0");
#endif

    switch (ctx->pc) {
        case 0x33c4c0u: goto label_33c4c0;
        case 0x33c4c4u: goto label_33c4c4;
        case 0x33c4c8u: goto label_33c4c8;
        case 0x33c4ccu: goto label_33c4cc;
        case 0x33c4d0u: goto label_33c4d0;
        case 0x33c4d4u: goto label_33c4d4;
        case 0x33c4d8u: goto label_33c4d8;
        case 0x33c4dcu: goto label_33c4dc;
        case 0x33c4e0u: goto label_33c4e0;
        case 0x33c4e4u: goto label_33c4e4;
        default: break;
    }

    ctx->pc = 0x33c4c0u;

label_33c4c0:
    // 0x33c4c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33c4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33c4c4:
    // 0x33c4c4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_33c4c8:
    // 0x33c4c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33c4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33c4cc:
    // 0x33c4cc: 0x8c439d30  lw          $v1, -0x62D0($v0)
    ctx->pc = 0x33c4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942000)));
label_33c4d0:
    // 0x33c4d0: 0x60f809  jalr        $v1
label_33c4d4:
    if (ctx->pc == 0x33C4D4u) {
        ctx->pc = 0x33C4D8u;
        goto label_33c4d8;
    }
    ctx->pc = 0x33C4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33C4D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C4D0u, 0x33C4D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C4D8u;
label_33c4d8:
    // 0x33c4d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33c4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c4dc:
    // 0x33c4dc: 0x3e00008  jr          $ra
label_33c4e0:
    if (ctx->pc == 0x33C4E0u) {
        ctx->pc = 0x33C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4DCu;
        // 0x33c4e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C4E4u;
        goto label_33c4e4;
    }
    ctx->pc = 0x33C4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C4DCu;
        // 0x33c4e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C4E4u;
label_33c4e4:
    // 0x33c4e4: 0x0  nop
    ctx->pc = 0x33c4e4u;
    // NOP
    ctx->pc = 0x33c4e8u;
}
