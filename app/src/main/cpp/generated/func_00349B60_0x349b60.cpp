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

// Function: func_00349B60
// Address: 0x349b60 - 0x349b88
void func_00349B60_0x349b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349B60_0x349b60");
#endif

    switch (ctx->pc) {
        case 0x349b74u: goto label_349b74;
        default: break;
    }

    ctx->pc = 0x349b60u;

    // 0x349b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349b64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x349b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x349b68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x349b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x349b6c: 0xc0ca0b4  jal         func_3282D0
    ctx->pc = 0x349B6Cu;
    SET_GPR_U32(ctx, 31, 0x349B74u);
    ctx->pc = 0x349B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349B6Cu;
    // 0x349b70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3282D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3282D0u, 0x349B6Cu, 0x349B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349B74u;
label_349b74:
    // 0x349b74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x349b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x349b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x349b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x349b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349b80: 0x80c9fea  j           func_327FA8
    ctx->pc = 0x349B80u;
    ctx->pc = 0x349B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349B80u;
    // 0x349b84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327FA8u, 0x349B80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x349B88u;
}
