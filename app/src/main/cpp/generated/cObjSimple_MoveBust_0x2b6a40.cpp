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

// Function: cObjSimple_MoveBust
// Address: 0x2b6a40 - 0x2b6da0
void cObjSimple_MoveBust_0x2b6a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjSimple_MoveBust_0x2b6a40");
#endif

    switch (ctx->pc) {
        case 0x2b6b6cu: goto label_2b6b6c;
        case 0x2b6b84u: goto label_2b6b84;
        case 0x2b6bc4u: goto label_2b6bc4;
        case 0x2b6c38u: goto label_2b6c38;
        case 0x2b6d30u: goto label_2b6d30;
        default: break;
    }

    ctx->pc = 0x2b6a40u;

    // 0x2b6a40: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2b6a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2b6a44: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x2b6a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x2b6a48: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x2b6a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x2b6a4c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2b6a4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6a50: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x2b6a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x2b6a54: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x2b6a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x2b6a58: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x2b6a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x2b6a5c: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x2b6a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x2b6a60: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x2b6a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x2b6a64: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x2b6a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x2b6a68: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2b6a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2b6a6c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2b6a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2b6a70: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x2b6a70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2b6a74: 0x92c202b4  lbu         $v0, 0x2B4($s6)
    ctx->pc = 0x2b6a74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 692)));
    // 0x2b6a78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6A78u;
    {
        const bool branch_taken_0x2b6a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A78u;
        // 0x2b6a7c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a78) {
            ctx->pc = 0x2B6A8Cu;
            goto label_2b6a8c;
        }
    }
    ctx->pc = 0x2B6A80u;
    // 0x2b6a80: 0x8ec20278  lw          $v0, 0x278($s6)
    ctx->pc = 0x2b6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 632)));
    // 0x2b6a84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6A84u;
    {
        const bool branch_taken_0x2b6a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A84u;
        // 0x2b6a88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a84) {
            ctx->pc = 0x2B6A90u;
            goto label_2b6a90;
        }
    }
    ctx->pc = 0x2B6A8Cu;
label_2b6a8c:
    // 0x2b6a8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b6a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6a90:
    // 0x2b6a90: 0x92c302b4  lbu         $v1, 0x2B4($s6)
    ctx->pc = 0x2b6a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 692)));
    // 0x2b6a94: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2b6a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2b6a98: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2b6a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b6a9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6A9Cu;
    {
        const bool branch_taken_0x2b6a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6A9Cu;
        // 0x2b6aa0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a9c) {
            ctx->pc = 0x2B6AB0u;
            goto label_2b6ab0;
        }
    }
    ctx->pc = 0x2B6AA4u;
    // 0x2b6aa4: 0x8ec20278  lw          $v0, 0x278($s6)
    ctx->pc = 0x2b6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 632)));
    // 0x2b6aa8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6AA8u;
    {
        const bool branch_taken_0x2b6aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AA8u;
        // 0x2b6aac: 0x8c570074  lw          $s7, 0x74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6aa8) {
            ctx->pc = 0x2B6AB4u;
            goto label_2b6ab4;
        }
    }
    ctx->pc = 0x2B6AB0u;
