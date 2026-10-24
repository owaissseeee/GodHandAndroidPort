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

// Function: func_0032A6D0
// Address: 0x32a6d0 - 0x32a720
void func_0032A6D0_0x32a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A6D0_0x32a6d0");
#endif

    switch (ctx->pc) {
        case 0x32a6f4u: goto label_32a6f4;
        case 0x32a704u: goto label_32a704;
        default: break;
    }

    ctx->pc = 0x32a6d0u;

    // 0x32a6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32a6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32a6d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32a6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32a6d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a6dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32a6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32a6e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32a6e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a6e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32a6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32a6e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32a6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32a6ec: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32A6ECu;
    SET_GPR_U32(ctx, 31, 0x32A6F4u);
    ctx->pc = 0x32A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A6ECu;
    // 0x32a6f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32A6ECu, 0x32A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A6F4u;
label_32a6f4:
    // 0x32a6f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32a6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a6f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32a6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a6fc: 0xc0ca9c8  jal         func_32A720
    ctx->pc = 0x32A6FCu;
    SET_GPR_U32(ctx, 31, 0x32A704u);
    ctx->pc = 0x32A700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A6FCu;
    // 0x32a700: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A720u, 0x32A6FCu, 0x32A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A704u;
label_32a704:
    // 0x32a704: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32a704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a708: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32a708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32a70c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32a70cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a710: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32a710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32a714: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32A714u;
    ctx->pc = 0x32A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A714u;
    // 0x32a718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32A714u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32A71Cu;
    // 0x32a71c: 0x0  nop
    ctx->pc = 0x32a71cu;
    // NOP
    ctx->pc = 0x32a720u;
}
