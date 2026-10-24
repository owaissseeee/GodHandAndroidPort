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

// Function: func_001067B8
// Address: 0x1067b8 - 0x106bf8
void func_001067B8_0x1067b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001067B8_0x1067b8");
#endif

    switch (ctx->pc) {
        case 0x106848u: goto label_106848;
        case 0x10686cu: goto label_10686c;
        case 0x1068a0u: goto label_1068a0;
        case 0x106980u: goto label_106980;
        case 0x106a04u: goto label_106a04;
        case 0x106a18u: goto label_106a18;
        case 0x106a24u: goto label_106a24;
        case 0x106aacu: goto label_106aac;
        case 0x106ae4u: goto label_106ae4;
        default: break;
    }

    ctx->pc = 0x1067b8u;

    // 0x1067b8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1067b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1067bc: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1067bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1067c0: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1067c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1067c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1067c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067c8: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1067c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x1067cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1067ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067d0: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1067d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1067d4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1067d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067d8: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1067d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1067dc: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x1067dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x1067e0: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x1067e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x1067e4: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x1067e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x1067e8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1067e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1067ec: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1067ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1067f0: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x1067f0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1067f4: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x1067f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1067f8: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x1067f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1067fc: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x1067fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x106800: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x106800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x106804: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x106804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106808: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x106808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10680c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x10680cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106810: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x106810u;
    {
        const bool branch_taken_0x106810 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x106814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106810u;
        // 0x106814: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106810) {
            ctx->pc = 0x106820u;
            goto label_106820;
        }
    }
    ctx->pc = 0x106818u;
    // 0x106818: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x106818u;
    {
        const bool branch_taken_0x106818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106818u;
        // 0x10681c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106818) {
            ctx->pc = 0x106BB0u;
            goto label_106bb0;
        }
    }
    ctx->pc = 0x106820u;
label_106820:
    // 0x106820: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x106820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106824: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x106824u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x106828: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x106828u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x10682c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x10682cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x106830: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x106830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x106834: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x106834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x106838: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x106838u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10683c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x10683cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x106840: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x106840u;
    SET_GPR_U32(ctx, 31, 0x106848u);
    ctx->pc = 0x106844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106840u;
    // 0x106844: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x106840u, 0x106848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106848u;
label_106848:
    // 0x106848: 0x0  nop
    ctx->pc = 0x106848u;
    // NOP
    // 0x10684c: 0x0  nop
    ctx->pc = 0x10684cu;
    // NOP
    // 0x106850: 0x46000544  c1          0x544
    ctx->pc = 0x106850u;
    ctx->f[21] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x106854: 0x4615a832  c.eq.s      $f21, $f21
    ctx->pc = 0x106854u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106858: 0x0  nop
    ctx->pc = 0x106858u;
    // NOP
    // 0x10685c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x10685Cu;
    {
        const bool branch_taken_0x10685c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10685c) {
            ctx->pc = 0x106860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10685Cu;
            // 0x106860: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106874u;
            goto label_106874;
        }
    }
    ctx->pc = 0x106864u;
    // 0x106864: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x106864u;
    SET_GPR_U32(ctx, 31, 0x10686Cu);
    ctx->pc = 0x106868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106864u;
    // 0x106868: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x106864u, 0x10686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10686Cu;
label_10686c:
    // 0x10686c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x10686cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x106870: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x106870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_106874:
    // 0x106874: 0x4600ae06  mov.s       $f24, $f21
    ctx->pc = 0x106874u;
    ctx->f[24] = FPU_MOV_S(ctx->f[21]);
    // 0x106878: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x106878u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x10687c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x10687cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106880: 0x104000ca  beqz        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x106880u;
    {
        const bool branch_taken_0x106880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106880u;
        // 0x106884: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106880) {
            ctx->pc = 0x106BACu;
            goto label_106bac;
        }
    }
    ctx->pc = 0x106888u;
    // 0x106888: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x106888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x10688c: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x10688cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x106890: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x106890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x106894: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x106894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x106898: 0x3c1e003c  lui         $fp, 0x3C
    ctx->pc = 0x106898u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
    // 0x10689c: 0x0  nop
    ctx->pc = 0x10689cu;
    // NOP