label_2b6ab0:
    // 0x2b6ab0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2b6ab0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6ab4:
    // 0x2b6ab4: 0x12e000ad  beqz        $s7, . + 4 + (0xAD << 2)
    ctx->pc = 0x2B6AB4u;
    {
        const bool branch_taken_0x2b6ab4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AB4u;
        // 0x2b6ab8: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ab4) {
            ctx->pc = 0x2B6D6Cu;
            goto label_2b6d6c;
        }
    }
    ctx->pc = 0x2B6ABCu;
    // 0x2b6abc: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2b6abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b6ac0: 0xc48200b8  lwc1        $f2, 0xB8($a0)
    ctx->pc = 0x2b6ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b6ac4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2b6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b6ac8: 0xc48000b0  lwc1        $f0, 0xB0($a0)
    ctx->pc = 0x2b6ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6acc: 0x26de2fd0  addiu       $fp, $s6, 0x2FD0
    ctx->pc = 0x2b6accu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 12240));
    // 0x2b6ad0: 0xc48100b4  lwc1        $f1, 0xB4($a0)
    ctx->pc = 0x2b6ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6ad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b6ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b6ad8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b6ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b6adc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2b6adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b6ae0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2b6ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2b6ae4: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x2b6ae4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2b6ae8: 0x13c20007  beq         $fp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B6AE8u;
    {
        const bool branch_taken_0x2b6ae8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6AE8u;
        // 0x2b6aec: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ae8) {
            ctx->pc = 0x2B6B08u;
            goto label_2b6b08;
        }
    }
    ctx->pc = 0x2B6AF0u;
    // 0x2b6af0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2b6af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6af4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2b6af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6af8: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2b6af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b6afc: 0xe6c02fd0  swc1        $f0, 0x2FD0($s6)
    ctx->pc = 0x2b6afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12240), bits); }
    // 0x2b6b00: 0xe7c10004  swc1        $f1, 0x4($fp)
    ctx->pc = 0x2b6b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x2b6b04: 0xe7c20008  swc1        $f2, 0x8($fp)
    ctx->pc = 0x2b6b04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_2b6b08:
    // 0x2b6b08: 0x26d52fe0  addiu       $s5, $s6, 0x2FE0
    ctx->pc = 0x2b6b08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 12256));
    // 0x2b6b0c: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2b6b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b6b10: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x2b6b10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2b6b14: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x2b6b14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2b6b18: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2b6b18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b6b1c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2b6b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b6b20: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2b6b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b6b24: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2b6b24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b6b28: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2b6b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b6b2c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2b6b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6b30: 0x26d42fb0  addiu       $s4, $s6, 0x2FB0
    ctx->pc = 0x2b6b30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 12208));
    // 0x2b6b34: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2b6b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6b38: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x2b6b38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b6b3c: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2b6b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b6b40: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2b6b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2b6b44: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2b6b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2b6b48: 0xdac42fb0  lqc2        $vf4, 0x2FB0($s6)
    ctx->pc = 0x2b6b48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 12208)));
    // 0x2b6b4c: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x2b6b4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b6b50: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2b6b50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b6b54: 0xfac42fb0  sqc2        $vf4, 0x2FB0($s6)
    ctx->pc = 0x2b6b54u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 12208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b6b58: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2b6b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6b5c: 0x26f20080  addiu       $s2, $s7, 0x80
    ctx->pc = 0x2b6b5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 128));
    // 0x2b6b60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6b64: 0xc051d5a  jal         func_147568
    ctx->pc = 0x2B6B64u;
    SET_GPR_U32(ctx, 31, 0x2B6B6Cu);
    ctx->pc = 0x2B6B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B64u;
    // 0x2b6b68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x2B6B64u, 0x2B6B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B6Cu;
label_2b6b6c:
    // 0x2b6b6c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2b6b6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b6b70: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2b6b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b6b74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b6b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6b7c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2B6B7Cu;
    SET_GPR_U32(ctx, 31, 0x2B6B84u);
    ctx->pc = 0x2B6B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6B7Cu;
    // 0x2b6b80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2B6B7Cu, 0x2B6B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B84u;
label_2b6b84:
    // 0x2b6b84: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2b6b84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b6b88: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2b6b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b6b8c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2b6b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6b90: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2b6b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6b94: 0x46000342  mul.s       $f13, $f0, $f0
    ctx->pc = 0x2b6b94u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b6b98: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x2b6b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b6b9c: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x2b6b9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b6ba0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2b6ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b6ba4: 0xe7ac0054  swc1        $f12, 0x54($sp)
    ctx->pc = 0x2b6ba4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2b6ba8: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2b6ba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2b6bac: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x2b6bacu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x2b6bb0: 0x0  nop
    ctx->pc = 0x2b6bb0u;
    // NOP
    // 0x2b6bb4: 0x0  nop
    ctx->pc = 0x2b6bb4u;
    // NOP
    // 0x2b6bb8: 0x460d0344  c1          0xD0344
    ctx->pc = 0x2b6bb8u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x2b6bbc: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2B6BBCu;
    SET_GPR_U32(ctx, 31, 0x2B6BC4u);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2B6BBCu, 0x2B6BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6BC4u;
label_2b6bc4:
    // 0x2b6bc4: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x2b6bc4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x2b6bc8: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x2b6bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x2b6bcc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2b6bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2b6bd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b6bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6bd4: 0x0  nop
    ctx->pc = 0x2b6bd4u;
    // NOP
    // 0x2b6bd8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2b6bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6bdc: 0x0  nop
    ctx->pc = 0x2b6bdcu;
    // NOP
    // 0x2b6be0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B6BE0u;
    {
        const bool branch_taken_0x2b6be0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6be0) {
            ctx->pc = 0x2B6BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6BE0u;
            // 0x2b6be4: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6BE8u;
            goto label_2b6be8;
        }
    }
    ctx->pc = 0x2B6BE8u;
