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

// Function: func_001B51B0
// Address: 0x1b51b0 - 0x1b5430
void func_001B51B0_0x1b51b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B51B0_0x1b51b0");
#endif

    switch (ctx->pc) {
        case 0x1b5220u: goto label_1b5220;
        case 0x1b52a8u: goto label_1b52a8;
        default: break;
    }

    ctx->pc = 0x1b51b0u;

    // 0x1b51b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b51b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b51b4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1b51b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1b51b8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1b51b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1b51bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b51bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1b51c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1b51c4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1b51c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1b51c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b51c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b51cc: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x1b51ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1b51d0: 0x1080008f  beqz        $a0, . + 4 + (0x8F << 2)
    ctx->pc = 0x1B51D0u;
    {
        const bool branch_taken_0x1b51d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B51D0u;
        // 0x1b51d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b51d0) {
            ctx->pc = 0x1B5410u;
            goto label_1b5410;
        }
    }
    ctx->pc = 0x1B51D8u;
    // 0x1b51d8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1b51d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b51dc: 0x9602060a  lhu         $v0, 0x60A($s0)
    ctx->pc = 0x1b51dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1546)));
    // 0x1b51e0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x1b51e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b51e4: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1b51e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1b51e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b51e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b51ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b51f0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1b51f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b51f4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b51f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b51f8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1b51f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b51fc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b51fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b5200: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b5200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b5204: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1b5204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b5208: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1b5208u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b520c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b520cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b5210: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1b5210u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b5214: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1b5214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b5218: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1B5218u;
    SET_GPR_U32(ctx, 31, 0x1B5220u);
    ctx->pc = 0x1B521Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5218u;
    // 0x1b521c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1B5218u, 0x1B5220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5220u;
label_1b5220:
    // 0x1b5220: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1b5220u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1b5224: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b5224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5228: 0x0  nop
    ctx->pc = 0x1b5228u;
    // NOP
    // 0x1b522c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b522cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5230: 0x0  nop
    ctx->pc = 0x1b5230u;
    // NOP
    // 0x1b5234: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1B5234u;
    {
        const bool branch_taken_0x1b5234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5234u;
        // 0x1b5238: 0xc7a40020  lwc1        $f4, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5234) {
            ctx->pc = 0x1B5278u;
            goto label_1b5278;
        }
    }
    ctx->pc = 0x1B523Cu;
    // 0x1b523c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b523cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5240: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b5240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5244: 0x0  nop
    ctx->pc = 0x1b5244u;
    // NOP
    // 0x1b5248: 0x0  nop
    ctx->pc = 0x1b5248u;
    // NOP
    // 0x1b524c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1b524cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x1b5250: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x1b5250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b5254: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1b5254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b5258: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1b5258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b525c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1b525cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1b5260: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1b5260u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b5264: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1b5264u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1b5268: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1b5268u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1b526c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1b526cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1b5270: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x1b5270u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b5274: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x1b5274u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1b5278:
    // 0x1b5278: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1b5278u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b527c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b527cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b5280: 0x13b20006  beq         $sp, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5280u;
    {
        const bool branch_taken_0x1b5280 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x1B5284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5280u;
        // 0x1b5284: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5280) {
            ctx->pc = 0x1B529Cu;
            goto label_1b529c;
        }
    }
    ctx->pc = 0x1B5288u;
    // 0x1b5288: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1b5288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b528c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1b528cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b5290: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b5290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b5294: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b5294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b5298: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1b5298u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b529c:
    // 0x1b529c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1b529cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1b52a0: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1B52A0u;
    SET_GPR_U32(ctx, 31, 0x1B52A8u);
    ctx->pc = 0x1B52A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B52A0u;
    // 0x1b52a4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B52A0u, 0x1B52A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B52A8u;
