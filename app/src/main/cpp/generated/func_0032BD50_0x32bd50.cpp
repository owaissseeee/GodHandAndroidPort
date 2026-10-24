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

// Function: func_0032BD50
// Address: 0x32bd50 - 0x32bd90
void func_0032BD50_0x32bd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032BD50_0x32bd50");
#endif

    switch (ctx->pc) {
        case 0x32bd6cu: goto label_32bd6c;
        case 0x32bd78u: goto label_32bd78;
        default: break;
    }

    ctx->pc = 0x32bd50u;

    // 0x32bd50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32bd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32bd54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32bd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32bd58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32bd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32bd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32bd60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32bd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32bd64: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32BD64u;
    SET_GPR_U32(ctx, 31, 0x32BD6Cu);
    ctx->pc = 0x32BD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD64u;
    // 0x32bd68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32BD64u, 0x32BD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD6Cu;
label_32bd6c:
    // 0x32bd6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32bd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd70: 0xc0caf64  jal         func_32BD90
    ctx->pc = 0x32BD70u;
    SET_GPR_U32(ctx, 31, 0x32BD78u);
    ctx->pc = 0x32BD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD70u;
    // 0x32bd74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BD90u, 0x32BD70u, 0x32BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD78u;
label_32bd78:
    // 0x32bd78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32bd78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bd7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32bd7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32bd80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32bd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bd84: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32BD84u;
    ctx->pc = 0x32BD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD84u;
    // 0x32bd88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32BD84u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32BD8Cu;
    // 0x32bd8c: 0x0  nop
    ctx->pc = 0x32bd8cu;
    // NOP
    ctx->pc = 0x32bd90u;
}
