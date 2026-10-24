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

// Function: func_0032B300
// Address: 0x32b300 - 0x32b340
void func_0032B300_0x32b300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032B300_0x32b300");
#endif

    switch (ctx->pc) {
        case 0x32b31cu: goto label_32b31c;
        case 0x32b328u: goto label_32b328;
        default: break;
    }

    ctx->pc = 0x32b300u;

    // 0x32b300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32b300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32b304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32b304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32b308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32b308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b30c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32b30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32b310: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32b310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32b314: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32B314u;
    SET_GPR_U32(ctx, 31, 0x32B31Cu);
    ctx->pc = 0x32B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B314u;
    // 0x32b318: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32B314u, 0x32B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B31Cu;
label_32b31c:
    // 0x32b31c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32b31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b320: 0xc0cacd0  jal         func_32B340
    ctx->pc = 0x32B320u;
    SET_GPR_U32(ctx, 31, 0x32B328u);
    ctx->pc = 0x32B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B320u;
    // 0x32b324: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B340u, 0x32B320u, 0x32B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B328u;
label_32b328:
    // 0x32b328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32b328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b32c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32b32cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32b330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32b330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b334: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32B334u;
    ctx->pc = 0x32B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B334u;
    // 0x32b338: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32B334u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32B33Cu;
    // 0x32b33c: 0x0  nop
    ctx->pc = 0x32b33cu;
    // NOP
    ctx->pc = 0x32b340u;
}
