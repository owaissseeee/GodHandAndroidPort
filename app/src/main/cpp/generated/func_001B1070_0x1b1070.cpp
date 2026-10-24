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

// Function: func_001B1070
// Address: 0x1b1070 - 0x1b1598
void func_001B1070_0x1b1070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B1070_0x1b1070");
#endif

    switch (ctx->pc) {
        case 0x1b10bcu: goto label_1b10bc;
        case 0x1b10f0u: goto label_1b10f0;
        case 0x1b1230u: goto label_1b1230;
        case 0x1b12dcu: goto label_1b12dc;
        case 0x1b13ecu: goto label_1b13ec;
        case 0x1b1468u: goto label_1b1468;
        case 0x1b1484u: goto label_1b1484;
        case 0x1b1494u: goto label_1b1494;
        case 0x1b14c4u: goto label_1b14c4;
        case 0x1b14d4u: goto label_1b14d4;
        case 0x1b1500u: goto label_1b1500;
        case 0x1b1528u: goto label_1b1528;
        case 0x1b1548u: goto label_1b1548;
        case 0x1b1550u: goto label_1b1550;
        case 0x1b1560u: goto label_1b1560;
        default: break;
    }

    ctx->pc = 0x1b1070u;

    // 0x1b1070: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1b1070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1b1074: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x1b1074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x1b1078: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x1b1078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x1b107c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b107cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1080: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x1b1080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x1b1084: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x1b1084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x1b1088: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x1b1088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x1b108c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b108cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1090: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x1b1090u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x1b1094: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1b1094u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1098: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x1b1098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x1b109c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b109cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b10a0: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x1b10a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x1b10a4: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x1b10a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x1b10a8: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x1b10a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x1b10ac: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x1b10acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x1b10b0: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1b10b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1b10b4: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1B10B4u;
    SET_GPR_U32(ctx, 31, 0x1B10BCu);
    ctx->pc = 0x1B10B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10B4u;
    // 0x1b10b8: 0xa2230531  sb          $v1, 0x531($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B10B4u, 0x1B10BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B10BCu;
label_1b10bc:
    // 0x1b10bc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1b10bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1b10c0: 0xc6210630  lwc1        $f1, 0x630($s1)
    ctx->pc = 0x1b10c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b10c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b10c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b10c8: 0x0  nop
    ctx->pc = 0x1b10c8u;
    // NOP
    // 0x1b10cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b10ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b10d0: 0x0  nop
    ctx->pc = 0x1b10d0u;
    // NOP
    // 0x1b10d4: 0x45000101  bc1f        . + 4 + (0x101 << 2)
    ctx->pc = 0x1B10D4u;
    {
        const bool branch_taken_0x1b10d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b10d4) {
            ctx->pc = 0x1B14DCu;
            goto label_1b14dc;
        }
    }
    ctx->pc = 0x1B10DCu;
    // 0x1b10dc: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1b10dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1b10e0: 0x144000fe  bnez        $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x1B10E0u;
    {
        const bool branch_taken_0x1b10e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b10e0) {
            ctx->pc = 0x1B14DCu;
            goto label_1b14dc;
        }
    }
    ctx->pc = 0x1B10E8u;
    // 0x1b10e8: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x1B10E8u;
    SET_GPR_U32(ctx, 31, 0x1B10F0u);
    ctx->pc = 0x1B10ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B10E8u;
    // 0x1b10ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x1B10E8u, 0x1B10F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B10F0u;
