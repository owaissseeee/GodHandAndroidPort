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

// Function: func_00320270
// Address: 0x320270 - 0x320280
void func_00320270_0x320270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00320270_0x320270");
#endif

    ctx->pc = 0x320270u;

    // 0x320270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x320274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320278: 0xc0e9ed2  jal         func_3A7B48
    ctx->pc = 0x320278u;
    SET_GPR_U32(ctx, 31, 0x320280u);
    ctx->pc = 0x3A7B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B48u, 0x320278u, 0x320280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320280u;
}
