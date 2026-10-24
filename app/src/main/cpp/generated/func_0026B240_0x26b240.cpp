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

// Function: func_0026B240
// Address: 0x26b240 - 0x26b4e8
void func_0026B240_0x26b240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026B240_0x26b240");
#endif

    switch (ctx->pc) {
        case 0x26b2b8u: goto label_26b2b8;
        case 0x26b2f4u: goto label_26b2f4;
        case 0x26b308u: goto label_26b308;
        case 0x26b328u: goto label_26b328;
        case 0x26b380u: goto label_26b380;
        case 0x26b404u: goto label_26b404;
        case 0x26b464u: goto label_26b464;
        case 0x26b4c0u: goto label_26b4c0;
        default: break;
    }

    ctx->pc = 0x26b240u;

    // 0x26b240: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x26b240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x26b244: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x26b244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x26b248: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x26b248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x26b24c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26b24cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b250: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x26b250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x26b254: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26b254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b258: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x26b258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x26b25c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x26b25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x26b260: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x26b260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x26b264: 0x12400096  beqz        $s2, . + 4 + (0x96 << 2)
    ctx->pc = 0x26B264u;
    {
        const bool branch_taken_0x26b264 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B264u;
        // 0x26b268: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b264) {
            ctx->pc = 0x26B4C0u;
            goto label_26b4c0;
        }
    }
    ctx->pc = 0x26B26Cu;
    // 0x26b26c: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x26b26cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x26b270: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26b270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b274: 0x4e00002  bltz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x26B274u;
    {
        const bool branch_taken_0x26b274 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x26B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B274u;
        // 0x26b278: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b274) {
            ctx->pc = 0x26B280u;
            goto label_26b280;
        }
    }
    ctx->pc = 0x26B27Cu;
    // 0x26b27c: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x26b27cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_26b280:
    // 0x26b280: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26b280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26b284: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26B284u;
    {
        const bool branch_taken_0x26b284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B284u;
        // 0x26b288: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b284) {
            ctx->pc = 0x26B29Cu;
            goto label_26b29c;
        }
    }
    ctx->pc = 0x26B28Cu;
    // 0x26b28c: 0x8e830278  lw          $v1, 0x278($s4)
    ctx->pc = 0x26b28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x26b290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26b290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b294: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26B294u;
    {
        const bool branch_taken_0x26b294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B294u;
        // 0x26b298: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b294) {
            ctx->pc = 0x26B2A0u;
            goto label_26b2a0;
        }
    }
    ctx->pc = 0x26B29Cu;
label_26b29c:
    // 0x26b29c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26b29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b2a0:
    // 0x26b2a0: 0x52000088  beql        $s0, $zero, . + 4 + (0x88 << 2)
    ctx->pc = 0x26B2A0u;
    {
        const bool branch_taken_0x26b2a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b2a0) {
            ctx->pc = 0x26B2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B2A0u;
            // 0x26b2a4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B4C4u;
            goto label_26b4c4;
        }
    }
    ctx->pc = 0x26B2A8u;
    // 0x26b2a8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x26b2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26b2ac: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x26b2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26b2b0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x26B2B0u;
    SET_GPR_U32(ctx, 31, 0x26B2B8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x26B2B0u, 0x26B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B2B8u;
label_26b2b8:
    // 0x26b2b8: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x26b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x26b2bc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x26b2bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26b2c0: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26B2C0u;
    {
        const bool branch_taken_0x26b2c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b2c0) {
            ctx->pc = 0x26B2E0u;
            goto label_26b2e0;
        }
    }
    ctx->pc = 0x26B2C8u;
    // 0x26b2c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26b2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b2cc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26b2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26b2d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26b2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b2d4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x26b2d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26b2d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26b2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b2dc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x26b2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_26b2e0:
    // 0x26b2e0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26b2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x26b2e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26b2e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x26b2e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26b2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26b2ec: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x26B2ECu;
    SET_GPR_U32(ctx, 31, 0x26B2F4u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B2ECu, 0x26B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B2F4u;
label_26b2f4:
    // 0x26b2f4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x26b2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b2f8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26b2f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x26b2fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26b2fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26b300: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x26B300u;
    SET_GPR_U32(ctx, 31, 0x26B308u);
    ctx->pc = 0x26B304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B300u;
    // 0x26b304: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B300u, 0x26B308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B308u;
label_26b308:
    // 0x26b308: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26b308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x26b30c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x26b30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x26b310: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26b310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26b314: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x26b314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b318: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26b318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26b31c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26b31cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26b320: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x26B320u;
    SET_GPR_U32(ctx, 31, 0x26B328u);
    ctx->pc = 0x26B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B320u;
    // 0x26b324: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26B320u, 0x26B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B328u;
label_26b328:
    // 0x26b328: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26b328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x26b32c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x26b32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b330: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x26b330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26b334: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26b334u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26b338: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x26b338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26b33c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x26b340: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x26b340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26b344: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x26b344u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26b348: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x26b348u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b34c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26b34cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26b350: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x26b350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26b354: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x26b354u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26b358: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x26b358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26b35c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x26b35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b360: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x26b360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b364: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x26b364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26b368: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26b368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26b36c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x26b36cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26b370: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x26b370u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x26b374: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x26b374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26b378: 0xc04078a  jal         func_101E28
    ctx->pc = 0x26B378u;
    SET_GPR_U32(ctx, 31, 0x26B380u);
    ctx->pc = 0x26B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B378u;
    // 0x26b37c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x26B378u, 0x26B380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B380u;
label_26b380:
    // 0x26b380: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x26b380u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x26b384: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26b384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b388: 0x0  nop
    ctx->pc = 0x26b388u;
    // NOP
    // 0x26b38c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x26b38cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26b390: 0x0  nop
    ctx->pc = 0x26b390u;
    // NOP
    // 0x26b394: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x26B394u;
    {
        const bool branch_taken_0x26b394 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B394u;
        // 0x26b398: 0xc7a40020  lwc1        $f4, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b394) {
            ctx->pc = 0x26B3D8u;
            goto label_26b3d8;
        }
    }
    ctx->pc = 0x26B39Cu;
    // 0x26b39c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26b39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26b3a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26b3a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26b3a4: 0x0  nop
    ctx->pc = 0x26b3a4u;
    // NOP
    // 0x26b3a8: 0x0  nop
    ctx->pc = 0x26b3a8u;
    // NOP
    // 0x26b3ac: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x26b3acu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x26b3b0: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x26b3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26b3b4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x26b3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26b3b8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x26b3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b3bc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26b3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x26b3c0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x26b3c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x26b3c4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x26b3c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x26b3c8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x26b3c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x26b3cc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x26b3ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26b3d0: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x26b3d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26b3d4: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x26b3d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_26b3d8:
    // 0x26b3d8: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x26b3d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26b3dc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x26b3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26b3e0: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x26b3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26b3e4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26b3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x26b3e8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x26b3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b3ec: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x26b3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x26b3f0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x26b3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b3f4: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x26b3f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26b3f8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x26b3f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26b3fc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x26B3FCu;
    SET_GPR_U32(ctx, 31, 0x26B404u);
    ctx->pc = 0x26B400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B3FCu;
    // 0x26b400: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26B3FCu, 0x26B404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B404u;
