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

// Function: func_002E28F0
// Address: 0x2e28f0 - 0x2e2c50
void func_002E28F0_0x2e28f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E28F0_0x2e28f0");
#endif

    switch (ctx->pc) {
        case 0x2e2928u: goto label_2e2928;
        case 0x2e2950u: goto label_2e2950;
        case 0x2e2a70u: goto label_2e2a70;
        case 0x2e2b00u: goto label_2e2b00;
        case 0x2e2b30u: goto label_2e2b30;
        case 0x2e2b58u: goto label_2e2b58;
        case 0x2e2bacu: goto label_2e2bac;
        case 0x2e2bd0u: goto label_2e2bd0;
        case 0x2e2c34u: goto label_2e2c34;
        default: break;
    }

    ctx->pc = 0x2e28f0u;

    // 0x2e28f0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2e28f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2e28f4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2e28f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2e28f8: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2e28f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2e28fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e28fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2900: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2e2900u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2e2904: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2e2904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2e2908: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2e2908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2e290c: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2e290cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2e2910: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2e2910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e2914: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2e2914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e2918: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e2918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e291c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e291cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2920: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2E2920u;
    SET_GPR_U32(ctx, 31, 0x2E2928u);
    ctx->pc = 0x2E2924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2920u;
    // 0x2e2924: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2E2920u, 0x2E2928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2928u;
label_2e2928:
    // 0x2e2928: 0x13b10006  beq         $sp, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2928u;
    {
        const bool branch_taken_0x2e2928 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 17));
        ctx->pc = 0x2E292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2928u;
        // 0x2e292c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2928) {
            ctx->pc = 0x2E2944u;
            goto label_2e2944;
        }
    }
    ctx->pc = 0x2E2930u;
    // 0x2e2930: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2e2930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2934: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2e2934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2938: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2e2938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e293c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2e293cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e2940: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2e2940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2e2944:
    // 0x2e2944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e2944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2948: 0xc0ad8b8  jal         func_2B62E0
    ctx->pc = 0x2E2948u;
    SET_GPR_U32(ctx, 31, 0x2E2950u);
    ctx->pc = 0x2E294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2948u;
    // 0x2e294c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2E2948u, 0x2E2950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2950u;
