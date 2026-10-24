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

// Function: func_002B8820
// Address: 0x2b8820 - 0x2b8850
void func_002B8820_0x2b8820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B8820_0x2b8820");
#endif

    ctx->pc = 0x2b8820u;

    // 0x2b8820: 0x8c850254  lw          $a1, 0x254($a0)
    ctx->pc = 0x2b8820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 596)));
    // 0x2b8824: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x2b8824u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x2b8828: 0x8c8304a8  lw          $v1, 0x4A8($a0)
    ctx->pc = 0x2b8828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1192)));
    // 0x2b882c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x2b882cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x2b8830: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2b8830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2b8834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8838: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x2b8838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2b883c: 0xa08004d4  sb          $zero, 0x4D4($a0)
    ctx->pc = 0x2b883cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1236), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b8840: 0xac850254  sw          $a1, 0x254($a0)
    ctx->pc = 0x2b8840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 5));
    // 0x2b8844: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8844u;
        // 0x2b8848: 0xac8304a8  sw          $v1, 0x4A8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B884Cu;
    // 0x2b884c: 0x0  nop
    ctx->pc = 0x2b884cu;
    // NOP
    ctx->pc = 0x2b8850u;
}
