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

// Function: cCoreSave_addKillNpcNum
// Address: 0x1fbee8 - 0x1fbf18
void cCoreSave_addKillNpcNum_0x1fbee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addKillNpcNum_0x1fbee8");
#endif

    ctx->pc = 0x1fbee8u;

    // 0x1fbee8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1fbee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbeec: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBEECu;
    {
        const bool branch_taken_0x1fbeec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbeec) {
            ctx->pc = 0x1FBF10u;
            goto label_1fbf10;
        }
    }
    ctx->pc = 0x1FBEF4u;
    // 0x1fbef4: 0x94a20096  lhu         $v0, 0x96($a1)
    ctx->pc = 0x1fbef4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 150)));
    // 0x1fbef8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fbef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fbefc: 0xa4a20096  sh          $v0, 0x96($a1)
    ctx->pc = 0x1fbefcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fbf00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fbf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbf04: 0x94620bb6  lhu         $v0, 0xBB6($v1)
    ctx->pc = 0x1fbf04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2998)));
    // 0x1fbf08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fbf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fbf0c: 0xa4620bb6  sh          $v0, 0xBB6($v1)
    ctx->pc = 0x1fbf0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2998), (uint16_t)GPR_U32(ctx, 2));
label_1fbf10:
    // 0x1fbf10: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBF18u;
}
