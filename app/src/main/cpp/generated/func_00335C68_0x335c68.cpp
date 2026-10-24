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

// Function: func_00335C68
// Address: 0x335c68 - 0x335ca8
void func_00335C68_0x335c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335C68_0x335c68");
#endif

    switch (ctx->pc) {
        case 0x335c84u: goto label_335c84;
        case 0x335c90u: goto label_335c90;
        default: break;
    }

    ctx->pc = 0x335c68u;

    // 0x335c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335c6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335c70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x335c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335c74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335c78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x335c7c: 0xc0cd736  jal         func_335CD8
    ctx->pc = 0x335C7Cu;
    SET_GPR_U32(ctx, 31, 0x335C84u);
    ctx->pc = 0x335C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335C7Cu;
    // 0x335c80: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CD8u, 0x335C7Cu, 0x335C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335C84u;
label_335c84:
    // 0x335c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x335c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335c88: 0xc0cd72a  jal         func_335CA8
    ctx->pc = 0x335C88u;
    SET_GPR_U32(ctx, 31, 0x335C90u);
    ctx->pc = 0x335C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335C88u;
    // 0x335c8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CA8u, 0x335C88u, 0x335C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335C90u;
label_335c90:
    // 0x335c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335c94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335c98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x335c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335c9c: 0x80cd738  j           func_335CE0
    ctx->pc = 0x335C9Cu;
    ctx->pc = 0x335CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335C9Cu;
    // 0x335ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CE0u, 0x335C9Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x335CA4u;
    // 0x335ca4: 0x0  nop
    ctx->pc = 0x335ca4u;
    // NOP
    ctx->pc = 0x335ca8u;
}
