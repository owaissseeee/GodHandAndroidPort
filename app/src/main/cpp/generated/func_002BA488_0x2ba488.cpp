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

// Function: func_002BA488
// Address: 0x2ba488 - 0x2ba4a8
void func_002BA488_0x2ba488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA488_0x2ba488");
#endif

    ctx->pc = 0x2ba488u;

    // 0x2ba488: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2ba488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2ba48c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ba48cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba490: 0x24637b00  addiu       $v1, $v1, 0x7B00
    ctx->pc = 0x2ba490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31488));
    // 0x2ba494: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ba494u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x2ba498: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ba498u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ba49c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA4A4u;
    // 0x2ba4a4: 0x0  nop
    ctx->pc = 0x2ba4a4u;
    // NOP
    ctx->pc = 0x2ba4a8u;
}
