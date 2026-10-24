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

// Function: func_001CFE88
// Address: 0x1cfe88 - 0x1d0090
void func_001CFE88_0x1cfe88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CFE88_0x1cfe88");
#endif

    switch (ctx->pc) {
        case 0x1cfeacu: goto label_1cfeac;
        case 0x1cff48u: goto label_1cff48;
        case 0x1cffa0u: goto label_1cffa0;
        default: break;
    }

    ctx->pc = 0x1cfe88u;

    // 0x1cfe88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1cfe88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1cfe8c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1cfe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1cfe90: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1cfe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1cfe94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfe94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe98: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1cfe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1cfe9c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1cfe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1cfea0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cfea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cfea4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1CFEA4u;
    SET_GPR_U32(ctx, 31, 0x1CFEACu);
    ctx->pc = 0x1CFEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFEA4u;
    // 0x1cfea8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1CFEA4u, 0x1CFEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEACu;
label_1cfeac:
    // 0x1cfeac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cfeacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfeb0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1cfeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cfeb4: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1cfeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1cfeb8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CFEB8u;
    {
        const bool branch_taken_0x1cfeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEB8u;
        // 0x1cfebc: 0x26030490  addiu       $v1, $s0, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfeb8) {
            ctx->pc = 0x1CFEE4u;
            goto label_1cfee4;
        }
    }
    ctx->pc = 0x1CFEC0u;
    // 0x1cfec0: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1cfec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1cfec4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFEC4u;
    {
        const bool branch_taken_0x1cfec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cfec4) {
            ctx->pc = 0x1CFEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFEC4u;
            // 0x1cfec8: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFEE8u;
            goto label_1cfee8;
        }
    }
    ctx->pc = 0x1CFECCu;
    // 0x1cfecc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cfeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfed0: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x1cfed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x1cfed4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cfed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfed8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1cfed8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1cfedc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cfedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfee0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1cfee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1cfee4:
    // 0x1cfee4: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1cfee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_1cfee8:
    // 0x1cfee8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1cfee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1cfeec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cfeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cfef0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cfef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfef4: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1cfef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1cfef8: 0x920402b4  lbu         $a0, 0x2B4($s0)
    ctx->pc = 0x1cfef8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1cfefc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1cfefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1cff00: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x1cff00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1cff04: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1cff04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1cff08: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1cff08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x1cff0c: 0xae000630  sw          $zero, 0x630($s0)
    ctx->pc = 0x1cff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
    // 0x1cff10: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFF10u;
    {
        const bool branch_taken_0x1cff10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF10u;
        // 0x1cff14: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff10) {
            ctx->pc = 0x1CFF24u;
            goto label_1cff24;
        }
    }
    ctx->pc = 0x1CFF18u;
    // 0x1cff18: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1cff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1cff1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CFF1Cu;
    {
        const bool branch_taken_0x1cff1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF1Cu;
        // 0x1cff20: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff1c) {
            ctx->pc = 0x1CFF28u;
            goto label_1cff28;
        }
    }
    ctx->pc = 0x1CFF24u;
label_1cff24:
    // 0x1cff24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cff24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cff28:
    // 0x1cff28: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x1CFF28u;
    {
        const bool branch_taken_0x1cff28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff28) {
            ctx->pc = 0x1CFF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFF28u;
            // 0x1cff2c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0078u;
            goto label_1d0078;
        }
    }
    ctx->pc = 0x1CFF30u;
    // 0x1cff30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff34: 0xac400108  sw          $zero, 0x108($v0)
    ctx->pc = 0x1cff34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
    // 0x1cff38: 0xac500148  sw          $s0, 0x148($v0)
    ctx->pc = 0x1cff38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 16));
    // 0x1cff3c: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1cff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1cff40: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1CFF40u;
    SET_GPR_U32(ctx, 31, 0x1CFF48u);
    ctx->pc = 0x1CFF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF40u;
    // 0x1cff44: 0xac400104  sw          $zero, 0x104($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1CFF40u, 0x1CFF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF48u;
