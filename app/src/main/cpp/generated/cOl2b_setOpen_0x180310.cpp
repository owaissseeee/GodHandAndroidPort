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

// Function: cOl2b_setOpen
// Address: 0x180310 - 0x180338
void cOl2b_setOpen_0x180310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl2b_setOpen_0x180310");
#endif

    ctx->pc = 0x180310u;

    // 0x180310: 0x8c820a24  lw          $v0, 0xA24($a0)
    ctx->pc = 0x180310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2596)));
    // 0x180314: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x180314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180318: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x180318u;
    {
        const bool branch_taken_0x180318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x180318) {
            ctx->pc = 0x180330u;
            goto label_180330;
        }
    }
    ctx->pc = 0x180320u;
    // 0x180320: 0xa08302f4  sb          $v1, 0x2F4($a0)
    ctx->pc = 0x180320u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x180324: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x180324u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x180328: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x180328u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18032c: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x18032cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_180330:
    // 0x180330: 0x3e00008  jr          $ra
    ctx->pc = 0x180330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180338u;
}