label_2e2950:
    // 0x2e2950: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x2e2950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e2954: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e2954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e2958: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e295c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2e295cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2960: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x2e2960u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2e2964: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2e2964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2968: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2e2968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e296c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2e296cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e2970: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2e2970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2e2974: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e2974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e2978: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2e2978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e297c: 0x0  nop
    ctx->pc = 0x2e297cu;
    // NOP
    // 0x2e2980: 0x450000a9  bc1f        . + 4 + (0xA9 << 2)
    ctx->pc = 0x2E2980u;
    {
        const bool branch_taken_0x2e2980 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2980u;
        // 0x2e2984: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2980) {
            ctx->pc = 0x2E2C28u;
            goto label_2e2c28;
        }
    }
    ctx->pc = 0x2E2988u;
    // 0x2e2988: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x2e2988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2e298c: 0x4604a000  add.s       $f0, $f20, $f4
    ctx->pc = 0x2e298cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[4]);
    // 0x2e2990: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e2990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e2994: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e2994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e2998: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2E2998u;
    {
        const bool branch_taken_0x2e2998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2998u;
        // 0x2e299c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2998) {
            ctx->pc = 0x2E2B40u;
            goto label_2e2b40;
        }
    }
    ctx->pc = 0x2E29A0u;
    // 0x2e29a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e29a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e29a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e29a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e29a8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2e29a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e29ac: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2e29acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e29b0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2e29b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e29b4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2e29b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2e29b8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2e29b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e29bc: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2e29bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e29c0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2e29c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e29c4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e29c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e29c8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2e29c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e29cc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2e29ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e29d0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e29d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e29d4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e29d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e29d8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2e29d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2e29dc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e29dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e29e0: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x2e29e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x2e29e4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x2e29e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x2e29e8: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2e29e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2e29ec: 0xa064004c  sb          $a0, 0x4C($v1)
    ctx->pc = 0x2e29ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e29f0: 0xa3a0007d  sb          $zero, 0x7D($sp)
    ctx->pc = 0x2e29f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 125), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e29f4: 0xa3a0007e  sb          $zero, 0x7E($sp)
    ctx->pc = 0x2e29f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 126), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e29f8: 0xa065004f  sb          $a1, 0x4F($v1)
    ctx->pc = 0x2e29f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e29fc: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2e29fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2e2a00: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2e2a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e2a04: 0xa7a000a0  sh          $zero, 0xA0($sp)
    ctx->pc = 0x2e2a04u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e2a08: 0xa7a000a2  sh          $zero, 0xA2($sp)
    ctx->pc = 0x2e2a08u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 162), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e2a0c: 0xa3a000a4  sb          $zero, 0xA4($sp)
    ctx->pc = 0x2e2a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 164), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2a10: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x2e2a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x2e2a14: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2e2a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e2a18: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x2e2a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e2a1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e2a1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2a20: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x2e2a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2a24: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e2a24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2a28: 0x0  nop
    ctx->pc = 0x2e2a28u;
    // NOP
    // 0x2e2a2c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2E2A2Cu;
    {
        const bool branch_taken_0x2e2a2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A2Cu;
        // 0x2e2a30: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a2c) {
            ctx->pc = 0x2E2A58u;
            goto label_2e2a58;
        }
    }
    ctx->pc = 0x2E2A34u;
    // 0x2e2a34: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x2e2a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2a38: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e2a38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2a3c: 0x0  nop
    ctx->pc = 0x2e2a3cu;
    // NOP
    // 0x2e2a40: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2A40u;
    {
        const bool branch_taken_0x2e2a40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2a40) {
            ctx->pc = 0x2E2A58u;
            goto label_2e2a58;
        }
    }
    ctx->pc = 0x2E2A48u;
    // 0x2e2a48: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2e2a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e2a4c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2e2a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e2a50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E2A50u;
    {
        const bool branch_taken_0x2e2a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A50u;
        // 0x2e2a54: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a50) {
            ctx->pc = 0x2E2A74u;
            goto label_2e2a74;
        }
    }
    ctx->pc = 0x2E2A58u;
label_2e2a58:
    // 0x2e2a58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2a5c: 0xc60c0124  lwc1        $f12, 0x124($s0)
    ctx->pc = 0x2e2a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e2a60: 0xc60d012c  lwc1        $f13, 0x12C($s0)
    ctx->pc = 0x2e2a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e2a64: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e2a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e2a68: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2E2A68u;
    SET_GPR_U32(ctx, 31, 0x2E2A70u);
    ctx->pc = 0x2E2A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2A68u;
    // 0x2e2a6c: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2E2A68u, 0x2E2A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2A70u;
label_2e2a70:
    // 0x2e2a70: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e2a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2e2a74:
    // 0x2e2a74: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2e2a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e2a78: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2A78u;
    {
        const bool branch_taken_0x2e2a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2E2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A78u;
        // 0x2e2a7c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2a78) {
            ctx->pc = 0x2E2A94u;
            goto label_2e2a94;
        }
    }
    ctx->pc = 0x2E2A80u;
    // 0x2e2a80: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2e2a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2a84: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2e2a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2a88: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2e2a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2e2a8c: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x2e2a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2e2a90: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x2e2a90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2e2a94:
    // 0x2e2a94: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x2e2a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x2e2a98: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2e2a98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2e2a9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2aa0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e2aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2aa4: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2e2aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2aa8: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2e2aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2e2aac: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2e2aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2ab0: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2e2ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e2ab4: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x2e2ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e2ab8: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x2e2ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e2abc: 0x820402c0  lb          $a0, 0x2C0($s0)
    ctx->pc = 0x2e2abcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x2e2ac0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2e2ac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e2ac4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2e2ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e2ac8: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2e2ac8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e2acc: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x2e2accu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2e2ad0: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x2e2ad0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2e2ad4: 0xe7a50048  swc1        $f5, 0x48($sp)
    ctx->pc = 0x2e2ad4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2e2ad8: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E2AD8u;
    {
        const bool branch_taken_0x2e2ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E2ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2AD8u;
        // 0x2e2adc: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ad8) {
            ctx->pc = 0x2E2B08u;
            goto label_2e2b08;
        }
    }
    ctx->pc = 0x2E2AE0u;
    // 0x2e2ae0: 0x920502c1  lbu         $a1, 0x2C1($s0)
    ctx->pc = 0x2e2ae0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 705)));
    // 0x2e2ae4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2e2ae4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2e2ae8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e2ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2aec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2af0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e2af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e2af4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2e2af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2af8: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2E2AF8u;
    SET_GPR_U32(ctx, 31, 0x2E2B00u);
    ctx->pc = 0x2E2AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2AF8u;
    // 0x2e2afc: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2E2AF8u, 0x2E2B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2B00u;
