#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r305_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r305
{
// Function: SetParam__15cR305_Chihuahua
// Address: 0x79a048 - 0x79a378
void SetParam__15cR305_Chihuahua_0x79a048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetParam__15cR305_Chihuahua_0x79a048");
#endif

    switch (ctx->pc) {
        case 0x79a0fcu: goto label_79a0fc;
        case 0x79a118u: goto label_79a118;
        case 0x79a150u: goto label_79a150;
        case 0x79a184u: goto label_79a184;
        case 0x79a1e0u: goto label_79a1e0;
        case 0x79a1e8u: goto label_79a1e8;
        case 0x79a25cu: goto label_79a25c;
        case 0x79a278u: goto label_79a278;
        case 0x79a2b8u: goto label_79a2b8;
        case 0x79a2e4u: goto label_79a2e4;
        case 0x79a33cu: goto label_79a33c;
        default: break;
    }

    ctx->pc = 0x79a048u;

    // 0x79a048: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x79a048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x79a04c: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x79a04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x79a050: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x79a050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x79a054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79a054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a058: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x79a058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x79a05c: 0x26120040  addiu       $s2, $s0, 0x40
    ctx->pc = 0x79a05cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x79a060: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x79a060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x79a064: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x79a064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x79a068: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x79a068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x79a06c: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x79a06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x79a070: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x79a070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x79a074: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x79a074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x79a078: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x79a078u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x79a07c: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x79a07cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x79a080: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a084: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79a084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a088: 0x52420008  beql        $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79A088u;
    {
        const bool branch_taken_0x79a088 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x79a088) {
            ctx->pc = 0x79A08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A088u;
            // 0x79a08c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A0ACu;
            goto label_79a0ac;
        }
    }
    ctx->pc = 0x79A090u;
    // 0x79a090: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x79a090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a094: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x79a094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x79a098: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x79a098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a09c: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x79a09cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x79a0a0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79a0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a0a4: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x79a0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x79a0a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79a0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79a0ac:
    // 0x79a0ac: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x79a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x79a0b0: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x79a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x79a0b4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A0B4u;
    {
        const bool branch_taken_0x79a0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0B4u;
        // 0x79a0b8: 0x26110070  addiu       $s1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0b4) {
            ctx->pc = 0x79A0D4u;
            goto label_79a0d4;
        }
    }
    ctx->pc = 0x79A0BCu;
    // 0x79a0bc: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x79a0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a0c0: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x79a0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x79a0c4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x79a0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a0c8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x79a0c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x79a0cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79a0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a0d0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x79a0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_79a0d4:
    // 0x79a0d4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x79a0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a0d8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79a0d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a0dc: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x79a0dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a0e0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79a0e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79a0e4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79a0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a0e8: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x79a0e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a0ec: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79a0ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x79a0f0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79a0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a0f4: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x79A0F4u;
    SET_GPR_U32(ctx, 31, 0x79A0FCu);
    ctx->pc = 0x79A0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A0F4u;
    // 0x79a0f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x79A0F4u, 0x79A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A0FCu;
label_79a0fc:
    // 0x79a0fc: 0x46000044  c1          0x44
    ctx->pc = 0x79a0fcu;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x79a100: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x79a100u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a104: 0x0  nop
    ctx->pc = 0x79a104u;
    // NOP
    // 0x79a108: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x79A108u;
    {
        const bool branch_taken_0x79a108 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79a108) {
            ctx->pc = 0x79A10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A108u;
            // 0x79a10c: 0xc6000054  lwc1        $f0, 0x54($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A120u;
            goto label_79a120;
        }
    }
    ctx->pc = 0x79A110u;
    // 0x79a110: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x79A110u;
    SET_GPR_U32(ctx, 31, 0x79A118u);
    ctx->pc = 0x79A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A110u;
    // 0x79a114: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x79A110u, 0x79A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A118u;
label_79a118:
    // 0x79a118: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x79a118u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x79a11c: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x79a11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79a120:
    // 0x79a120: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x79a120u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a124: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a128: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79a128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79a12c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x79a12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a130: 0xe6010080  swc1        $f1, 0x80($s0)
    ctx->pc = 0x79a130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x79a134: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79a134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a138: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x79a138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79a13c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a140: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x79a140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x79a144: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x79a144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x79a148: 0xc051dca  jal         func_147728
    ctx->pc = 0x79A148u;
    SET_GPR_U32(ctx, 31, 0x79A150u);
    ctx->pc = 0x79A14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A148u;
    // 0x79a14c: 0xe7b5000c  swc1        $f21, 0xC($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x79A148u, 0x79A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A150u;
