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

// Function: func_001C6C30
// Address: 0x1c6c30 - 0x1c6cb8
void func_001C6C30_0x1c6c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C6C30_0x1c6c30");
#endif

    switch (ctx->pc) {
        case 0x1c6ca0u: goto label_1c6ca0;
        case 0x1c6ca8u: goto label_1c6ca8;
        default: break;
    }

    ctx->pc = 0x1c6c30u;

    // 0x1c6c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6c34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6c38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c6c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c6c3c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c6c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c6c40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6c44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c48: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1c6c48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6c4c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x1c6c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1c6c50: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x1c6c50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6c54: 0x260200f0  addiu       $v0, $s0, 0xF0
    ctx->pc = 0x1c6c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x1c6c58: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1c6c58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6c5c: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x1c6c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c6c60: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x1c6c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x1c6c64: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x1c6c64u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1c6c68: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1c6c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1c6c6c: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x1c6c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x1c6c70: 0xe44c0004  swc1        $f12, 0x4($v0)
    ctx->pc = 0x1c6c70u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c6c74: 0x10c50007  beq         $a2, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6C74u;
    {
        const bool branch_taken_0x1c6c74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C6C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C74u;
        // 0x1c6c78: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c74) {
            ctx->pc = 0x1C6C94u;
            goto label_1c6c94;
        }
    }
    ctx->pc = 0x1C6C7Cu;
    // 0x1c6c7c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1c6c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6c80: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1c6c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1c6c84: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1c6c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6c88: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1c6c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1c6c8c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1c6c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6c90: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1c6c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1c6c94:
    // 0x1c6c94: 0xe60e0154  swc1        $f14, 0x154($s0)
    ctx->pc = 0x1c6c94u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x1c6c98: 0xc071c4e  jal         func_1C7138
    ctx->pc = 0x1C6C98u;
    SET_GPR_U32(ctx, 31, 0x1C6CA0u);
    ctx->pc = 0x1C6C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C98u;
    // 0x1c6c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7138u, 0x1C6C98u, 0x1C6CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6CA0u;
label_1c6ca0:
    // 0x1c6ca0: 0xc071cc4  jal         func_1C7310
    ctx->pc = 0x1C6CA0u;
    SET_GPR_U32(ctx, 31, 0x1C6CA8u);
    ctx->pc = 0x1C6CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6CA0u;
    // 0x1c6ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7310u, 0x1C6CA0u, 0x1C6CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6CA8u;
label_1c6ca8:
    // 0x1c6ca8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c6ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CB0u;
        // 0x1c6cb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6CB8u;
}