label_1068a0:
    // 0x1068a0: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x1068a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1068a4: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1068a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1068a8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1068a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1068ac: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1068acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1068b0: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1068b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1068b4: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1068b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1068b8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1068b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1068bc: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x1068bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1068c0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1068c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1068c4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1068c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1068c8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1068c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1068cc: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x1068ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1068d0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1068d0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1068d4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1068d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1068d8: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x1068d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1068dc: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x1068dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1068e0: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x1068e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1068e4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1068e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1068e8: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x1068e8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1068ec: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x1068ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1068f0: 0x0  nop
    ctx->pc = 0x1068f0u;
    // NOP
    // 0x1068f4: 0x450200a9  bc1fl       . + 4 + (0xA9 << 2)
    ctx->pc = 0x1068F4u;
    {
        const bool branch_taken_0x1068f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1068f4) {
            ctx->pc = 0x1068F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1068F4u;
            // 0x1068f8: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106B9Cu;
            goto label_106b9c;
        }
    }
    ctx->pc = 0x1068FCu;
    // 0x1068fc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1068fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106900: 0xc6020090  lwc1        $f2, 0x90($s0)
    ctx->pc = 0x106900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106904: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x106904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106908: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x106908u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x10690c: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x10690cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x106910: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x106910u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x106914: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x106914u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x106918: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x106918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10691c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x10691cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x106920: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x106920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x106924: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x106924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x106928: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x106928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10692c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x10692cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x106930: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x106930u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x106934: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x106934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x106938: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x106938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x10693c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x10693cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x106940: 0x0  nop
    ctx->pc = 0x106940u;
    // NOP
    // 0x106944: 0x0  nop
    ctx->pc = 0x106944u;
    // NOP
    // 0x106948: 0x46020084  c1          0x20084
    ctx->pc = 0x106948u;
    ctx->f[2] = ps2FpuSqrt(ctx->fcr31, ctx->f[2]);
    // 0x10694c: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x10694cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x106950: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x106950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x106954: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x106954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x106958: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x106958u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x10695c: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x10695cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x106960: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x106960u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x106964: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x106964u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x106968: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x106968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x10696c: 0x0  nop
    ctx->pc = 0x10696cu;
    // NOP
    // 0x106970: 0x0  nop
    ctx->pc = 0x106970u;
    // NOP
    // 0x106974: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x106974u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[12]);
    // 0x106978: 0xc07e050  jal         func_1F8140
    ctx->pc = 0x106978u;
    SET_GPR_U32(ctx, 31, 0x106980u);
    ctx->pc = 0x1F8140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8140u, 0x106978u, 0x106980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106980u;