label_1b52a8:
    // 0x1b52a8: 0xc6010610  lwc1        $f1, 0x610($s0)
    ctx->pc = 0x1b52a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b52ac: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1b52acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1b52b0: 0xc4427a14  lwc1        $f2, 0x7A14($v0)
    ctx->pc = 0x1b52b0u;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b52b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b52b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b52b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b52b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b52bc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1b52bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b52c0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b52c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b52c4: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b52c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b52c8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1b52c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b52cc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b52ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b52d0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b52d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b52d4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b52d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b52d8: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1b52d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b52dc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b52dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b52e0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1b52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1b52e4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b52e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b52e8: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x1b52e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b52ec: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b52ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b52f0: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b52f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b52f4: 0x9602060a  lhu         $v0, 0x60A($s0)
    ctx->pc = 0x1b52f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1546)));
    // 0x1b52f8: 0x8e030604  lw          $v1, 0x604($s0)
    ctx->pc = 0x1b52f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1b52fc: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x1b52fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1b5300: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b5300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b5304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b5308: 0xc601060c  lwc1        $f1, 0x60C($s0)
    ctx->pc = 0x1b5308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b530c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1b530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5310: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x1b5310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b5314: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1b5314u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1b5318: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x1b5318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b531c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1b531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b5320: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x1b5320u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1b5324: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1b5324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1b5328: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b5328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b532c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1b532cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1b5330: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1b5330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1b5334: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1b5334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1b5338: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1b5338u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1b533c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1b533cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1b5340: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b5340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b5344: 0x0  nop
    ctx->pc = 0x1b5344u;
    // NOP
    // 0x1b5348: 0x45020031  bc1fl       . + 4 + (0x31 << 2)
    ctx->pc = 0x1B5348u;
    {
        const bool branch_taken_0x1b5348 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b5348) {
            ctx->pc = 0x1B534Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5348u;
            // 0x1b534c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5410u;
            goto label_1b5410;
        }
    }
    ctx->pc = 0x1B5350u;
    // 0x1b5350: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5350u;
    {
        const bool branch_taken_0x1b5350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b5350) {
            ctx->pc = 0x1B5354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5350u;
            // 0x1b5354: 0x9e030600  lwu         $v1, 0x600($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5370u;
            goto label_1b5370;
        }
    }
    ctx->pc = 0x1B5358u;
    // 0x1b5358: 0xe4850000  swc1        $f5, 0x0($a0)
    ctx->pc = 0x1b5358u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b535c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b535cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5360: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1b5360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1b5364: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1b5364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5368: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1b5368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1b536c: 0x9e030600  lwu         $v1, 0x600($s0)
    ctx->pc = 0x1b536cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1b5370:
    // 0x1b5370: 0x3107b  dsra        $v0, $v1, 1
    ctx->pc = 0x1b5370u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 1);
    // 0x1b5374: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b5374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b5378: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B5378u;
    {
        const bool branch_taken_0x1b5378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5378u;
        // 0x1b537c: 0x8e050600  lw          $a1, 0x600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5378) {
            ctx->pc = 0x1B53D4u;
            goto label_1b53d4;
        }
    }
    ctx->pc = 0x1B5380u;
    // 0x1b5380: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1b5380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1b5384: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1B5384u;
    {
        const bool branch_taken_0x1b5384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5384) {
            ctx->pc = 0x1B5388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5384u;
            // 0x1b5388: 0x96030608  lhu         $v1, 0x608($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B53B0u;
            goto label_1b53b0;
        }
    }
    ctx->pc = 0x1B538Cu;
    // 0x1b538c: 0x9603060a  lhu         $v1, 0x60A($s0)
    ctx->pc = 0x1b538cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1546)));
    // 0x1b5390: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B5390u;
    {
        const bool branch_taken_0x1b5390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5390u;
        // 0x1b5394: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5390) {
            ctx->pc = 0x1B5408u;
            goto label_1b5408;
        }
    }
    ctx->pc = 0x1B5398u;
    // 0x1b5398: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1b5398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1b539c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b539cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b53a0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1b53a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1b53a4: 0xa603060a  sh          $v1, 0x60A($s0)
    ctx->pc = 0x1b53a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1546), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b53a8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B53A8u;
    {
        const bool branch_taken_0x1b53a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53A8u;
        // 0x1b53ac: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53a8) {
            ctx->pc = 0x1B540Cu;
            goto label_1b540c;
        }
    }
    ctx->pc = 0x1B53B0u;
