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

// Function: func_0037D148
// Address: 0x37d148 - 0x37d170
void func_0037D148_0x37d148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D148_0x37d148");
#endif

    ctx->pc = 0x37d148u;

    // 0x37d148: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x37d148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37d14c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37D14Cu;
    {
        const bool branch_taken_0x37d14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d14c) {
            ctx->pc = 0x37D164u;
            goto label_37d164;
        }
    }
    ctx->pc = 0x37D154u;
    // 0x37d154: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x37d154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x37d158: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x37d158u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x37d15c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x37d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x37d160: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x37d160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_37d164:
    // 0x37d164: 0x3e00008  jr          $ra
    ctx->pc = 0x37D164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D16Cu;
    // 0x37d16c: 0x0  nop
    ctx->pc = 0x37d16cu;
    // NOP
    ctx->pc = 0x37d170u;
}
