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

// Function: Poker_releaseIds
// Address: 0x1df940 - 0x1df988
void Poker_releaseIds_0x1df940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Poker_releaseIds_0x1df940");
#endif

    switch (ctx->pc) {
        case 0x1df958u: goto label_1df958;
        case 0x1df960u: goto label_1df960;
        default: break;
    }

    ctx->pc = 0x1df940u;

    // 0x1df940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df944: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1df944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1df948: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df94c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df950: 0xc077b6a  jal         func_1DEDA8
    ctx->pc = 0x1DF950u;
    SET_GPR_U32(ctx, 31, 0x1DF958u);
    ctx->pc = 0x1DF954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF950u;
    // 0x1df954: 0x260425b0  addiu       $a0, $s0, 0x25B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEDA8u, 0x1DF950u, 0x1DF958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF958u;
label_1df958:
    // 0x1df958: 0xc077460  jal         func_1DD180
    ctx->pc = 0x1DF958u;
    SET_GPR_U32(ctx, 31, 0x1DF960u);
    ctx->pc = 0x1DF95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF958u;
    // 0x1df95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD180u, 0x1DF958u, 0x1DF960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF960u;
label_1df960:
    // 0x1df960: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1df960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1df964: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1df964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df968: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x1df968u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x1df96c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df970: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1df970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df974: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x1df974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x1df978: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x1df978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x1df97c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF97Cu;
        // 0x1df980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF984u;
    // 0x1df984: 0x0  nop
    ctx->pc = 0x1df984u;
    // NOP
    ctx->pc = 0x1df988u;
}
