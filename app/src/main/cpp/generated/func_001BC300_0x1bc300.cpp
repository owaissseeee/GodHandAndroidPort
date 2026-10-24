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

// Function: func_001BC300
// Address: 0x1bc300 - 0x1bc538
void func_001BC300_0x1bc300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BC300_0x1bc300");
#endif

    switch (ctx->pc) {
        case 0x1bc374u: goto label_1bc374;
        case 0x1bc394u: goto label_1bc394;
        case 0x1bc3c0u: goto label_1bc3c0;
        case 0x1bc3e4u: goto label_1bc3e4;
        case 0x1bc424u: goto label_1bc424;
        case 0x1bc430u: goto label_1bc430;
        case 0x1bc448u: goto label_1bc448;
        case 0x1bc464u: goto label_1bc464;
        case 0x1bc488u: goto label_1bc488;
        case 0x1bc4b4u: goto label_1bc4b4;
        case 0x1bc4dcu: goto label_1bc4dc;
        case 0x1bc508u: goto label_1bc508;
        default: break;
    }

    ctx->pc = 0x1bc300u;

    // 0x1bc300: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1bc300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1bc304: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1bc304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1bc308: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1bc308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1bc30c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bc30cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc310: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1bc310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1bc314: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1bc314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1bc318: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1bc318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1bc31c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bc31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bc320: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1bc320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1bc324: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bc324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bc328: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1bc328u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1bc32c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1bc32cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1bc330: 0x9e420620  lwu         $v0, 0x620($s2)
    ctx->pc = 0x1bc330u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 1568)));
    // 0x1bc334: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bc338: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1BC338u;
    {
        const bool branch_taken_0x1bc338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc338) {
            ctx->pc = 0x1BC33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC338u;
            // 0x1bc33c: 0xc6400610  lwc1        $f0, 0x610($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC3C8u;
            goto label_1bc3c8;
        }
    }
    ctx->pc = 0x1BC340u;
    // 0x1bc340: 0x8e420634  lw          $v0, 0x634($s2)
    ctx->pc = 0x1bc340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1588)));
    // 0x1bc344: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1BC344u;
    {
        const bool branch_taken_0x1bc344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC344u;
        // 0x1bc348: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc344) {
            ctx->pc = 0x1BC50Cu;
            goto label_1bc50c;
        }
    }
    ctx->pc = 0x1BC34Cu;
    // 0x1bc34c: 0x86420630  lh          $v0, 0x630($s2)
    ctx->pc = 0x1bc34cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1584)));
    // 0x1bc350: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x1bc350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1bc354: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1BC354u;
    {
        const bool branch_taken_0x1bc354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC354u;
        // 0x1bc358: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc354) {
            ctx->pc = 0x1BC510u;
            goto label_1bc510;
        }
    }
    ctx->pc = 0x1BC35Cu;
    // 0x1bc35c: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x1bc35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc360: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1bc360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1bc364: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1bc364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1bc368: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bc368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc36c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1BC36Cu;
    SET_GPR_U32(ctx, 31, 0x1BC374u);
    ctx->pc = 0x1BC370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC36Cu;
    // 0x1bc370: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1BC36Cu, 0x1BC374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC374u;
label_1bc374:
    // 0x1bc374: 0x8e420634  lw          $v0, 0x634($s2)
    ctx->pc = 0x1bc374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1588)));
    // 0x1bc378: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1bc378u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1bc37c: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x1bc37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1bc380: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1bc380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1bc384: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1bc384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1bc388: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bc388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1bc38c: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x1BC38Cu;
    SET_GPR_U32(ctx, 31, 0x1BC394u);
    ctx->pc = 0x1BC390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC38Cu;
    // 0x1bc390: 0x8c4500f0  lw          $a1, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x1BC38Cu, 0x1BC394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC394u;
label_1bc394:
    // 0x1bc394: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1bc394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc398: 0x0  nop
    ctx->pc = 0x1bc398u;
    // NOP
    // 0x1bc39c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc39cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc3a0: 0x0  nop
    ctx->pc = 0x1bc3a0u;
    // NOP
    // 0x1bc3a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC3A4u;
    {
        const bool branch_taken_0x1bc3a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3A4u;
        // 0x1bc3a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc3a4) {
            ctx->pc = 0x1BC3B4u;
            goto label_1bc3b4;
        }
    }
    ctx->pc = 0x1BC3ACu;
    // 0x1bc3ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC3ACu;
    {
        const bool branch_taken_0x1bc3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3ACu;
        // 0x1bc3b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc3ac) {
            ctx->pc = 0x1BC3B8u;
            goto label_1bc3b8;
        }
    }
    ctx->pc = 0x1BC3B4u;
