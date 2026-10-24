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

// Function: func_0036C628
// Address: 0x36c628 - 0x36c658
void func_0036C628_0x36c628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C628_0x36c628");
#endif

    switch (ctx->pc) {
        case 0x36c638u: goto label_36c638;
        default: break;
    }

    ctx->pc = 0x36c628u;

    // 0x36c628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c62c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c630: 0xc0db3cc  jal         func_36CF30
    ctx->pc = 0x36C630u;
    SET_GPR_U32(ctx, 31, 0x36C638u);
    ctx->pc = 0x36CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CF30u, 0x36C630u, 0x36C638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C638u;
label_36c638:
    // 0x36c638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c63c: 0x3c050076  lui         $a1, 0x76
    ctx->pc = 0x36c63cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)118 << 16));
    // 0x36c640: 0x24a56d48  addiu       $a1, $a1, 0x6D48
    ctx->pc = 0x36c640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27976));
    // 0x36c644: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x36c644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36c648: 0x24063840  addiu       $a2, $zero, 0x3840
    ctx->pc = 0x36c648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14400));
    // 0x36c64c: 0x80db332  j           func_36CCC8
    ctx->pc = 0x36C64Cu;
    ctx->pc = 0x36C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C64Cu;
    // 0x36c650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CCC8u, 0x36C64Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36C654u;
    // 0x36c654: 0x0  nop
    ctx->pc = 0x36c654u;
    // NOP
    ctx->pc = 0x36c658u;
}
