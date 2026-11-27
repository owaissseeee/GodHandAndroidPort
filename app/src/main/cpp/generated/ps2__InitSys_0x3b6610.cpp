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
// Address: 0x3b6610 - 0x3b6668
void ps2__InitSys_0x3b6610(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InitSys_0x3b6610");
#endif

    if (__builtin_expect(ctx->pc != 0x3b6610u, 0)) {
        switch (ctx->pc) {
            case 0x3b6620u: goto label_3b6620;
            case 0x3b6628u: goto label_3b6628;
            case 0x3b6630u: goto label_3b6630;
            case 0x3b6638u: goto label_3b6638;
            case 0x3b6640u: goto label_3b6640;
            case 0x3b6648u: goto label_3b6648;
            case 0x3b6650u: goto label_3b6650;
            case 0x3b6658u: goto label_3b6658;
            default: break;
        }
    }


    // 0x3b6610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b6614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b6614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b6618: 0xc0ed902  jal         func_3B6408
    ctx->pc = 0x3B6618u;
    SET_GPR_U32(ctx, 31, 0x3B6620u);
    if (!runtime->callDirectStatic(rdram, ctx, &supplement_crt0_0x3b6408, 0x3b6408u, 0x3b6620u)) {
        return;
    }
label_3b6620:
    // 0x3b6620: 0xc0ed940  jal         func_3B6500
    ctx->pc = 0x3B6620u;
    SET_GPR_U32(ctx, 31, 0x3B6628u);
    if (!runtime->callDirectStatic(rdram, ctx, &InitSystemCallTableAddress_0x3b6500, 0x3b6500u, 0x3b6628u)) {
        return;
    }
label_3b6628:
    // 0x3b6628: 0xc0eda2e  jal         func_3B68B8
    ctx->pc = 0x3B6628u;
    SET_GPR_U32(ctx, 31, 0x3B6630u);
    if (!runtime->callDirectStatic(rdram, ctx, &InitAlarm_0x3b68b8, 0x3b68b8u, 0x3b6630u)) {
        return;
    }
label_3b6630:
    // 0x3b6630: 0xc0eda8c  jal         func_3B6A30
    SET_GPR_U32(ctx, 31, 0x3B6638u);
    ctx->pc = 0x3B6634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6630u;
    // 0x3b6634: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &InitTimer_0x3b6a30, 0x3b6a30u, 0x3b6638u)) {
        return;
    }
label_3b6638:
    // 0x3b6638: 0xc0edae4  jal         func_3B6B90
    ctx->pc = 0x3B6638u;
    SET_GPR_U32(ctx, 31, 0x3B6640u);
    if (!runtime->callDirectStatic(rdram, ctx, &StartTimerSystemTime_0x3b6b90, 0x3b6b90u, 0x3b6640u)) {
        return;
    }
label_3b6640:
    // 0x3b6640: 0xc0ec254  jal         func_3B0950
    ctx->pc = 0x3B6640u;
    SET_GPR_U32(ctx, 31, 0x3B6648u);
    if (!runtime->callDirectStatic(rdram, ctx, &InitThread_0x3b0950, 0x3b0950u, 0x3b6648u)) {
        return;
    }
label_3b6648:
    // 0x3b6648: 0xc0ed9ce  jal         func_3B6738
    ctx->pc = 0x3B6648u;
    SET_GPR_U32(ctx, 31, 0x3B6650u);
    if (!runtime->callDirectStatic(rdram, ctx, &InitExecPS2_0x3b6738, 0x3b6738u, 0x3b6650u)) {
        return;
    }
label_3b6650:
    // 0x3b6650: 0xc0eded0  jal         func_3B7B40
    ctx->pc = 0x3B6650u;
    SET_GPR_U32(ctx, 31, 0x3B6658u);
    if (!runtime->callDirectStatic(rdram, ctx, &InitTLBFunctions_0x3b7b40, 0x3b7b40u, 0x3b6658u)) {
        return;
    }
label_3b6658:
    // 0x3b6658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b6658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b665c: 0x80ede62  j           func_3B7988
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B665Cu;
    // 0x3b6660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7988u, 0x3B665Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x3b6664: 0x0  nop
    // NOP
    ctx->pc = 0x3b6668u;
}