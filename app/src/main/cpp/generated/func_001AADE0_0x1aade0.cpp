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

// Function: func_001AADE0
// Address: 0x1aade0 - 0x1aafc8
void func_001AADE0_0x1aade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AADE0_0x1aade0");
#endif

    switch (ctx->pc) {
        case 0x1aaf5cu: goto label_1aaf5c;
        default: break;
    }

    ctx->pc = 0x1aade0u;

    // 0x1aade0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aade0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1aade4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1aade4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1aade8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aadec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aadecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aadf0: 0x8e0409a0  lw          $a0, 0x9A0($s0)
    ctx->pc = 0x1aadf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2464)));
    // 0x1aadf4: 0x50800071  beql        $a0, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x1AADF4u;
    {
        const bool branch_taken_0x1aadf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aadf4) {
            ctx->pc = 0x1AADF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AADF4u;
            // 0x1aadf8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAFBCu;
            goto label_1aafbc;
        }
    }
    ctx->pc = 0x1AADFCu;
    // 0x1aadfc: 0x8e0509a4  lw          $a1, 0x9A4($s0)
    ctx->pc = 0x1aadfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2468)));
    // 0x1aae00: 0x4a20030  bltzl       $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1AAE00u;
    {
        const bool branch_taken_0x1aae00 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x1aae00) {
            ctx->pc = 0x1AAE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAE00u;
            // 0x1aae04: 0xc48000b8  lwc1        $f0, 0xB8($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAEC4u;
            goto label_1aaec4;
        }
    }
    ctx->pc = 0x1AAE08u;
    // 0x1aae08: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x1aae08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1aae0c: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x1aae0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1aae10: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AAE10u;
    {
        const bool branch_taken_0x1aae10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE10u;
        // 0x1aae14: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae10) {
            ctx->pc = 0x1AAE2Cu;
            goto label_1aae2c;
        }
    }
    ctx->pc = 0x1AAE18u;
    // 0x1aae18: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x1aae18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1aae1c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1aae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1aae20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aae20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aae24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AAE24u;
    {
        const bool branch_taken_0x1aae24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE24u;
        // 0x1aae28: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae24) {
            ctx->pc = 0x1AAE30u;
            goto label_1aae30;
        }
    }
    ctx->pc = 0x1AAE2Cu;
label_1aae2c:
    // 0x1aae2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1aae2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aae30:
    // 0x1aae30: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1AAE30u;
    {
        const bool branch_taken_0x1aae30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE30u;
        // 0x1aae34: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae30) {
            ctx->pc = 0x1AAEA4u;
            goto label_1aaea4;
        }
    }
    ctx->pc = 0x1AAE38u;
    // 0x1aae38: 0xc46200b0  lwc1        $f2, 0xB0($v1)
    ctx->pc = 0x1aae38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aae3c: 0xc46000b4  lwc1        $f0, 0xB4($v1)
    ctx->pc = 0x1aae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aae40: 0xc46100b8  lwc1        $f1, 0xB8($v1)
    ctx->pc = 0x1aae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aae44: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1aae44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1aae48: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1aae48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1aae4c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1aae4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1aae50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aae50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aae54: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1aae54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1aae58: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x1aae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1aae5c: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AAE5Cu;
    {
        const bool branch_taken_0x1aae5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AAE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE5Cu;
        // 0x1aae60: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae5c) {
            ctx->pc = 0x1AAE7Cu;
            goto label_1aae7c;
        }
    }
    ctx->pc = 0x1AAE64u;
    // 0x1aae64: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1aae64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aae68: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1aae68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1aae6c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1aae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aae70: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1aae70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1aae74: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1aae74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aae78: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1aae78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1aae7c:
    // 0x1aae7c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1aae7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1aae80: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1aae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x1aae84: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AAE84u;
    {
        const bool branch_taken_0x1aae84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aae84) {
            ctx->pc = 0x1AAE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAE84u;
            // 0x1aae88: 0x8e0300f0  lw          $v1, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAEA8u;
            goto label_1aaea8;
        }
    }
    ctx->pc = 0x1AAE8Cu;
    // 0x1aae8c: 0xc4600100  lwc1        $f0, 0x100($v1)
    ctx->pc = 0x1aae8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aae90: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1aae90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1aae94: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1aae94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aae98: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1aae98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1aae9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1aae9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaea0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1aaea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1aaea4:
    // 0x1aaea4: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1aaea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1aaea8:
    // 0x1aaea8: 0x260209b0  addiu       $v0, $s0, 0x9B0
    ctx->pc = 0x1aaea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2480));
    // 0x1aaeac: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1aaeacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aaeb0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1aaeb0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aaeb4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1aaeb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1aaeb8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1aaeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1aaebc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1AAEBCu;
    {
        const bool branch_taken_0x1aaebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEBCu;
        // 0x1aaec0: 0xc6000104  lwc1        $f0, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaebc) {
            ctx->pc = 0x1AAF48u;
            goto label_1aaf48;
        }
    }
    ctx->pc = 0x1AAEC4u;
