#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: setNextFrame__9cEventEnvif
// Address: 0x7ae928 - 0x7ae938
void setNextFrame__9cEventEnvif_0x7ae928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setNextFrame__9cEventEnvif_0x7ae928");
#endif

    ctx->pc = 0x7ae928u;

    // 0x7ae928: 0xe48c001c  swc1        $f12, 0x1C($a0)
    ctx->pc = 0x7ae928u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x7ae92c: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE92Cu;
        // 0x7ae930: 0xac850018  sw          $a1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE934u;
    // 0x7ae934: 0x0  nop
    ctx->pc = 0x7ae934u;
    // NOP
    ctx->pc = 0x7ae938u;
}
} // namespace gh_event
