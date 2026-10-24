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
// Function: sn_reg_frame
// Address: 0x7cf2e8 - 0x7cf300
void sn_reg_frame_0x7cf2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sn_reg_frame_0x7cf2e8");
#endif

    ctx->pc = 0x7cf2e8u;

    // 0x7cf2e8: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7cf2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7cf2ec: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7cf2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7cf2f0: 0x248408fc  addiu       $a0, $a0, 0x8FC
    ctx->pc = 0x7cf2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2300));
    // 0x7cf2f4: 0x81f33a8  j           func_7CCEA0
    ctx->pc = 0x7CF2F4u;
    ctx->pc = 0x7CF2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF2F4u;
    // 0x7cf2f8: 0x24a55890  addiu       $a1, $a1, 0x5890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CCEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CCEA0u, 0x7CF2F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x7CF2FCu;
    // 0x7cf2fc: 0x0  nop
    ctx->pc = 0x7cf2fcu;
    // NOP
    ctx->pc = 0x7cf300u;
}
} // namespace gh_mcport