label_79a150:
    // 0x79a150: 0x27b70060  addiu       $s7, $sp, 0x60
    ctx->pc = 0x79a150u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79a154: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x79a154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a158: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79a158u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a15c: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x79a15cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a160: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79a160u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79a164: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79a164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a168: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x79a168u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x79a16c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x79a16cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x79a170: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x79a170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a174: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x79a174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a178: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x79a178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a17c: 0xc1e6966  jal         func_79A598
    ctx->pc = 0x79A17Cu;
    SET_GPR_U32(ctx, 31, 0x79A184u);
    ctx->pc = 0x79A180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A17Cu;
    // 0x79a180: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A598u, 0x79A17Cu, 0x79A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A184u;
label_79a184:
    // 0x79a184: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x79a184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a188: 0x0  nop
    ctx->pc = 0x79a188u;
    // NOP
    // 0x79a18c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x79A18Cu;
    {
        const bool branch_taken_0x79a18c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A18Cu;
        // 0x79a190: 0xc7a30060  lwc1        $f3, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a18c) {
            ctx->pc = 0x79A1C8u;
            goto label_79a1c8;
        }
    }
    ctx->pc = 0x79A194u;
    // 0x79a194: 0x0  nop
    ctx->pc = 0x79a194u;
    // NOP
    // 0x79a198: 0x0  nop
    ctx->pc = 0x79a198u;
    // NOP
    // 0x79a19c: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x79a19cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x79a1a0: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x79a1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x79a1a4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x79a1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a1a8: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x79a1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a1ac: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x79a1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x79a1b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x79a1b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x79a1b4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x79a1b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x79a1b8: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x79a1b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x79a1bc: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x79a1bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x79a1c0: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x79a1c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x79a1c4: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x79a1c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_79a1c8:
    // 0x79a1c8: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x79a1c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x79a1cc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79a1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a1d0: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x79a1d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79a1d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79a1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1d8: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x79A1D8u;
    SET_GPR_U32(ctx, 31, 0x79A1E0u);
    ctx->pc = 0x79A1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1D8u;
    // 0x79a1dc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x79A1D8u, 0x79A1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1E0u;
label_79a1e0:
    // 0x79a1e0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79A1E0u;
    SET_GPR_U32(ctx, 31, 0x79A1E8u);
    ctx->pc = 0x79A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1E0u;
    // 0x79a1e4: 0xe6000084  swc1        $f0, 0x84($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A1E0u, 0x79A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1E8u;
label_79a1e8:
    // 0x79a1e8: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x79A1E8u;
    {
        const bool branch_taken_0x79a1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1E8u;
        // 0x79a1ec: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1e8) {
            ctx->pc = 0x79A340u;
            goto label_79a340;
        }
    }
    ctx->pc = 0x79A1F0u;
    // 0x79a1f0: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x79a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79a1f4: 0x12230007  beq         $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A1F4u;
    {
        const bool branch_taken_0x79a1f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x79A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1F4u;
        // 0x79a1f8: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1f4) {
            ctx->pc = 0x79A214u;
            goto label_79a214;
        }
    }
    ctx->pc = 0x79A1FCu;
    // 0x79a1fc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x79a1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a200: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x79a200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x79a204: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x79a204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a208: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x79a208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x79a20c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x79a20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a210: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x79a210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_79a214:
    // 0x79a214: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x79a214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x79a218: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A218u;
    {
        const bool branch_taken_0x79a218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x79a218) {
            ctx->pc = 0x79A238u;
            goto label_79a238;
        }
    }
    ctx->pc = 0x79A220u;
    // 0x79a220: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x79a220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a224: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x79a224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x79a228: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x79a228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a22c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x79a22cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x79a230: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x79a230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a234: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x79a234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_79a238:
    // 0x79a238: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x79a238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a23c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79a23cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a240: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x79a240u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a244: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79a244u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79a248: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79a248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a24c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79a24cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x79a250: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79a250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a254: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x79A254u;
    SET_GPR_U32(ctx, 31, 0x79A25Cu);
    ctx->pc = 0x79A258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A254u;
    // 0x79a258: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x79A254u, 0x79A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A25Cu;
