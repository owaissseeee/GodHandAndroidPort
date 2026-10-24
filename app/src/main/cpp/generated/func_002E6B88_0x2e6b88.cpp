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

// Function: func_002E6B88
// Address: 0x2e6b88 - 0x2e6ee8
void func_002E6B88_0x2e6b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E6B88_0x2e6b88");
#endif

    switch (ctx->pc) {
        case 0x2e6bc0u: goto label_2e6bc0;
        case 0x2e6be8u: goto label_2e6be8;
        case 0x2e6d08u: goto label_2e6d08;
        case 0x2e6d98u: goto label_2e6d98;
        case 0x2e6dc8u: goto label_2e6dc8;
        case 0x2e6df0u: goto label_2e6df0;
        case 0x2e6e44u: goto label_2e6e44;
        case 0x2e6e68u: goto label_2e6e68;
        case 0x2e6eccu: goto label_2e6ecc;
        default: break;
    }

    ctx->pc = 0x2e6b88u;

    // 0x2e6b88: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2e6b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2e6b8c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2e6b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2e6b90: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2e6b90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2e6b94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e6b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6b98: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2e6b98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2e6b9c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2e6b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2e6ba0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2e6ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2e6ba4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2e6ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2e6ba8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2e6ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e6bac: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2e6bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e6bb0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e6bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e6bb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e6bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6bb8: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2E6BB8u;
    SET_GPR_U32(ctx, 31, 0x2E6BC0u);
    ctx->pc = 0x2E6BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6BB8u;
    // 0x2e6bbc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2E6BB8u, 0x2E6BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6BC0u;
label_2e6bc0:
    // 0x2e6bc0: 0x13b10006  beq         $sp, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6BC0u;
    {
        const bool branch_taken_0x2e6bc0 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 17));
        ctx->pc = 0x2E6BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6BC0u;
        // 0x2e6bc4: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6bc0) {
            ctx->pc = 0x2E6BDCu;
            goto label_2e6bdc;
        }
    }
    ctx->pc = 0x2E6BC8u;
    // 0x2e6bc8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2e6bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6bcc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2e6bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6bd0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2e6bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e6bd4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2e6bd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e6bd8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2e6bd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2e6bdc:
    // 0x2e6bdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6be0: 0xc0ad8b8  jal         func_2B62E0
    ctx->pc = 0x2E6BE0u;
    SET_GPR_U32(ctx, 31, 0x2E6BE8u);
    ctx->pc = 0x2E6BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6BE0u;
    // 0x2e6be4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2E6BE0u, 0x2E6BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6BE8u;