label_106980:
    // 0x106980: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x106980u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x106984: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x106984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x106988: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x106988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x10698c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10698cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x106990: 0x0  nop
    ctx->pc = 0x106990u;
    // NOP
    // 0x106994: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x106994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106998: 0x0  nop
    ctx->pc = 0x106998u;
    // NOP
    // 0x10699c: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
    ctx->pc = 0x10699Cu;
    {
        const bool branch_taken_0x10699c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10699c) {
            ctx->pc = 0x106AD8u;
            goto label_106ad8;
        }
    }
    ctx->pc = 0x1069A4u;
    // 0x1069a4: 0x3c014048  lui         $at, 0x4048
    ctx->pc = 0x1069a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16456 << 16));
    // 0x1069a8: 0x34216c04  ori         $at, $at, 0x6C04
    ctx->pc = 0x1069a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27652);
    // 0x1069ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1069acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1069b0: 0x0  nop
    ctx->pc = 0x1069b0u;
    // NOP
    // 0x1069b4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1069b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1069b8: 0x0  nop
    ctx->pc = 0x1069b8u;
    // NOP
    // 0x1069bc: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x1069BCu;
    {
        const bool branch_taken_0x1069bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1069C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1069BCu;
        // 0x1069c0: 0x27b20040  addiu       $s2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1069bc) {
            ctx->pc = 0x106AD8u;
            goto label_106ad8;
        }
    }
    ctx->pc = 0x1069C4u;
    // 0x1069c4: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1069c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1069c8: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x1069c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1069cc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1069ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1069d0: 0xc6640004  lwc1        $f4, 0x4($s3)
    ctx->pc = 0x1069d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1069d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1069d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1069d8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x1069d8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1069dc: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1069dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1069e0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1069e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1069e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1069e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1069e8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1069e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1069ec: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1069ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1069f0: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x1069f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1069f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1069f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1069f8: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1069f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1069fc: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x1069FCu;
    SET_GPR_U32(ctx, 31, 0x106A04u);
    ctx->pc = 0x106A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1069FCu;
    // 0x106a00: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x1069FCu, 0x106A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A04u;
label_106a04:
    // 0x106a04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x106a04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x106a08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x106a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x106a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106a10: 0xc056bcc  jal         func_15AF30
    ctx->pc = 0x106A10u;
    SET_GPR_U32(ctx, 31, 0x106A18u);
    ctx->pc = 0x106A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A10u;
    // 0x106a14: 0x27c6d880  addiu       $a2, $fp, -0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4294957184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AF30u, 0x106A10u, 0x106A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A18u;
label_106a18:
    // 0x106a18: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x106a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106a1c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x106A1Cu;
    SET_GPR_U32(ctx, 31, 0x106A24u);
    ctx->pc = 0x106A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106A1Cu;
    // 0x106a20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x106A1Cu, 0x106A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106A24u;
label_106a24:
    // 0x106a24: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x106a24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106a28: 0x0  nop
    ctx->pc = 0x106a28u;
    // NOP
    // 0x106a2c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x106A2Cu;
    {
        const bool branch_taken_0x106a2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x106A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106A2Cu;
        // 0x106a30: 0xc7a30040  lwc1        $f3, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106a2c) {
            ctx->pc = 0x106A68u;
            goto label_106a68;
        }
    }
    ctx->pc = 0x106A34u;
    // 0x106a34: 0x0  nop
    ctx->pc = 0x106a34u;
    // NOP
    // 0x106a38: 0x0  nop
    ctx->pc = 0x106a38u;
    // NOP
    // 0x106a3c: 0x4600b083  div.s       $f2, $f22, $f0
    ctx->pc = 0x106a3cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[0]);
    // 0x106a40: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x106a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x106a44: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x106a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106a48: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x106a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106a4c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x106a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x106a50: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x106a50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x106a54: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x106a54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x106a58: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x106a58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x106a5c: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x106a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x106a60: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x106a60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x106a64: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x106a64u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_106a68:
    // 0x106a68: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x106a68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x106a6c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x106a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x106a70: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x106a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106a74: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x106a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106a78: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x106a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106a7c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x106a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x106a80: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x106a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x106a84: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x106a84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x106a88: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x106a88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106a8c: 0x4408c000  mfc1        $t0, $f24
    ctx->pc = 0x106a8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[24], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x106a90: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x106a90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x106a94: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x106a94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x106a98: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x106a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x106a9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x106a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106aa0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x106aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106aa4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x106AA4u;
    SET_GPR_U32(ctx, 31, 0x106AACu);
    ctx->pc = 0x106AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106AA4u;
    // 0x106aa8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x106AA4u, 0x106AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106AACu;