label_79a25c:
    // 0x79a25c: 0x46000084  c1          0x84
    ctx->pc = 0x79a25cu;
    ctx->f[2] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x79a260: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x79a260u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a264: 0x0  nop
    ctx->pc = 0x79a264u;
    // NOP
    // 0x79a268: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x79A268u;
    {
        const bool branch_taken_0x79a268 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79a268) {
            ctx->pc = 0x79A26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A268u;
            // 0x79a26c: 0xc6000034  lwc1        $f0, 0x34($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A280u;
            goto label_79a280;
        }
    }
    ctx->pc = 0x79A270u;
    // 0x79a270: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x79A270u;
    SET_GPR_U32(ctx, 31, 0x79A278u);
    ctx->pc = 0x79A274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A270u;
    // 0x79a274: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x79A270u, 0x79A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A278u;
label_79a278:
    // 0x79a278: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x79a278u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x79a27c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x79a27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79a280:
    // 0x79a280: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x79a280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a284: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x79a284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a288: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x79a288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a28c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x79a28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79a290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a294: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x79a294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x79a298: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x79a298u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79a29c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x79a29cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79a2a0: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x79a2a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x79a2a4: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x79a2a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x79a2a8: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x79a2a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x79a2ac: 0xe6020060  swc1        $f2, 0x60($s0)
    ctx->pc = 0x79a2acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x79a2b0: 0xc051dca  jal         func_147728
    ctx->pc = 0x79A2B0u;
    SET_GPR_U32(ctx, 31, 0x79A2B8u);
    ctx->pc = 0x79A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2B0u;
    // 0x79a2b4: 0xe675000c  swc1        $f21, 0xC($s3) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x79A2B0u, 0x79A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2B8u;
label_79a2b8:
    // 0x79a2b8: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x79a2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a2bc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79a2bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a2c0: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x79a2c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79a2c4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79a2c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79a2c8: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x79a2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a2cc: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x79a2ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x79a2d0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79a2d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a2d4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79a2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a2d8: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x79a2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a2dc: 0xc1e6966  jal         func_79A598
    ctx->pc = 0x79A2DCu;
    SET_GPR_U32(ctx, 31, 0x79A2E4u);
    ctx->pc = 0x79A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2DCu;
    // 0x79a2e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A598u, 0x79A2DCu, 0x79A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2E4u;
label_79a2e4:
    // 0x79a2e4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x79a2e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a2e8: 0x0  nop
    ctx->pc = 0x79a2e8u;
    // NOP
    // 0x79a2ec: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x79A2ECu;
    {
        const bool branch_taken_0x79a2ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2ECu;
        // 0x79a2f0: 0xc7a30070  lwc1        $f3, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2ec) {
            ctx->pc = 0x79A328u;
            goto label_79a328;
        }
    }
    ctx->pc = 0x79A2F4u;
    // 0x79a2f4: 0x0  nop
    ctx->pc = 0x79a2f4u;
    // NOP
    // 0x79a2f8: 0x0  nop
    ctx->pc = 0x79a2f8u;
    // NOP
    // 0x79a2fc: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x79a2fcu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x79a300: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x79a300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x79a304: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x79a304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a308: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x79a308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a30c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x79a30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x79a310: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x79a310u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x79a314: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x79a314u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x79a318: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x79a318u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x79a31c: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x79a31cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x79a320: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x79a320u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x79a324: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x79a324u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_79a328:
    // 0x79a328: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79a328u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a32c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x79a32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a330: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x79a330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a334: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x79A334u;
    SET_GPR_U32(ctx, 31, 0x79A33Cu);
    ctx->pc = 0x79A338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A334u;
    // 0x79a338: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x79A334u, 0x79A33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A33Cu;
label_79a33c:
    // 0x79a33c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x79a33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_79a340:
    // 0x79a340: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x79a340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x79a344: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x79a344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x79a348: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x79a348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79a34c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x79a34cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79a350: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x79a350u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79a354: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x79a354u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79a358: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x79a358u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79a35c: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x79a35cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79a360: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x79a360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a364: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x79a364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79a368: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x79a368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a36c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A36Cu;
        // 0x79a370: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A374u;
    // 0x79a374: 0x0  nop
    ctx->pc = 0x79a374u;
    // NOP
    ctx->pc = 0x79a378u;
}
} // namespace gh_r305