label_1cff48:
    // 0x1cff48: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x1cff48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cff4c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1cff4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cff50: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1cff50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1cff54: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1cff54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cff58: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1cff58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cff5c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1cff5cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cff60: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1cff60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cff64: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1cff64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cff68: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1cff68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cff6c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1cff6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cff70: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1cff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cff74: 0x13b20006  beq         $sp, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CFF74u;
    {
        const bool branch_taken_0x1cff74 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x1CFF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF74u;
        // 0x1cff78: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff74) {
            ctx->pc = 0x1CFF90u;
            goto label_1cff90;
        }
    }
    ctx->pc = 0x1CFF7Cu;
    // 0x1cff7c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1cff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cff80: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1cff80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cff84: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1cff84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cff88: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1cff88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1cff8c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1cff8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1cff90:
    // 0x1cff90: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1cff90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cff94: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1cff94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cff98: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1CFF98u;
    SET_GPR_U32(ctx, 31, 0x1CFFA0u);
    ctx->pc = 0x1CFF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF98u;
    // 0x1cff9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1CFF98u, 0x1CFFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFA0u;
label_1cffa0:
    // 0x1cffa0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1cffa0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1cffa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cffa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cffa8: 0x0  nop
    ctx->pc = 0x1cffa8u;
    // NOP
    // 0x1cffac: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1cffacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cffb0: 0x0  nop
    ctx->pc = 0x1cffb0u;
    // NOP
    // 0x1cffb4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1CFFB4u;
    {
        const bool branch_taken_0x1cffb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFB4u;
        // 0x1cffb8: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffb4) {
            ctx->pc = 0x1CFFF8u;
            goto label_1cfff8;
        }
    }
    ctx->pc = 0x1CFFBCu;
    // 0x1cffbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cffbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cffc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cffc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cffc4: 0x0  nop
    ctx->pc = 0x1cffc4u;
    // NOP
    // 0x1cffc8: 0x0  nop
    ctx->pc = 0x1cffc8u;
    // NOP
    // 0x1cffcc: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1cffccu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x1cffd0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1cffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cffd4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1cffd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cffd8: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1cffd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cffdc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1cffdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1cffe0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1cffe0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1cffe4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1cffe4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1cffe8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1cffe8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1cffec: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1cffecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1cfff0: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x1cfff0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1cfff4: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x1cfff4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1cfff8:
    // 0x1cfff8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1cfff8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cfffc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1cfffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1d0000: 0x13b10006  beq         $sp, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0000u;
    {
        const bool branch_taken_0x1d0000 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 17));
        ctx->pc = 0x1D0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0000u;
        // 0x1d0004: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0000) {
            ctx->pc = 0x1D001Cu;
            goto label_1d001c;
        }
    }
    ctx->pc = 0x1D0008u;
    // 0x1d0008: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1d0008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d000c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1d000cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d0010: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1d0010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d0014: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1d0014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d0018: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1d0018u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d001c:
    // 0x1d001c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d001cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d0020: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d0020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0024: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1d0024u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0028: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1d0028u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1d002c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1d002cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1d0030: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1d0030u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1d0034: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1d0034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1d0038: 0x26020640  addiu       $v0, $s0, 0x640
    ctx->pc = 0x1d0038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    // 0x1d003c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D003Cu;
    {
        const bool branch_taken_0x1d003c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1D0040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D003Cu;
        // 0x1d0040: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d003c) {
            ctx->pc = 0x1D0058u;
            goto label_1d0058;
        }
    }
    ctx->pc = 0x1D0044u;
    // 0x1d0044: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1d0044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0048: 0xe6000640  swc1        $f0, 0x640($s0)
    ctx->pc = 0x1d0048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1600), bits); }
    // 0x1d004c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1d004cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1d0050: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1d0050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0054: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1d0054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1d0058:
    // 0x1d0058: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D0058u;
    {
        const bool branch_taken_0x1d0058 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0058u;
        // 0x1d005c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0058) {
            ctx->pc = 0x1D0064u;
            goto label_1d0064;
        }
    }
    ctx->pc = 0x1D0060u;
    // 0x1d0060: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1d0060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d0064:
    // 0x1d0064: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1d0064u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0068: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1d0068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d006c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1d006cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0070: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1d0070u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0074: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1d0074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d0078:
    // 0x1d0078: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1d0078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d007c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1d007cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d0080: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d0080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d0084: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d0084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d0088: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0088u;
        // 0x1d008c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0090u;
}
