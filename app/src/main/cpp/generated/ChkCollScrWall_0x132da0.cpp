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

// Function: ChkCollScrWall
// Address: 0x132da0 - 0x1331b8
void ChkCollScrWall_0x132da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChkCollScrWall_0x132da0");
#endif

    switch (ctx->pc) {
        case 0x132ee4u: goto label_132ee4;
        case 0x133008u: goto label_133008;
        case 0x133058u: goto label_133058;
        case 0x1330d4u: goto label_1330d4;
        case 0x133170u: goto label_133170;
        default: break;
    }

    ctx->pc = 0x132da0u;

    // 0x132da0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x132da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x132da4: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x132da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x132da8: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x132da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x132dac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x132dacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132db0: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x132db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x132db4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x132db4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132db8: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x132db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x132dbc: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x132dbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132dc0: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x132dc0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x132dc4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x132dc4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132dc8: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x132dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x132dcc: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x132dccu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x132dd0: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x132dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x132dd4: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x132dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x132dd8: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x132dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x132ddc: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x132ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x132de0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x132de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x132de4: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x132de4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x132de8: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x132de8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x132dec: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x132decu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x132df0: 0x9ea205a0  lwu         $v0, 0x5A0($s5)
    ctx->pc = 0x132df0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 1440)));
    // 0x132df4: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x132df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x132df8: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x132df8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x132dfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x132dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x132e00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x132E00u;
    {
        const bool branch_taken_0x132e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E00u;
        // 0x132e04: 0xafa700c4  sw          $a3, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e00) {
            ctx->pc = 0x132E10u;
            goto label_132e10;
        }
    }
    ctx->pc = 0x132E08u;
    // 0x132e08: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x132E08u;
    {
        const bool branch_taken_0x132e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E08u;
        // 0x132e0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e08) {
            ctx->pc = 0x133174u;
            goto label_133174;
        }
    }
    ctx->pc = 0x132E10u;
label_132e10:
    // 0x132e10: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x132e10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x132e14: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x132e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x132e18: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x132e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x132e1c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x132e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x132e20: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x132e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x132e24: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x132e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x132e28: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x132e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x132e2c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x132e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x132e30: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x132e30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x132e34: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x132e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x132e38: 0x26a20490  addiu       $v0, $s5, 0x490
    ctx->pc = 0x132e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1168));
    // 0x132e3c: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x132E3Cu;
    {
        const bool branch_taken_0x132e3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x132E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E3Cu;
        // 0x132e40: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e3c) {
            ctx->pc = 0x132E60u;
            goto label_132e60;
        }
    }
    ctx->pc = 0x132E44u;
    // 0x132e44: 0xc6a00490  lwc1        $f0, 0x490($s5)
    ctx->pc = 0x132e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132e48: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x132e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x132e4c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x132e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132e50: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x132e50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x132e54: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x132e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132e58: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x132e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x132e5c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x132e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_132e60:
    // 0x132e60: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x132e60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x132e64: 0x8ea200f0  lw          $v0, 0xF0($s5)
    ctx->pc = 0x132e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x132e68: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x132e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x132e6c: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x132E6Cu;
    {
        const bool branch_taken_0x132e6c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x132E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E6Cu;
        // 0x132e70: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e6c) {
            ctx->pc = 0x132E8Cu;
            goto label_132e8c;
        }
    }
    ctx->pc = 0x132E74u;
    // 0x132e74: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x132e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132e78: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x132e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x132e7c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x132e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132e80: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x132e80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x132e84: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x132e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132e88: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x132e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_132e8c:
    // 0x132e8c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x132e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132e90: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x132e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x132e94: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x132e94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x132e98: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x132e98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x132e9c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x132e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x132ea0: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x132ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x132ea4: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x132ea4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x132ea8: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x132ea8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132eac: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x132eacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x132eb0: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x132eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132eb4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x132eb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132eb8: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x132eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132ebc: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x132ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132ec0: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x132ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132ec4: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x132ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132ec8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x132ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x132ecc: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x132eccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x132ed0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x132ed0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x132ed4: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x132ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x132ed8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x132ed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x132edc: 0xc04078a  jal         func_101E28
    ctx->pc = 0x132EDCu;
    SET_GPR_U32(ctx, 31, 0x132EE4u);
    ctx->pc = 0x132EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132EDCu;
    // 0x132ee0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x132EDCu, 0x132EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132EE4u;