label_2e6be8:
    // 0x2e6be8: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x2e6be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6bec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e6becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e6bf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e6bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6bf4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2e6bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6bf8: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x2e6bf8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2e6bfc: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2e6bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6c00: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2e6c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6c04: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2e6c04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e6c08: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2e6c08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2e6c0c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e6c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e6c10: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2e6c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6c14: 0x0  nop
    ctx->pc = 0x2e6c14u;
    // NOP
    // 0x2e6c18: 0x450000a9  bc1f        . + 4 + (0xA9 << 2)
    ctx->pc = 0x2E6C18u;
    {
        const bool branch_taken_0x2e6c18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C18u;
        // 0x2e6c1c: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c18) {
            ctx->pc = 0x2E6EC0u;
            goto label_2e6ec0;
        }
    }
    ctx->pc = 0x2E6C20u;
    // 0x2e6c20: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x2e6c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x2e6c24: 0x4604a000  add.s       $f0, $f20, $f4
    ctx->pc = 0x2e6c24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[4]);
    // 0x2e6c28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e6c2c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e6c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e6c30: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2E6C30u;
    {
        const bool branch_taken_0x2e6c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6C30u;
        // 0x2e6c34: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c30) {
            ctx->pc = 0x2E6DD8u;
            goto label_2e6dd8;
        }
    }
    ctx->pc = 0x2E6C38u;
    // 0x2e6c38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e6c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e6c3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e6c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6c40: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2e6c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e6c44: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2e6c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e6c48: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2e6c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e6c4c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2e6c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2e6c50: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2e6c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e6c54: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2e6c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e6c58: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2e6c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e6c5c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e6c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e6c60: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2e6c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e6c64: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2e6c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e6c68: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e6c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e6c6c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e6c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e6c70: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2e6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2e6c74: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e6c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e6c78: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x2e6c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x2e6c7c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x2e6c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x2e6c80: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2e6c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2e6c84: 0xa064004c  sb          $a0, 0x4C($v1)
    ctx->pc = 0x2e6c84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e6c88: 0xa3a0007d  sb          $zero, 0x7D($sp)
    ctx->pc = 0x2e6c88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 125), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6c8c: 0xa3a0007e  sb          $zero, 0x7E($sp)
    ctx->pc = 0x2e6c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 126), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6c90: 0xa065004f  sb          $a1, 0x4F($v1)
    ctx->pc = 0x2e6c90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e6c94: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2e6c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2e6c98: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2e6c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e6c9c: 0xa7a000a0  sh          $zero, 0xA0($sp)
    ctx->pc = 0x2e6c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e6ca0: 0xa7a000a2  sh          $zero, 0xA2($sp)
    ctx->pc = 0x2e6ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 162), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e6ca4: 0xa3a000a4  sb          $zero, 0xA4($sp)
    ctx->pc = 0x2e6ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 164), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6ca8: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x2e6ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x2e6cac: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2e6cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e6cb0: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x2e6cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e6cb4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e6cb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e6cb8: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x2e6cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6cbc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e6cbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6cc0: 0x0  nop
    ctx->pc = 0x2e6cc0u;
    // NOP
    // 0x2e6cc4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2E6CC4u;
    {
        const bool branch_taken_0x2e6cc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E6CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CC4u;
        // 0x2e6cc8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6cc4) {
            ctx->pc = 0x2E6CF0u;
            goto label_2e6cf0;
        }
    }
    ctx->pc = 0x2E6CCCu;
    // 0x2e6ccc: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x2e6cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6cd0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e6cd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6cd4: 0x0  nop
    ctx->pc = 0x2e6cd4u;
    // NOP
    // 0x2e6cd8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E6CD8u;
    {
        const bool branch_taken_0x2e6cd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6cd8) {
            ctx->pc = 0x2E6CF0u;
            goto label_2e6cf0;
        }
    }
    ctx->pc = 0x2E6CE0u;
    // 0x2e6ce0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2e6ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e6ce4: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2e6ce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e6ce8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6CE8u;
    {
        const bool branch_taken_0x2e6ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6CE8u;
        // 0x2e6cec: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ce8) {
            ctx->pc = 0x2E6D0Cu;
            goto label_2e6d0c;
        }
    }
    ctx->pc = 0x2E6CF0u;
label_2e6cf0:
    // 0x2e6cf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6cf4: 0xc60c0124  lwc1        $f12, 0x124($s0)
    ctx->pc = 0x2e6cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e6cf8: 0xc60d012c  lwc1        $f13, 0x12C($s0)
    ctx->pc = 0x2e6cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e6cfc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e6cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e6d00: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2E6D00u;
    SET_GPR_U32(ctx, 31, 0x2E6D08u);
    ctx->pc = 0x2E6D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6D00u;
    // 0x2e6d04: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2E6D00u, 0x2E6D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D08u;
label_2e6d08:
    // 0x2e6d08: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e6d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2e6d0c:
    // 0x2e6d0c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2e6d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e6d10: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E6D10u;
    {
        const bool branch_taken_0x2e6d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2E6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D10u;
        // 0x2e6d14: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d10) {
            ctx->pc = 0x2E6D2Cu;
            goto label_2e6d2c;
        }
    }
    ctx->pc = 0x2E6D18u;
    // 0x2e6d18: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2e6d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6d1c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2e6d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6d20: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2e6d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2e6d24: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x2e6d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2e6d28: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x2e6d28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2e6d2c:
    // 0x2e6d2c: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x2e6d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x2e6d30: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2e6d30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2e6d34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e6d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6d38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e6d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e6d3c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2e6d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6d40: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2e6d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2e6d44: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2e6d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6d48: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2e6d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6d4c: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x2e6d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e6d50: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x2e6d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e6d54: 0x820402d0  lb          $a0, 0x2D0($s0)
    ctx->pc = 0x2e6d54u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2e6d58: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2e6d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e6d5c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2e6d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e6d60: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2e6d60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e6d64: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x2e6d64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2e6d68: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x2e6d68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2e6d6c: 0xe7a50048  swc1        $f5, 0x48($sp)
    ctx->pc = 0x2e6d6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2e6d70: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E6D70u;
    {
        const bool branch_taken_0x2e6d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D70u;
        // 0x2e6d74: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d70) {
            ctx->pc = 0x2E6DA0u;
            goto label_2e6da0;
        }
    }
    ctx->pc = 0x2E6D78u;
    // 0x2e6d78: 0x920502d1  lbu         $a1, 0x2D1($s0)
    ctx->pc = 0x2e6d78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 721)));
    // 0x2e6d7c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2e6d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2e6d80: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e6d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6d84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e6d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6d88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e6d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e6d8c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2e6d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e6d90: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2E6D90u;
    SET_GPR_U32(ctx, 31, 0x2E6D98u);
    ctx->pc = 0x2E6D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6D90u;
    // 0x2e6d94: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2E6D90u, 0x2E6D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6D98u;