label_1bc3b4:
    // 0x1bc3b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bc3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc3b8:
    // 0x1bc3b8: 0xc06f3ec  jal         func_1BCFB0
    ctx->pc = 0x1BC3B8u;
    SET_GPR_U32(ctx, 31, 0x1BC3C0u);
    ctx->pc = 0x1BC3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC3B8u;
    // 0x1bc3bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFB0u, 0x1BC3B8u, 0x1BC3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC3C0u;
label_1bc3c0:
    // 0x1bc3c0: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1BC3C0u;
    {
        const bool branch_taken_0x1bc3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3C0u;
        // 0x1bc3c4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc3c0) {
            ctx->pc = 0x1BC50Cu;
            goto label_1bc50c;
        }
    }
    ctx->pc = 0x1BC3C8u;
label_1bc3c8:
    // 0x1bc3c8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1bc3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1bc3cc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1bc3ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1bc3d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bc3d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc3d4: 0x8e5000f0  lw          $s0, 0xF0($s2)
    ctx->pc = 0x1bc3d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1bc3d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bc3d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bc3dc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1BC3DCu;
    SET_GPR_U32(ctx, 31, 0x1BC3E4u);
    ctx->pc = 0x1BC3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC3DCu;
    // 0x1bc3e0: 0x46000542  mul.s       $f21, $f0, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1BC3DCu, 0x1BC3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC3E4u;
label_1bc3e4:
    // 0x1bc3e4: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1bc3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1bc3e8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1bc3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bc3ec: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1bc3ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bc3f0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1bc3f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc3f4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1bc3f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1bc3f8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1bc3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1bc3fc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1bc3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bc400: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1bc400u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc404: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1bc404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1bc408: 0xc6400638  lwc1        $f0, 0x638($s2)
    ctx->pc = 0x1bc408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc40c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1bc40cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc410: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1bc410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x1bc414: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1bc414u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1bc418: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bc418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc41c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1BC41Cu;
    SET_GPR_U32(ctx, 31, 0x1BC424u);
    ctx->pc = 0x1BC420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC41Cu;
    // 0x1bc420: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1BC41Cu, 0x1BC424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC424u;
label_1bc424:
    // 0x1bc424: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1bc424u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1bc428: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x1BC428u;
    SET_GPR_U32(ctx, 31, 0x1BC430u);
    ctx->pc = 0x1BC42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC428u;
    // 0x1bc42c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1BC428u, 0x1BC430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC430u;
label_1bc430:
    // 0x1bc430: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1bc430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc434: 0x0  nop
    ctx->pc = 0x1bc434u;
    // NOP
    // 0x1bc438: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1BC438u;
    {
        const bool branch_taken_0x1bc438 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC438u;
        // 0x1bc43c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc438) {
            ctx->pc = 0x1BC470u;
            goto label_1bc470;
        }
    }
    ctx->pc = 0x1BC440u;
    // 0x1bc440: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1BC440u;
    SET_GPR_U32(ctx, 31, 0x1BC448u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1BC440u, 0x1BC448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC448u;
label_1bc448:
    // 0x1bc448: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1bc448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1bc44c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1bc44cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1bc450: 0x3c013fdf  lui         $at, 0x3FDF
    ctx->pc = 0x1bc450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16351 << 16));
    // 0x1bc454: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x1bc454u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x1bc458: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bc458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1bc45c: 0xc0b68b4  jal         func_2DA2D0
    ctx->pc = 0x1BC45Cu;
    SET_GPR_U32(ctx, 31, 0x1BC464u);
    ctx->pc = 0x1BC460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC45Cu;
    // 0x1bc460: 0x8e4400f0  lw          $a0, 0xF0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2D0u, 0x1BC45Cu, 0x1BC464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC464u;
