#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CD628
// Address: 0x7cd628 - 0x7cd638
void func_007CD628_0x7cd628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CD628_0x7cd628");
#endif

    ctx->pc = 0x7cd628u;

    // 0x7cd628: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cd628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cd62c: 0x80ebf34  j           func_3AFCD0
    ctx->pc = 0x7CD62Cu;
    ctx->pc = 0x7CD630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD62Cu;
    // 0x7cd630: 0x8c4407b8  lw          $a0, 0x7B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1976)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCD0u, 0x7CD62Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x7CD634u;
    // 0x7cd634: 0x0  nop
    ctx->pc = 0x7cd634u;
    // NOP
    ctx->pc = 0x7cd638u;
}
} // namespace gh_mcport
