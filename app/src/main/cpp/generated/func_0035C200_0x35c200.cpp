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

// Function: func_0035C200
// Address: 0x35c200 - 0x35c238
void func_0035C200_0x35c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035C200_0x35c200");
#endif

    ctx->pc = 0x35c200u;

    // 0x35c200: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x35c200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x35c204: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x35c204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x35c208: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x35c208u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35c20c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x35c20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x35c210: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c214: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35c214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35c218: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35c21c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x35c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35c220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c224: 0xac651f40  sw          $a1, 0x1F40($v1)
    ctx->pc = 0x35c224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8000), GPR_U32(ctx, 5));
    // 0x35c228: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x35c228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x35c22c: 0x3e00008  jr          $ra
    ctx->pc = 0x35C22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C22Cu;
        // 0x35c230: 0xac861360  sw          $a2, 0x1360($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4960), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C234u;
    // 0x35c234: 0x0  nop
    ctx->pc = 0x35c234u;
    // NOP
    ctx->pc = 0x35c238u;
}