label_1bc464:
    // 0x1bc464: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bc464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc468: 0x10430027  beq         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1BC468u;
    {
        const bool branch_taken_0x1bc468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BC46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC468u;
        // 0x1bc46c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc468) {
            ctx->pc = 0x1BC508u;
            goto label_1bc508;
        }
    }
    ctx->pc = 0x1BC470u;
label_1bc470:
    // 0x1bc470: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x1bc470u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27120)));
    // 0x1bc474: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BC474u;
    {
        const bool branch_taken_0x1bc474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC474u;
        // 0x1bc478: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc474) {
            ctx->pc = 0x1BC4F0u;
            goto label_1bc4f0;
        }
    }
    ctx->pc = 0x1BC47Cu;
    // 0x1bc47c: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x1bc47cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bc480: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1bc480u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc484: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x1bc484u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1bc488:
    // 0x1bc488: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x1bc488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1bc48c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1bc48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1bc490: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1bc490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bc494: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1bc494u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc498: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1bc498u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc49c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1bc49cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1bc4a0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1bc4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1bc4a4: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1bc4a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bc4a8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1bc4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1bc4ac: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x1BC4ACu;
    SET_GPR_U32(ctx, 31, 0x1BC4B4u);
    ctx->pc = 0x1BC4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC4ACu;
    // 0x1bc4b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1BC4ACu, 0x1BC4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4B4u;
label_1bc4b4:
    // 0x1bc4b4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1bc4b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc4b8: 0x0  nop
    ctx->pc = 0x1bc4b8u;
    // NOP
    // 0x1bc4bc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1BC4BCu;
    {
        const bool branch_taken_0x1bc4bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC4BCu;
        // 0x1bc4c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc4bc) {
            ctx->pc = 0x1BC4E4u;
            goto label_1bc4e4;
        }
    }
    ctx->pc = 0x1BC4C4u;
    // 0x1bc4c4: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x1bc4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1bc4c8: 0x3c013fdf  lui         $at, 0x3FDF
    ctx->pc = 0x1bc4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16351 << 16));
    // 0x1bc4cc: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x1bc4ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x1bc4d0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bc4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1bc4d4: 0xc0b68b4  jal         func_2DA2D0
    ctx->pc = 0x1BC4D4u;
    SET_GPR_U32(ctx, 31, 0x1BC4DCu);
    ctx->pc = 0x1BC4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC4D4u;
    // 0x1bc4d8: 0x8e4400f0  lw          $a0, 0xF0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2D0u, 0x1BC4D4u, 0x1BC4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4DCu;
label_1bc4dc:
    // 0x1bc4dc: 0x50540004  beql        $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC4DCu;
    {
        const bool branch_taken_0x1bc4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x1bc4dc) {
            ctx->pc = 0x1BC4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC4DCu;
            // 0x1bc4e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC4F0u;
            goto label_1bc4f0;
        }
    }
    ctx->pc = 0x1BC4E4u;
label_1bc4e4:
    // 0x1bc4e4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1bc4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bc4e8: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1BC4E8u;
    {
        const bool branch_taken_0x1bc4e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc4e8) {
            ctx->pc = 0x1BC4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC4E8u;
            // 0x1bc4ec: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc488;
        }
    }
    ctx->pc = 0x1BC4F0u;
label_1bc4f0:
    // 0x1bc4f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc4f4: 0x16a20005  bne         $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC4F4u;
    {
        const bool branch_taken_0x1bc4f4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC4F4u;
        // 0x1bc4f8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc4f4) {
            ctx->pc = 0x1BC50Cu;
            goto label_1bc50c;
        }
    }
    ctx->pc = 0x1BC4FCu;
    // 0x1bc4fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc500: 0xc06f448  jal         func_1BD120
    ctx->pc = 0x1BC500u;
    SET_GPR_U32(ctx, 31, 0x1BC508u);
    ctx->pc = 0x1BC504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC500u;
    // 0x1bc504: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD120u, 0x1BC500u, 0x1BC508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC508u;
label_1bc508:
    // 0x1bc508: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1bc508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1bc50c:
    // 0x1bc50c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1bc50cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1bc510:
    // 0x1bc510: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1bc510u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bc514: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1bc514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bc518: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1bc518u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bc51c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bc51cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bc520: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1bc520u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bc524: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bc524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc528: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1bc528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1bc52c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1bc52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bc530: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC530u;
        // 0x1bc534: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC538u;
}
