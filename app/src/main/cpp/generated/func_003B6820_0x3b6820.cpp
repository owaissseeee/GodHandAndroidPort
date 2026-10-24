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

// Function: func_003B6820
// Address: 0x3b6820 - 0x3b6850
void func_003B6820_0x3b6820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B6820_0x3b6820");
#endif

    switch (ctx->pc) {
        case 0x3b6834u: goto label_3b6834;
        default: break;
    }

    ctx->pc = 0x3b6820u;

    // 0x3b6820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b6820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b6824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b6824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b6828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b6828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b682c: 0xc0eda06  jal         func_3B6818
    ctx->pc = 0x3B682Cu;
    SET_GPR_U32(ctx, 31, 0x3B6834u);
    ctx->pc = 0x3B6830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B682Cu;
    // 0x3b6830: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6818u, 0x3B682Cu, 0x3B6834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6834u;
label_3b6834:
    // 0x3b6834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b6834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b6838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b683c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b683cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6840: 0x80ebe30  j           func_3AF8C0
    ctx->pc = 0x3B6840u;
    ctx->pc = 0x3B6844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6840u;
    // 0x3b6844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF8C0u, 0x3B6840u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B6848u;
    // 0x3b6848: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3b6848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3b684c: 0x0  nop
    ctx->pc = 0x3b684cu;
    // NOP
    ctx->pc = 0x3b6850u;
}