label_132ee4:
    // 0x132ee4: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x132ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132ee8: 0x0  nop
    ctx->pc = 0x132ee8u;
    // NOP
    // 0x132eec: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x132EECu;
    {
        const bool branch_taken_0x132eec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x132EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EECu;
        // 0x132ef0: 0xc7a40050  lwc1        $f4, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132eec) {
            ctx->pc = 0x132F30u;
            goto label_132f30;
        }
    }
    ctx->pc = 0x132EF4u;
    // 0x132ef4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x132ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x132ef8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x132ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x132efc: 0x0  nop
    ctx->pc = 0x132efcu;
    // NOP
    // 0x132f00: 0x0  nop
    ctx->pc = 0x132f00u;
    // NOP
    // 0x132f04: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x132f04u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x132f08: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x132f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x132f0c: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x132f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132f10: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x132f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132f14: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x132f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x132f18: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x132f18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x132f1c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x132f1cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x132f20: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x132f20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x132f24: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x132f24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x132f28: 0xe7a400a0  swc1        $f4, 0xA0($sp)
    ctx->pc = 0x132f28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x132f2c: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x132f2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_132f30:
    // 0x132f30: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x132f30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132f34: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x132f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132f38: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x132f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132f3c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x132f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x132f40: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x132f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132f44: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x132f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x132f48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x132f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x132f4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x132f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132f50: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x132f50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x132f54: 0x4600bd02  mul.s       $f20, $f23, $f0
    ctx->pc = 0x132f54u;
    ctx->f[20] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x132f58: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x132f58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x132f5c: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x132f5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x132f60: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x132f60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x132f64: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x132f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132f68: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x132f68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x132f6c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x132f6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x132f70: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x132f70u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x132f74: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x132f74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x132f78: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x132f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132f7c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x132f7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132f80: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x132f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132f84: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x132f84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132f88: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x132f88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x132f8c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x132f8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x132f90: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x132f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132f94: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x132f94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x132f98: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x132f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132f9c: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x132f9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x132fa0: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x132fa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x132fa4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x132fa4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x132fa8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x132fa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x132fac: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x132facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132fb0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x132fb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x132fb4: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x132fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132fb8: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x132fb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132fbc: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x132fbcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x132fc0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x132fc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x132fc4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x132fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132fc8: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x132fc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x132fcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132fd0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x132fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x132fd4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x132fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132fd8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x132fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x132fdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132fe0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x132fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x132fe4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x132fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132fe8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x132fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x132fec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x132fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ff0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x132ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x132ff4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x132ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132ff8: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x132ff8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ffc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x132ffcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133000: 0xc04c784  jal         func_131E10
    ctx->pc = 0x133000u;
    SET_GPR_U32(ctx, 31, 0x133008u);
    ctx->pc = 0x133004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133000u;
    // 0x133004: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x133000u, 0x133008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133008u;
label_133008:
    // 0x133008: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x133008u;
    {
        const bool branch_taken_0x133008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133008) {
            ctx->pc = 0x13300Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133008u;
            // 0x13300c: 0x8ea200f0  lw          $v0, 0xF0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133114u;
            goto label_133114;
        }
    }
    ctx->pc = 0x133010u;
    // 0x133010: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x133010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x133014: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x133014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x133018: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x133018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13301c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x13301cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x133020: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x133020u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x133024: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x133024u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x133028: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x133028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13302c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x13302cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133030: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x133030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x133034: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x133034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133038: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x133038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13303c: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x13303cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133040: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x133040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x133044: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x133044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x133048: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x133048u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x13304c: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x13304cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x133050: 0xc04078a  jal         func_101E28
    ctx->pc = 0x133050u;
    SET_GPR_U32(ctx, 31, 0x133058u);
    ctx->pc = 0x133054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133050u;
    // 0x133054: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x133050u, 0x133058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133058u;
