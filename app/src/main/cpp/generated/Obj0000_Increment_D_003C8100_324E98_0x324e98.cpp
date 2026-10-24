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

// Function: Obj0000_Increment_D_003C8100_324E98
// Address: 0x324e98 - 0x324eb0
void Obj0000_Increment_D_003C8100_324E98_0x324e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Increment_D_003C8100_324E98_0x324e98");
#endif

    ctx->pc = 0x324e98u;

    // 0x324e98: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x324e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x324e9c: 0x24638100  addiu       $v1, $v1, -0x7F00
    ctx->pc = 0x324e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934784));
    // 0x324ea0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x324ea0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3C8100u));
    // 0x324ea4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x324ea4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x324ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x324EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324EA8u;
        // 0x324eac: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324EB0u;
}