label_1b10f0:
    // 0x1b10f0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B10F0u;
    {
        const bool branch_taken_0x1b10f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b10f0) {
            ctx->pc = 0x1B10F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B10F0u;
            // 0x1b10f4: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1114u;
            goto label_1b1114;
        }
    }
    ctx->pc = 0x1B10F8u;
    // 0x1b10f8: 0x8e020514  lw          $v0, 0x514($s0)
    ctx->pc = 0x1b10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1300)));
    // 0x1b10fc: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B10FCu;
    {
        const bool branch_taken_0x1b10fc = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x1b10fc) {
            ctx->pc = 0x1B1100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B10FCu;
            // 0x1b1100: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1114u;
            goto label_1b1114;
        }
    }
    ctx->pc = 0x1B1104u;
    // 0x1b1104: 0xc6200630  lwc1        $f0, 0x630($s1)
    ctx->pc = 0x1b1104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1108: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1b1108u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1b110c: 0xe6200630  swc1        $f0, 0x630($s1)
    ctx->pc = 0x1b110cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1584), bits); }
    // 0x1b1110: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b1110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1b1114:
    // 0x1b1114: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b1114u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1118: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b1118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b111c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1b111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b1120: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1b1120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b1124: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1b1124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b1128: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1b1128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b112c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1b112cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b1130: 0x26230640  addiu       $v1, $s1, 0x640
    ctx->pc = 0x1b1130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x1b1134: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b1134u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b1138: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b1138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b113c: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b113cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b1140: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1b1140u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b1144: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b1144u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b1148: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b1148u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b114c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b114cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b1150: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1b1150u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b1154: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1b1154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b1158: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1b1158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b115c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b115cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1160: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1b1160u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b1164: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b1164u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b1168: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b1168u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b116c: 0xc6210640  lwc1        $f1, 0x640($s1)
    ctx->pc = 0x1b116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1170: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1b1170u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1174: 0xc6200648  lwc1        $f0, 0x648($s1)
    ctx->pc = 0x1b1174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1178: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1b1178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1b117c: 0x3c013cd4  lui         $at, 0x3CD4
    ctx->pc = 0x1b117cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15572 << 16));
    // 0x1b1180: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1b1180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1b1184: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b1184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b1188: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1b1188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1b118c: 0xc6230644  lwc1        $f3, 0x644($s1)
    ctx->pc = 0x1b118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b1190: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1b1190u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1b1194: 0x3c0137d1  lui         $at, 0x37D1
    ctx->pc = 0x1b1194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14289 << 16));
    // 0x1b1198: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1b1198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1b119c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b119cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b11a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b11a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b11a4: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x1b11a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1b11a8: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x1b11a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b11ac: 0x0  nop
    ctx->pc = 0x1b11acu;
    // NOP
    // 0x1b11b0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1B11B0u;
    {
        const bool branch_taken_0x1b11b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B11B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B11B0u;
        // 0x1b11b4: 0xe6230644  swc1        $f3, 0x644($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1604), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11b0) {
            ctx->pc = 0x1B11F8u;
            goto label_1b11f8;
        }
    }
    ctx->pc = 0x1B11B8u;
    // 0x1b11b8: 0x26220650  addiu       $v0, $s1, 0x650
    ctx->pc = 0x1b11b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
    // 0x1b11bc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b11bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b11c0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b11c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b11c4: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b11c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b11c8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1b11c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b11cc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b11ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b11d0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b11d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b11d4: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b11d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b11d8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1b11d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b11dc: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1b11dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b11e0: 0xda240100  lqc2        $vf4, 0x100($s1)
    ctx->pc = 0x1b11e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x1b11e4: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1b11e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b11e8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b11e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b11ec: 0xfa240100  sqc2        $vf4, 0x100($s1)
    ctx->pc = 0x1b11ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b11f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B11F0u;
    {
        const bool branch_taken_0x1b11f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b11f0) {
            ctx->pc = 0x1B1228u;
            goto label_1b1228;
        }
    }
    ctx->pc = 0x1B11F8u;
label_1b11f8:
    // 0x1b11f8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b11f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b11fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b11fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b1200: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b1200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1204: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b1204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1208: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b1208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b120c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1b120cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1b1210: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b1210u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b1214: 0xda240100  lqc2        $vf4, 0x100($s1)
    ctx->pc = 0x1b1214u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x1b1218: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1b1218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b121c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b121cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b1220: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b1220u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b1224: 0xfa240100  sqc2        $vf4, 0x100($s1)
    ctx->pc = 0x1b1224u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 256), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b1228:
    // 0x1b1228: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x1B1228u;
    SET_GPR_U32(ctx, 31, 0x1B1230u);
    ctx->pc = 0x1B122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1228u;
    // 0x1b122c: 0x26240100  addiu       $a0, $s1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1B1228u, 0x1B1230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1230u;
