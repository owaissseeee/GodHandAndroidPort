#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: __builtin_vec_new
// Address: 0x79aa18 - 0x79aa40
void ps2___builtin_vec_new_0x79aa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___builtin_vec_new_0x79aa18");
#endif

    switch (ctx->pc) {
        case 0x79aa30u: goto label_79aa30;
        default: break;
    }

    ctx->pc = 0x79aa18u;

    // 0x79aa18: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79aa1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79aa1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79aa20: 0x8c463cf0  lw          $a2, 0x3CF0($v0)
    ctx->pc = 0x79aa20u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3CF0u));
    // 0x79aa24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79aa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79aa28: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x79AA28u;
    SET_GPR_U32(ctx, 31, 0x79AA30u);
    ctx->pc = 0x79AA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA28u;
    // 0x79aa2c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x79AA28u, 0x79AA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA30u;
label_79aa30:
    // 0x79aa30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79aa30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79aa34: 0x3e00008  jr          $ra
    ctx->pc = 0x79AA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA34u;
        // 0x79aa38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AA3Cu;
    // 0x79aa3c: 0x0  nop
    ctx->pc = 0x79aa3cu;
    // NOP
    ctx->pc = 0x79aa40u;
}
} // namespace gh_r000
