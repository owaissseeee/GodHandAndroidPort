#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r701_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r701
{
// Function: func_00799840
// Address: 0x799840 - 0x799b58
void func_00799840_0x799840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799840_0x799840");
#endif

    switch (ctx->pc) {
        case 0x7998e4u: goto label_7998e4;
        case 0x799904u: goto label_799904;
        case 0x799918u: goto label_799918;
        case 0x799950u: goto label_799950;
        case 0x799990u: goto label_799990;
        case 0x7999c0u: goto label_7999c0;
        case 0x7999d0u: goto label_7999d0;
        case 0x7999d8u: goto label_7999d8;
        case 0x799a18u: goto label_799a18;
        case 0x799a30u: goto label_799a30;
        case 0x799a40u: goto label_799a40;
        case 0x799a80u: goto label_799a80;
        case 0x799a94u: goto label_799a94;
        case 0x799a9cu: goto label_799a9c;
        case 0x799adcu: goto label_799adc;
        case 0x799af4u: goto label_799af4;
        case 0x799b08u: goto label_799b08;
        default: break;
    }

    ctx->pc = 0x799840u;

    // 0x799840: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x799840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x799844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799848: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x799848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x79984c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79984cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799850: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799854: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x799854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799858: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x79985c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79985cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799860: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799864: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x799864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x799868: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x799868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79986c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x79986cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x799870: 0x24508658  addiu       $s0, $v0, -0x79A8
    ctx->pc = 0x799870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x799874: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x799874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x799878: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x799878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x79987c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x79987cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799880: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x799880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x799884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799888: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x799888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x79988c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x79988cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x799890: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x799890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x799894: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x799894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x799898: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x799898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79989c: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x79989cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x7998a0: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x7998a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x7998a4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x7998a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x7998a8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x7998a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x7998ac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x7998acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x7998b0: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x7998b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x7998b4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x7998b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x7998b8: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x7998b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x7998bc: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x7998bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x7998c0: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x7998c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x7998c4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x7998c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7998c8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x7998c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x7998cc: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x7998ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x7998d0: 0xe4e20008  swc1        $f2, 0x8($a3)
    ctx->pc = 0x7998d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x7998d4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x7998d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x7998d8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x7998dc: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x7998DCu;
    SET_GPR_U32(ctx, 31, 0x7998E4u);
    ctx->pc = 0x7998E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998DCu;
    // 0x7998e0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x7998DCu, 0x7998E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998E4u;
label_7998e4:
    // 0x7998e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7998e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7998e8: 0x2c630006  sltiu       $v1, $v1, 0x6
    ctx->pc = 0x7998e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x7998ec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7998ECu;
    {
        const bool branch_taken_0x7998ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998ECu;
        // 0x7998f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998ec) {
            ctx->pc = 0x7998FCu;
            goto label_7998fc;
        }
    }
    ctx->pc = 0x7998F4u;
    // 0x7998f4: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x7998F4u;
    {
        const bool branch_taken_0x7998f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F4u;
        // 0x7998f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998f4) {
            ctx->pc = 0x799B1Cu;
            goto label_799b1c;
        }
    }
    ctx->pc = 0x7998FCu;
label_7998fc:
    // 0x7998fc: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x7998FCu;
    SET_GPR_U32(ctx, 31, 0x799904u);
    ctx->pc = 0x799900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998FCu;
    // 0x799900: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x7998FCu, 0x799904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799904u;
label_799904:
    // 0x799904: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79990c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799910: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799910u;
    SET_GPR_U32(ctx, 31, 0x799918u);
    ctx->pc = 0x799914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799910u;
    // 0x799914: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799910u, 0x799918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799918u;