label_1b1230:
    // 0x1b1230: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b1230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b1234: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x1b1234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b1238: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1238u;
    {
        const bool branch_taken_0x1b1238 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1238u;
        // 0x1b123c: 0x27b20070  addiu       $s2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1238) {
            ctx->pc = 0x1B125Cu;
            goto label_1b125c;
        }
    }
    ctx->pc = 0x1B1240u;
    // 0x1b1240: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b1240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1244: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1b1244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1b1248: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b1248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b124c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1b124cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1b1250: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b1250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1254: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1b1254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1b1258: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b1258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1b125c:
    // 0x1b125c: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B125Cu;
    {
        const bool branch_taken_0x1b125c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B125Cu;
        // 0x1b1260: 0xc7a00074  lwc1        $f0, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b125c) {
            ctx->pc = 0x1B1280u;
            goto label_1b1280;
        }
    }
    ctx->pc = 0x1B1264u;
    // 0x1b1264: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b1264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1268: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1b1268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1b126c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b126cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1270: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1b1270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1b1274: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b1274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1278: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1b1278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1b127c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1b127cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b1280:
    // 0x1b1280: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1b1280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b1284: 0x3c014128  lui         $at, 0x4128
    ctx->pc = 0x1b1284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16680 << 16));
    // 0x1b1288: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b1288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b128c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1b128cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b1290: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1b1290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b1294: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b1294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1298: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b1298u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b129c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1b129cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12a0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b12a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12a4: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1b12a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1b12a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b12a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b12ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b12acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12b0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1b12b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1b12b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b12b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12b8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b12b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1b12bc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1b12bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b12c0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1b12c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1b12c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b12c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12c8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b12c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b12cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b12ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12d0: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x1b12d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x1b12d4: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1B12D4u;
    SET_GPR_U32(ctx, 31, 0x1B12DCu);
    ctx->pc = 0x1B12D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B12D4u;
    // 0x1b12d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1B12D4u, 0x1B12DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B12DCu;
label_1b12dc:
    // 0x1b12dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b12dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b12e0: 0x14700043  bne         $v1, $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1B12E0u;
    {
        const bool branch_taken_0x1b12e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x1B12E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12E0u;
        // 0x1b12e4: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12e0) {
            ctx->pc = 0x1B13F0u;
            goto label_1b13f0;
        }
    }
    ctx->pc = 0x1B12E8u;
    // 0x1b12e8: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x1b12e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b12ec: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1b12ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1b12f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b12f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b12f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b12f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b12f8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b12f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b12fc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1b12fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1b1300: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b1300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1304: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b1304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1308: 0x0  nop
    ctx->pc = 0x1b1308u;
    // NOP
    // 0x1b130c: 0x45020038  bc1fl       . + 4 + (0x38 << 2)
    ctx->pc = 0x1B130Cu;
    {
        const bool branch_taken_0x1b130c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b130c) {
            ctx->pc = 0x1B1310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B130Cu;
            // 0x1b1310: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B13F0u;
            goto label_1b13f0;
        }
    }
    ctx->pc = 0x1B1314u;
    // 0x1b1314: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1b1314u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b1318: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b1318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b131c: 0xc6250644  lwc1        $f5, 0x644($s1)
    ctx->pc = 0x1b131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b1320: 0x46022834  c.lt.s      $f5, $f2
    ctx->pc = 0x1b1320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1324: 0x0  nop
    ctx->pc = 0x1b1324u;
    // NOP
    // 0x1b1328: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1328u;
    {
        const bool branch_taken_0x1b1328 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B132Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1328u;
        // 0x1b132c: 0x46002846  mov.s       $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1328) {
            ctx->pc = 0x1B1334u;
            goto label_1b1334;
        }
    }
    ctx->pc = 0x1B1330u;
    // 0x1b1330: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x1b1330u;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
label_1b1334:
    // 0x1b1334: 0x3c013dd4  lui         $at, 0x3DD4
    ctx->pc = 0x1b1334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15828 << 16));
    // 0x1b1338: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1b1338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1b133c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b133cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1340: 0x0  nop
    ctx->pc = 0x1b1340u;
    // NOP
    // 0x1b1344: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b1344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1348: 0x0  nop
    ctx->pc = 0x1b1348u;
    // NOP
    // 0x1b134c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1B134Cu;
    {
        const bool branch_taken_0x1b134c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b134c) {
            ctx->pc = 0x1B1350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B134Cu;
            // 0x1b1350: 0xc6220640  lwc1        $f2, 0x640($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1364u;
            goto label_1b1364;
        }
    }
    ctx->pc = 0x1B1354u;
    // 0x1b1354: 0xe6220644  swc1        $f2, 0x644($s1)
    ctx->pc = 0x1b1354u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1604), bits); }
    // 0x1b1358: 0xe6220640  swc1        $f2, 0x640($s1)
    ctx->pc = 0x1b1358u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1600), bits); }
    // 0x1b135c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1B135Cu;
    {
        const bool branch_taken_0x1b135c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B135Cu;
        // 0x1b1360: 0xe6220648  swc1        $f2, 0x648($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1608), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b135c) {
            ctx->pc = 0x1B13ECu;
            goto label_1b13ec;
        }
    }
    ctx->pc = 0x1B1364u;
