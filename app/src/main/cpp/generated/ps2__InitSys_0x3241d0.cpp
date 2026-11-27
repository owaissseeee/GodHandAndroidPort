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
// Address: 0x3241d0 - 0x3241f8
void ps2__InitSys_0x3241d0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InitSys_0x3241d0");
#endif

    if (__builtin_expect(ctx->pc != 0x3241d0u, 0)) {
        switch (ctx->pc) {
            case 0x3241e0u: goto label_3241e0;
            case 0x3241e8u: goto label_3241e8;
            default: break;
        }
    }


    // 0x3241d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3241d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3241d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3241d8: 0xc0c9220  jal         func_324880
    ctx->pc = 0x3241D8u;
    SET_GPR_U32(ctx, 31, 0x3241E0u);
    if (!runtime->callDirectStatic(rdram, ctx, &Forward33E6A8_324880_0x324880, 0x324880u, 0x3241e0u)) {
        return;
    }
label_3241e0:
    // 0x3241e0: 0xc0c907e  jal         func_3241F8
    ctx->pc = 0x3241E0u;
    SET_GPR_U32(ctx, 31, 0x3241E8u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_003241F8_0x3241f8, 0x3241f8u, 0x3241e8u)) {
        return;
    }
label_3241e8:
    // 0x3241e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3241e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3241ec: 0x80c9226  j           func_324898
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3241ECu;
    // 0x3241f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324898u, 0x3241ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x3241f4: 0x0  nop
    // NOP
    ctx->pc = 0x3241f8u;
}