#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __get_dynamic_handler_chain
// Address: 0x7cb4e8 - 0x7cb510
void ps2___get_dynamic_handler_chain_0x7cb4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___get_dynamic_handler_chain_0x7cb4e8");
#endif

    switch (ctx->pc) {
        case 0x7cb4e8u: goto label_7cb4e8;
        case 0x7cb4ecu: goto label_7cb4ec;
        case 0x7cb4f0u: goto label_7cb4f0;
        case 0x7cb4f4u: goto label_7cb4f4;
        case 0x7cb4f8u: goto label_7cb4f8;
        case 0x7cb4fcu: goto label_7cb4fc;
        case 0x7cb500u: goto label_7cb500;
        case 0x7cb504u: goto label_7cb504;
        case 0x7cb508u: goto label_7cb508;
        case 0x7cb50cu: goto label_7cb50c;
        default: break;
    }

    ctx->pc = 0x7cb4e8u;

label_7cb4e8:
    // 0x7cb4e8: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cb4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
label_7cb4ec:
    // 0x7cb4ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7cb4ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_7cb4f0:
    // 0x7cb4f0: 0x8c6201a4  lw          $v0, 0x1A4($v1)
    ctx->pc = 0x7cb4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
label_7cb4f4:
    // 0x7cb4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7cb4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_7cb4f8:
    // 0x7cb4f8: 0x40f809  jalr        $v0
label_7cb4fc:
    if (ctx->pc == 0x7CB4FCu) {
        ctx->pc = 0x7CB500u;
        goto label_7cb500;
    }
    ctx->pc = 0x7CB4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7CB500u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB4F8u, 0x7CB500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CB500u;
label_7cb500:
    // 0x7cb500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7cb500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7cb504:
    // 0x7cb504: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x7cb504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_7cb508:
    // 0x7cb508: 0x3e00008  jr          $ra
label_7cb50c:
    if (ctx->pc == 0x7CB50Cu) {
        ctx->pc = 0x7CB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB508u;
        // 0x7cb50c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB510u;
        goto label_fallthrough_0x7cb508;
    }
    ctx->pc = 0x7CB508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB508u;
        // 0x7cb50c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7cb508:
    ctx->pc = 0x7CB510u;
}
} // namespace gh_mcport
