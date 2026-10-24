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
// Function: terminate__Fv
// Address: 0x7c9e68 - 0x7c9e80
void terminate__Fv_0x7c9e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("terminate__Fv_0x7c9e68");
#endif

    switch (ctx->pc) {
        case 0x7c9e68u: goto label_7c9e68;
        case 0x7c9e6cu: goto label_7c9e6c;
        case 0x7c9e70u: goto label_7c9e70;
        case 0x7c9e74u: goto label_7c9e74;
        case 0x7c9e78u: goto label_7c9e78;
        case 0x7c9e7cu: goto label_7c9e7c;
        default: break;
    }

    ctx->pc = 0x7c9e68u;

label_7c9e68:
    // 0x7c9e68: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
label_7c9e6c:
    // 0x7c9e6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c9e6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_7c9e70:
    // 0x7c9e70: 0x8c4301a0  lw          $v1, 0x1A0($v0)
    ctx->pc = 0x7c9e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
label_7c9e74:
    // 0x7c9e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c9e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_7c9e78:
    // 0x7c9e78: 0x60f809  jalr        $v1
label_7c9e7c:
    if (ctx->pc == 0x7C9E7Cu) {
        ctx->pc = 0x7C9E80u;
        goto label_fallthrough_0x7c9e78;
    }
    ctx->pc = 0x7C9E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7C9E80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9E78u, 0x7C9E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x7c9e78:
    ctx->pc = 0x7C9E80u;
}
} // namespace gh_mcport
