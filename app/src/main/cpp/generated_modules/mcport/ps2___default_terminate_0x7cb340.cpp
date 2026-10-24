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
// Function: __default_terminate
// Address: 0x7cb340 - 0x7cb350
void ps2___default_terminate_0x7cb340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___default_terminate_0x7cb340");
#endif

    ctx->pc = 0x7cb340u;

    // 0x7cb340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7cb340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7cb344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7cb344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7cb348: 0xc0e9ed2  jal         func_3A7B48
    ctx->pc = 0x7CB348u;
    SET_GPR_U32(ctx, 31, 0x7CB350u);
    ctx->pc = 0x3A7B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B48u, 0x7CB348u, 0x7CB350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB350u;
}
} // namespace gh_mcport
