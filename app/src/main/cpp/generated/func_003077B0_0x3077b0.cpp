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

// Function: func_003077B0
// Address: 0x3077b0 - 0x3077e8
void func_003077B0_0x3077b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003077B0_0x3077b0");
#endif

    ctx->pc = 0x3077b0u;

    // 0x3077b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3077b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3077b4: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x3077b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
    // 0x3077b8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3077b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3077bc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3077bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3077c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3077C0u;
    {
        const bool branch_taken_0x3077c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3077c0) {
            ctx->pc = 0x3077D0u;
            goto label_3077d0;
        }
    }
    ctx->pc = 0x3077C8u;
    // 0x3077c8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3077C8u;
    {
        const bool branch_taken_0x3077c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3077c8) {
            ctx->pc = 0x3077D0u;
            goto label_3077d0;
        }
    }
    ctx->pc = 0x3077D0u;
label_3077d0:
    // 0x3077d0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3077d0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3077d4: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x3077d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3077d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3077d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3077dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3077DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3077DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3077E4u;
    // 0x3077e4: 0x0  nop
    ctx->pc = 0x3077e4u;
    // NOP
    ctx->pc = 0x3077e8u;
}
