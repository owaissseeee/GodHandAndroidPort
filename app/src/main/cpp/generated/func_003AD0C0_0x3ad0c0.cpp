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

// Function: func_003AD0C0
// Address: 0x3ad0c0 - 0x3ad0f8
void func_003AD0C0_0x3ad0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AD0C0_0x3ad0c0");
#endif

    switch (ctx->pc) {
        case 0x3ad0e8u: goto label_3ad0e8;
        default: break;
    }

    ctx->pc = 0x3ad0c0u;

    // 0x3ad0c0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3ad0c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad0c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3ad0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3ad0c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ad0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ad0cc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3ad0ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad0d0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3ad0d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad0d4: 0x8c44a62c  lw          $a0, -0x59D4($v0)
    ctx->pc = 0x3ad0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3ad0d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ad0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ad0dc: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3ad0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad0e0: 0xc0eb3a4  jal         func_3ACE90
    ctx->pc = 0x3AD0E0u;
    SET_GPR_U32(ctx, 31, 0x3AD0E8u);
    ctx->pc = 0x3AD0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD0E0u;
    // 0x3ad0e4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACE90u, 0x3AD0E0u, 0x3AD0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD0E8u;
label_3ad0e8:
    // 0x3ad0e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD0ECu;
        // 0x3ad0f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD0F4u;
    // 0x3ad0f4: 0x0  nop
    ctx->pc = 0x3ad0f4u;
    // NOP
    ctx->pc = 0x3ad0f8u;
}
