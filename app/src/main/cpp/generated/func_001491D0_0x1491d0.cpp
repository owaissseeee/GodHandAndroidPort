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

// Function: func_001491D0
// Address: 0x1491d0 - 0x149220
void func_001491D0_0x1491d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001491D0_0x1491d0");
#endif

    ctx->pc = 0x1491d0u;

    // 0x1491d0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1491d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1491d4: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x1491d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1491d8: 0x906276b0  lbu         $v0, 0x76B0($v1)
    ctx->pc = 0x1491d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x7476B0u));
    // 0x1491dc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1491dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1491e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1491e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1491e4: 0x461818  mult        $v1, $v0, $a2
    ctx->pc = 0x1491e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1491e8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1491e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1491ec: 0xe44101b0  swc1        $f1, 0x1B0($v0)
    ctx->pc = 0x1491ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 432), bits); }
    // 0x1491f0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1491f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1491f4: 0xe44001b4  swc1        $f0, 0x1B4($v0)
    ctx->pc = 0x1491f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 436), bits); }
    // 0x1491f8: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1491f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1491fc: 0xe44101c0  swc1        $f1, 0x1C0($v0)
    ctx->pc = 0x1491fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 448), bits); }
    // 0x149200: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x149200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149204: 0xe44001c4  swc1        $f0, 0x1C4($v0)
    ctx->pc = 0x149204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 452), bits); }
    // 0x149208: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x149208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14920c: 0xe44101d0  swc1        $f1, 0x1D0($v0)
    ctx->pc = 0x14920cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 464), bits); }
    // 0x149210: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x149210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149214: 0x3e00008  jr          $ra
    ctx->pc = 0x149214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149214u;
        // 0x149218: 0xe44001d4  swc1        $f0, 0x1D4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 468), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14921Cu;
    // 0x14921c: 0x0  nop
    ctx->pc = 0x14921cu;
    // NOP
    ctx->pc = 0x149220u;
}