label_2e6d98:
    // 0x2e6d98: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E6D98u;
    {
        const bool branch_taken_0x2e6d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6D98u;
        // 0x2e6d9c: 0x8e0302d8  lw          $v1, 0x2D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d98) {
            ctx->pc = 0x2E6DCCu;
            goto label_2e6dcc;
        }
    }
    ctx->pc = 0x2E6DA0u;
label_2e6da0:
    // 0x2e6da0: 0x920202e6  lbu         $v0, 0x2E6($s0)
    ctx->pc = 0x2e6da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x2e6da4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2e6da4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2e6da8: 0x8604023a  lh          $a0, 0x23A($s0)
    ctx->pc = 0x2e6da8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 570)));
    // 0x2e6dac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e6dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6db0: 0x9605023c  lhu         $a1, 0x23C($s0)
    ctx->pc = 0x2e6db0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x2e6db4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e6db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6db8: 0xa3a200a4  sb          $v0, 0xA4($sp)
    ctx->pc = 0x2e6db8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 164), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e6dbc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2e6dbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e6dc0: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2E6DC0u;
    SET_GPR_U32(ctx, 31, 0x2E6DC8u);
    ctx->pc = 0x2E6DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6DC0u;
    // 0x2e6dc4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2E6DC0u, 0x2E6DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DC8u;
label_2e6dc8:
    // 0x2e6dc8: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x2e6dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_2e6dcc:
    // 0x2e6dcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e6dd0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E6DD0u;
    {
        const bool branch_taken_0x2e6dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e6dd0) {
            ctx->pc = 0x2E6DE8u;
            goto label_2e6de8;
        }
    }
    ctx->pc = 0x2E6DD8u;
label_2e6dd8:
    // 0x2e6dd8: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x2e6dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x2e6ddc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e6de0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E6DE0u;
    {
        const bool branch_taken_0x2e6de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e6de0) {
            ctx->pc = 0x2E6DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6DE0u;
            // 0x2e6de4: 0xc60002c4  lwc1        $f0, 0x2C4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6DF8u;
            goto label_2e6df8;
        }
    }
    ctx->pc = 0x2E6DE8u;
label_2e6de8:
    // 0x2e6de8: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2E6DE8u;
    SET_GPR_U32(ctx, 31, 0x2E6DF0u);
    ctx->pc = 0x2E6DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6DE8u;
    // 0x2e6dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2E6DE8u, 0x2E6DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DF0u;
label_2e6df0:
    // 0x2e6df0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2E6DF0u;
    {
        const bool branch_taken_0x2e6df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DF0u;
        // 0x2e6df4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6df0) {
            ctx->pc = 0x2E6ED0u;
            goto label_2e6ed0;
        }
    }
    ctx->pc = 0x2E6DF8u;
