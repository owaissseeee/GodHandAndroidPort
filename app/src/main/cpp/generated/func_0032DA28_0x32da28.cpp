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

// Function: func_0032DA28
// Address: 0x32da28 - 0x32da78
void func_0032DA28_0x32da28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032DA28_0x32da28");
#endif

    switch (ctx->pc) {
        case 0x32da4cu: goto label_32da4c;
        case 0x32da5cu: goto label_32da5c;
        default: break;
    }

    ctx->pc = 0x32da28u;

    // 0x32da28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32da28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32da2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32da2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32da30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32da30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32da34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32da34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32da38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32da38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32da3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32da3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32da40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32da40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32da44: 0xc0cff28  jal         func_33FCA0
    ctx->pc = 0x32DA44u;
    SET_GPR_U32(ctx, 31, 0x32DA4Cu);
    ctx->pc = 0x32DA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DA44u;
    // 0x32da48: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA0u, 0x32DA44u, 0x32DA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DA4Cu;
label_32da4c:
    // 0x32da4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32da4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32da50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32da50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32da54: 0xc0cb69e  jal         func_32DA78
    ctx->pc = 0x32DA54u;
    SET_GPR_U32(ctx, 31, 0x32DA5Cu);
    ctx->pc = 0x32DA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DA54u;
    // 0x32da58: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DA78u, 0x32DA54u, 0x32DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DA5Cu;
label_32da5c:
    // 0x32da5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32da5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32da60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32da60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32da64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32da64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32da68: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32da68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32da6c: 0x80cff2a  j           func_33FCA8
    ctx->pc = 0x32DA6Cu;
    ctx->pc = 0x32DA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DA6Cu;
    // 0x32da70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32DA6Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32DA74u;
    // 0x32da74: 0x0  nop
    ctx->pc = 0x32da74u;
    // NOP
    ctx->pc = 0x32da78u;
}
