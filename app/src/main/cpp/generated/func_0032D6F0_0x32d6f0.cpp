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

// Function: func_0032D6F0
// Address: 0x32d6f0 - 0x32d720
void func_0032D6F0_0x32d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032D6F0_0x32d6f0");
#endif

    switch (ctx->pc) {
        case 0x32d704u: goto label_32d704;
        case 0x32d70cu: goto label_32d70c;
        default: break;
    }

    ctx->pc = 0x32d6f0u;

    // 0x32d6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d6f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d6f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32d6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32d6fc: 0xc0cff28  jal         func_33FCA0
    ctx->pc = 0x32D6FCu;
    SET_GPR_U32(ctx, 31, 0x32D704u);
    ctx->pc = 0x32D700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D6FCu;
    // 0x32d700: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA0u, 0x32D6FCu, 0x32D704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D704u;
label_32d704:
    // 0x32d704: 0xc0cb5c8  jal         func_32D720
    ctx->pc = 0x32D704u;
    SET_GPR_U32(ctx, 31, 0x32D70Cu);
    ctx->pc = 0x32D708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D704u;
    // 0x32d708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D720u, 0x32D704u, 0x32D70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D70Cu;
label_32d70c:
    // 0x32d70c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d70cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d710: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32d710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d714: 0x80cff2a  j           func_33FCA8
    ctx->pc = 0x32D714u;
    ctx->pc = 0x32D718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D714u;
    // 0x32d718: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32D714u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32D71Cu;
    // 0x32d71c: 0x0  nop
    ctx->pc = 0x32d71cu;
    // NOP
    ctx->pc = 0x32d720u;
}