label_2e2b00:
    // 0x2e2b00: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E2B00u;
    {
        const bool branch_taken_0x2e2b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2B00u;
        // 0x2e2b04: 0x8e0302c8  lw          $v1, 0x2C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b00) {
            ctx->pc = 0x2E2B34u;
            goto label_2e2b34;
        }
    }
    ctx->pc = 0x2E2B08u;
label_2e2b08:
    // 0x2e2b08: 0x920202d6  lbu         $v0, 0x2D6($s0)
    ctx->pc = 0x2e2b08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 726)));
    // 0x2e2b0c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2e2b0cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2e2b10: 0x8604023a  lh          $a0, 0x23A($s0)
    ctx->pc = 0x2e2b10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 570)));
    // 0x2e2b14: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e2b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2b18: 0x9605023c  lhu         $a1, 0x23C($s0)
    ctx->pc = 0x2e2b18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x2e2b1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e2b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2b20: 0xa3a200a4  sb          $v0, 0xA4($sp)
    ctx->pc = 0x2e2b20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 164), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e2b24: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2e2b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2b28: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2E2B28u;
    SET_GPR_U32(ctx, 31, 0x2E2B30u);
    ctx->pc = 0x2E2B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2B28u;
    // 0x2e2b2c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2E2B28u, 0x2E2B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2B30u;
label_2e2b30:
    // 0x2e2b30: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2e2b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_2e2b34:
    // 0x2e2b34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2b38: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2B38u;
    {
        const bool branch_taken_0x2e2b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e2b38) {
            ctx->pc = 0x2E2B50u;
            goto label_2e2b50;
        }
    }
    ctx->pc = 0x2E2B40u;
label_2e2b40:
    // 0x2e2b40: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2e2b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2e2b44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e2b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e2b48: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2B48u;
    {
        const bool branch_taken_0x2e2b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e2b48) {
            ctx->pc = 0x2E2B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2B48u;
            // 0x2e2b4c: 0xc60002b4  lwc1        $f0, 0x2B4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2B60u;
            goto label_2e2b60;
        }
    }
    ctx->pc = 0x2E2B50u;
label_2e2b50:
    // 0x2e2b50: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2E2B50u;
    SET_GPR_U32(ctx, 31, 0x2E2B58u);
    ctx->pc = 0x2E2B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2B50u;
    // 0x2e2b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2E2B50u, 0x2E2B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2B58u;
label_2e2b58:
    // 0x2e2b58: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2E2B58u;
    {
        const bool branch_taken_0x2e2b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2B58u;
        // 0x2e2b5c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2b58) {
            ctx->pc = 0x2E2C38u;
            goto label_2e2c38;
        }
    }
    ctx->pc = 0x2E2B60u;
