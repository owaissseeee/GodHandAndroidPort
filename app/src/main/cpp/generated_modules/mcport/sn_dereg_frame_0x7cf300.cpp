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
// Function: sn_dereg_frame
// Address: 0x7cf300 - 0x7cf310
void sn_dereg_frame_0x7cf300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sn_dereg_frame_0x7cf300");
#endif

    ctx->pc = 0x7cf300u;

    // 0x7cf300: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7cf300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7cf304: 0x81f33be  j           func_7CCEF8
    ctx->pc = 0x7CF304u;
    ctx->pc = 0x7CF308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF304u;
    // 0x7cf308: 0x248408fc  addiu       $a0, $a0, 0x8FC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CCEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CCEF8u, 0x7CF304u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x7CF30Cu;
    // 0x7cf30c: 0x0  nop
    ctx->pc = 0x7cf30cu;
    // NOP
    ctx->pc = 0x7cf310u;
}
} // namespace gh_mcport
