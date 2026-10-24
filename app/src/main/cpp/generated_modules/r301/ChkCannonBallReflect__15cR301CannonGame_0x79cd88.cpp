#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: ChkCannonBallReflect__15cR301CannonGame
// Address: 0x79cd88 - 0x79d090
void ChkCannonBallReflect__15cR301CannonGame_0x79cd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChkCannonBallReflect__15cR301CannonGame_0x79cd88");
#endif

    switch (ctx->pc) {
        case 0x79cdbcu: goto label_79cdbc;
        case 0x79cdd8u: goto label_79cdd8;
        case 0x79cec0u: goto label_79cec0;
        case 0x79cf0cu: goto label_79cf0c;
        case 0x79cf50u: goto label_79cf50;
        case 0x79d02cu: goto label_79d02c;
        case 0x79d044u: goto label_79d044;
        default: break;
    }

    ctx->pc = 0x79cd88u;

    // 0x79cd88: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x79cd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x79cd8c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x79cd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x79cd90: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x79cd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x79cd94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79cd94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79cd98: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x79cd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x79cd9c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x79cd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x79cda0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x79cda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x79cda4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x79cda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x79cda8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x79cda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x79cdac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79cdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79cdb0: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x79cdb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x79cdb4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79CDB4u;
    SET_GPR_U32(ctx, 31, 0x79CDBCu);
    ctx->pc = 0x79CDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CDB4u;
    // 0x79cdb8: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79CDB4u, 0x79CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CDBCu;
label_79cdbc:
    // 0x79cdbc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79cdbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79cdc0: 0x124000a6  beqz        $s2, . + 4 + (0xA6 << 2)
    ctx->pc = 0x79CDC0u;
    {
        const bool branch_taken_0x79cdc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CDC0u;
        // 0x79cdc4: 0x2616004c  addiu       $s6, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cdc0) {
            ctx->pc = 0x79D05Cu;
            goto label_79d05c;
        }
    }
    ctx->pc = 0x79CDC8u;
    // 0x79cdc8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x79cdc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79cdcc: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x79cdccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79cdd0: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x79cdd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79cdd4: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x79cdd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_79cdd8:
    // 0x79cdd8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x79cdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79cddc: 0x50800051  beql        $a0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x79CDDCu;
    {
        const bool branch_taken_0x79cddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79cddc) {
            ctx->pc = 0x79CDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CDDCu;
            // 0x79cde0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CF24u;
            goto label_79cf24;
        }
    }
    ctx->pc = 0x79CDE4u;
    // 0x79cde4: 0x9c830004  lwu         $v1, 0x4($a0)
    ctx->pc = 0x79cde4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79cde8: 0x3107b  dsra        $v0, $v1, 1
    ctx->pc = 0x79cde8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 1);
    // 0x79cdec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79cdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79cdf0: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x79CDF0u;
    {
        const bool branch_taken_0x79cdf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CDF0u;
        // 0x79cdf4: 0x310fb  dsra        $v0, $v1, 3 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cdf0) {
            ctx->pc = 0x79CF20u;
            goto label_79cf20;
        }
    }
    ctx->pc = 0x79CDF8u;
    // 0x79cdf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79cdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79cdfc: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x79CDFCu;
    {
        const bool branch_taken_0x79cdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79cdfc) {
            ctx->pc = 0x79CE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CDFCu;
            // 0x79ce00: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CF24u;
            goto label_79cf24;
        }
    }
    ctx->pc = 0x79CE04u;
    // 0x79ce04: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x79ce04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79ce08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79ce0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79CE0Cu;
    {
        const bool branch_taken_0x79ce0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CE0Cu;
        // 0x79ce10: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ce0c) {
            ctx->pc = 0x79CE3Cu;
            goto label_79ce3c;
        }
    }
    ctx->pc = 0x79CE14u;
    // 0x79ce14: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79ce18: 0x53a20016  beql        $sp, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x79CE18u;
    {
        const bool branch_taken_0x79ce18 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x79ce18) {
            ctx->pc = 0x79CE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CE18u;
            // 0x79ce1c: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CE74u;
            goto label_79ce74;
        }
    }
    ctx->pc = 0x79CE20u;
    // 0x79ce20: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x79ce20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ce24: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x79ce24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79ce28: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x79ce28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79ce2c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x79ce2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79ce30: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79ce30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ce34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x79CE34u;
    {
        const bool branch_taken_0x79ce34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CE34u;
        // 0x79ce38: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ce34) {
            ctx->pc = 0x79CE70u;
            goto label_79ce70;
        }
    }
    ctx->pc = 0x79CE3Cu;