label_2b6be8:
    // 0x2b6be8: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x2b6be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
    // 0x2b6bec: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2b6becu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2b6bf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b6bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6bf4: 0x0  nop
    ctx->pc = 0x2b6bf4u;
    // NOP
    // 0x2b6bf8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2b6bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6bfc: 0x0  nop
    ctx->pc = 0x2b6bfcu;
    // NOP
    // 0x2b6c00: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B6C00u;
    {
        const bool branch_taken_0x2b6c00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6c00) {
            ctx->pc = 0x2B6C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6C00u;
            // 0x2b6c04: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6C08u;
            goto label_2b6c08;
        }
    }
    ctx->pc = 0x2B6C08u;
label_2b6c08:
    // 0x2b6c08: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b6c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b6c0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b6c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6c10: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2b6c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2b6c14: 0xc6e00100  lwc1        $f0, 0x100($s7)
    ctx->pc = 0x2b6c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6c18: 0x24846af0  addiu       $a0, $a0, 0x6AF0
    ctx->pc = 0x2b6c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    // 0x2b6c1c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2b6c1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2b6c20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b6c20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b6c24: 0xe6e00100  swc1        $f0, 0x100($s7)
    ctx->pc = 0x2b6c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 256), bits); }
    // 0x2b6c28: 0xc6c12fc0  lwc1        $f1, 0x2FC0($s6)
    ctx->pc = 0x2b6c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6c2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b6c2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b6c30: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2B6C30u;
    SET_GPR_U32(ctx, 31, 0x2B6C38u);
    ctx->pc = 0x2B6C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6C30u;
    // 0x2b6c34: 0xe6e00100  swc1        $f0, 0x100($s7) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2B6C30u, 0x2B6C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6C38u;
label_2b6c38:
    // 0x2b6c38: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b6c38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6c3c: 0x0  nop
    ctx->pc = 0x2b6c3cu;
    // NOP
    // 0x2b6c40: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b6c40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6c44: 0x0  nop
    ctx->pc = 0x2b6c44u;
    // NOP
    // 0x2b6c48: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6C48u;
    {
        const bool branch_taken_0x2b6c48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6c48) {
            ctx->pc = 0x2B6C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6C48u;
            // 0x2b6c4c: 0xe6e10100  swc1        $f1, 0x100($s7) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 256), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6C64u;
            goto label_2b6c64;
        }
    }
    ctx->pc = 0x2B6C50u;
    // 0x2b6c50: 0x8ec202f0  lw          $v0, 0x2F0($s6)
    ctx->pc = 0x2b6c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 752)));
    // 0x2b6c54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b6c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b6c58: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6C58u;
    {
        const bool branch_taken_0x2b6c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6c58) {
            ctx->pc = 0x2B6C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6C58u;
            // 0x2b6c5c: 0xc6e00100  lwc1        $f0, 0x100($s7) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6C6Cu;
            goto label_2b6c6c;
        }
    }
    ctx->pc = 0x2B6C60u;
    // 0x2b6c60: 0xe6e10100  swc1        $f1, 0x100($s7)
    ctx->pc = 0x2b6c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 256), bits); }
label_2b6c64:
    // 0x2b6c64: 0xe6c12fc0  swc1        $f1, 0x2FC0($s6)
    ctx->pc = 0x2b6c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12224), bits); }
    // 0x2b6c68: 0xc6e00100  lwc1        $f0, 0x100($s7)
    ctx->pc = 0x2b6c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6c6c:
    // 0x2b6c6c: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x2b6c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x2b6c70: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2b6c70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2b6c74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b6c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6c78: 0x0  nop
    ctx->pc = 0x2b6c78u;
    // NOP
    // 0x2b6c7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b6c7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6c80: 0x0  nop
    ctx->pc = 0x2b6c80u;
    // NOP
    // 0x2b6c84: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6C84u;
    {
        const bool branch_taken_0x2b6c84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6c84) {
            ctx->pc = 0x2B6C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6C84u;
            // 0x2b6c88: 0xc6e00100  lwc1        $f0, 0x100($s7) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6C98u;
            goto label_2b6c98;
        }
    }
    ctx->pc = 0x2B6C8Cu;
    // 0x2b6c8c: 0xe6e10100  swc1        $f1, 0x100($s7)
    ctx->pc = 0x2b6c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 256), bits); }
    // 0x2b6c90: 0xaec02fc0  sw          $zero, 0x2FC0($s6)
    ctx->pc = 0x2b6c90u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12224), GPR_U32(ctx, 0));
    // 0x2b6c94: 0xc6e00100  lwc1        $f0, 0x100($s7)
    ctx->pc = 0x2b6c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6c98:
    // 0x2b6c98: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x2b6c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
    // 0x2b6c9c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2b6c9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2b6ca0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b6ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6ca4: 0x0  nop
    ctx->pc = 0x2b6ca4u;
    // NOP
    // 0x2b6ca8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b6ca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6cac: 0x0  nop
    ctx->pc = 0x2b6cacu;
    // NOP
    // 0x2b6cb0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6CB0u;
    {
        const bool branch_taken_0x2b6cb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6cb0) {
            ctx->pc = 0x2B6CC0u;
            goto label_2b6cc0;
        }
    }
    ctx->pc = 0x2B6CB8u;
    // 0x2b6cb8: 0xe6e10100  swc1        $f1, 0x100($s7)
    ctx->pc = 0x2b6cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 256), bits); }
    // 0x2b6cbc: 0xaec02fc0  sw          $zero, 0x2FC0($s6)
    ctx->pc = 0x2b6cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12224), GPR_U32(ctx, 0));
