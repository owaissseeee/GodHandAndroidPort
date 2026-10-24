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

// Function: func_00339798
// Address: 0x339798 - 0x3397c8
void func_00339798_0x339798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00339798_0x339798");
#endif

    switch (ctx->pc) {
        case 0x3397acu: goto label_3397ac;
        case 0x3397b4u: goto label_3397b4;
        default: break;
    }

    ctx->pc = 0x339798u;

    // 0x339798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33979c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33979cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3397a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3397a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3397a4: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x3397A4u;
    SET_GPR_U32(ctx, 31, 0x3397ACu);
    ctx->pc = 0x3397A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3397A4u;
    // 0x3397a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x3397A4u, 0x3397ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3397ACu;
label_3397ac:
    // 0x3397ac: 0xc0ce5f2  jal         func_3397C8
    ctx->pc = 0x3397ACu;
    SET_GPR_U32(ctx, 31, 0x3397B4u);
    ctx->pc = 0x3397B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3397ACu;
    // 0x3397b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3397C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3397C8u, 0x3397ACu, 0x3397B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3397B4u;
label_3397b4:
    // 0x3397b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3397b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3397b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3397b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3397bc: 0x80ce284  j           func_338A10
    ctx->pc = 0x3397BCu;
    ctx->pc = 0x3397C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3397BCu;
    // 0x3397c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x3397BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3397C4u;
    // 0x3397c4: 0x0  nop
    ctx->pc = 0x3397c4u;
    // NOP
    ctx->pc = 0x3397c8u;
}