label_799918:
    // 0x799918: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79991c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x79991cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x799920: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799920u;
    {
        const bool branch_taken_0x799920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799920u;
        // 0x799924: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799920) {
            ctx->pc = 0x799938u;
            goto label_799938;
        }
    }
    ctx->pc = 0x799928u;
    // 0x799928: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x799928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79992c: 0x1462007b  bne         $v1, $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x79992Cu;
    {
        const bool branch_taken_0x79992c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x799930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79992Cu;
        // 0x799930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79992c) {
            ctx->pc = 0x799B1Cu;
            goto label_799b1c;
        }
    }
    ctx->pc = 0x799934u;
    // 0x799934: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x799934u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799938:
    // 0x799938: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79993c: 0x12a00018  beqz        $s5, . + 4 + (0x18 << 2)
    ctx->pc = 0x79993Cu;
    {
        const bool branch_taken_0x79993c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x799940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79993Cu;
        // 0x799940: 0x3c140058  lui         $s4, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79993c) {
            ctx->pc = 0x7999A0u;
            goto label_7999a0;
        }
    }
    ctx->pc = 0x799944u;
    // 0x799944: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x799944u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x799948: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x799948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79994c: 0x0  nop
    ctx->pc = 0x79994cu;
    // NOP
label_799950:
    // 0x799950: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x799950u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x799954: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x799954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799958: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x799958u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79995c: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x79995cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799960: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x799960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x799964: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x799964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799968: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x799968u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79996c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x79996cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799970: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799974: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799978: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79997c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79997cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799980: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799984: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x799984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799988: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x799988u;
    SET_GPR_U32(ctx, 31, 0x799990u);
    ctx->pc = 0x79998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799988u;
    // 0x79998c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x799988u, 0x799990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799990u;
label_799990:
    // 0x799990: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799994: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x799994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x799998: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x799998u;
    {
        const bool branch_taken_0x799998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799998u;
        // 0x79999c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799998) {
            ctx->pc = 0x799950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799950;
        }
    }
    ctx->pc = 0x7999A0u;
label_7999a0:
    // 0x7999a0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7999a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7999a4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x7999a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x7999a8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x7999a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x7999ac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x7999acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x7999b0: 0x245174a0  addiu       $s1, $v0, 0x74A0
    ctx->pc = 0x7999b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x7999b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7999B4u;
    {
        const bool branch_taken_0x7999b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B4u;
        // 0x7999b8: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999b4) {
            ctx->pc = 0x7999D0u;
            goto label_7999d0;
        }
    }
    ctx->pc = 0x7999BCu;
    // 0x7999bc: 0x0  nop
    ctx->pc = 0x7999bcu;
    // NOP
label_7999c0:
    // 0x7999c0: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x7999c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7999c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7999c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7999c8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7999C8u;
    SET_GPR_U32(ctx, 31, 0x7999D0u);
    ctx->pc = 0x7999CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999C8u;
    // 0x7999cc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7999C8u, 0x7999D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999D0u;
label_7999d0:
    // 0x7999d0: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x7999D0u;
    SET_GPR_U32(ctx, 31, 0x7999D8u);
    ctx->pc = 0x7999D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999D0u;
    // 0x7999d4: 0x268464f0  addiu       $a0, $s4, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x7999D0u, 0x7999D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999D8u;
label_7999d8:
    // 0x7999d8: 0xc6210574  lwc1        $f1, 0x574($s1)
    ctx->pc = 0x7999d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7999dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x7999dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x7999e0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x7999e0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x7999e4: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x7999e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7999e8: 0x0  nop
    ctx->pc = 0x7999e8u;
    // NOP
    // 0x7999ec: 0x4500fff4  bc1f        . + 4 + (-0xC << 2)
    ctx->pc = 0x7999ECu;
    {
        const bool branch_taken_0x7999ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7999F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999ECu;
        // 0x7999f0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999ec) {
            ctx->pc = 0x7999C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999c0;
        }
    }
    ctx->pc = 0x7999F4u;
    // 0x7999f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7999f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7999f8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7999f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7999fc: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x7999fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x799a00: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a04: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799a04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799a08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799a0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a10: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799A10u;
    SET_GPR_U32(ctx, 31, 0x799A18u);
    ctx->pc = 0x799A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A10u;
    // 0x799a14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799A10u, 0x799A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A18u;
label_799a18:
    // 0x799a18: 0x12a0002b  beqz        $s5, . + 4 + (0x2B << 2)
    ctx->pc = 0x799A18u;
    {
        const bool branch_taken_0x799a18 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A18u;
        // 0x799a1c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a18) {
            ctx->pc = 0x799AC8u;
            goto label_799ac8;
        }
    }
    ctx->pc = 0x799A20u;
    // 0x799a20: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x799a20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x799a24: 0x24546ab0  addiu       $s4, $v0, 0x6AB0
    ctx->pc = 0x799a24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 27312));
    // 0x799a28: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x799a28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x799a2c: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x799a2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799a30:
    // 0x799a30: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799a34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a38: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799A38u;
    SET_GPR_U32(ctx, 31, 0x799A40u);
    ctx->pc = 0x799A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A38u;
    // 0x799a3c: 0x24448658  addiu       $a0, $v0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799A38u, 0x799A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A40u;
