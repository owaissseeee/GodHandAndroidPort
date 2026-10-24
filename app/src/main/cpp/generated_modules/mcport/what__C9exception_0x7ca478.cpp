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
// Function: what__C9exception
// Address: 0x7ca478 - 0x7ca4a0
void what__C9exception_0x7ca478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("what__C9exception_0x7ca478");
#endif

    switch (ctx->pc) {
        case 0x7ca478u: goto label_7ca478;
        case 0x7ca47cu: goto label_7ca47c;
        case 0x7ca480u: goto label_7ca480;
        case 0x7ca484u: goto label_7ca484;
        case 0x7ca488u: goto label_7ca488;
        case 0x7ca48cu: goto label_7ca48c;
        case 0x7ca490u: goto label_7ca490;
        case 0x7ca494u: goto label_7ca494;
        case 0x7ca498u: goto label_7ca498;
        case 0x7ca49cu: goto label_7ca49c;
        default: break;
    }

    ctx->pc = 0x7ca478u;

label_7ca478:
    // 0x7ca478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ca478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_7ca47c:
    // 0x7ca47c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x7ca47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_7ca480:
    // 0x7ca480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ca480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_7ca484:
    // 0x7ca484: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7ca484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7ca488:
    // 0x7ca488: 0x40f809  jalr        $v0
label_7ca48c:
    if (ctx->pc == 0x7CA48Cu) {
        ctx->pc = 0x7CA490u;
        goto label_7ca490;
    }
    ctx->pc = 0x7CA488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7CA490u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CA488u, 0x7CA490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CA490u;
label_7ca490:
    // 0x7ca490: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x7ca490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7ca494:
    // 0x7ca494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ca494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7ca498:
    // 0x7ca498: 0x3e00008  jr          $ra
label_7ca49c:
    if (ctx->pc == 0x7CA49Cu) {
        ctx->pc = 0x7CA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA498u;
        // 0x7ca49c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CA4A0u;
        goto label_fallthrough_0x7ca498;
    }
    ctx->pc = 0x7CA498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CA498u;
        // 0x7ca49c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CA498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7ca498:
    ctx->pc = 0x7CA4A0u;
}
} // namespace gh_mcport
