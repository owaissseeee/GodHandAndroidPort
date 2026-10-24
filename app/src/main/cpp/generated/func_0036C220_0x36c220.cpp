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

// Function: func_0036C220
// Address: 0x36c220 - 0x36c248
void func_0036C220_0x36c220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C220_0x36c220");
#endif

    switch (ctx->pc) {
        case 0x36c230u: goto label_36c230;
        default: break;
    }

    ctx->pc = 0x36c220u;

    // 0x36c220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c228: 0xc0db196  jal         func_36C658
    ctx->pc = 0x36C228u;
    SET_GPR_U32(ctx, 31, 0x36C230u);
    ctx->pc = 0x36C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C658u, 0x36C228u, 0x36C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C230u;
label_36c230:
    // 0x36c230: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x36c230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x36c234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c238: 0x8c446d38  lw          $a0, 0x6D38($v0)
    ctx->pc = 0x36c238u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x766D38u));
    // 0x36c23c: 0x24051be0  addiu       $a1, $zero, 0x1BE0
    ctx->pc = 0x36c23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7136));
    // 0x36c240: 0x80db110  j           func_36C440
    ctx->pc = 0x36C240u;
    ctx->pc = 0x36C244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C240u;
    // 0x36c244: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C440u, 0x36C240u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36C248u;
}