label_2b6cc0:
    // 0x2b6cc0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2b6cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2b6cc4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b6cc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2b6cc8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b6cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b6ccc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2b6cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b6cd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b6cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b6cd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b6cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6cd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b6cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6cdc: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2b6cdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2b6ce0: 0xc6c12fc0  lwc1        $f1, 0x2FC0($s6)
    ctx->pc = 0x2b6ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6ce4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b6ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b6ce8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2b6ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b6cec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b6cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6cf0: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x2b6cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x2b6cf4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2b6cf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2b6cf8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b6cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6cfc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2b6cfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2b6d00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b6d00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b6d04: 0xe6c12fc0  swc1        $f1, 0x2FC0($s6)
    ctx->pc = 0x2b6d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12224), bits); }
    // 0x2b6d08: 0xc6e00100  lwc1        $f0, 0x100($s7)
    ctx->pc = 0x2b6d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6d0c: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x2b6d0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2b6d10: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b6d10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b6d14: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2b6d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2b6d18: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2b6d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2b6d1c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2b6d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2b6d20: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2b6d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2b6d24: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b6d24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b6d28: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2B6D28u;
    SET_GPR_U32(ctx, 31, 0x2B6D30u);
    ctx->pc = 0x2B6D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6D28u;
    // 0x2b6d2c: 0xe6c12fc0  swc1        $f1, 0x2FC0($s6) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2B6D28u, 0x2B6D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6D30u;
label_2b6d30:
    // 0x2b6d30: 0x12930006  beq         $s4, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6D30u;
    {
        const bool branch_taken_0x2b6d30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 19));
        ctx->pc = 0x2B6D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D30u;
        // 0x2b6d34: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d30) {
            ctx->pc = 0x2B6D4Cu;
            goto label_2b6d4c;
        }
    }
    ctx->pc = 0x2B6D38u;
    // 0x2b6d38: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2b6d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b6d3c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2b6d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6d40: 0xe6c02fb0  swc1        $f0, 0x2FB0($s6)
    ctx->pc = 0x2b6d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12208), bits); }
    // 0x2b6d44: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x2b6d44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2b6d48: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x2b6d48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_2b6d4c:
    // 0x2b6d4c: 0x12be0007  beq         $s5, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B6D4Cu;
    {
        const bool branch_taken_0x2b6d4c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 30));
        ctx->pc = 0x2B6D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D4Cu;
        // 0x2b6d50: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d4c) {
            ctx->pc = 0x2B6D6Cu;
            goto label_2b6d6c;
        }
    }
    ctx->pc = 0x2B6D54u;
    // 0x2b6d54: 0xc6c02fd0  lwc1        $f0, 0x2FD0($s6)
    ctx->pc = 0x2b6d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6d58: 0xe6c02fe0  swc1        $f0, 0x2FE0($s6)
    ctx->pc = 0x2b6d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12256), bits); }
    // 0x2b6d5c: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x2b6d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6d60: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x2b6d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x2b6d64: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x2b6d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6d68: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x2b6d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_2b6d6c:
    // 0x2b6d6c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x2b6d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b6d70: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x2b6d70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2b6d74: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x2b6d74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b6d78: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x2b6d78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b6d7c: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x2b6d7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b6d80: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x2b6d80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b6d84: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x2b6d84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b6d88: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2b6d88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b6d8c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2b6d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b6d90: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x2b6d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b6d94: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D94u;
        // 0x2b6d98: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6D9Cu;
    // 0x2b6d9c: 0x0  nop
    ctx->pc = 0x2b6d9cu;
    // NOP
    ctx->pc = 0x2b6da0u;
}
