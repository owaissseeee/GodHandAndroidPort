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

// Function: cObjSimple_MoveRing
// Address: 0x2b79e0 - 0x2b80d0
void cObjSimple_MoveRing_0x2b79e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjSimple_MoveRing_0x2b79e0");
#endif

    switch (ctx->pc) {
        case 0x2b7b24u: goto label_2b7b24;
        case 0x2b7b30u: goto label_2b7b30;
        case 0x2b7b68u: goto label_2b7b68;
        case 0x2b7b94u: goto label_2b7b94;
        case 0x2b7d2cu: goto label_2b7d2c;
        case 0x2b7d40u: goto label_2b7d40;
        case 0x2b7d54u: goto label_2b7d54;
        case 0x2b7e5cu: goto label_2b7e5c;
        case 0x2b7e68u: goto label_2b7e68;
        case 0x2b7ea0u: goto label_2b7ea0;
        case 0x2b7eccu: goto label_2b7ecc;
        case 0x2b8064u: goto label_2b8064;
        case 0x2b8078u: goto label_2b8078;
        case 0x2b808cu: goto label_2b808c;
        default: break;
    }

    ctx->pc = 0x2b79e0u;

    // 0x2b79e0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2b79e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2b79e4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2b79e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b79e8: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2b79e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x2b79ec: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x2b79ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2b79f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2b79f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b79f4: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x2b79f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2b79f8: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2b79f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x2b79fc: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2b79fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x2b7a00: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2b7a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2b7a04: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2b7a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x2b7a08: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2b7a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x2b7a0c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2b7a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x2b7a10: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2b7a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2b7a14: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2b7a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2b7a18: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2b7a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2b7a1c: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x2b7a1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2b7a20: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2b7a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b7a24: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x2b7a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x2b7a28: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x2b7a28u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    // 0x2b7a2c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2b7a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b7a30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7A30u;
    {
        const bool branch_taken_0x2b7a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A30u;
        // 0x2b7a34: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a30) {
            ctx->pc = 0x2B7A44u;
            goto label_2b7a44;
        }
    }
    ctx->pc = 0x2B7A38u;
    // 0x2b7a38: 0x8e820278  lw          $v0, 0x278($s4)
    ctx->pc = 0x2b7a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x2b7a3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7A3Cu;
    {
        const bool branch_taken_0x2b7a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A3Cu;
        // 0x2b7a40: 0x8c550020  lw          $s5, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a3c) {
            ctx->pc = 0x2B7A48u;
            goto label_2b7a48;
        }
    }
    ctx->pc = 0x2B7A44u;
label_2b7a44:
    // 0x2b7a44: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b7a44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7a48:
    // 0x2b7a48: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x2b7a48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x2b7a4c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2b7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b7a50: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2b7a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b7a54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7A54u;
    {
        const bool branch_taken_0x2b7a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A54u;
        // 0x2b7a58: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a54) {
            ctx->pc = 0x2B7A68u;
            goto label_2b7a68;
        }
    }
    ctx->pc = 0x2B7A5Cu;
    // 0x2b7a5c: 0x8e820278  lw          $v0, 0x278($s4)
    ctx->pc = 0x2b7a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x2b7a60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7A60u;
    {
        const bool branch_taken_0x2b7a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A60u;
        // 0x2b7a64: 0x8c530028  lw          $s3, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a60) {
            ctx->pc = 0x2B7A6Cu;
            goto label_2b7a6c;
        }
    }
    ctx->pc = 0x2B7A68u;
