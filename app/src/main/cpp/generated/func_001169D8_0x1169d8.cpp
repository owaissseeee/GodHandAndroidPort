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

// Function: func_001169D8
// Address: 0x1169d8 - 0x116a88
void func_001169D8_0x1169d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001169D8_0x1169d8");
#endif

    switch (ctx->pc) {
        case 0x116a18u: goto label_116a18;
        default: break;
    }

    ctx->pc = 0x1169d8u;

    // 0x1169d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1169d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1169dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1169dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1169e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1169e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1169e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1169e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1169e8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1169e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1169ec: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1169ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1169f0: 0x24040700  addiu       $a0, $zero, 0x700
    ctx->pc = 0x1169f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x1169f4: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x1169f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x1169f8: 0x1464001e  bne         $v1, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1169F8u;
    {
        const bool branch_taken_0x1169f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1169FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169F8u;
        // 0x1169fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1169f8) {
            ctx->pc = 0x116A74u;
            goto label_116a74;
        }
    }
    ctx->pc = 0x116A00u;
    // 0x116a00: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x116a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x116a04: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x116a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x116a08: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x116a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x116a0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x116a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a10: 0xc0b098e  jal         func_2C2638
    ctx->pc = 0x116A10u;
    SET_GPR_U32(ctx, 31, 0x116A18u);
    ctx->pc = 0x116A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A10u;
    // 0x116a14: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2638u, 0x116A10u, 0x116A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A18u;
label_116a18:
    // 0x116a18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116A18u;
    {
        const bool branch_taken_0x116a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A18u;
        // 0x116a1c: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a18) {
            ctx->pc = 0x116A28u;
            goto label_116a28;
        }
    }
    ctx->pc = 0x116A20u;
    // 0x116a20: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x116A20u;
    {
        const bool branch_taken_0x116a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A20u;
        // 0x116a24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a20) {
            ctx->pc = 0x116A74u;
            goto label_116a74;
        }
    }
    ctx->pc = 0x116A28u;
label_116a28:
    // 0x116a28: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x116a28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x116a2c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x116A2Cu;
    {
        const bool branch_taken_0x116a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x116A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A2Cu;
        // 0x116a30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a2c) {
            ctx->pc = 0x116A74u;
            goto label_116a74;
        }
    }
    ctx->pc = 0x116A34u;
    // 0x116a34: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x116a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x116a38: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x116A38u;
    {
        const bool branch_taken_0x116a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x116A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A38u;
        // 0x116a3c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a38) {
            ctx->pc = 0x116A54u;
            goto label_116a54;
        }
    }
    ctx->pc = 0x116A40u;
    // 0x116a40: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x116a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x116a44: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x116a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x116a48: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x116a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x116a4c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x116a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116a50: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x116a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_116a54:
    // 0x116a54: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x116a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116a58: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x116a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x116a5c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x116a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x116a60: 0xe6000598  swc1        $f0, 0x598($s0)
    ctx->pc = 0x116a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1432), bits); }
    // 0x116a64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116a68: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x116a68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x116a6c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x116a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x116a70: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x116a70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_116a74:
    // 0x116a74: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x116a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116a78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x116a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x116A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A7Cu;
        // 0x116a80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116A84u;
    // 0x116a84: 0x0  nop
    ctx->pc = 0x116a84u;
    // NOP
    ctx->pc = 0x116a88u;
}
