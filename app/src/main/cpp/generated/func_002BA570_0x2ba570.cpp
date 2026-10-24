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

// Function: func_002BA570
// Address: 0x2ba570 - 0x2ba580
void func_002BA570_0x2ba570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA570_0x2ba570");
#endif

    ctx->pc = 0x2ba570u;

    // 0x2ba570: 0xc4800110  lwc1        $f0, 0x110($a0)
    ctx->pc = 0x2ba570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ba574: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA574u;
        // 0x2ba578: 0xe48000e4  swc1        $f0, 0xE4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA57Cu;
    // 0x2ba57c: 0x0  nop
    ctx->pc = 0x2ba57cu;
    // NOP
    ctx->pc = 0x2ba580u;
}
