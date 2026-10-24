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

// Function: func_001A6310
// Address: 0x1a6310 - 0x1a6550
void func_001A6310_0x1a6310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A6310_0x1a6310");
#endif

    switch (ctx->pc) {
        case 0x1a6370u: goto label_1a6370;
        case 0x1a63a0u: goto label_1a63a0;
        case 0x1a6454u: goto label_1a6454;
        case 0x1a6468u: goto label_1a6468;
        case 0x1a64b4u: goto label_1a64b4;
        default: break;
    }

    ctx->pc = 0x1a6310u;

    // 0x1a6310: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a6310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a6314: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a6314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a6318: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a6318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a631c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a631cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6320: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a6320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a6324: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1a6324u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a6328: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x1a6328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
    // 0x1a632c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A632Cu;
    {
        const bool branch_taken_0x1a632c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A632Cu;
        // 0x1a6330: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a632c) {
            ctx->pc = 0x1A6344u;
            goto label_1a6344;
        }
    }
    ctx->pc = 0x1A6334u;
    // 0x1a6334: 0x5062005c  beql        $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1A6334u;
    {
        const bool branch_taken_0x1a6334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6334) {
            ctx->pc = 0x1A6338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6334u;
            // 0x1a6338: 0xc6000100  lwc1        $f0, 0x100($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A64A8u;
            goto label_1a64a8;
        }
    }
    ctx->pc = 0x1A633Cu;
    // 0x1a633c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1A633Cu;
    {
        const bool branch_taken_0x1a633c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A633Cu;
        // 0x1a6340: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a633c) {
            ctx->pc = 0x1A6538u;
            goto label_1a6538;
        }
    }
    ctx->pc = 0x1A6344u;
label_1a6344:
    // 0x1a6344: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1a6344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1a6348: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a6348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a634c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1a634cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1a6350: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x1a6350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1a6354: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a6354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6358: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a6358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a635c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a635cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6360: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a6360u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6364: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a6364u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6368: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1A6368u;
    SET_GPR_U32(ctx, 31, 0x1A6370u);
    ctx->pc = 0x1A636Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6368u;
    // 0x1a636c: 0x26110610  addiu       $s1, $s0, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1A6368u, 0x1A6370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6370u;
label_1a6370:
    // 0x1a6370: 0x260205c0  addiu       $v0, $s0, 0x5C0
    ctx->pc = 0x1a6370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1472));
    // 0x1a6374: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A6374u;
    {
        const bool branch_taken_0x1a6374 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a6374) {
            ctx->pc = 0x1A6394u;
            goto label_1a6394;
        }
    }
    ctx->pc = 0x1A637Cu;
    // 0x1a637c: 0xc60005c0  lwc1        $f0, 0x5C0($s0)
    ctx->pc = 0x1a637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6380: 0xe6000610  swc1        $f0, 0x610($s0)
    ctx->pc = 0x1a6380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    // 0x1a6384: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a6384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6388: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1a6388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1a638c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a638cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6390: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1a6390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1a6394:
    // 0x1a6394: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1a6394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a6398: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1A6398u;
    SET_GPR_U32(ctx, 31, 0x1A63A0u);
    ctx->pc = 0x1A639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6398u;
    // 0x1a639c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1A6398u, 0x1A63A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A63A0u;
