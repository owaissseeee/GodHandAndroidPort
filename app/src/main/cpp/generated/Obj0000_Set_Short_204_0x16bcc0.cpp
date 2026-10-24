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

// Function: Obj0000_Set_Short_204
// Address: 0x16bcc0 - 0x16bce0
void Obj0000_Set_Short_204_0x16bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Short_204_0x16bcc0");
#endif

    switch (ctx->pc) {
        case 0x16bcd0u: goto label_16bcd0;
        default: break;
    }

    ctx->pc = 0x16bcc0u;

    // 0x16bcc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bcc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16bcc8: 0xc05ac7e  jal         func_16B1F8
    ctx->pc = 0x16BCC8u;
    SET_GPR_U32(ctx, 31, 0x16BCD0u);
    ctx->pc = 0x16BCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BCC8u;
    // 0x16bccc: 0x84850204  lh          $a1, 0x204($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 516)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B1F8u, 0x16BCC8u, 0x16BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BCD0u;
label_16bcd0:
    // 0x16bcd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bcd4: 0x3e00008  jr          $ra
    ctx->pc = 0x16BCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BCD4u;
        // 0x16bcd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BCDCu;
    // 0x16bcdc: 0x0  nop
    ctx->pc = 0x16bcdcu;
    // NOP
    ctx->pc = 0x16bce0u;
}
