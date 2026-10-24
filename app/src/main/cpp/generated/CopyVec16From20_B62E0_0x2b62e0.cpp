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

// Function: CopyVec16From20_B62E0
// Address: 0x2b62e0 - 0x2b62f8
void CopyVec16From20_B62E0_0x2b62e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyVec16From20_B62E0_0x2b62e0");
#endif

    ctx->pc = 0x2b62e0u;

    // 0x2b62e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b62e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b62e4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2b62e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2b62e8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2b62e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b62ec: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2b62ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b62f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B62F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B62F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B62F8u;
}
