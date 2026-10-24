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

// Function: pl00_setIgnition
// Address: 0x12cd90 - 0x12cdd0
void pl00_setIgnition_0x12cd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pl00_setIgnition_0x12cd90");
#endif

    ctx->pc = 0x12cd90u;

    // 0x12cd90: 0x24820660  addiu       $v0, $a0, 0x660
    ctx->pc = 0x12cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1632));
    // 0x12cd94: 0x50450008  beql        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12CD94u;
    {
        const bool branch_taken_0x12cd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x12cd94) {
            ctx->pc = 0x12CD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CD94u;
            // 0x12cd98: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CDB8u;
            goto label_12cdb8;
        }
    }
    ctx->pc = 0x12CD9Cu;
    // 0x12cd9c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x12cd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cda0: 0xe4800660  swc1        $f0, 0x660($a0)
    ctx->pc = 0x12cda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1632), bits); }
    // 0x12cda4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x12cda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cda8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12cda8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12cdac: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x12cdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12cdb0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12cdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12cdb4: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x12cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_12cdb8:
    // 0x12cdb8: 0xe48c0670  swc1        $f12, 0x670($a0)
    ctx->pc = 0x12cdb8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1648), bits); }
    // 0x12cdbc: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x12cdbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x12cdc0: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x12cdc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cdc4: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x12cdc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x12CDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CDC8u;
        // 0x12cdcc: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CDD0u;
}
