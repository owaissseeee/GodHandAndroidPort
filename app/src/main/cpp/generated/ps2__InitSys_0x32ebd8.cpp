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
// Address: 0x32ebd8 - 0x32ec00
void ps2__InitSys_0x32ebd8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InitSys_0x32ebd8");
#endif

    if (__builtin_expect(ctx->pc != 0x32ebd8u, 0)) {
        switch (ctx->pc) {
            case 0x32ebe8u: goto label_32ebe8;
            case 0x32ebf0u: goto label_32ebf0;
            default: break;
        }
    }


    // 0x32ebd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32ebdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32ebdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32ebe0: 0xc0cff28  jal         func_33FCA0
    ctx->pc = 0x32EBE0u;
    SET_GPR_U32(ctx, 31, 0x32EBE8u);
    if (!runtime->callDirectStatic(rdram, ctx, &Obj33F8_NoOp_FCA0_0x33fca0, 0x33fca0u, 0x32ebe8u)) {
        return;
    }
label_32ebe8:
    // 0x32ebe8: 0xc0cbb00  jal         func_32EC00
    ctx->pc = 0x32EBE8u;
    SET_GPR_U32(ctx, 31, 0x32EBF0u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0032EC00_0x32ec00, 0x32ec00u, 0x32ebf0u)) {
        return;
    }
label_32ebf0:
    // 0x32ebf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ebf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ebf4: 0x80cff2a  j           func_33FCA8
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EBF4u;
    // 0x32ebf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32EBF4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x32ebfc: 0x0  nop
    // NOP
    ctx->pc = 0x32ec00u;
}