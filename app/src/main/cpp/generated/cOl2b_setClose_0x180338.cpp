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

// Function: cOl2b_setClose
// Address: 0x180338 - 0x180360
void cOl2b_setClose_0x180338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl2b_setClose_0x180338");
#endif

    ctx->pc = 0x180338u;

    // 0x180338: 0x8c820a24  lw          $v0, 0xA24($a0)
    ctx->pc = 0x180338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2596)));
    // 0x18033c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18033cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180340: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x180340u;
    {
        const bool branch_taken_0x180340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x180340) {
            ctx->pc = 0x180358u;
            goto label_180358;
        }
    }
    ctx->pc = 0x180348u;
    // 0x180348: 0xa08302f4  sb          $v1, 0x2F4($a0)
    ctx->pc = 0x180348u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x18034c: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x18034cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x180350: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x180350u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x180354: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x180354u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_180358:
    // 0x180358: 0x3e00008  jr          $ra
    ctx->pc = 0x180358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180360u;
}
