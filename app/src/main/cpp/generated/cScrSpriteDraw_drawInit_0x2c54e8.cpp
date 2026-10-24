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

// Function: cScrSpriteDraw_drawInit
// Address: 0x2c54e8 - 0x2c5548
void cScrSpriteDraw_drawInit_0x2c54e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScrSpriteDraw_drawInit_0x2c54e8");
#endif

    ctx->pc = 0x2c54e8u;

    // 0x2c54e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c54e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c54ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c54ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c54f0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2c54f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c54f4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2c54f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c54f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c54f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c54fc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2c54fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c5500: 0xa4820030  sh          $v0, 0x30($a0)
    ctx->pc = 0x2c5500u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c5504: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x2c5504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x2c5508: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x2c5508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x2c550c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x2c550cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2c5510: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2c5510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2c5514: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x2c5514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2c5518: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2c5518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2c551c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2c551cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2c5520: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2c5520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2c5524: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5524u;
        // 0x2c5528: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C552Cu;
    // 0x2c552c: 0x0  nop
    ctx->pc = 0x2c552cu;
    // NOP
    // 0x2c5530: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2c5530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2c5534: 0x0  nop
    ctx->pc = 0x2c5534u;
    // NOP
    // 0x2c5538: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c5538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c553c: 0x0  nop
    ctx->pc = 0x2c553cu;
    // NOP
    // 0x2c5540: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c5540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c5544: 0x0  nop
    ctx->pc = 0x2c5544u;
    // NOP
    ctx->pc = 0x2c5548u;
}
