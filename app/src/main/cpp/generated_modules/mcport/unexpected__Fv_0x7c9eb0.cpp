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
// Function: unexpected__Fv
// Address: 0x7c9eb0 - 0x7c9ec8
void unexpected__Fv_0x7c9eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("unexpected__Fv_0x7c9eb0");
#endif

    switch (ctx->pc) {
        case 0x7c9eb0u: goto label_7c9eb0;
        case 0x7c9eb4u: goto label_7c9eb4;
        case 0x7c9eb8u: goto label_7c9eb8;
        case 0x7c9ebcu: goto label_7c9ebc;
        case 0x7c9ec0u: goto label_7c9ec0;
        case 0x7c9ec4u: goto label_7c9ec4;
        default: break;
    }

    ctx->pc = 0x7c9eb0u;

label_7c9eb0:
    // 0x7c9eb0: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
label_7c9eb4:
    // 0x7c9eb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c9eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_7c9eb8:
    // 0x7c9eb8: 0x8c43f908  lw          $v1, -0x6F8($v0)
    ctx->pc = 0x7c9eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965512)));
label_7c9ebc:
    // 0x7c9ebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c9ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_7c9ec0:
    // 0x7c9ec0: 0x60f809  jalr        $v1
label_7c9ec4:
    if (ctx->pc == 0x7C9EC4u) {
        ctx->pc = 0x7C9EC8u;
        goto label_fallthrough_0x7c9ec0;
    }
    ctx->pc = 0x7C9EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7C9EC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9EC0u, 0x7C9EC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x7c9ec0:
    ctx->pc = 0x7C9EC8u;
}
} // namespace gh_mcport
