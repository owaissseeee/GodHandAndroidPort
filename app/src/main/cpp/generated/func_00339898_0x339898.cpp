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

// Function: func_00339898
// Address: 0x339898 - 0x3398f8
void func_00339898_0x339898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00339898_0x339898");
#endif

    switch (ctx->pc) {
        case 0x3398c4u: goto label_3398c4;
        case 0x3398d8u: goto label_3398d8;
        default: break;
    }

    ctx->pc = 0x339898u;

    // 0x339898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x339898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33989c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33989cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3398a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3398a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3398a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3398a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3398a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3398a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3398ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3398acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3398b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3398b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3398b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3398b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3398b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3398b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3398bc: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x3398BCu;
    SET_GPR_U32(ctx, 31, 0x3398C4u);
    ctx->pc = 0x3398C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3398BCu;
    // 0x3398c0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x3398BCu, 0x3398C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3398C4u;
label_3398c4:
    // 0x3398c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3398c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3398c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3398c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3398cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3398ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3398d0: 0xc0ce63e  jal         func_3398F8
    ctx->pc = 0x3398D0u;
    SET_GPR_U32(ctx, 31, 0x3398D8u);
    ctx->pc = 0x3398D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3398D0u;
    // 0x3398d4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3398F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3398F8u, 0x3398D0u, 0x3398D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3398D8u;
label_3398d8:
    // 0x3398d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3398d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3398dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3398dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3398e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3398e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3398e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3398e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3398e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3398e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3398ec: 0x80ce284  j           func_338A10
    ctx->pc = 0x3398ECu;
    ctx->pc = 0x3398F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3398ECu;
    // 0x3398f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x3398ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3398F4u;
    // 0x3398f4: 0x0  nop
    ctx->pc = 0x3398f4u;
    // NOP
    ctx->pc = 0x3398f8u;
}
