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

// Function: func_0032B498
// Address: 0x32b498 - 0x32b4c8
void func_0032B498_0x32b498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032B498_0x32b498");
#endif

    switch (ctx->pc) {
        case 0x32b4acu: goto label_32b4ac;
        case 0x32b4b4u: goto label_32b4b4;
        default: break;
    }

    ctx->pc = 0x32b498u;

    // 0x32b498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32b498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32b49c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32b49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32b4a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32b4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32b4a4: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32B4A4u;
    SET_GPR_U32(ctx, 31, 0x32B4ACu);
    ctx->pc = 0x32B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4A4u;
    // 0x32b4a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32B4A4u, 0x32B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B4ACu;
label_32b4ac:
    // 0x32b4ac: 0xc0cad32  jal         func_32B4C8
    ctx->pc = 0x32B4ACu;
    SET_GPR_U32(ctx, 31, 0x32B4B4u);
    ctx->pc = 0x32B4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4ACu;
    // 0x32b4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B4C8u, 0x32B4ACu, 0x32B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B4B4u;
label_32b4b4:
    // 0x32b4b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32b4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b4b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32b4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32b4bc: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32B4BCu;
    ctx->pc = 0x32B4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B4BCu;
    // 0x32b4c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32B4BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32B4C4u;
    // 0x32b4c4: 0x0  nop
    ctx->pc = 0x32b4c4u;
    // NOP
    ctx->pc = 0x32b4c8u;
}
