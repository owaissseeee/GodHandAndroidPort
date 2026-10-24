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

// Function: MtxInitTransVec
// Address: 0x1476d0 - 0x147728
void MtxInitTransVec_0x1476d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MtxInitTransVec_0x1476d0");
#endif

    ctx->pc = 0x1476d0u;

    // 0x1476d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1476d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1476d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1476d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1476d8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1476d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1476dc: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x1476dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1476e0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1476e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1476e4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1476e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1476e8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1476e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1476ec: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x1476ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1476f0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1476f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1476f4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1476f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1476f8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1476f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1476fc: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1476fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x147700: 0xe4820028  swc1        $f2, 0x28($a0)
    ctx->pc = 0x147700u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x147704: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x147704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x147708: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x147708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14770c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x14770cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x147710: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x147710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147714: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x147714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x147718: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x147718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14771c: 0xe482003c  swc1        $f2, 0x3C($a0)
    ctx->pc = 0x14771cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x147720: 0x3e00008  jr          $ra
    ctx->pc = 0x147720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147720u;
        // 0x147724: 0xe4800038  swc1        $f0, 0x38($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147728u;
}
