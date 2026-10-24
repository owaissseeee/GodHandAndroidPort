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

// Function: func_0032BB48
// Address: 0x32bb48 - 0x32bb98
void func_0032BB48_0x32bb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032BB48_0x32bb48");
#endif

    switch (ctx->pc) {
        case 0x32bb6cu: goto label_32bb6c;
        case 0x32bb7cu: goto label_32bb7c;
        default: break;
    }

    ctx->pc = 0x32bb48u;

    // 0x32bb48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32bb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32bb4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32bb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32bb50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32bb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bb54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32bb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32bb58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32bb58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bb5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32bb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32bb60: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32bb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32bb64: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32BB64u;
    SET_GPR_U32(ctx, 31, 0x32BB6Cu);
    ctx->pc = 0x32BB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB64u;
    // 0x32bb68: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32BB64u, 0x32BB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB6Cu;
label_32bb6c:
    // 0x32bb6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32bb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bb70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32bb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bb74: 0xc0caee6  jal         func_32BB98
    ctx->pc = 0x32BB74u;
    SET_GPR_U32(ctx, 31, 0x32BB7Cu);
    ctx->pc = 0x32BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB74u;
    // 0x32bb78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BB98u, 0x32BB74u, 0x32BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BB7Cu;
label_32bb7c:
    // 0x32bb7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32bb7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bb80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32bb80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32bb84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32bb84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bb88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32bb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32bb8c: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32BB8Cu;
    ctx->pc = 0x32BB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BB8Cu;
    // 0x32bb90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32BB8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32BB94u;
    // 0x32bb94: 0x0  nop
    ctx->pc = 0x32bb94u;
    // NOP
    ctx->pc = 0x32bb98u;
}
