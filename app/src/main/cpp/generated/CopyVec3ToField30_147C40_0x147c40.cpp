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

// Function: CopyVec3ToField30_147C40
// Address: 0x147c40 - 0x147c60
void CopyVec3ToField30_147C40_0x147c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyVec3ToField30_147C40_0x147c40");
#endif

    ctx->pc = 0x147c40u;

    // 0x147c40: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x147c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147c44: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x147c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x147c48: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x147c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147c4c: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x147c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x147c50: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x147c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147c54: 0x3e00008  jr          $ra
    ctx->pc = 0x147C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C54u;
        // 0x147c58: 0xe4800038  swc1        $f0, 0x38($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147C5Cu;
    // 0x147c5c: 0x0  nop
    ctx->pc = 0x147c5cu;
    // NOP
    ctx->pc = 0x147c60u;
}