label_2e2b60:
    // 0x2e2b60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e2b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2b64: 0xc6030124  lwc1        $f3, 0x124($s0)
    ctx->pc = 0x2e2b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e2b68: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e2b68u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e2b6c: 0xc60402b0  lwc1        $f4, 0x2B0($s0)
    ctx->pc = 0x2e2b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e2b70: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2e2b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2b74: 0xc602012c  lwc1        $f2, 0x12C($s0)
    ctx->pc = 0x2e2b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2b78: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2e2b78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2e2b7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e2b7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e2b80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e2b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2b84: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2e2b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2e2b88: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2e2b88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2e2b8c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2e2b8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e2b90: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2e2b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e2b94: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2e2b94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e2b98: 0xe625000c  swc1        $f5, 0xC($s1)
    ctx->pc = 0x2e2b98u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2e2b9c: 0xe6010128  swc1        $f1, 0x128($s0)
    ctx->pc = 0x2e2b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2e2ba0: 0xe6030124  swc1        $f3, 0x124($s0)
    ctx->pc = 0x2e2ba0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2e2ba4: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2E2BA4u;
    SET_GPR_U32(ctx, 31, 0x2E2BACu);
    ctx->pc = 0x2E2BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2BA4u;
    // 0x2e2ba8: 0xe602012c  swc1        $f2, 0x12C($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2E2BA4u, 0x2E2BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2BACu;
label_2e2bac:
    // 0x2e2bac: 0x0  nop
    ctx->pc = 0x2e2bacu;
    // NOP
    // 0x2e2bb0: 0x0  nop
    ctx->pc = 0x2e2bb0u;
    // NOP
    // 0x2e2bb4: 0x46000044  c1          0x44
    ctx->pc = 0x2e2bb4u;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2e2bb8: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2e2bb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2bbc: 0x0  nop
    ctx->pc = 0x2e2bbcu;
    // NOP
    // 0x2e2bc0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2BC0u;
    {
        const bool branch_taken_0x2e2bc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e2bc0) {
            ctx->pc = 0x2E2BD4u;
            goto label_2e2bd4;
        }
    }
    ctx->pc = 0x2E2BC8u;
    // 0x2e2bc8: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x2E2BC8u;
    SET_GPR_U32(ctx, 31, 0x2E2BD0u);
    ctx->pc = 0x2E2BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2BC8u;
    // 0x2e2bcc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x2E2BC8u, 0x2E2BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2BD0u;
label_2e2bd0:
    // 0x2e2bd0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2e2bd0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2e2bd4:
    // 0x2e2bd4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e2bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2e2bd8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e2bd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e2bdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2be0: 0x0  nop
    ctx->pc = 0x2e2be0u;
    // NOP
    // 0x2e2be4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e2be4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2be8: 0x0  nop
    ctx->pc = 0x2e2be8u;
    // NOP
    // 0x2e2bec: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2E2BECu;
    {
        const bool branch_taken_0x2e2bec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2BECu;
        // 0x2e2bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2bec) {
            ctx->pc = 0x2E2C2Cu;
            goto label_2e2c2c;
        }
    }
    ctx->pc = 0x2E2BF4u;
    // 0x2e2bf4: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x2e2bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x2e2bf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2bfc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2e2bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2e2c00: 0xae0202cc  sw          $v0, 0x2CC($s0)
    ctx->pc = 0x2e2c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
    // 0x2e2c04: 0xe6000178  swc1        $f0, 0x178($s0)
    ctx->pc = 0x2e2c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
    // 0x2e2c08: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2e2c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2e2c0c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2e2c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2e2c10: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2e2c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2e2c14: 0xe600013c  swc1        $f0, 0x13C($s0)
    ctx->pc = 0x2e2c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x2e2c18: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x2e2c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x2e2c1c: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x2e2c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x2e2c20: 0xe6000180  swc1        $f0, 0x180($s0)
    ctx->pc = 0x2e2c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 384), bits); }
    // 0x2e2c24: 0xe600017c  swc1        $f0, 0x17C($s0)
    ctx->pc = 0x2e2c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 380), bits); }
label_2e2c28:
    // 0x2e2c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e2c2c:
    // 0x2e2c2c: 0xc0ad7f2  jal         func_2B5FC8
    ctx->pc = 0x2E2C2Cu;
    SET_GPR_U32(ctx, 31, 0x2E2C34u);
    ctx->pc = 0x2E2C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2C2Cu;
    // 0x2e2c30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FC8u, 0x2E2C2Cu, 0x2E2C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2C34u;
label_2e2c34:
    // 0x2e2c34: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2e2c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2e2c38:
    // 0x2e2c38: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2e2c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e2c3c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2e2c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e2c40: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2e2c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e2c44: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2e2c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e2c48: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2C48u;
        // 0x2e2c4c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2C50u;
}