label_2b7a68:
    // 0x2b7a68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b7a68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7a6c:
    // 0x2b7a6c: 0x12a000a6  beqz        $s5, . + 4 + (0xA6 << 2)
    ctx->pc = 0x2B7A6Cu;
    {
        const bool branch_taken_0x2b7a6c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7a6c) {
            ctx->pc = 0x2B7D08u;
            goto label_2b7d08;
        }
    }
    ctx->pc = 0x2B7A74u;
    // 0x2b7a74: 0x126000a4  beqz        $s3, . + 4 + (0xA4 << 2)
    ctx->pc = 0x2B7A74u;
    {
        const bool branch_taken_0x2b7a74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7a74) {
            ctx->pc = 0x2B7D08u;
            goto label_2b7d08;
        }
    }
    ctx->pc = 0x2B7A7Cu;
    // 0x2b7a7c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2b7a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b7a80: 0xc66200b0  lwc1        $f2, 0xB0($s3)
    ctx->pc = 0x2b7a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7a84: 0x27be0040  addiu       $fp, $sp, 0x40
    ctx->pc = 0x2b7a84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b7a88: 0xc66100b4  lwc1        $f1, 0xB4($s3)
    ctx->pc = 0x2b7a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7a8c: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x2b7a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b7a90: 0xc66000b8  lwc1        $f0, 0xB8($s3)
    ctx->pc = 0x2b7a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7a94: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2b7a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b7a98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b7a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b7a9c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2b7a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2b7aa0: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x2b7aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b7aa4: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2b7aa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b7aa8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2b7aa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2b7aac: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2b7aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b7ab0: 0xe7d5000c  swc1        $f21, 0xC($fp)
    ctx->pc = 0x2b7ab0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x2b7ab4: 0xc6a000b0  lwc1        $f0, 0xB0($s5)
    ctx->pc = 0x2b7ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7ab8: 0xc6a100b4  lwc1        $f1, 0xB4($s5)
    ctx->pc = 0x2b7ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7abc: 0xc6a200b8  lwc1        $f2, 0xB8($s5)
    ctx->pc = 0x2b7abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7ac0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2b7ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b7ac4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2b7ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2b7ac8: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2b7ac8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2b7acc: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x2b7accu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2b7ad0: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2b7ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b7ad4: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x2b7ad4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2b7ad8: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2b7ad8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7adc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2b7adcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b7ae0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2b7ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b7ae4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2b7ae4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b7ae8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2b7ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b7aec: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2b7aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7af0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2b7af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7af4: 0x46000342  mul.s       $f13, $f0, $f0
    ctx->pc = 0x2b7af4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b7af8: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x2b7af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b7afc: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x2b7afcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b7b00: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2b7b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b7b04: 0xe7ac0024  swc1        $f12, 0x24($sp)
    ctx->pc = 0x2b7b04u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2b7b08: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2b7b08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b7b0c: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x2b7b0cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x2b7b10: 0x0  nop
    ctx->pc = 0x2b7b10u;
    // NOP
    // 0x2b7b14: 0x0  nop
    ctx->pc = 0x2b7b14u;
    // NOP
    // 0x2b7b18: 0x460d0344  c1          0xD0344
    ctx->pc = 0x2b7b18u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x2b7b1c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2B7B1Cu;
    SET_GPR_U32(ctx, 31, 0x2B7B24u);
    ctx->pc = 0x2B7B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7B1Cu;
    // 0x2b7b20: 0x26963000  addiu       $s6, $s4, 0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 12288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2B7B1Cu, 0x2B7B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B24u;
label_2b7b24:
    // 0x2b7b24: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2b7b24u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2b7b28: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2B7B28u;
    SET_GPR_U32(ctx, 31, 0x2B7B30u);
    ctx->pc = 0x2B7B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7B28u;
    // 0x2b7b2c: 0x26973010  addiu       $s7, $s4, 0x3010 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 12304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2B7B28u, 0x2B7B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B30u;
label_2b7b30:
    // 0x2b7b30: 0xc66400b0  lwc1        $f4, 0xB0($s3)
    ctx->pc = 0x2b7b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b7b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b38: 0xc66200b4  lwc1        $f2, 0xB4($s3)
    ctx->pc = 0x2b7b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7b3c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2b7b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b40: 0xc66300b8  lwc1        $f3, 0xB8($s3)
    ctx->pc = 0x2b7b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b7b44: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x2b7b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x2b7b48: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2b7b48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2b7b4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b7b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7b50: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2b7b50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2b7b54: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x2b7b54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b7b58: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x2b7b58u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b7b5c: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2b7b5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b7b60: 0xc07dfa0  jal         func_1F7E80
    ctx->pc = 0x2B7B60u;
    SET_GPR_U32(ctx, 31, 0x2B7B68u);
    ctx->pc = 0x2B7B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7B60u;
    // 0x2b7b64: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x2B7B60u, 0x2B7B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B68u;
