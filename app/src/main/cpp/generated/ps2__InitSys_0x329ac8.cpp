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

// Function: _InitSys
// Address: 0x329ac8 - 0x329af0
void ps2__InitSys_0x329ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InitSys_0x329ac8");
#endif

    if (__builtin_expect(ctx->pc != 0x329ac8u, 0)) {
        switch (ctx->pc) {
            case 0x329ad8u: goto label_329ad8;
            case 0x329ae0u: goto label_329ae0;
            default: break;
        }
    }


    // 0x329ac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x329acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329ad0: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x329AD0u;
    SET_GPR_U32(ctx, 31, 0x329AD8u);
    if (!runtime->callDirectStatic(rdram, ctx, &NoOp_33E6A8_0x33e6a8, 0x33e6a8u, 0x329ad8u)) {
        return;
    }
    ctx->pc = 0x329AD8u;
label_329ad8:
    // 0x329ad8: 0xc0ca6bc  jal         func_329AF0
    ctx->pc = 0x329AD8u;
    SET_GPR_U32(ctx, 31, 0x329AE0u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00329AF0_0x329af0, 0x329af0u, 0x329ae0u)) {
        return;
    }
    ctx->pc = 0x329AE0u;
label_329ae0:
    // 0x329ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329ae4: 0x80cf9ac  j           func_33E6B0
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329AE4u;
    // 0x329ae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x329AE4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x329aec: 0x0  nop
    // NOP
    ctx->pc = 0x329af0u;
}