label_799a40:
    // 0x799a40: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x799a40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799a44: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x799a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x799a48: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x799a48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x799a4c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x799a4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x799a50: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x799a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799a54: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x799a54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799a58: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x799a58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x799a5c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x799a5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x799a60: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x799a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799a64: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x799a64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x799a68: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x799a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799a6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x799a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a78: 0xc0a54e0  jal         func_295380
    ctx->pc = 0x799A78u;
    SET_GPR_U32(ctx, 31, 0x799A80u);
    ctx->pc = 0x799A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A78u;
    // 0x799a7c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295380u, 0x799A78u, 0x799A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A80u;
label_799a80:
    // 0x799a80: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x799a80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x799a84: 0xa3b00030  sb          $s0, 0x30($sp)
    ctx->pc = 0x799a84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 16));
    // 0x799a88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a8c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799A8Cu;
    SET_GPR_U32(ctx, 31, 0x799A94u);
    ctx->pc = 0x799A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A8Cu;
    // 0x799a90: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799A8Cu, 0x799A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A94u;
label_799a94:
    // 0x799a94: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799A94u;
    SET_GPR_U32(ctx, 31, 0x799A9Cu);
    ctx->pc = 0x799A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A94u;
    // 0x799a98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799A94u, 0x799A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A9Cu;
label_799a9c:
    // 0x799a9c: 0x101942  srl         $v1, $s0, 5
    ctx->pc = 0x799a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x799aa0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x799aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x799aa4: 0x3210001f  andi        $s0, $s0, 0x1F
    ctx->pc = 0x799aa4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x799aa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x799aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x799aac: 0x2028006  srlv        $s0, $v0, $s0
    ctx->pc = 0x799aacu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x799ab0: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x799ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x799ab4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x799ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799ab8: 0x235202b  sltu        $a0, $s1, $s5
    ctx->pc = 0x799ab8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x799abc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x799abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x799ac0: 0x1480ffdb  bnez        $a0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x799AC0u;
    {
        const bool branch_taken_0x799ac0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x799AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AC0u;
        // 0x799ac4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ac0) {
            ctx->pc = 0x799A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a30;
        }
    }
    ctx->pc = 0x799AC8u;
label_799ac8:
    // 0x799ac8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799acc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ad0: 0x24508658  addiu       $s0, $v0, -0x79A8
    ctx->pc = 0x799ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x799ad4: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799AD4u;
    SET_GPR_U32(ctx, 31, 0x799ADCu);
    ctx->pc = 0x799AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AD4u;
    // 0x799ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799AD4u, 0x799ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ADCu;
label_799adc:
    // 0x799adc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ae4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799ae8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x799ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x799aec: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799AECu;
    SET_GPR_U32(ctx, 31, 0x799AF4u);
    ctx->pc = 0x799AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AECu;
    // 0x799af0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799AECu, 0x799AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AF4u;
label_799af4:
    // 0x799af4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x799af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799afc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799b00: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799B00u;
    SET_GPR_U32(ctx, 31, 0x799B08u);
    ctx->pc = 0x799B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B00u;
    // 0x799b04: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799B00u, 0x799B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B08u;
label_799b08:
    // 0x799b08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b0c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x799b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799b10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799b18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x799b18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_799b1c:
    // 0x799b1c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x799b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x799b20: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x799b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x799b24: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x799b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x799b28: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x799b28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799b2c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x799b2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799b30: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x799b30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799b34: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x799b34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799b38: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x799b38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799b3c: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x799b3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799b40: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x799b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799b44: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x799b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799b48: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x799b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x799B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B4Cu;
        // 0x799b50: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B54u;
    // 0x799b54: 0x0  nop
    ctx->pc = 0x799b54u;
    // NOP
    ctx->pc = 0x799b58u;
}
} // namespace gh_r701