label_2b7b68:
    // 0x2b7b68: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2b7b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b7b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b70: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2b7b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7b74: 0xc6a000b0  lwc1        $f0, 0xB0($s5)
    ctx->pc = 0x2b7b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7b78: 0xc6a100b4  lwc1        $f1, 0xB4($s5)
    ctx->pc = 0x2b7b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7b7c: 0xc6a200b8  lwc1        $f2, 0xB8($s5)
    ctx->pc = 0x2b7b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7b80: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2b7b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b7b84: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2b7b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2b7b88: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2b7b88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b7b8c: 0xc07dfa0  jal         func_1F7E80
    ctx->pc = 0x2B7B8Cu;
    SET_GPR_U32(ctx, 31, 0x2B7B94u);
    ctx->pc = 0x2B7B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7B8Cu;
    // 0x2b7b90: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x2B7B8Cu, 0x2B7B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7B94u;
label_2b7b94:
    // 0x2b7b94: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2b7b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b7b98: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2b7b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b7b9c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2b7b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b7ba0: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x2b7ba0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2b7ba4: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x2b7ba4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2b7ba8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2b7ba8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b7bac: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2b7bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b7bb0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2b7bb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7bb4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2b7bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b7bb8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2b7bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7bbc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2b7bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7bc0: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2b7bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7bc4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2b7bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b7bc8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2b7bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2b7bcc: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2b7bccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b7bd0: 0xc66000b0  lwc1        $f0, 0xB0($s3)
    ctx->pc = 0x2b7bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7bd4: 0xc66100b4  lwc1        $f1, 0xB4($s3)
    ctx->pc = 0x2b7bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7bd8: 0xc66200b8  lwc1        $f2, 0xB8($s3)
    ctx->pc = 0x2b7bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7bdc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2b7bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b7be0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2b7be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2b7be4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2b7be4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2b7be8: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x2b7be8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2b7bec: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2b7becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b7bf0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2b7bf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7bf4: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x2b7bf4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2b7bf8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2b7bf8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b7bfc: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2b7bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b7c00: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2b7c00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b7c04: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2b7c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b7c08: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x2b7c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b7c0c: 0xc7a60044  lwc1        $f6, 0x44($sp)
    ctx->pc = 0x2b7c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b7c10: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2b7c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7c14: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2b7c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7c18: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2b7c18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2b7c1c: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x2b7c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b7c20: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2b7c20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2b7c24: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2b7c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7c28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b7c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b7c2c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2b7c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2b7c30: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b7c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b7c34: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x2b7c34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b7c38: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b7c38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b7c3c: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x2b7c3cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2b7c40: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b7c40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b7c44: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2b7c44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2b7c48: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b7c48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2b7c4c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x2b7c4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7c50: 0x0  nop
    ctx->pc = 0x2b7c50u;
    // NOP
    // 0x2b7c54: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7C54u;
    {
        const bool branch_taken_0x2b7c54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7C54u;
        // 0x2b7c58: 0xe7a30038  swc1        $f3, 0x38($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7c54) {
            ctx->pc = 0x2B7C60u;
            goto label_2b7c60;
        }
    }
    ctx->pc = 0x2B7C5Cu;
    // 0x2b7c5c: 0x4600a846  mov.s       $f1, $f21
    ctx->pc = 0x2b7c5cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[21]);
label_2b7c60:
    // 0x2b7c60: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b7c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b7c64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b7c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7c68: 0x0  nop
    ctx->pc = 0x2b7c68u;
    // NOP
    // 0x2b7c6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b7c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7c70: 0x0  nop
    ctx->pc = 0x2b7c70u;
    // NOP
    // 0x2b7c74: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B7C74u;
    {
        const bool branch_taken_0x2b7c74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b7c74) {
            ctx->pc = 0x2B7C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7C74u;
            // 0x2b7c78: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7C7Cu;
            goto label_2b7c7c;
        }
    }
    ctx->pc = 0x2B7C7Cu;