label_1b1364:
    // 0x1b1364: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1b1364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1b1368: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b1368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b136c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b136cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b1370: 0xc6200648  lwc1        $f0, 0x648($s1)
    ctx->pc = 0x1b1370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1374: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1b1374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1b1378: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b1378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b137c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1b137cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1b1380: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1b1380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1b1384: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1b1384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1b1388: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b1388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b138c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b138cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b1390: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x1b1390u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1b1394: 0xe6220640  swc1        $f2, 0x640($s1)
    ctx->pc = 0x1b1394u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1600), bits); }
    // 0x1b1398: 0xe6200648  swc1        $f0, 0x648($s1)
    ctx->pc = 0x1b1398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1608), bits); }
    // 0x1b139c: 0xe6210644  swc1        $f1, 0x644($s1)
    ctx->pc = 0x1b139cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1604), bits); }
    // 0x1b13a0: 0xda240650  lqc2        $vf4, 0x650($s1)
    ctx->pc = 0x1b13a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1b13a4: 0x44082000  mfc1        $t0, $f4
    ctx->pc = 0x1b13a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b13a8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b13a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b13ac: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b13acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b13b0: 0xfa240650  sqc2        $vf4, 0x650($s1)
    ctx->pc = 0x1b13b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1616), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b13b4: 0x92220666  lbu         $v0, 0x666($s1)
    ctx->pc = 0x1b13b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1638)));
    // 0x1b13b8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B13B8u;
    {
        const bool branch_taken_0x1b13b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B13BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13B8u;
        // 0x1b13bc: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13b8) {
            ctx->pc = 0x1B13F0u;
            goto label_1b13f0;
        }
    }
    ctx->pc = 0x1B13C0u;
    // 0x1b13c0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b13c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b13c4: 0xa2230666  sb          $v1, 0x666($s1)
    ctx->pc = 0x1b13c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1638), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b13c8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b13c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1b13cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b13ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13d0: 0x24060118  addiu       $a2, $zero, 0x118
    ctx->pc = 0x1b13d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1b13d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b13d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b13d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b13dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b13e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13e4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1B13E4u;
    SET_GPR_U32(ctx, 31, 0x1B13ECu);
    ctx->pc = 0x1B13E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13E4u;
    // 0x1b13e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B13E4u, 0x1B13ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13ECu;
label_1b13ec:
    // 0x1b13ec: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1b13ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b13f0:
    // 0x1b13f0: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B13F0u;
    {
        const bool branch_taken_0x1b13f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13F0u;
        // 0x1b13f4: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13f0) {
            ctx->pc = 0x1B140Cu;
            goto label_1b140c;
        }
    }
    ctx->pc = 0x1B13F8u;
    // 0x1b13f8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1b13f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1b13fc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b13fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1400: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1b1400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1b1404: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b1404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b1408: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1b1408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1b140c:
    // 0x1b140c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b1410: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1410u;
    {
        const bool branch_taken_0x1b1410 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1410u;
        // 0x1b1414: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1410) {
            ctx->pc = 0x1B1430u;
            goto label_1b1430;
        }
    }
    ctx->pc = 0x1B1418u;
    // 0x1b1418: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b1418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b141c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1b141cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1b1420: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b1420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1424: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1b1424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1b1428: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b1428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b142c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1b142cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1b1430:
    // 0x1b1430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b1430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1434: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b1434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1438: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1b1438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b143c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b143cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b1440: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1b1440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1444: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b1444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1b1448: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b1448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b144c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1b144cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1b1450: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x1b1450u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1454: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b1454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b1458: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b1458u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b145c: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x1b145cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x1b1460: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1B1460u;
    SET_GPR_U32(ctx, 31, 0x1B1468u);
    ctx->pc = 0x1B1464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1460u;
    // 0x1b1464: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1B1460u, 0x1B1468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1468u;
label_1b1468:
    // 0x1b1468: 0x14500013  bne         $v0, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B1468u;
    {
        const bool branch_taken_0x1b1468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1B146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1468u;
        // 0x1b146c: 0x26f064f0  addiu       $s0, $s7, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1468) {
            ctx->pc = 0x1B14B8u;
            goto label_1b14b8;
        }
    }
    ctx->pc = 0x1B1470u;
    // 0x1b1470: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x1b1470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b1474: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b1474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b1478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b147c: 0xc06c678  jal         func_1B19E0
    ctx->pc = 0x1B147Cu;
    SET_GPR_U32(ctx, 31, 0x1B1484u);
    ctx->pc = 0x1B1480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B147Cu;
    // 0x1b1480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B19E0u, 0x1B147Cu, 0x1B1484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1484u;
label_1b1484:
    // 0x1b1484: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1488: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b148c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1B148Cu;
    SET_GPR_U32(ctx, 31, 0x1B1494u);
    ctx->pc = 0x1B1490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B148Cu;
    // 0x1b1490: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1B148Cu, 0x1B1494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1494u;
