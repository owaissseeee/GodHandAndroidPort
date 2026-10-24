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

// Function: sceSifSendCmd
// Address: 0x3b2688 - 0x3b26c8
void sceSifSendCmd_0x3b2688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifSendCmd_0x3b2688");
#endif

    switch (ctx->pc) {
        case 0x3b26b8u: goto label_3b26b8;
        default: break;
    }

    ctx->pc = 0x3b2688u;

    // 0x3b2688: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3b2688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b268c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3b268cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2690: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x3b2690u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2694: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b2694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b2698: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x3b2698u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b269c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3b269cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b26a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b26a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b26a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3b26a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b26a8: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3b26a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b26ac: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x3b26acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b26b0: 0xc0ec954  jal         func_3B2550
    ctx->pc = 0x3B26B0u;
    SET_GPR_U32(ctx, 31, 0x3B26B8u);
    ctx->pc = 0x3B26B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B26B0u;
    // 0x3b26b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2550u, 0x3B26B0u, 0x3B26B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B26B8u;
label_3b26b8:
    // 0x3b26b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b26b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b26bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B26BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B26C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B26BCu;
        // 0x3b26c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B26BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B26C4u;
    // 0x3b26c4: 0x0  nop
    ctx->pc = 0x3b26c4u;
    // NOP
    ctx->pc = 0x3b26c8u;
}
