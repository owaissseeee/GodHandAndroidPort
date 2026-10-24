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
// Function: __get_eh_context
// Address: 0x7cb408 - 0x7cb430
void ps2___get_eh_context_0x7cb408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___get_eh_context_0x7cb408");
#endif

    switch (ctx->pc) {
        case 0x7cb408u: goto label_7cb408;
        case 0x7cb40cu: goto label_7cb40c;
        case 0x7cb410u: goto label_7cb410;
        case 0x7cb414u: goto label_7cb414;
        case 0x7cb418u: goto label_7cb418;
        case 0x7cb41cu: goto label_7cb41c;
        case 0x7cb420u: goto label_7cb420;
        case 0x7cb424u: goto label_7cb424;
        case 0x7cb428u: goto label_7cb428;
        case 0x7cb42cu: goto label_7cb42c;
        default: break;
    }

    ctx->pc = 0x7cb408u;

label_7cb408:
    // 0x7cb408: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cb408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
label_7cb40c:
    // 0x7cb40c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7cb40cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_7cb410:
    // 0x7cb410: 0x8c6201a4  lw          $v0, 0x1A4($v1)
    ctx->pc = 0x7cb410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
label_7cb414:
    // 0x7cb414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7cb414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_7cb418:
    // 0x7cb418: 0x40f809  jalr        $v0
label_7cb41c:
    if (ctx->pc == 0x7CB41Cu) {
        ctx->pc = 0x7CB420u;
        goto label_7cb420;
    }
    ctx->pc = 0x7CB418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7CB420u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB418u, 0x7CB420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CB420u;
label_7cb420:
    // 0x7cb420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7cb420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7cb424:
    // 0x7cb424: 0x3e00008  jr          $ra
label_7cb428:
    if (ctx->pc == 0x7CB428u) {
        ctx->pc = 0x7CB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB424u;
        // 0x7cb428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB42Cu;
        goto label_7cb42c;
    }
    ctx->pc = 0x7CB424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB424u;
        // 0x7cb428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CB42Cu;
label_7cb42c:
    // 0x7cb42c: 0x0  nop
    ctx->pc = 0x7cb42cu;
    // NOP
    ctx->pc = 0x7cb430u;
}
} // namespace gh_mcport
