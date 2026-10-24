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

// Function: func_00335580
// Address: 0x335580 - 0x3355c0
void func_00335580_0x335580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335580_0x335580");
#endif

    switch (ctx->pc) {
        case 0x33559cu: goto label_33559c;
        case 0x3355a8u: goto label_3355a8;
        default: break;
    }

    ctx->pc = 0x335580u;

    // 0x335580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x335580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x335584: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335588: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x335588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33558c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33558cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335590: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x335590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x335594: 0xc0cd736  jal         func_335CD8
    ctx->pc = 0x335594u;
    SET_GPR_U32(ctx, 31, 0x33559Cu);
    ctx->pc = 0x335598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335594u;
    // 0x335598: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CD8u, 0x335594u, 0x33559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33559Cu;
label_33559c:
    // 0x33559c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33559cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3355a0: 0xc0cd570  jal         func_3355C0
    ctx->pc = 0x3355A0u;
    SET_GPR_U32(ctx, 31, 0x3355A8u);
    ctx->pc = 0x3355A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3355A0u;
    // 0x3355a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3355C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3355C0u, 0x3355A0u, 0x3355A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3355A8u;
label_3355a8:
    // 0x3355a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3355a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3355ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3355acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3355b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3355b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3355b4: 0x80cd738  j           func_335CE0
    ctx->pc = 0x3355B4u;
    ctx->pc = 0x3355B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3355B4u;
    // 0x3355b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CE0u, 0x3355B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3355BCu;
    // 0x3355bc: 0x0  nop
    ctx->pc = 0x3355bcu;
    // NOP
    ctx->pc = 0x3355c0u;
}