label_2b7c7c:
    // 0x2b7c7c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2b7c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7c80: 0x46000907  neg.s       $f4, $f1
    ctx->pc = 0x2b7c80u;
    ctx->f[4] = FPU_NEG_S(ctx->f[1]);
    // 0x2b7c84: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2b7c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2b7c88: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b7c88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2b7c8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b7c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7c90: 0xc66300b8  lwc1        $f3, 0xB8($s3)
    ctx->pc = 0x2b7c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b7c94: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b7c94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b7c98: 0xc66100b0  lwc1        $f1, 0xB0($s3)
    ctx->pc = 0x2b7c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7c9c: 0xc66000b4  lwc1        $f0, 0xB4($s3)
    ctx->pc = 0x2b7c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7ca0: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2b7ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b7ca4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2b7ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2b7ca8: 0x46022502  mul.s       $f20, $f4, $f2
    ctx->pc = 0x2b7ca8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2b7cac: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x2b7cacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b7cb0: 0x12de0007  beq         $s6, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7CB0u;
    {
        const bool branch_taken_0x2b7cb0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 30));
        ctx->pc = 0x2B7CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CB0u;
        // 0x2b7cb4: 0xe7d5000c  swc1        $f21, 0xC($fp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7cb0) {
            ctx->pc = 0x2B7CD0u;
            goto label_2b7cd0;
        }
    }
    ctx->pc = 0x2B7CB8u;
    // 0x2b7cb8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2b7cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7cbc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2b7cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7cc0: 0xe6803000  swc1        $f0, 0x3000($s4)
    ctx->pc = 0x2b7cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12288), bits); }
    // 0x2b7cc4: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x2b7cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x2b7cc8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2b7cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7ccc: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x2b7cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_2b7cd0:
    // 0x2b7cd0: 0xc6a000b8  lwc1        $f0, 0xB8($s5)
    ctx->pc = 0x2b7cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7cd4: 0xc6a100b0  lwc1        $f1, 0xB0($s5)
    ctx->pc = 0x2b7cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7cd8: 0xc6a200b4  lwc1        $f2, 0xB4($s5)
    ctx->pc = 0x2b7cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7cdc: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2b7cdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b7ce0: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2b7ce0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2b7ce4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2b7ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b7ce8: 0x12fe0007  beq         $s7, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7CE8u;
    {
        const bool branch_taken_0x2b7ce8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 30));
        ctx->pc = 0x2B7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7CE8u;
        // 0x2b7cec: 0xe7d5000c  swc1        $f21, 0xC($fp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7ce8) {
            ctx->pc = 0x2B7D08u;
            goto label_2b7d08;
        }
    }
    ctx->pc = 0x2B7CF0u;
    // 0x2b7cf0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2b7cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7cf4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2b7cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7cf8: 0xe6803010  swc1        $f0, 0x3010($s4)
    ctx->pc = 0x2b7cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12304), bits); }
    // 0x2b7cfc: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2b7cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2b7d00: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2b7d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7d04: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2b7d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_2b7d08:
    // 0x2b7d08: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b7d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b7d0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b7d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7d10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b7d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d18: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2b7d18u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2b7d1c: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x2b7d1cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2b7d20: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b7d20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2b7d24: 0xc0ae034  jal         func_2B80D0
    ctx->pc = 0x2B7D24u;
    SET_GPR_U32(ctx, 31, 0x2B7D2Cu);
    ctx->pc = 0x2B7D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7D24u;
    // 0x2b7d28: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B80D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B80D0u, 0x2B7D24u, 0x2B7D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D2Cu;
label_2b7d2c:
    // 0x2b7d2c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2b7d2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2b7d30: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b7d30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2b7d34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d38: 0xc0ae034  jal         func_2B80D0
    ctx->pc = 0x2B7D38u;
    SET_GPR_U32(ctx, 31, 0x2B7D40u);
    ctx->pc = 0x2B7D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7D38u;
    // 0x2b7d3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B80D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B80D0u, 0x2B7D38u, 0x2B7D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D40u;