label_1aaec4:
    // 0x1aaec4: 0xc48300b0  lwc1        $f3, 0xB0($a0)
    ctx->pc = 0x1aaec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1aaec8: 0xc48100b4  lwc1        $f1, 0xB4($a0)
    ctx->pc = 0x1aaec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aaecc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aaeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aaed0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1aaed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aaed4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1aaed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1aaed8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1aaed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1aaedc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1aaedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1aaee0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1aaee0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1aaee4: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AAEE4u;
    {
        const bool branch_taken_0x1aaee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1AAEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEE4u;
        // 0x1aaee8: 0xe7a30000  swc1        $f3, 0x0($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaee4) {
            ctx->pc = 0x1AAF00u;
            goto label_1aaf00;
        }
    }
    ctx->pc = 0x1AAEECu;
    // 0x1aaeec: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1aaeecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1aaef0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1aaef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaef4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1aaef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1aaef8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1aaef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aaefc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1aaefcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1aaf00:
    // 0x1aaf00: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1aaf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1aaf04: 0x260209b0  addiu       $v0, $s0, 0x9B0
    ctx->pc = 0x1aaf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2480));
    // 0x1aaf08: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1aaf08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aaf0c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1aaf0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aaf10: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1aaf10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1aaf14: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1aaf14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1aaf18: 0x8e0409a0  lw          $a0, 0x9A0($s0)
    ctx->pc = 0x1aaf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2464)));
    // 0x1aaf1c: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x1aaf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1aaf20: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x1aaf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x1aaf24: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AAF24u;
    {
        const bool branch_taken_0x1aaf24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aaf24) {
            ctx->pc = 0x1AAF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAF24u;
            // 0x1aaf28: 0xc6000104  lwc1        $f0, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAF48u;
            goto label_1aaf48;
        }
    }
    ctx->pc = 0x1AAF2Cu;
    // 0x1aaf2c: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x1aaf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaf30: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1aaf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1aaf34: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1aaf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aaf38: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1aaf38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1aaf3c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1aaf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaf40: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1aaf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1aaf44: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x1aaf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aaf48:
    // 0x1aaf48: 0xc60109c4  lwc1        $f1, 0x9C4($s0)
    ctx->pc = 0x1aaf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aaf4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aaf4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aaf50: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1aaf50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x1aaf54: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1AAF54u;
    SET_GPR_U32(ctx, 31, 0x1AAF5Cu);
    ctx->pc = 0x1AAF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF54u;
    // 0x1aaf58: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1AAF54u, 0x1AAF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF5Cu;
label_1aaf5c:
    // 0x1aaf5c: 0x8e0409a0  lw          $a0, 0x9A0($s0)
    ctx->pc = 0x1aaf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2464)));
    // 0x1aaf60: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1aaf60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x1aaf64: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x1aaf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x1aaf68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1aaf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1aaf6c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAF6Cu;
    {
        const bool branch_taken_0x1aaf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaf6c) {
            ctx->pc = 0x1AAF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAF6Cu;
            // 0x1aaf70: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAF80u;
            goto label_1aaf80;
        }
    }
    ctx->pc = 0x1AAF74u;
    // 0x1aaf74: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1aaf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1aaf78: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1AAF78u;
    {
        const bool branch_taken_0x1aaf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF78u;
        // 0x1aaf7c: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf78) {
            ctx->pc = 0x1AAFB4u;
            goto label_1aafb4;
        }
    }
    ctx->pc = 0x1AAF80u;
label_1aaf80:
    // 0x1aaf80: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1aaf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1aaf84: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1aaf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x1aaf88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1aaf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1aaf8c: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1aaf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1aaf90: 0xc480024c  lwc1        $f0, 0x24C($a0)
    ctx->pc = 0x1aaf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaf94: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x1aaf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1aaf98: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x1aaf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x1aaf9c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1aaf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1aafa0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAFA0u;
    {
        const bool branch_taken_0x1aafa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFA0u;
        // 0x1aafa4: 0x34620010  ori         $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafa0) {
            ctx->pc = 0x1AAFB4u;
            goto label_1aafb4;
        }
    }
    ctx->pc = 0x1AAFA8u;
    // 0x1aafa8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1aafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1aafac: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1aafacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1aafb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1aafb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1aafb4:
    // 0x1aafb4: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x1aafb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x1aafb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1aafb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aafbc:
    // 0x1aafbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aafbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aafc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFC0u;
        // 0x1aafc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAFC8u;
}
