#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r002_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r002
{
// Function: getReserveJumpPosition__6cEvent
// Address: 0x799558 - 0x799578
void getReserveJumpPosition__6cEvent_0x799558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getReserveJumpPosition__6cEvent_0x799558");
#endif

    ctx->pc = 0x799558u;

    // 0x799558: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x79955c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x79955cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799560: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x799564: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x799564u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799568: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x799568u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79956c: 0x3e00008  jr          $ra
    ctx->pc = 0x79956Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79956Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799574u;
    // 0x799574: 0x0  nop
    ctx->pc = 0x799574u;
    // NOP
    ctx->pc = 0x799578u;
}
} // namespace gh_r002
