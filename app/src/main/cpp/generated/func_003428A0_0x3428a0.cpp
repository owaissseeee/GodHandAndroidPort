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

// Function: func_003428A0
// Address: 0x3428a0 - 0x342910
void func_003428A0_0x3428a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003428A0_0x3428a0");
#endif

    switch (ctx->pc) {
        case 0x3428d8u: goto label_3428d8;
        case 0x3428e0u: goto label_3428e0;
        default: break;
    }

    ctx->pc = 0x3428a0u;

    // 0x3428a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3428a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3428a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3428a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3428a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3428a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3428ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3428acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3428b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3428b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3428b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3428b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3428b8: 0x2444c668  addiu       $a0, $v0, -0x3998
    ctx->pc = 0x3428b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952552));
    // 0x3428bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3428bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3428c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3428c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3428c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3428c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3428c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3428c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3428cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3428ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3428d0: 0xc0d2254  jal         func_348950
    ctx->pc = 0x3428D0u;
    SET_GPR_U32(ctx, 31, 0x3428D8u);
    ctx->pc = 0x3428D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3428D0u;
    // 0x3428d4: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348950u, 0x3428D0u, 0x3428D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428D8u;
label_3428d8:
    // 0x3428d8: 0xc0d17b2  jal         func_345EC8
    ctx->pc = 0x3428D8u;
    SET_GPR_U32(ctx, 31, 0x3428E0u);
    ctx->pc = 0x3428DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3428D8u;
    // 0x3428dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345EC8u, 0x3428D8u, 0x3428E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428E0u;
label_3428e0:
    // 0x3428e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3428e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3428e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3428e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3428e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3428e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3428ec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3428ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3428f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3428f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3428f4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3428f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3428f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3428f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3428fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3428fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x342900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342904: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x342904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x342908: 0x80d219c  j           func_348670
    ctx->pc = 0x342908u;
    ctx->pc = 0x34290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342908u;
    // 0x34290c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348670u, 0x342908u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x342910u;
}
