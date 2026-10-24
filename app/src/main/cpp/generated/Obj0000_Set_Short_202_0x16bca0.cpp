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

// Function: Obj0000_Set_Short_202
// Address: 0x16bca0 - 0x16bcc0
void Obj0000_Set_Short_202_0x16bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Short_202_0x16bca0");
#endif

    switch (ctx->pc) {
        case 0x16bcb0u: goto label_16bcb0;
        default: break;
    }

    ctx->pc = 0x16bca0u;

    // 0x16bca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16bca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16bca8: 0xc05ac7e  jal         func_16B1F8
    ctx->pc = 0x16BCA8u;
    SET_GPR_U32(ctx, 31, 0x16BCB0u);
    ctx->pc = 0x16BCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BCA8u;
    // 0x16bcac: 0x84850202  lh          $a1, 0x202($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 514)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B1F8u, 0x16BCA8u, 0x16BCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BCB0u;
label_16bcb0:
    // 0x16bcb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bcb4: 0x3e00008  jr          $ra
    ctx->pc = 0x16BCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BCB4u;
        // 0x16bcb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BCBCu;
    // 0x16bcbc: 0x0  nop
    ctx->pc = 0x16bcbcu;
    // NOP
    ctx->pc = 0x16bcc0u;
}