label_79ce3c:
    // 0x79ce3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79ce3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79ce40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79ce40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79ce44: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x79ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x79ce48: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x79ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x79ce4c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x79ce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x79ce50: 0x13b30007  beq         $sp, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x79CE50u;
    {
        const bool branch_taken_0x79ce50 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 19));
        ctx->pc = 0x79CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CE50u;
        // 0x79ce54: 0xe660000c  swc1        $f0, 0xC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ce50) {
            ctx->pc = 0x79CE70u;
            goto label_79ce70;
        }
    }
    ctx->pc = 0x79CE58u;
    // 0x79ce58: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x79ce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ce5c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x79ce5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79ce60: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x79ce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79ce64: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x79ce64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79ce68: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x79ce68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79ce6c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x79ce6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_79ce70:
    // 0x79ce70: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x79ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_79ce74:
    // 0x79ce74: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x79ce74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79ce78: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79ce78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ce7c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x79ce7cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79ce80: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79ce80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79ce84: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79ce84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79ce88: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x79ce88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x79ce8c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79ce8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79ce90: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x79ce90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79ce94: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x79ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ce98: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x79ce98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x79ce9c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x79ce9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x79cea0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x79cea0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x79cea4: 0x460c0084  c1          0xC0084
    ctx->pc = 0x79cea4u;
    ctx->f[2] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x79cea8: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x79cea8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79ceac: 0x0  nop
    ctx->pc = 0x79ceacu;
    // NOP
    // 0x79ceb0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x79CEB0u;
    {
        const bool branch_taken_0x79ceb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79ceb0) {
            ctx->pc = 0x79CEC4u;
            goto label_79cec4;
        }
    }
    ctx->pc = 0x79CEB8u;
    // 0x79ceb8: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x79CEB8u;
    SET_GPR_U32(ctx, 31, 0x79CEC0u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x79CEB8u, 0x79CEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CEC0u;
label_79cec0:
    // 0x79cec0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x79cec0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_79cec4:
    // 0x79cec4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x79cec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x79cec8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79cec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79cecc: 0x0  nop
    ctx->pc = 0x79ceccu;
    // NOP
    // 0x79ced0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x79ced0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79ced4: 0x0  nop
    ctx->pc = 0x79ced4u;
    // NOP
    // 0x79ced8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x79CED8u;
    {
        const bool branch_taken_0x79ced8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CED8u;
        // 0x79cedc: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ced8) {
            ctx->pc = 0x79CF20u;
            goto label_79cf20;
        }
    }
    ctx->pc = 0x79CEE0u;
    // 0x79cee0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x79cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79cee4: 0x2447df38  addiu       $a3, $v0, -0x20C8
    ctx->pc = 0x79cee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958904));
    // 0x79cee8: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x79cee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x79ceec: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x79ceecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x79cef0: 0xaba40013  swl         $a0, 0x13($sp)
    ctx->pc = 0x79cef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x79cef4: 0xbba40010  swr         $a0, 0x10($sp)
    ctx->pc = 0x79cef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x79cef8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79cef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79cefc: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x79cefcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x79cf00: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x79cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x79cf04: 0xc042f42  jal         func_10BD08
    ctx->pc = 0x79CF04u;
    SET_GPR_U32(ctx, 31, 0x79CF0Cu);
    ctx->pc = 0x79CF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CF04u;
    // 0x79cf08: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BD08u, 0x79CF04u, 0x79CF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CF0Cu;
label_79cf0c:
    // 0x79cf0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x79cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79cf10: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79cf14: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x79cf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x79cf18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79CF18u;
    {
        const bool branch_taken_0x79cf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CF18u;
        // 0x79cf1c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cf18) {
            ctx->pc = 0x79CF30u;
            goto label_79cf30;
        }
    }
    ctx->pc = 0x79CF20u;
label_79cf20:
    // 0x79cf20: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x79cf20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_79cf24:
    // 0x79cf24: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x79cf24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x79cf28: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x79CF28u;
    {
        const bool branch_taken_0x79cf28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CF28u;
        // 0x79cf2c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cf28) {
            ctx->pc = 0x79CDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79cdd8;
        }
    }
    ctx->pc = 0x79CF30u;
label_79cf30:
    // 0x79cf30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79cf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79cf34: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79cf34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79cf38: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x79cf38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79cf3c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x79cf3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x79cf40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79cf40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79cf44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x79cf44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79cf48: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79cf48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79cf4c: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x79cf4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_79cf50:
    // 0x79cf50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79cf54: 0x5080003e  beql        $a0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x79CF54u;
    {
        const bool branch_taken_0x79cf54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79cf54) {
            ctx->pc = 0x79CF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CF54u;
            // 0x79cf58: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D050u;
            goto label_79d050;
        }
    }
    ctx->pc = 0x79CF5Cu;
    // 0x79cf5c: 0x9c830004  lwu         $v1, 0x4($a0)
    ctx->pc = 0x79cf5cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79cf60: 0x310fb  dsra        $v0, $v1, 3
    ctx->pc = 0x79cf60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 3);
    // 0x79cf64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79cf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79cf68: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x79CF68u;
    {
        const bool branch_taken_0x79cf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CF68u;
        // 0x79cf6c: 0x3113b  dsra        $v0, $v1, 4 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cf68) {
            ctx->pc = 0x79D04Cu;
            goto label_79d04c;
        }
    }
    ctx->pc = 0x79CF70u;
    // 0x79cf70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79cf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79cf74: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x79CF74u;
    {
        const bool branch_taken_0x79cf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79cf74) {
            ctx->pc = 0x79CF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CF74u;
            // 0x79cf78: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79D050u;
            goto label_79d050;
        }
    }
    ctx->pc = 0x79CF7Cu;
    // 0x79cf7c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x79cf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79cf80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79cf84: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x79CF84u;
    {
        const bool branch_taken_0x79cf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79cf84) {
            ctx->pc = 0x79CF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CF84u;
            // 0x79cf88: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CFB4u;
            goto label_79cfb4;
        }
    }
    ctx->pc = 0x79CF8Cu;
    // 0x79cf8c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79cf90: 0x53a20013  beql        $sp, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x79CF90u;
    {
        const bool branch_taken_0x79cf90 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x79cf90) {
            ctx->pc = 0x79CF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CF90u;
            // 0x79cf94: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CFE0u;
            goto label_79cfe0;
        }
    }
    ctx->pc = 0x79CF98u;
    // 0x79cf98: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x79cf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79cf9c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x79cf9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79cfa0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x79cfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79cfa4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x79cfa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79cfa8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79cfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79cfac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x79CFACu;
    {
        const bool branch_taken_0x79cfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CFACu;
        // 0x79cfb0: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cfac) {
            ctx->pc = 0x79CFDCu;
            goto label_79cfdc;
        }
    }
    ctx->pc = 0x79CFB4u;
