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
// Function: copyFromOrigin__14cEventObjLightP17cEventSeqObjLight
// Address: 0x7b09a8 - 0x7b09c8
void copyFromOrigin__14cEventObjLightP17cEventSeqObjLight_0x7b09a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copyFromOrigin__14cEventObjLightP17cEventSeqObjLight_0x7b09a8");
#endif

    ctx->pc = 0x7b09a8u;

    // 0x7b09a8: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x7b09a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b09ac: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x7b09acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x7b09b0: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x7b09b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7b09b4: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x7b09b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x7b09b8: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x7b09b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7b09bc: 0x3e00008  jr          $ra
    ctx->pc = 0x7B09BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B09C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B09BCu;
        // 0x7b09c0: 0xe4a00014  swc1        $f0, 0x14($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B09BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B09C4u;
    // 0x7b09c4: 0x0  nop
    ctx->pc = 0x7b09c4u;
    // NOP
    ctx->pc = 0x7b09c8u;
}
} // namespace gh_event
