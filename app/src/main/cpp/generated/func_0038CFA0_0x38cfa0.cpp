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

// Function: func_0038CFA0
// Address: 0x38cfa0 - 0x38cfc0
void func_0038CFA0_0x38cfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038CFA0_0x38cfa0");
#endif

    switch (ctx->pc) {
        case 0x38cfb0u: goto label_38cfb0;
        default: break;
    }

    ctx->pc = 0x38cfa0u;

    // 0x38cfa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38cfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38cfa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38cfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38cfa8: 0xc0e3396  jal         func_38CE58
    ctx->pc = 0x38CFA8u;
    SET_GPR_U32(ctx, 31, 0x38CFB0u);
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x38CFA8u, 0x38CFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CFB0u;
label_38cfb0:
    // 0x38cfb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38cfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38cfb4: 0x80e33d0  j           func_38CF40
    ctx->pc = 0x38CFB4u;
    ctx->pc = 0x38CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CFB4u;
    // 0x38cfb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CF40u, 0x38CFB4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x38CFBCu;
    // 0x38cfbc: 0x0  nop
    ctx->pc = 0x38cfbcu;
    // NOP
    ctx->pc = 0x38cfc0u;
}
