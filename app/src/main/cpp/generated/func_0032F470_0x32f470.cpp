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

// Function: func_0032F470
// Address: 0x32f470 - 0x32f4a8
void func_0032F470_0x32f470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032F470_0x32f470");
#endif

    switch (ctx->pc) {
        case 0x32f484u: goto label_32f484;
        default: break;
    }

    ctx->pc = 0x32f470u;

    // 0x32f470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32f470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32f474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32f474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32f478: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32f478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32f47c: 0xc0cff1c  jal         func_33FC70
    ctx->pc = 0x32F47Cu;
    SET_GPR_U32(ctx, 31, 0x32F484u);
    ctx->pc = 0x32F480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F47Cu;
    // 0x32f480: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32F47Cu, 0x32F484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F484u;
label_32f484:
    // 0x32f484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f488: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32f488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32f48c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x32f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x32f490: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x32f490u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x32f494: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x32f494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x32f498: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32f498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x32f49c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32f49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f4a0: 0x80cff22  j           func_33FC88
    ctx->pc = 0x32F4A0u;
    ctx->pc = 0x32F4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F4A0u;
    // 0x32f4a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32F4A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32F4A8u;
}
