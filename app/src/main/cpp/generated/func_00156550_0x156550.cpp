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

// Function: func_00156550
// Address: 0x156550 - 0x1565a0
void func_00156550_0x156550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00156550_0x156550");
#endif

    ctx->pc = 0x156550u;

    // 0x156550: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x156550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x156554: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x156554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156558: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x156558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15655c: 0x2442edf0  addiu       $v0, $v0, -0x1210
    ctx->pc = 0x15655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962672));
    // 0x156560: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x156560u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156564: 0x70073bbc  psllw       $a3, $a3, 14
    ctx->pc = 0x156564u;
    SET_GPR_VEC(ctx, 7, _mm_slli_epi32(GPR_VEC(ctx, 7), 14));
    // 0x156568: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x156568u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15656c: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x15656cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x156570: 0x70872489  pand        $a0, $a0, $a3
    ctx->pc = 0x156570u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x156574: 0x70852008  paddw       $a0, $a0, $a1
    ctx->pc = 0x156574u;
    SET_GPR_VEC(ctx, 4, PS2_PADDW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x156578: 0x78460020  lq          $a2, 0x20($v0)
    ctx->pc = 0x156578u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x15657c: 0x70c73489  pand        $a2, $a2, $a3
    ctx->pc = 0x15657cu;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x156580: 0x70c434a9  por         $a2, $a2, $a0
    ctx->pc = 0x156580u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x156584: 0x700738bc  psllw       $a3, $a3, 2
    ctx->pc = 0x156584u;
    SET_GPR_VEC(ctx, 7, _mm_slli_epi32(GPR_VEC(ctx, 7), 2));
    // 0x156588: 0x78440030  lq          $a0, 0x30($v0)
    ctx->pc = 0x156588u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x15658c: 0x70872489  pand        $a0, $a0, $a3
    ctx->pc = 0x15658cu;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x156590: 0x70c43ca9  por         $a3, $a2, $a0
    ctx->pc = 0x156590u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x156594: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x156594u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x156598: 0x3e00008  jr          $ra
    ctx->pc = 0x156598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1565A0u;
}