label_1b53b0:
    // 0x1b53b0: 0x9604060a  lhu         $a0, 0x60A($s0)
    ctx->pc = 0x1b53b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1546)));
    // 0x1b53b4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1b53b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b53b8: 0x14820013  bne         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B53B8u;
    {
        const bool branch_taken_0x1b53b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B53BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53B8u;
        // 0x1b53bc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53b8) {
            ctx->pc = 0x1B5408u;
            goto label_1b5408;
        }
    }
    ctx->pc = 0x1B53C0u;
    // 0x1b53c0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1b53c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1b53c4: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x1b53c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x1b53c8: 0xae020600  sw          $v0, 0x600($s0)
    ctx->pc = 0x1b53c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
    // 0x1b53cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B53CCu;
    {
        const bool branch_taken_0x1b53cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53CCu;
        // 0x1b53d0: 0xa603060a  sh          $v1, 0x60A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1546), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53cc) {
            ctx->pc = 0x1B540Cu;
            goto label_1b540c;
        }
    }
    ctx->pc = 0x1B53D4u;
label_1b53d4:
    // 0x1b53d4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1b53d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1b53d8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B53D8u;
    {
        const bool branch_taken_0x1b53d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b53d8) {
            ctx->pc = 0x1B53DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B53D8u;
            // 0x1b53dc: 0x96020608  lhu         $v0, 0x608($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B53F4u;
            goto label_1b53f4;
        }
    }
    ctx->pc = 0x1B53E0u;
    // 0x1b53e0: 0x9602060a  lhu         $v0, 0x60A($s0)
    ctx->pc = 0x1b53e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1546)));
    // 0x1b53e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B53E4u;
    {
        const bool branch_taken_0x1b53e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53E4u;
        // 0x1b53e8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53e4) {
            ctx->pc = 0x1B540Cu;
            goto label_1b540c;
        }
    }
    ctx->pc = 0x1B53ECu;
    // 0x1b53ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B53ECu;
    {
        const bool branch_taken_0x1b53ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B53F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B53ECu;
        // 0x1b53f0: 0xa602060a  sh          $v0, 0x60A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1546), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b53ec) {
            ctx->pc = 0x1B540Cu;
            goto label_1b540c;
        }
    }
    ctx->pc = 0x1B53F4u;
label_1b53f4:
    // 0x1b53f4: 0x9603060a  lhu         $v1, 0x60A($s0)
    ctx->pc = 0x1b53f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1546)));
    // 0x1b53f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b53fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1b53fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b5400: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5400u;
    {
        const bool branch_taken_0x1b5400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5400u;
        // 0x1b5404: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5400) {
            ctx->pc = 0x1B540Cu;
            goto label_1b540c;
        }
    }
    ctx->pc = 0x1B5408u;
label_1b5408:
    // 0x1b5408: 0xa602060a  sh          $v0, 0x60A($s0)
    ctx->pc = 0x1b5408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1546), (uint16_t)GPR_U32(ctx, 2));
label_1b540c:
    // 0x1b540c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b540cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5410:
    // 0x1b5410: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1b5410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b5414: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1b5414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b5418: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1b5418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b541c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b541cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b5420: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b5420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5424: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5424u;
        // 0x1b5428: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B542Cu;
    // 0x1b542c: 0x0  nop
    ctx->pc = 0x1b542cu;
    // NOP
    ctx->pc = 0x1b5430u;
}