label_79cfb4:
    // 0x79cfb4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x79cfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x79cfb8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x79cfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x79cfbc: 0x13b10007  beq         $sp, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79CFBCu;
    {
        const bool branch_taken_0x79cfbc = (GPR_U64(ctx, 29) == GPR_U64(ctx, 17));
        ctx->pc = 0x79CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CFBCu;
        // 0x79cfc0: 0xe635000c  swc1        $f21, 0xC($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cfbc) {
            ctx->pc = 0x79CFDCu;
            goto label_79cfdc;
        }
    }
    ctx->pc = 0x79CFC4u;
    // 0x79cfc4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x79cfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79cfc8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x79cfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79cfcc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x79cfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79cfd0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x79cfd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79cfd4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x79cfd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79cfd8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x79cfd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_79cfdc:
    // 0x79cfdc: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x79cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_79cfe0:
    // 0x79cfe0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x79cfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79cfe4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79cfe4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79cfe8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x79cfe8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79cfec: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79cfecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79cff0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79cff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79cff4: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x79cff4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x79cff8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79cff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79cffc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x79cffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79d000: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x79d000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79d004: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x79d004u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x79d008: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x79d008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x79d00c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x79d00cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x79d010: 0x460c0004  c1          0xC0004
    ctx->pc = 0x79d010u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x79d014: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x79d014u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79d018: 0x0  nop
    ctx->pc = 0x79d018u;
    // NOP
    // 0x79d01c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x79D01Cu;
    {
        const bool branch_taken_0x79d01c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79d01c) {
            ctx->pc = 0x79D02Cu;
            goto label_79d02c;
        }
    }
    ctx->pc = 0x79D024u;
    // 0x79d024: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x79D024u;
    SET_GPR_U32(ctx, 31, 0x79D02Cu);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x79D024u, 0x79D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D02Cu;
label_79d02c:
    // 0x79d02c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x79d02cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79d030: 0x0  nop
    ctx->pc = 0x79d030u;
    // NOP
    // 0x79d034: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x79D034u;
    {
        const bool branch_taken_0x79d034 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D034u;
        // 0x79d038: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d034) {
            ctx->pc = 0x79D050u;
            goto label_79d050;
        }
    }
    ctx->pc = 0x79D03Cu;
    // 0x79d03c: 0xc1e6d0a  jal         func_79B428
    ctx->pc = 0x79D03Cu;
    SET_GPR_U32(ctx, 31, 0x79D044u);
    ctx->pc = 0x79D040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D03Cu;
    // 0x79d040: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B428u, 0x79D03Cu, 0x79D044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D044u;
label_79d044:
    // 0x79d044: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79D044u;
    {
        const bool branch_taken_0x79d044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D044u;
        // 0x79d048: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d044) {
            ctx->pc = 0x79D060u;
            goto label_79d060;
        }
    }
    ctx->pc = 0x79D04Cu;
label_79d04c:
    // 0x79d04c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x79d04cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_79d050:
    // 0x79d050: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x79d050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x79d054: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x79D054u;
    {
        const bool branch_taken_0x79d054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D054u;
        // 0x79d058: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d054) {
            ctx->pc = 0x79CF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79cf50;
        }
    }
    ctx->pc = 0x79D05Cu;
label_79d05c:
    // 0x79d05c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x79d05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79d060:
    // 0x79d060: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x79d060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79d064: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x79d064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79d068: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x79d068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79d06c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x79d06cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79d070: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x79d070u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79d074: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x79d074u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79d078: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79d078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79d07c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x79d07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79d080: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x79d080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79d084: 0x3e00008  jr          $ra
    ctx->pc = 0x79D084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D084u;
        // 0x79d088: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D08Cu;
    // 0x79d08c: 0x0  nop
    ctx->pc = 0x79d08cu;
    // NOP
    ctx->pc = 0x79d090u;
}
} // namespace gh_r301