label_133058:
    // 0x133058: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x133058u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13305c: 0x0  nop
    ctx->pc = 0x13305cu;
    // NOP
    // 0x133060: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x133060u;
    {
        const bool branch_taken_0x133060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x133064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133060u;
        // 0x133064: 0xc7a40090  lwc1        $f4, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133060) {
            ctx->pc = 0x1330A4u;
            goto label_1330a4;
        }
    }
    ctx->pc = 0x133068u;
    // 0x133068: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x133068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13306c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13306cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x133070: 0x0  nop
    ctx->pc = 0x133070u;
    // NOP
    // 0x133074: 0x0  nop
    ctx->pc = 0x133074u;
    // NOP
    // 0x133078: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x133078u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x13307c: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x13307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x133080: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x133080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133084: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x133084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133088: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x133088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x13308c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x13308cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x133090: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x133090u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x133094: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x133094u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x133098: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x133098u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x13309c: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x13309cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1330a0: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x1330a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1330a4:
    // 0x1330a4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1330a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1330a8: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1330a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1330ac: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x1330acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1330b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1330b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1330b4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1330b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1330b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1330b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1330bc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1330bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1330c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1330c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1330c4: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x1330c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1330c8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1330c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1330cc: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x1330CCu;
    SET_GPR_U32(ctx, 31, 0x1330D4u);
    ctx->pc = 0x1330D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1330CCu;
    // 0x1330d0: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x1330CCu, 0x1330D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1330D4u;
label_1330d4:
    // 0x1330d4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1330d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1330d8: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1330d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1330dc: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1330dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1330e0: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x1330e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1330e4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1330e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1330e8: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1330e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1330ec: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1330ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1330f0: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1330f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1330f4: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x1330f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1330f8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1330f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1330fc: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1330fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133100: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x133100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133104: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x133104u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x133108: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x133108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x13310c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13310Cu;
    {
        const bool branch_taken_0x13310c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13310Cu;
        // 0x133110: 0xe7a10088  swc1        $f1, 0x88($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13310c) {
            ctx->pc = 0x133144u;
            goto label_133144;
        }
    }
    ctx->pc = 0x133114u;
label_133114:
    // 0x133114: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x133114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x133118: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x133118u;
    {
        const bool branch_taken_0x133118 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x13311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133118u;
        // 0x13311c: 0xc7a00084  lwc1        $f0, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x133118) {
            ctx->pc = 0x13313Cu;
            goto label_13313c;
        }
    }
    ctx->pc = 0x133120u;
    // 0x133120: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x133120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133124: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x133124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x133128: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x133128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13312c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x13312cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x133130: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x133130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133134: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x133134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x133138: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x133138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13313c:
    // 0x13313c: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x13313cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x133140: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x133140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_133144:
    // 0x133144: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x133144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x133148: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x133148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13314c: 0x8faa00c4  lw          $t2, 0xC4($sp)
    ctx->pc = 0x13314cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x133150: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x133150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x133154: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x133154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x133158: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x133158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13315c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x13315cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x133160: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x133160u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133164: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x133164u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133168: 0xc04c876  jal         func_1321D8
    ctx->pc = 0x133168u;
    SET_GPR_U32(ctx, 31, 0x133170u);
    ctx->pc = 0x13316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133168u;
    // 0x13316c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1321D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1321D8u, 0x133168u, 0x133170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133170u;
label_133170:
    // 0x133170: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x133170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_133174:
    // 0x133174: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x133174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x133178: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x133178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x13317c: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x13317cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x133180: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x133180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x133184: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x133184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x133188: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x133188u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x13318c: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x13318cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x133190: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x133190u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x133194: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x133194u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133198: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x133198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13319c: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x13319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1331a0: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x1331a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1331a4: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x1331a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1331a8: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x1331a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1331ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1331ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1331B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1331ACu;
        // 0x1331b0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1331ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1331B4u;
    // 0x1331b4: 0x0  nop
    ctx->pc = 0x1331b4u;
    // NOP
    ctx->pc = 0x1331b8u;
}
