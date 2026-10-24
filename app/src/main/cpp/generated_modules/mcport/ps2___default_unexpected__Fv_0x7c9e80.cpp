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
// Function: __default_unexpected__Fv
// Address: 0x7c9e80 - 0x7c9e90
void ps2___default_unexpected__Fv_0x7c9e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___default_unexpected__Fv_0x7c9e80");
#endif

    ctx->pc = 0x7c9e80u;

    // 0x7c9e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c9e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c9e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c9e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c9e88: 0xc1f279a  jal         func_7C9E68
    ctx->pc = 0x7C9E88u;
    SET_GPR_U32(ctx, 31, 0x7C9E90u);
    ctx->pc = 0x7C9E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9E68u, 0x7C9E88u, 0x7C9E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C9E90u;
}
} // namespace gh_mcport
