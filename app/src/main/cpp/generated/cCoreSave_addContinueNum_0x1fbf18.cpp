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

// Function: cCoreSave_addContinueNum
// Address: 0x1fbf18 - 0x1fbf48
void cCoreSave_addContinueNum_0x1fbf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addContinueNum_0x1fbf18");
#endif

    ctx->pc = 0x1fbf18u;

    // 0x1fbf18: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1fbf18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbf1c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBF1Cu;
    {
        const bool branch_taken_0x1fbf1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbf1c) {
            ctx->pc = 0x1FBF40u;
            goto label_1fbf40;
        }
    }
    ctx->pc = 0x1FBF24u;
    // 0x1fbf24: 0x94a20012  lhu         $v0, 0x12($a1)
    ctx->pc = 0x1fbf24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x1fbf28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fbf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fbf2c: 0xa4a20012  sh          $v0, 0x12($a1)
    ctx->pc = 0x1fbf2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fbf30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fbf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbf34: 0x94620bb8  lhu         $v0, 0xBB8($v1)
    ctx->pc = 0x1fbf34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3000)));
    // 0x1fbf38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fbf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fbf3c: 0xa4620bb8  sh          $v0, 0xBB8($v1)
    ctx->pc = 0x1fbf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3000), (uint16_t)GPR_U32(ctx, 2));
label_1fbf40:
    // 0x1fbf40: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBF48u;
}