label_1a63a0:
    // 0x1a63a0: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x1a63a0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x1a63a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a63a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a63a8: 0x0  nop
    ctx->pc = 0x1a63a8u;
    // NOP
    // 0x1a63ac: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1a63acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a63b0: 0x0  nop
    ctx->pc = 0x1a63b0u;
    // NOP
    // 0x1a63b4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1A63B4u;
    {
        const bool branch_taken_0x1a63b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63B4u;
        // 0x1a63b8: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63b4) {
            ctx->pc = 0x1A63FCu;
            goto label_1a63fc;
        }
    }
    ctx->pc = 0x1A63BCu;
    // 0x1a63bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a63bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a63c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a63c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a63c4: 0xc6010610  lwc1        $f1, 0x610($s0)
    ctx->pc = 0x1a63c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a63c8: 0x0  nop
    ctx->pc = 0x1a63c8u;
    // NOP
    // 0x1a63cc: 0x0  nop
    ctx->pc = 0x1a63ccu;
    // NOP
    // 0x1a63d0: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x1a63d0u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x1a63d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a63d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a63d8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1a63d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a63dc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1a63dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a63e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a63e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a63e4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1a63e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a63e8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1a63e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a63ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a63ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a63f0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1a63f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a63f4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1a63f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a63f8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1a63f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1a63fc:
    // 0x1a63fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1a63fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6400: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1a6400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a6404: 0x123d0006  beq         $s1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6404u;
    {
        const bool branch_taken_0x1a6404 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 29));
        ctx->pc = 0x1A6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6404u;
        // 0x1a6408: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6404) {
            ctx->pc = 0x1A6420u;
            goto label_1a6420;
        }
    }
    ctx->pc = 0x1A640Cu;
    // 0x1a640c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1a640cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6410: 0xe6000610  swc1        $f0, 0x610($s0)
    ctx->pc = 0x1a6410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    // 0x1a6414: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1a6414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1a6418: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a6418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a641c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1a641cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1a6420:
    // 0x1a6420: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1a6420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x1a6424: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a6424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a6428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a6428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a642c: 0xda040610  lqc2        $vf4, 0x610($s0)
    ctx->pc = 0x1a642cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 1552)));
    // 0x1a6430: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1a6430u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1a6434: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1a6434u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1a6438: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1a6438u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a643c: 0xfa040610  sqc2        $vf4, 0x610($s0)
    ctx->pc = 0x1a643cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1552), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a6440: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1a6440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1a6444: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a6444u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a6448: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a6448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a644c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A644Cu;
    SET_GPR_U32(ctx, 31, 0x1A6454u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A644Cu, 0x1A6454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6454u;
label_1a6454:
    // 0x1a6454: 0xc6010610  lwc1        $f1, 0x610($s0)
    ctx->pc = 0x1a6454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6458: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a6458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a645c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a645cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a6460: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1A6460u;
    SET_GPR_U32(ctx, 31, 0x1A6468u);
    ctx->pc = 0x1A6464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6460u;
    // 0x1a6464: 0xe6010610  swc1        $f1, 0x610($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1A6460u, 0x1A6468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6468u;
label_1a6468:
    // 0x1a6468: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a6468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a646c: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x1a646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6470: 0x3c013cd6  lui         $at, 0x3CD6
    ctx->pc = 0x1a6470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15574 << 16));
    // 0x1a6474: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x1a6474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
    // 0x1a6478: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a6478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a647c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a647cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6480: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a6480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6484: 0xa6020600  sh          $v0, 0x600($s0)
    ctx->pc = 0x1a6484u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1536), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a6488: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a6488u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a648c: 0xe6020620  swc1        $f2, 0x620($s0)
    ctx->pc = 0x1a648cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
    // 0x1a6490: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x1a6490u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6494: 0xa6000602  sh          $zero, 0x602($s0)
    ctx->pc = 0x1a6494u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1538), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a6498: 0xe6010618  swc1        $f1, 0x618($s0)
    ctx->pc = 0x1a6498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1560), bits); }
    // 0x1a649c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1a649cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a64a0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1a64a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a64a4: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x1a64a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a64a8:
    // 0x1a64a8: 0xc60c0620  lwc1        $f12, 0x620($s0)
    ctx->pc = 0x1a64a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a64ac: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1A64ACu;
    SET_GPR_U32(ctx, 31, 0x1A64B4u);
    ctx->pc = 0x1A64B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A64ACu;
    // 0x1a64b0: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1A64ACu, 0x1A64B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A64B4u;
label_1a64b4:
    // 0x1a64b4: 0xc6020620  lwc1        $f2, 0x620($s0)
    ctx->pc = 0x1a64b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a64b8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1a64b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1a64bc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a64bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1a64c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a64c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a64c4: 0x96020600  lhu         $v0, 0x600($s0)
    ctx->pc = 0x1a64c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1a64c8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1a64c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1a64cc: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1a64ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1a64d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a64d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a64d4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a64d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a64d8: 0xa6020600  sh          $v0, 0x600($s0)
    ctx->pc = 0x1a64d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1536), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a64dc: 0x1c600015  bgtz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A64DCu;
    {
        const bool branch_taken_0x1a64dc = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1A64E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64DCu;
        // 0x1a64e0: 0xe6020620  swc1        $f2, 0x620($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64dc) {
            ctx->pc = 0x1A6534u;
            goto label_1a6534;
        }
    }
    ctx->pc = 0x1A64E4u;
    // 0x1a64e4: 0x86020602  lh          $v0, 0x602($s0)
    ctx->pc = 0x1a64e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1538)));
    // 0x1a64e8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1a64e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a64ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A64ECu;
    {
        const bool branch_taken_0x1a64ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A64F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64ECu;
        // 0x1a64f0: 0x96030602  lhu         $v1, 0x602($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1538)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64ec) {
            ctx->pc = 0x1A651Cu;
            goto label_1a651c;
        }
    }
    ctx->pc = 0x1A64F4u;
    // 0x1a64f4: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1a64f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x1a64f8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1a64f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a64fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a64fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6500: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a6500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6504: 0xa6020602  sh          $v0, 0x602($s0)
    ctx->pc = 0x1a6504u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1538), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a6508: 0xe6000620  swc1        $f0, 0x620($s0)
    ctx->pc = 0x1a6508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
    // 0x1a650c: 0xa6030600  sh          $v1, 0x600($s0)
    ctx->pc = 0x1a650cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1536), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6510: 0xa20402f5  sb          $a0, 0x2F5($s0)
    ctx->pc = 0x1a6510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a6514: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6514u;
    {
        const bool branch_taken_0x1a6514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6514u;
        // 0x1a6518: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6514) {
            ctx->pc = 0x1A6530u;
            goto label_1a6530;
        }
    }
    ctx->pc = 0x1A651Cu;
label_1a651c:
    // 0x1a651c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1a651cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6520: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1a6520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1a6524: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1a6524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1a6528: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1a6528u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a652c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1a652cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_1a6530:
    // 0x1a6530: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1a6530u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1a6534:
    // 0x1a6534: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a6534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a6538:
    // 0x1a6538: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a6538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a653c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a653cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6540: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1a6540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a6544: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6544u;
        // 0x1a6548: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A654Cu;
    // 0x1a654c: 0x0  nop
    ctx->pc = 0x1a654cu;
    // NOP
    ctx->pc = 0x1a6550u;
}
