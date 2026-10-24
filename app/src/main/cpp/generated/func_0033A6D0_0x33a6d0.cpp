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

// Function: func_0033A6D0
// Address: 0x33a6d0 - 0x33a730
void func_0033A6D0_0x33a6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A6D0_0x33a6d0");
#endif

    switch (ctx->pc) {
        case 0x33a6fcu: goto label_33a6fc;
        case 0x33a710u: goto label_33a710;
        default: break;
    }

    ctx->pc = 0x33a6d0u;

    // 0x33a6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33a6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33a6d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33a6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33a6d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33a6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a6dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33a6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33a6e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33a6e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a6e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33a6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33a6e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33a6e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a6ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33a6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33a6f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33a6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33a6f4: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x33A6F4u;
    SET_GPR_U32(ctx, 31, 0x33A6FCu);
    ctx->pc = 0x33A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A6F4u;
    // 0x33a6f8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x33A6F4u, 0x33A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A6FCu;
label_33a6fc:
    // 0x33a6fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33a6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33a700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a704: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33a704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a708: 0xc0ce9cc  jal         func_33A730
    ctx->pc = 0x33A708u;
    SET_GPR_U32(ctx, 31, 0x33A710u);
    ctx->pc = 0x33A70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A708u;
    // 0x33a70c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A730u, 0x33A708u, 0x33A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A710u;
label_33a710:
    // 0x33a710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33a710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a714: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33a714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33a718: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33a718u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a71c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33a71cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33a720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33a720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33a724: 0x80ce284  j           func_338A10
    ctx->pc = 0x33A724u;
    ctx->pc = 0x33A728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A724u;
    // 0x33a728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x33A724u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33A72Cu;
    // 0x33a72c: 0x0  nop
    ctx->pc = 0x33a72cu;
    // NOP
    ctx->pc = 0x33a730u;
}
