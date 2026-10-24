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

// Function: cEm00_setEm65Separate
// Address: 0x2761d0 - 0x2761f8
void cEm00_setEm65Separate_0x2761d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_setEm65Separate_0x2761d0");
#endif

    ctx->pc = 0x2761d0u;

    // 0x2761d0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2761d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2761d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2761d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2761d8: 0x2402009a  addiu       $v0, $zero, 0x9A
    ctx->pc = 0x2761d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x2761dc: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x2761dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2761e0: 0xe480054c  swc1        $f0, 0x54C($a0)
    ctx->pc = 0x2761e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1356), bits); }
    // 0x2761e4: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x2761e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2761e8: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x2761e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2761ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2761ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2761F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2761ECu;
        // 0x2761f0: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2761ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2761F4u;
    // 0x2761f4: 0x0  nop
    ctx->pc = 0x2761f4u;
    // NOP
    ctx->pc = 0x2761f8u;
}