label_2e6df8:
    // 0x2e6df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6dfc: 0xc6030124  lwc1        $f3, 0x124($s0)
    ctx->pc = 0x2e6dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e6e00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e6e00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e6e04: 0xc60402c0  lwc1        $f4, 0x2C0($s0)
    ctx->pc = 0x2e6e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e6e08: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2e6e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6e0c: 0xc602012c  lwc1        $f2, 0x12C($s0)
    ctx->pc = 0x2e6e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e6e10: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2e6e10u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2e6e14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e6e14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e6e18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e6e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e6e1c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2e6e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2e6e20: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2e6e20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2e6e24: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2e6e24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e6e28: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2e6e28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e6e2c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2e6e2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e6e30: 0xe625000c  swc1        $f5, 0xC($s1)
    ctx->pc = 0x2e6e30u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2e6e34: 0xe6010128  swc1        $f1, 0x128($s0)
    ctx->pc = 0x2e6e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2e6e38: 0xe6030124  swc1        $f3, 0x124($s0)
    ctx->pc = 0x2e6e38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2e6e3c: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2E6E3Cu;
    SET_GPR_U32(ctx, 31, 0x2E6E44u);
    ctx->pc = 0x2E6E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E3Cu;
    // 0x2e6e40: 0xe602012c  swc1        $f2, 0x12C($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2E6E3Cu, 0x2E6E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E44u;
label_2e6e44:
    // 0x2e6e44: 0x0  nop
    ctx->pc = 0x2e6e44u;
    // NOP
    // 0x2e6e48: 0x0  nop
    ctx->pc = 0x2e6e48u;
    // NOP
    // 0x2e6e4c: 0x46000044  c1          0x44
    ctx->pc = 0x2e6e4cu;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2e6e50: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2e6e50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6e54: 0x0  nop
    ctx->pc = 0x2e6e54u;
    // NOP
    // 0x2e6e58: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6E58u;
    {
        const bool branch_taken_0x2e6e58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6e58) {
            ctx->pc = 0x2E6E6Cu;
            goto label_2e6e6c;
        }
    }
    ctx->pc = 0x2E6E60u;
    // 0x2e6e60: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x2E6E60u;
    SET_GPR_U32(ctx, 31, 0x2E6E68u);
    ctx->pc = 0x2E6E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E60u;
    // 0x2e6e64: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x2E6E60u, 0x2E6E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E68u;
label_2e6e68:
    // 0x2e6e68: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2e6e68u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2e6e6c:
    // 0x2e6e6c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e6e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2e6e70: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e6e70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e6e74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e6e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6e78: 0x0  nop
    ctx->pc = 0x2e6e78u;
    // NOP
    // 0x2e6e7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e6e7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6e80: 0x0  nop
    ctx->pc = 0x2e6e80u;
    // NOP
    // 0x2e6e84: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2E6E84u;
    {
        const bool branch_taken_0x2e6e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E6E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E84u;
        // 0x2e6e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e84) {
            ctx->pc = 0x2E6EC4u;
            goto label_2e6ec4;
        }
    }
    ctx->pc = 0x2E6E8Cu;
    // 0x2e6e8c: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x2e6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x2e6e90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6e90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6e94: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2e6e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2e6e98: 0xae0202dc  sw          $v0, 0x2DC($s0)
    ctx->pc = 0x2e6e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
    // 0x2e6e9c: 0xe6000178  swc1        $f0, 0x178($s0)
    ctx->pc = 0x2e6e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
    // 0x2e6ea0: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2e6ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2e6ea4: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2e6ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2e6ea8: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2e6ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2e6eac: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x2e6eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x2e6eb0: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x2e6eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x2e6eb4: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x2e6eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x2e6eb8: 0xe6000180  swc1        $f0, 0x180($s0)
    ctx->pc = 0x2e6eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 384), bits); }
    // 0x2e6ebc: 0xe600017c  swc1        $f0, 0x17C($s0)
    ctx->pc = 0x2e6ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 380), bits); }
label_2e6ec0:
    // 0x2e6ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6ec4:
    // 0x2e6ec4: 0xc0ad7f2  jal         func_2B5FC8
    ctx->pc = 0x2E6EC4u;
    SET_GPR_U32(ctx, 31, 0x2E6ECCu);
    ctx->pc = 0x2E6EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6EC4u;
    // 0x2e6ec8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FC8u, 0x2E6EC4u, 0x2E6ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6ECCu;
label_2e6ecc:
    // 0x2e6ecc: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2e6eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2e6ed0:
    // 0x2e6ed0: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2e6ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e6ed4: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2e6ed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e6ed8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2e6ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e6edc: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2e6edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e6ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EE0u;
        // 0x2e6ee4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6EE8u;
}
