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

// Function: func_00326020
// Address: 0x326020 - 0x326050
void func_00326020_0x326020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00326020_0x326020");
#endif

    switch (ctx->pc) {
        case 0x32603cu: goto label_32603c;
        default: break;
    }

    ctx->pc = 0x326020u;

    // 0x326020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326024: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x326024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x326028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x326028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32602c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32602cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326030: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x326030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x326034: 0xc0cd4d2  jal         func_335348
    ctx->pc = 0x326034u;
    SET_GPR_U32(ctx, 31, 0x32603Cu);
    ctx->pc = 0x326038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326034u;
    // 0x326038: 0xac50f9e0  sw          $s0, -0x620($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965728), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335348u, 0x326034u, 0x32603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32603Cu;
label_32603c:
    // 0x32603c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32603cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x326040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x326040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326048: 0x80ccc70  j           func_3331C0
    ctx->pc = 0x326048u;
    ctx->pc = 0x32604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326048u;
    // 0x32604c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3331C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3331C0u, 0x326048u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x326050u;
}
