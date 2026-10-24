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

// Function: func_00150710
// Address: 0x150710 - 0x150738
void func_00150710_0x150710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00150710_0x150710");
#endif

    ctx->pc = 0x150710u;

    // 0x150710: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x150710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x150714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x150714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150718: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x150718u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15071c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x15071cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x150720: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x150720u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x150724: 0x3e00008  jr          $ra
    ctx->pc = 0x150724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150724u;
        // 0x150728: 0xe48e0008  swc1        $f14, 0x8($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15072Cu;
    // 0x15072c: 0x0  nop
    ctx->pc = 0x15072cu;
    // NOP
    // 0x150730: 0xe48e0008  swc1        $f14, 0x8($a0)
    ctx->pc = 0x150730u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x150734: 0x0  nop
    ctx->pc = 0x150734u;
    // NOP
    ctx->pc = 0x150738u;
}
