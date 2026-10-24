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

// Function: func_00136458
// Address: 0x136458 - 0x1365b8
void func_00136458_0x136458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00136458_0x136458");
#endif

    switch (ctx->pc) {
        case 0x1364ecu: goto label_1364ec;
        case 0x136514u: goto label_136514;
        case 0x136548u: goto label_136548;
        case 0x136558u: goto label_136558;
        default: break;
    }

    ctx->pc = 0x136458u;

    // 0x136458: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x136458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x13645c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x13645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x136460: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x136460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x136464: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x136464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136468: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x136468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x13646c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x13646cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136470: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x136470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x136474: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x136474u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136478: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x136478u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13647c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x13647cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x136480: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x136480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x136484: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x136484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x136488: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x136488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13648c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x13648cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136490: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x136490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x136494: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x136494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x136498: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x136498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13649c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x13649cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1364a0: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x1364a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1364a4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1364a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1364a8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1364a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1364ac: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1364acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1364b0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1364b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1364b4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1364b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1364b8: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x1364b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1364bc: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1364bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1364c0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1364c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1364c4: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x1364c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1364c8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1364c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1364cc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1364ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1364d0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1364d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1364d4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1364d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1364d8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1364d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1364dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1364dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1364e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1364e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1364e4: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x1364E4u;
    SET_GPR_U32(ctx, 31, 0x1364ECu);
    ctx->pc = 0x1364E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1364E4u;
    // 0x1364e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x1364E4u, 0x1364ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1364ECu;
label_1364ec:
    // 0x1364ec: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1364ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1364f0: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1364f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1364f4: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1364f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1364f8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1364f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1364fc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1364fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136500: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x136500u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x136504: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x136504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136508: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x136508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13650c: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x13650Cu;
    SET_GPR_U32(ctx, 31, 0x136514u);
    ctx->pc = 0x136510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13650Cu;
    // 0x136510: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x13650Cu, 0x136514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136514u;
label_136514:
    // 0x136514: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x136514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x136518: 0x0  nop
    ctx->pc = 0x136518u;
    // NOP
    // 0x13651c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13651cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136520: 0x0  nop
    ctx->pc = 0x136520u;
    // NOP
    // 0x136524: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x136524u;
    {
        const bool branch_taken_0x136524 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x136528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136524u;
        // 0x136528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136524) {
            ctx->pc = 0x136590u;
            goto label_136590;
        }
    }
    ctx->pc = 0x13652Cu;
    // 0x13652c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x13652cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x136530: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x136530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136534: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x136534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136538: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x136538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13653c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x13653cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136540: 0xc04d7b2  jal         func_135EC8
    ctx->pc = 0x136540u;
    SET_GPR_U32(ctx, 31, 0x136548u);
    ctx->pc = 0x136544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136540u;
    // 0x136544: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135EC8u, 0x136540u, 0x136548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136548u;
label_136548:
    // 0x136548: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136548u;
    {
        const bool branch_taken_0x136548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136548u;
        // 0x13654c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136548) {
            ctx->pc = 0x136560u;
            goto label_136560;
        }
    }
    ctx->pc = 0x136550u;
    // 0x136550: 0xc04d80c  jal         func_136030
    ctx->pc = 0x136550u;
    SET_GPR_U32(ctx, 31, 0x136558u);
    ctx->pc = 0x136554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136550u;
    // 0x136554: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x136550u, 0x136558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136558u;
label_136558:
    // 0x136558: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136558u;
    {
        const bool branch_taken_0x136558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136558) {
            ctx->pc = 0x136568u;
            goto label_136568;
        }
    }
    ctx->pc = 0x136560u;
label_136560:
    // 0x136560: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x136560u;
    {
        const bool branch_taken_0x136560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136560u;
        // 0x136564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136560) {
            ctx->pc = 0x136590u;
            goto label_136590;
        }
    }
    ctx->pc = 0x136568u;
label_136568:
    // 0x136568: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x136568u;
    {
        const bool branch_taken_0x136568 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x13656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136568u;
        // 0x13656c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136568) {
            ctx->pc = 0x136590u;
            goto label_136590;
        }
    }
    ctx->pc = 0x136570u;
    // 0x136570: 0x12700007  beq         $s3, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x136570u;
    {
        const bool branch_taken_0x136570 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        ctx->pc = 0x136574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136570u;
        // 0x136574: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136570) {
            ctx->pc = 0x136590u;
            goto label_136590;
        }
    }
    ctx->pc = 0x136578u;
    // 0x136578: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x136578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13657c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x13657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136580: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x136580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x136584: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x136584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x136588: 0xe6620004  swc1        $f2, 0x4($s3)
    ctx->pc = 0x136588u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x13658c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13658cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136590:
    // 0x136590: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x136590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x136594: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x136594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x136598: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x136598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13659c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x13659cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1365a0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1365a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1365a4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1365a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1365a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1365a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1365ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1365ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1365B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1365ACu;
        // 0x1365b0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1365ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1365B4u;
    // 0x1365b4: 0x0  nop
    ctx->pc = 0x1365b4u;
    // NOP
    ctx->pc = 0x1365b8u;
}
