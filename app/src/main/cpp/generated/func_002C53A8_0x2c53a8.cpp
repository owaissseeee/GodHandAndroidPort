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

// Function: func_002C53A8
// Address: 0x2c53a8 - 0x2c53c8
void func_002C53A8_0x2c53a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C53A8_0x2c53a8");
#endif

    ctx->pc = 0x2c53a8u;

    // 0x2c53a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c53a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c53ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c53acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c53b0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c53b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c53b4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2c53b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2c53b8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2c53b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2c53bc: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2c53bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c53c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C53C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C53C0u;
        // 0x2c53c4: 0xa0800005  sb          $zero, 0x5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C53C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C53C8u;
}
