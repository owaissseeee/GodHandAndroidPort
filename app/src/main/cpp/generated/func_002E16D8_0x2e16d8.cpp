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

// Function: func_002E16D8
// Address: 0x2e16d8 - 0x2e1710
void func_002E16D8_0x2e16d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E16D8_0x2e16d8");
#endif

    ctx->pc = 0x2e16d8u;

    // 0x2e16d8: 0x8c850110  lw          $a1, 0x110($a0)
    ctx->pc = 0x2e16d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x2e16dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e16dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e16e0: 0xc4a0013c  lwc1        $f0, 0x13C($a1)
    ctx->pc = 0x2e16e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e16e4: 0xe48002b0  swc1        $f0, 0x2B0($a0)
    ctx->pc = 0x2e16e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
    // 0x2e16e8: 0xc4a10140  lwc1        $f1, 0x140($a1)
    ctx->pc = 0x2e16e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e16ec: 0xe48102b4  swc1        $f1, 0x2B4($a0)
    ctx->pc = 0x2e16ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 692), bits); }
    // 0x2e16f0: 0xc4a00144  lwc1        $f0, 0x144($a1)
    ctx->pc = 0x2e16f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e16f4: 0xe48002b8  swc1        $f0, 0x2B8($a0)
    ctx->pc = 0x2e16f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 696), bits); }
    // 0x2e16f8: 0xc4a10148  lwc1        $f1, 0x148($a1)
    ctx->pc = 0x2e16f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e16fc: 0xe48102bc  swc1        $f1, 0x2BC($a0)
    ctx->pc = 0x2e16fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 700), bits); }
    // 0x2e1700: 0x8ca3016c  lw          $v1, 0x16C($a1)
    ctx->pc = 0x2e1700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 364)));
    // 0x2e1704: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1704u;
        // 0x2e1708: 0xac8302c0  sw          $v1, 0x2C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E170Cu;
    // 0x2e170c: 0x0  nop
    ctx->pc = 0x2e170cu;
    // NOP
    ctx->pc = 0x2e1710u;
}
