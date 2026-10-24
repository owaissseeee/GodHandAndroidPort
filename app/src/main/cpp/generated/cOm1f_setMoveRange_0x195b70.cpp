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

// Function: cOm1f_setMoveRange
// Address: 0x195b70 - 0x195b88
void cOm1f_setMoveRange_0x195b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm1f_setMoveRange_0x195b70");
#endif

    ctx->pc = 0x195b70u;

    // 0x195b70: 0xe48f0b04  swc1        $f15, 0xB04($a0)
    ctx->pc = 0x195b70u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2820), bits); }
    // 0x195b74: 0xe48c0af8  swc1        $f12, 0xAF8($a0)
    ctx->pc = 0x195b74u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2808), bits); }
    // 0x195b78: 0xe48d0afc  swc1        $f13, 0xAFC($a0)
    ctx->pc = 0x195b78u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2812), bits); }
    // 0x195b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x195B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195B7Cu;
        // 0x195b80: 0xe48e0b00  swc1        $f14, 0xB00($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2816), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195B84u;
    // 0x195b84: 0x0  nop
    ctx->pc = 0x195b84u;
    // NOP
    ctx->pc = 0x195b88u;
}
