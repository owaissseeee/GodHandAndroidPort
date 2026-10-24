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

// Function: func_00148200
// Address: 0x148200 - 0x148250
void func_00148200_0x148200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00148200_0x148200");
#endif

    ctx->pc = 0x148200u;

    // 0x148200: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x148200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x148204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x148204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148208: 0xe48c0020  swc1        $f12, 0x20($a0)
    ctx->pc = 0x148208u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x14820c: 0xe48d0024  swc1        $f13, 0x24($a0)
    ctx->pc = 0x14820cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x148210: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x148210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x148214: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x148214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x148218: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x148218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14821c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x14821cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x148220: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x148220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x148224: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x148224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x148228: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x148228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x14822c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x14822cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x148230: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x148230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x148234: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x148234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x148238: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x148238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x14823c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x14823cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x148240: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x148240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x148244: 0x3e00008  jr          $ra
    ctx->pc = 0x148244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148244u;
        // 0x148248: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14824Cu;
    // 0x14824c: 0x0  nop
    ctx->pc = 0x14824cu;
    // NOP
    ctx->pc = 0x148250u;
}
