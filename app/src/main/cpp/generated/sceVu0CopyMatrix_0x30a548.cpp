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

// Function: sceVu0CopyMatrix
// Address: 0x30a548 - 0x30a570
void sceVu0CopyMatrix_0x30a548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0CopyMatrix_0x30a548");
#endif

    ctx->pc = 0x30a548u;

    // 0x30a548: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x30a548u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30a54c: 0x78a70010  lq          $a3, 0x10($a1)
    ctx->pc = 0x30a54cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x30a550: 0x78a80020  lq          $t0, 0x20($a1)
    ctx->pc = 0x30a550u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x30a554: 0x78a90030  lq          $t1, 0x30($a1)
    ctx->pc = 0x30a554u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x30a558: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x30a558u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x30a55c: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x30a55cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
    // 0x30a560: 0x7c880020  sq          $t0, 0x20($a0)
    ctx->pc = 0x30a560u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 8));
    // 0x30a564: 0x7c890030  sq          $t1, 0x30($a0)
    ctx->pc = 0x30a564u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 9));
    // 0x30a568: 0x3e00008  jr          $ra
    ctx->pc = 0x30A568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A570u;
}
