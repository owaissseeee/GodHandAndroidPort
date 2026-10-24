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

// Function: func_00366918
// Address: 0x366918 - 0x366960
void func_00366918_0x366918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00366918_0x366918");
#endif

    ctx->pc = 0x366918u;

    // 0x366918: 0x870018  mult        $zero, $a0, $a3
    ctx->pc = 0x366918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x36691c: 0x70c50018  mult1       $zero, $a2, $a1
    ctx->pc = 0x36691cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x366920: 0x1012  mflo        $v0
    ctx->pc = 0x366920u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x366924: 0x2010  mfhi        $a0
    ctx->pc = 0x366924u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x366928: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x366928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36692c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x36692cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x366930: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x366930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x366934: 0x70001812  mflo1       $v1
    ctx->pc = 0x366934u;
    SET_GPR_U64(ctx, 3, ctx->lo1);
    // 0x366938: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x366938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x36693c: 0x70001010  mfhi1       $v0
    ctx->pc = 0x36693cu;
    SET_GPR_U64(ctx, 2, ctx->hi1);
    // 0x366940: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x366940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x366944: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x366944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x366948: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x366948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x36694c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x36694cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x366950: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x366950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x366954: 0x3e00008  jr          $ra
    ctx->pc = 0x366954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366954u;
        // 0x366958: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36695Cu;
    // 0x36695c: 0x0  nop
    ctx->pc = 0x36695cu;
    // NOP
    ctx->pc = 0x366960u;
}