label_26b404:
    // 0x26b404: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x26b404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26b408: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x26b408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x26b40c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26b40cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x26b410: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26b410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26b414: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B414u;
    {
        const bool branch_taken_0x26b414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26b414) {
            ctx->pc = 0x26B428u;
            goto label_26b428;
        }
    }
    ctx->pc = 0x26B41Cu;
    // 0x26b41c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x26b41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x26b420: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x26b420u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x26b424: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26b424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26b428:
    // 0x26b428: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x26b428u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b42c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x26b42cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x26b430: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x26b430u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x26b434: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x26b434u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26b438: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x26b438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26b43c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x26b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x26b440: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26b440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b444: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x26b444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x26b448: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x26b448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x26b44c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26b44cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b450: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26b450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b454: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26b454u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b458: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26b458u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b45c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x26B45Cu;
    SET_GPR_U32(ctx, 31, 0x26B464u);
    ctx->pc = 0x26B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B45Cu;
    // 0x26b460: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x26B45Cu, 0x26B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B464u;
label_26b464:
    // 0x26b464: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x26b464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x26b468: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x26b46c: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B46Cu;
    {
        const bool branch_taken_0x26b46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b46c) {
            ctx->pc = 0x26B470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B46Cu;
            // 0x26b470: 0x26430490  addiu       $v1, $s2, 0x490 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B494u;
            goto label_26b494;
        }
    }
    ctx->pc = 0x26B474u;
    // 0x26b474: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26b474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b478: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x26b478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x26b47c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26b47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b480: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x26b480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x26b484: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26b484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b488: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x26b488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x26b48c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x26b490: 0x26430490  addiu       $v1, $s2, 0x490
    ctx->pc = 0x26b490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
label_26b494:
    // 0x26b494: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26B494u;
    {
        const bool branch_taken_0x26b494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B494u;
        // 0x26b498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b494) {
            ctx->pc = 0x26B4B4u;
            goto label_26b4b4;
        }
    }
    ctx->pc = 0x26B49Cu;
    // 0x26b49c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26b49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b4a0: 0xe6400490  swc1        $f0, 0x490($s2)
    ctx->pc = 0x26b4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1168), bits); }
    // 0x26b4a4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26b4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26b4a8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x26b4a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x26b4ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26b4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26b4b0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x26b4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_26b4b4:
    // 0x26b4b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x26b4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b4b8: 0xc073e88  jal         func_1CFA20
    ctx->pc = 0x26B4B8u;
    SET_GPR_U32(ctx, 31, 0x26B4C0u);
    ctx->pc = 0x26B4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B4B8u;
    // 0x26b4bc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA20u, 0x26B4B8u, 0x26B4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B4C0u;
label_26b4c0:
    // 0x26b4c0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x26b4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_26b4c4:
    // 0x26b4c4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x26b4c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26b4c8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x26b4c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26b4cc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x26b4ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26b4d0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x26b4d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26b4d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x26b4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b4d8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x26b4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26b4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x26B4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B4DCu;
        // 0x26b4e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B4E4u;
    // 0x26b4e4: 0x0  nop
    ctx->pc = 0x26b4e4u;
    // NOP
    ctx->pc = 0x26b4e8u;
}