label_2b7d40:
    // 0x2b7d40: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2b7d40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2b7d44: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b7d44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2b7d48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b7d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7d4c: 0xc0ae034  jal         func_2B80D0
    ctx->pc = 0x2B7D4Cu;
    SET_GPR_U32(ctx, 31, 0x2B7D54u);
    ctx->pc = 0x2B7D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7D4Cu;
    // 0x2b7d50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B80D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B80D0u, 0x2B7D4Cu, 0x2B7D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D54u;
label_2b7d54:
    // 0x2b7d54: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2b7d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b7d58: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x2b7d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x2b7d5c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2b7d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b7d60: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x2b7d60u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    // 0x2b7d64: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2b7d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b7d68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7D68u;
    {
        const bool branch_taken_0x2b7d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D68u;
        // 0x2b7d6c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7d68) {
            ctx->pc = 0x2B7D7Cu;
            goto label_2b7d7c;
        }
    }
    ctx->pc = 0x2B7D70u;
    // 0x2b7d70: 0x8e820278  lw          $v0, 0x278($s4)
    ctx->pc = 0x2b7d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x2b7d74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7D74u;
    {
        const bool branch_taken_0x2b7d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D74u;
        // 0x2b7d78: 0x8c550038  lw          $s5, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7d74) {
            ctx->pc = 0x2B7D80u;
            goto label_2b7d80;
        }
    }
    ctx->pc = 0x2B7D7Cu;
label_2b7d7c:
    // 0x2b7d7c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b7d7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7d80:
    // 0x2b7d80: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x2b7d80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x2b7d84: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2b7d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b7d88: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2b7d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b7d8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B7D8Cu;
    {
        const bool branch_taken_0x2b7d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D8Cu;
        // 0x2b7d90: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7d8c) {
            ctx->pc = 0x2B7DA0u;
            goto label_2b7da0;
        }
    }
    ctx->pc = 0x2B7D94u;
    // 0x2b7d94: 0x8e820278  lw          $v0, 0x278($s4)
    ctx->pc = 0x2b7d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x2b7d98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7D98u;
    {
        const bool branch_taken_0x2b7d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D98u;
        // 0x2b7d9c: 0x8c530040  lw          $s3, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7d98) {
            ctx->pc = 0x2B7DA4u;
            goto label_2b7da4;
        }
    }
    ctx->pc = 0x2B7DA0u;
label_2b7da0:
    // 0x2b7da0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b7da0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b7da4:
    // 0x2b7da4: 0x12a000a6  beqz        $s5, . + 4 + (0xA6 << 2)
    ctx->pc = 0x2B7DA4u;
    {
        const bool branch_taken_0x2b7da4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7da4) {
            ctx->pc = 0x2B8040u;
            goto label_2b8040;
        }
    }
    ctx->pc = 0x2B7DACu;
    // 0x2b7dac: 0x126000a4  beqz        $s3, . + 4 + (0xA4 << 2)
    ctx->pc = 0x2B7DACu;
    {
        const bool branch_taken_0x2b7dac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7dac) {
            ctx->pc = 0x2B8040u;
            goto label_2b8040;
        }
    }
    ctx->pc = 0x2B7DB4u;
    // 0x2b7db4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2b7db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b7db8: 0xc66200b0  lwc1        $f2, 0xB0($s3)
    ctx->pc = 0x2b7db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7dbc: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x2b7dbcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b7dc0: 0xc66100b4  lwc1        $f1, 0xB4($s3)
    ctx->pc = 0x2b7dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7dc4: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2b7dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b7dc8: 0xc66000b8  lwc1        $f0, 0xB8($s3)
    ctx->pc = 0x2b7dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7dcc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2b7dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b7dd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b7dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b7dd4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2b7dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2b7dd8: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x2b7dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b7ddc: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2b7ddcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b7de0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2b7de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2b7de4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2b7de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b7de8: 0xe7d5000c  swc1        $f21, 0xC($fp)
    ctx->pc = 0x2b7de8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x2b7dec: 0xc6a000b0  lwc1        $f0, 0xB0($s5)
    ctx->pc = 0x2b7decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7df0: 0xc6a100b4  lwc1        $f1, 0xB4($s5)
    ctx->pc = 0x2b7df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7df4: 0xc6a200b8  lwc1        $f2, 0xB8($s5)
    ctx->pc = 0x2b7df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7df8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2b7df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b7dfc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2b7dfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2b7e00: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2b7e00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b7e04: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x2b7e04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2b7e08: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2b7e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b7e0c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x2b7e0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2b7e10: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2b7e10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7e14: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2b7e14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b7e18: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2b7e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b7e1c: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2b7e1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b7e20: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2b7e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b7e24: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2b7e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7e28: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2b7e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7e2c: 0x46000342  mul.s       $f13, $f0, $f0
    ctx->pc = 0x2b7e2cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b7e30: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x2b7e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b7e34: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x2b7e34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b7e38: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2b7e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b7e3c: 0xe7ac0014  swc1        $f12, 0x14($sp)
    ctx->pc = 0x2b7e3cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b7e40: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2b7e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b7e44: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x2b7e44u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x2b7e48: 0x0  nop
    ctx->pc = 0x2b7e48u;
    // NOP
    // 0x2b7e4c: 0x0  nop
    ctx->pc = 0x2b7e4cu;
    // NOP
    // 0x2b7e50: 0x460d0344  c1          0xD0344
    ctx->pc = 0x2b7e50u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x2b7e54: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2B7E54u;
    SET_GPR_U32(ctx, 31, 0x2B7E5Cu);
    ctx->pc = 0x2B7E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7E54u;
    // 0x2b7e58: 0x26963020  addiu       $s6, $s4, 0x3020 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 12320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2B7E54u, 0x2B7E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7E5Cu;