label_106aac:
    // 0x106aac: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x106aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106ab0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x106ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106ab4: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x106ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106ab8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x106ab8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x106abc: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x106abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x106ac0: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x106ac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x106ac4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x106ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106ac8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x106ac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x106acc: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x106accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x106ad0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x106AD0u;
    {
        const bool branch_taken_0x106ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AD0u;
        // 0x106ad4: 0xc6610008  lwc1        $f1, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ad0) {
            ctx->pc = 0x106B8Cu;
            goto label_106b8c;
        }
    }
    ctx->pc = 0x106AD8u;
label_106ad8:
    // 0x106ad8: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x106ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106adc: 0xc04078a  jal         func_101E28
    ctx->pc = 0x106ADCu;
    SET_GPR_U32(ctx, 31, 0x106AE4u);
    ctx->pc = 0x106AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106ADCu;
    // 0x106ae0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x106ADCu, 0x106AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106AE4u;
label_106ae4:
    // 0x106ae4: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x106ae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106ae8: 0x0  nop
    ctx->pc = 0x106ae8u;
    // NOP
    // 0x106aec: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x106AECu;
    {
        const bool branch_taken_0x106aec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x106AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AECu;
        // 0x106af0: 0xc7a30040  lwc1        $f3, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106aec) {
            ctx->pc = 0x106B28u;
            goto label_106b28;
        }
    }
    ctx->pc = 0x106AF4u;
    // 0x106af4: 0x0  nop
    ctx->pc = 0x106af4u;
    // NOP
    // 0x106af8: 0x0  nop
    ctx->pc = 0x106af8u;
    // NOP
    // 0x106afc: 0x4600b083  div.s       $f2, $f22, $f0
    ctx->pc = 0x106afcu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[0]);
    // 0x106b00: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x106b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x106b04: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x106b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106b08: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x106b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106b0c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x106b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x106b10: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x106b10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x106b14: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x106b14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x106b18: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x106b18u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x106b1c: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x106b1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x106b20: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x106b20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x106b24: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x106b24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_106b28:
    // 0x106b28: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x106b28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x106b2c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x106b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x106b30: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x106b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106b34: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x106b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106b38: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x106b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106b3c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x106b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x106b40: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x106b40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x106b44: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x106b44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x106b48: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x106b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106b4c: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x106b4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x106b50: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x106b50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106b54: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x106b54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x106b58: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x106b58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x106b5c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x106b5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x106b60: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x106b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x106b64: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x106b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106b68: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x106b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106b6c: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x106b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106b70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x106b70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x106b74: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x106b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x106b78: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x106b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x106b7c: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x106b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106b80: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x106b80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x106b84: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x106b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x106b88: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x106b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_106b8c:
    // 0x106b8c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x106b8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x106b90: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x106b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x106b94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x106b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106b98: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x106b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_106b9c:
    // 0x106b9c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x106b9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x106ba0: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x106ba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x106ba4: 0x1440ff3e  bnez        $v0, . + 4 + (-0xC2 << 2)
    ctx->pc = 0x106BA4u;
    {
        const bool branch_taken_0x106ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BA4u;
        // 0x106ba8: 0x261000c0  addiu       $s0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ba4) {
            ctx->pc = 0x1068A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1068a0;
        }
    }
    ctx->pc = 0x106BACu;
label_106bac:
    // 0x106bac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x106bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_106bb0:
    // 0x106bb0: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x106bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x106bb4: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x106bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x106bb8: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x106bb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x106bbc: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x106bbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x106bc0: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x106bc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x106bc4: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x106bc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x106bc8: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x106bc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x106bcc: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x106bccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x106bd0: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x106bd0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x106bd4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x106bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106bd8: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x106bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x106bdc: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x106bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x106be0: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x106be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x106be4: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x106be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x106be8: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x106be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x106bec: 0x3e00008  jr          $ra
    ctx->pc = 0x106BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BECu;
        // 0x106bf0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106BF4u;
    // 0x106bf4: 0x0  nop
    ctx->pc = 0x106bf4u;
    // NOP
    ctx->pc = 0x106bf8u;
}
