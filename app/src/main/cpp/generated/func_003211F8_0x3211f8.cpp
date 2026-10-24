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

// Function: func_003211F8
// Address: 0x3211f8 - 0x321208
void func_003211F8_0x3211f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003211F8_0x3211f8");
#endif

    ctx->pc = 0x3211f8u;

    // 0x3211f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3211f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3211fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3211fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x321200: 0xc0c8478  jal         func_3211E0
    ctx->pc = 0x321200u;
    SET_GPR_U32(ctx, 31, 0x321208u);
    ctx->pc = 0x3211E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3211E0u, 0x321200u, 0x321208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321208u;
}
