#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r806_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r806
{
// Function: __builtin_vec_new
// Address: 0x7991a8 - 0x7991d0
void ps2___builtin_vec_new_0x7991a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___builtin_vec_new_0x7991a8");
#endif

    switch (ctx->pc) {
        case 0x7991c0u: goto label_7991c0;
        default: break;
    }

    ctx->pc = 0x7991a8u;

    // 0x7991a8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7991a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7991ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7991acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7991b0: 0x8c463cf0  lw          $a2, 0x3CF0($v0)
    ctx->pc = 0x7991b0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3CF0u));
    // 0x7991b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7991b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7991b8: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x7991B8u;
    SET_GPR_U32(ctx, 31, 0x7991C0u);
    ctx->pc = 0x7991BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7991B8u;
    // 0x7991bc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x7991B8u, 0x7991C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7991C0u;
label_7991c0:
    // 0x7991c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7991c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7991c4: 0x3e00008  jr          $ra
    ctx->pc = 0x7991C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7991C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7991C4u;
        // 0x7991c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7991C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7991CCu;
    // 0x7991cc: 0x0  nop
    ctx->pc = 0x7991ccu;
    // NOP
    ctx->pc = 0x7991d0u;
}
} // namespace gh_r806
