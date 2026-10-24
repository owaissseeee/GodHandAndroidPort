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

// Function: func_0033A4C8
// Address: 0x33a4c8 - 0x33a4f8
void func_0033A4C8_0x33a4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A4C8_0x33a4c8");
#endif

    switch (ctx->pc) {
        case 0x33a4dcu: goto label_33a4dc;
        case 0x33a4e4u: goto label_33a4e4;
        default: break;
    }

    ctx->pc = 0x33a4c8u;

    // 0x33a4c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a4cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33a4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33a4d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33a4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33a4d4: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x33A4D4u;
    SET_GPR_U32(ctx, 31, 0x33A4DCu);
    ctx->pc = 0x33A4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A4D4u;
    // 0x33a4d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x33A4D4u, 0x33A4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A4DCu;
label_33a4dc:
    // 0x33a4dc: 0xc0ce93e  jal         func_33A4F8
    ctx->pc = 0x33A4DCu;
    SET_GPR_U32(ctx, 31, 0x33A4E4u);
    ctx->pc = 0x33A4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A4DCu;
    // 0x33a4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A4F8u, 0x33A4DCu, 0x33A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A4E4u;
label_33a4e4:
    // 0x33a4e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a4e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a4e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33a4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33a4ec: 0x80ce284  j           func_338A10
    ctx->pc = 0x33A4ECu;
    ctx->pc = 0x33A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A4ECu;
    // 0x33a4f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x33A4ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A4F4u;
    // 0x33a4f4: 0x0  nop
    ctx->pc = 0x33a4f4u;
    // NOP
    ctx->pc = 0x33a4f8u;
}