label_2b7e5c:
    // 0x2b7e5c: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2b7e5cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2b7e60: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2B7E60u;
    SET_GPR_U32(ctx, 31, 0x2B7E68u);
    ctx->pc = 0x2B7E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7E60u;
    // 0x2b7e64: 0x26973030  addiu       $s7, $s4, 0x3030 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 12336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2B7E60u, 0x2B7E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7E68u;
label_2b7e68:
    // 0x2b7e68: 0xc66400b0  lwc1        $f4, 0xB0($s3)
    ctx->pc = 0x2b7e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b7e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e70: 0xc66200b4  lwc1        $f2, 0xB4($s3)
    ctx->pc = 0x2b7e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7e74: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2b7e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e78: 0xc66300b8  lwc1        $f3, 0xB8($s3)
    ctx->pc = 0x2b7e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b7e7c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x2b7e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x2b7e80: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2b7e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2b7e84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b7e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b7e88: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2b7e88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2b7e8c: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2b7e8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b7e90: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x2b7e90u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b7e94: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x2b7e94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b7e98: 0xc07dfa0  jal         func_1F7E80
    ctx->pc = 0x2B7E98u;
    SET_GPR_U32(ctx, 31, 0x2B7EA0u);
    ctx->pc = 0x2B7E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7E98u;
    // 0x2b7e9c: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x2B7E98u, 0x2B7EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7EA0u;
label_2b7ea0:
    // 0x2b7ea0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2b7ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b7ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ea8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2b7ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7eac: 0xc6a000b0  lwc1        $f0, 0xB0($s5)
    ctx->pc = 0x2b7eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7eb0: 0xc6a100b4  lwc1        $f1, 0xB4($s5)
    ctx->pc = 0x2b7eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7eb4: 0xc6a200b8  lwc1        $f2, 0xB8($s5)
    ctx->pc = 0x2b7eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7eb8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2b7eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b7ebc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2b7ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2b7ec0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2b7ec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b7ec4: 0xc07dfa0  jal         func_1F7E80
    ctx->pc = 0x2B7EC4u;
    SET_GPR_U32(ctx, 31, 0x2B7ECCu);
    ctx->pc = 0x2B7EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7EC4u;
    // 0x2b7ec8: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x2B7EC4u, 0x2B7ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7ECCu;