label_1b1494:
    // 0x1b1494: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1b1494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1b1498: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b1498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b149c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b149cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b14a0: 0xda240650  lqc2        $vf4, 0x650($s1)
    ctx->pc = 0x1b14a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1b14a4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1b14a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b14a8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b14a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b14ac: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b14acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b14b0: 0xfa240650  sqc2        $vf4, 0x650($s1)
    ctx->pc = 0x1b14b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1616), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b14b4: 0x26f064f0  addiu       $s0, $s7, 0x64F0
    ctx->pc = 0x1b14b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 25840));
label_1b14b8:
    // 0x1b14b8: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x1b14b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b14bc: 0xc0a4bdc  jal         func_292F70
    ctx->pc = 0x1B14BCu;
    SET_GPR_U32(ctx, 31, 0x1B14C4u);
    ctx->pc = 0x1B14C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14BCu;
    // 0x1b14c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F70u, 0x1B14BCu, 0x1B14C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B14C4u;
label_1b14c4:
    // 0x1b14c4: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x1b14c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b14c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b14c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14cc: 0xc0a47fa  jal         func_291FE8
    ctx->pc = 0x1B14CCu;
    SET_GPR_U32(ctx, 31, 0x1B14D4u);
    ctx->pc = 0x1B14D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14CCu;
    // 0x1b14d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FE8u, 0x1B14CCu, 0x1B14D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B14D4u;
label_1b14d4:
    // 0x1b14d4: 0xc6210630  lwc1        $f1, 0x630($s1)
    ctx->pc = 0x1b14d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b14d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b14d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b14dc:
    // 0x1b14dc: 0x0  nop
    ctx->pc = 0x1b14dcu;
    // NOP
    // 0x1b14e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b14e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b14e4: 0x0  nop
    ctx->pc = 0x1b14e4u;
    // NOP
    // 0x1b14e8: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1B14E8u;
    {
        const bool branch_taken_0x1b14e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B14ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14E8u;
        // 0x1b14ec: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b14e8) {
            ctx->pc = 0x1B1568u;
            goto label_1b1568;
        }
    }
    ctx->pc = 0x1B14F0u;
    // 0x1b14f0: 0x8e250668  lw          $a1, 0x668($s1)
    ctx->pc = 0x1b14f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1640)));
    // 0x1b14f4: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1b14f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1b14f8: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1B14F8u;
    SET_GPR_U32(ctx, 31, 0x1B1500u);
    ctx->pc = 0x1B14FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B14F8u;
    // 0x1b14fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1B14F8u, 0x1B1500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1500u;
label_1b1500:
    // 0x1b1500: 0xae200668  sw          $zero, 0x668($s1)
    ctx->pc = 0x1b1500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1640), GPR_U32(ctx, 0));
    // 0x1b1504: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b1504u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1508: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b1508u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b150c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b150cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1514: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b1514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1518: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b1518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b151c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b151cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1520: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1B1520u;
    SET_GPR_U32(ctx, 31, 0x1B1528u);
    ctx->pc = 0x1B1524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1520u;
    // 0x1b1524: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B1520u, 0x1B1528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1528u;
label_1b1528:
    // 0x1b1528: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b1528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b152c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b152cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b1530: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b1530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b1534: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1b1534u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b1538: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b1538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b153c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1b153cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b1540: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1B1540u;
    SET_GPR_U32(ctx, 31, 0x1B1548u);
    ctx->pc = 0x1B1544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1540u;
    // 0x1b1544: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1B1540u, 0x1B1548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1548u;
label_1b1548:
    // 0x1b1548: 0xc06c62e  jal         func_1B18B8
    ctx->pc = 0x1B1548u;
    SET_GPR_U32(ctx, 31, 0x1B1550u);
    ctx->pc = 0x1B154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1548u;
    // 0x1b154c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B18B8u, 0x1B1548u, 0x1B1550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1550u;
label_1b1550:
    // 0x1b1550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b1550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1554: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b1554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b1558: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1B1558u;
    SET_GPR_U32(ctx, 31, 0x1B1560u);
    ctx->pc = 0x1B155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1558u;
    // 0x1b155c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1B1558u, 0x1B1560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1560u;
label_1b1560:
    // 0x1b1560: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b1560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1564: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x1b1564u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
label_1b1568:
    // 0x1b1568: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x1b1568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b156c: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x1b156cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b1570: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x1b1570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b1574: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x1b1574u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b1578: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x1b1578u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b157c: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x1b157cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b1580: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x1b1580u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1b1584: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x1b1584u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b1588: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1b1588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b158c: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x1b158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1590: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1590u;
        // 0x1b1594: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1598u;
}
