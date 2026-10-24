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

// Function: func_001D0090
// Address: 0x1d0090 - 0x1d0108
void func_001D0090_0x1d0090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D0090_0x1d0090");
#endif

    ctx->pc = 0x1d0090u;

    // 0x1d0090: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1d0090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0094: 0x8cc20600  lw          $v0, 0x600($a2)
    ctx->pc = 0x1d0094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1536)));
    // 0x1d0098: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D0098u;
    {
        const bool branch_taken_0x1d0098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0098u;
        // 0x1d009c: 0x24c30490  addiu       $v1, $a2, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0098) {
            ctx->pc = 0x1D00C4u;
            goto label_1d00c4;
        }
    }
    ctx->pc = 0x1D00A0u;
    // 0x1d00a0: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1d00a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1d00a4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D00A4u;
    {
        const bool branch_taken_0x1d00a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d00a4) {
            ctx->pc = 0x1D00A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D00A4u;
            // 0x1d00a8: 0x8cc30250  lw          $v1, 0x250($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D00C8u;
            goto label_1d00c8;
        }
    }
    ctx->pc = 0x1D00ACu;
    // 0x1d00ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d00acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d00b0: 0xe4c00490  swc1        $f0, 0x490($a2)
    ctx->pc = 0x1d00b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 1168), bits); }
    // 0x1d00b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1d00b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d00b8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1d00b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1d00bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1d00bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d00c0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1d00c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1d00c4:
    // 0x1d00c4: 0x8cc30250  lw          $v1, 0x250($a2)
    ctx->pc = 0x1d00c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
label_1d00c8:
    // 0x1d00c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d00c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d00cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d00ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d00d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d00d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d00d4: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1d00d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1d00d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1d00d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d00dc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1d00dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1d00e0: 0xe4c0024c  swc1        $f0, 0x24C($a2)
    ctx->pc = 0x1d00e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 588), bits); }
    // 0x1d00e4: 0xacc30250  sw          $v1, 0x250($a2)
    ctx->pc = 0x1d00e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 592), GPR_U32(ctx, 3));
    // 0x1d00e8: 0xacc50670  sw          $a1, 0x670($a2)
    ctx->pc = 0x1d00e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1648), GPR_U32(ctx, 5));
    // 0x1d00ec: 0xa0c402f5  sb          $a0, 0x2F5($a2)
    ctx->pc = 0x1d00ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d00f0: 0xa0c002f7  sb          $zero, 0x2F7($a2)
    ctx->pc = 0x1d00f0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d00f4: 0xacc00600  sw          $zero, 0x600($a2)
    ctx->pc = 0x1d00f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1536), GPR_U32(ctx, 0));
    // 0x1d00f8: 0xacc00630  sw          $zero, 0x630($a2)
    ctx->pc = 0x1d00f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1584), GPR_U32(ctx, 0));
    // 0x1d00fc: 0xa0c002f4  sb          $zero, 0x2F4($a2)
    ctx->pc = 0x1d00fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0100: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0100u;
        // 0x1d0104: 0xa0c002f6  sb          $zero, 0x2F6($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0108u;
}