label_2b7ecc:
    // 0x2b7ecc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2b7eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b7ed0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2b7ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b7ed4: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2b7ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b7ed8: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x2b7ed8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2b7edc: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x2b7edcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2b7ee0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2b7ee0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b7ee4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2b7ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b7ee8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2b7ee8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7eec: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2b7eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b7ef0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2b7ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7ef4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2b7ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7ef8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2b7ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7efc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2b7efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2b7f00: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2b7f00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b7f04: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2b7f04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b7f08: 0xc66000b0  lwc1        $f0, 0xB0($s3)
    ctx->pc = 0x2b7f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7f0c: 0xc66100b4  lwc1        $f1, 0xB4($s3)
    ctx->pc = 0x2b7f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7f10: 0xc66200b8  lwc1        $f2, 0xB8($s3)
    ctx->pc = 0x2b7f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7f14: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2b7f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b7f18: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2b7f18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2b7f1c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2b7f1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b7f20: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x2b7f20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2b7f24: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2b7f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b7f28: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2b7f28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b7f2c: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x2b7f2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2b7f30: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2b7f30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2b7f34: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2b7f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b7f38: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2b7f38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b7f3c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2b7f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b7f40: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x2b7f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b7f44: 0xc7a60034  lwc1        $f6, 0x34($sp)
    ctx->pc = 0x2b7f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2b7f48: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2b7f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7f4c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2b7f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7f50: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2b7f50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2b7f54: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x2b7f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b7f58: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2b7f58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2b7f5c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2b7f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7f60: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b7f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b7f64: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2b7f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2b7f68: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b7f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b7f6c: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2b7f6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b7f70: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b7f70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b7f74: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x2b7f74u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2b7f78: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b7f78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b7f7c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x2b7f7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x2b7f80: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b7f80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2b7f84: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x2b7f84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7f88: 0x0  nop
    ctx->pc = 0x2b7f88u;
    // NOP
    // 0x2b7f8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B7F8Cu;
    {
        const bool branch_taken_0x2b7f8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F8Cu;
        // 0x2b7f90: 0xe7a30028  swc1        $f3, 0x28($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f8c) {
            ctx->pc = 0x2B7F98u;
            goto label_2b7f98;
        }
    }
    ctx->pc = 0x2B7F94u;
    // 0x2b7f94: 0x4600a846  mov.s       $f1, $f21
    ctx->pc = 0x2b7f94u;
    ctx->f[1] = FPU_MOV_S(ctx->f[21]);
label_2b7f98:
    // 0x2b7f98: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b7f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b7f9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b7f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7fa0: 0x0  nop
    ctx->pc = 0x2b7fa0u;
    // NOP
    // 0x2b7fa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b7fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b7fa8: 0x0  nop
    ctx->pc = 0x2b7fa8u;
    // NOP
    // 0x2b7fac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B7FACu;
    {
        const bool branch_taken_0x2b7fac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b7fac) {
            ctx->pc = 0x2B7FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7FACu;
            // 0x2b7fb0: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7FB4u;
            goto label_2b7fb4;
        }
    }
    ctx->pc = 0x2B7FB4u;
label_2b7fb4:
    // 0x2b7fb4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2b7fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7fb8: 0x46000907  neg.s       $f4, $f1
    ctx->pc = 0x2b7fb8u;
    ctx->f[4] = FPU_NEG_S(ctx->f[1]);
    // 0x2b7fbc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2b7fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2b7fc0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2b7fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2b7fc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b7fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b7fc8: 0xc66300b8  lwc1        $f3, 0xB8($s3)
    ctx->pc = 0x2b7fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b7fcc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2b7fccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b7fd0: 0xc66100b0  lwc1        $f1, 0xB0($s3)
    ctx->pc = 0x2b7fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7fd4: 0xc66000b4  lwc1        $f0, 0xB4($s3)
    ctx->pc = 0x2b7fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7fd8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2b7fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b7fdc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2b7fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2b7fe0: 0x46022502  mul.s       $f20, $f4, $f2
    ctx->pc = 0x2b7fe0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2b7fe4: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2b7fe4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b7fe8: 0x12de0007  beq         $s6, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7FE8u;
    {
        const bool branch_taken_0x2b7fe8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 30));
        ctx->pc = 0x2B7FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FE8u;
        // 0x2b7fec: 0xe7d5000c  swc1        $f21, 0xC($fp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7fe8) {
            ctx->pc = 0x2B8008u;
            goto label_2b8008;
        }
    }
    ctx->pc = 0x2B7FF0u;
    // 0x2b7ff0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2b7ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7ff4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2b7ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7ff8: 0xe6803020  swc1        $f0, 0x3020($s4)
    ctx->pc = 0x2b7ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12320), bits); }
    // 0x2b7ffc: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x2b7ffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x2b8000: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2b8000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8004: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x2b8004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_2b8008:
    // 0x2b8008: 0xc6a000b8  lwc1        $f0, 0xB8($s5)
    ctx->pc = 0x2b8008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b800c: 0xc6a100b0  lwc1        $f1, 0xB0($s5)
    ctx->pc = 0x2b800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8010: 0xc6a200b4  lwc1        $f2, 0xB4($s5)
    ctx->pc = 0x2b8010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8014: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2b8014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b8018: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2b8018u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2b801c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2b801cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b8020: 0x12fe0007  beq         $s7, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B8020u;
    {
        const bool branch_taken_0x2b8020 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 30));
        ctx->pc = 0x2B8024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8020u;
        // 0x2b8024: 0xe7d5000c  swc1        $f21, 0xC($fp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8020) {
            ctx->pc = 0x2B8040u;
            goto label_2b8040;
        }
    }
    ctx->pc = 0x2B8028u;
    // 0x2b8028: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2b8028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b802c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2b802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8030: 0xe6803030  swc1        $f0, 0x3030($s4)
    ctx->pc = 0x2b8030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12336), bits); }
    // 0x2b8034: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2b8034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x2b8038: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2b8038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b803c: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x2b803cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_2b8040:
    // 0x2b8040: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b8040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b8044: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b8044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8048: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b8048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b804c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b804cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b8050: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2b8050u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2b8054: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x2b8054u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2b8058: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b8058u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2b805c: 0xc0ae034  jal         func_2B80D0
    ctx->pc = 0x2B805Cu;
    SET_GPR_U32(ctx, 31, 0x2B8064u);
    ctx->pc = 0x2B8060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B805Cu;
    // 0x2b8060: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B80D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B80D0u, 0x2B805Cu, 0x2B8064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8064u;
label_2b8064:
    // 0x2b8064: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b8064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8068: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2b8068u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2b806c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b806cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2b8070: 0xc0ae034  jal         func_2B80D0
    ctx->pc = 0x2B8070u;
    SET_GPR_U32(ctx, 31, 0x2B8078u);
    ctx->pc = 0x2B8074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8070u;
    // 0x2b8074: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B80D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B80D0u, 0x2B8070u, 0x2B8078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8078u;
label_2b8078:
    // 0x2b8078: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2b8078u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2b807c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b807cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2b8080: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b8080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8084: 0xc0ae034  jal         func_2B80D0
    ctx->pc = 0x2B8084u;
    SET_GPR_U32(ctx, 31, 0x2B808Cu);
    ctx->pc = 0x2B8088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8084u;
    // 0x2b8088: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B80D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B80D0u, 0x2B8084u, 0x2B808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B808Cu;
label_2b808c:
    // 0x2b808c: 0xae8030a0  sw          $zero, 0x30A0($s4)
    ctx->pc = 0x2b808cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12448), GPR_U32(ctx, 0));
    // 0x2b8090: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2b8090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b8094: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2b8094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2b8098: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2b8098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2b809c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2b809cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2b80a0: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2b80a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2b80a4: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2b80a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2b80a8: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2b80a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b80ac: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2b80acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b80b0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2b80b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b80b4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2b80b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b80b8: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x2b80b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b80bc: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x2b80bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b80c0: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2b80c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b80c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B80C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B80C4u;
        // 0x2b80c8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B80C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B80CCu;
    // 0x2b80cc: 0x0  nop
    ctx->pc = 0x2b80ccu;
    // NOP
    ctx->pc = 0x2b80d0u;
}
