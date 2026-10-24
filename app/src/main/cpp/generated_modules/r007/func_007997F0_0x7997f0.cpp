#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r007_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r007
{
// Function: func_007997F0
// Address: 0x7997f0 - 0x799af8
void func_007997F0_0x7997f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007997F0_0x7997f0");
#endif

    switch (ctx->pc) {
        case 0x799878u: goto label_799878;
        case 0x79990cu: goto label_79990c;
        case 0x799940u: goto label_799940;
        case 0x799948u: goto label_799948;
        case 0x799950u: goto label_799950;
        case 0x799958u: goto label_799958;
        case 0x799968u: goto label_799968;
        case 0x799988u: goto label_799988;
        case 0x799990u: goto label_799990;
        case 0x7999a0u: goto label_7999a0;
        case 0x7999d0u: goto label_7999d0;
        case 0x7999d8u: goto label_7999d8;
        case 0x7999e0u: goto label_7999e0;
        case 0x7999e8u: goto label_7999e8;
        case 0x7999f8u: goto label_7999f8;
        case 0x799a14u: goto label_799a14;
        case 0x799a1cu: goto label_799a1c;
        case 0x799ac8u: goto label_799ac8;
        case 0x799ad4u: goto label_799ad4;
        default: break;
    }

    ctx->pc = 0x7997f0u;

    // 0x7997f0: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x7997f4: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x7997f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x7997f8: 0x8ce27a80  lw          $v0, 0x7A80($a3)
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x7997fc: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x799800: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x799804: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x799804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x799808: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x79980c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x79980cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x799810: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799814: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x799814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x799818: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79981c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x79981cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x799820: 0x8c649e00  lw          $a0, -0x6200($v1)
    ctx->pc = 0x799820u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x799E00u));
    // 0x799824: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x799828: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x799828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x79982c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x79982cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x799830: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x799830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x799834: 0x24f37a80  addiu       $s3, $a3, 0x7A80
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 31360));
    // 0x799838: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x799838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x79983c: 0x24913060  addiu       $s1, $a0, 0x3060
    ctx->pc = 0x79983cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 12384));
    // 0x799840: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x799840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x799844: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x799848: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x799848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x79984c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x79984cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x799850: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x799850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x799854: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x799854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799858: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x79985c: 0x8e65fff8  lw          $a1, -0x8($s3)
    ctx->pc = 0x79985cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x747A78u));
    // 0x799860: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x799864: 0xace27a80  sw          $v0, 0x7A80($a3)
    ctx->pc = 0x799864u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A80u, _value); } while (0);
    // 0x799868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79986c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x79986cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x799870: 0xc0754a8  jal         func_1D52A0
    ctx->pc = 0x799870u;
    SET_GPR_U32(ctx, 31, 0x799878u);
    ctx->pc = 0x799874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799870u;
    // 0x799874: 0xae65fff8  sw          $a1, -0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294967288), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D52A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52A0u, 0x799870u, 0x799878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799878u;
label_799878:
    // 0x799878: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x799878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79987c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x79987cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799880: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799884: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x799888: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79988c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x79988cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x799890: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x799890u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799894: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x799894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x799898: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x799898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x79989c: 0x13b40007  beq         $sp, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x79989Cu;
    {
        const bool branch_taken_0x79989c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 20));
        ctx->pc = 0x7998A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79989Cu;
        // 0x7998a0: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79989c) {
            ctx->pc = 0x7998BCu;
            goto label_7998bc;
        }
    }
    ctx->pc = 0x7998A4u;
    // 0x7998a4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x7998a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7998a8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x7998a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7998ac: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x7998acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x7998b0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x7998b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x7998b4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x7998b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x7998b8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x7998b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_7998bc:
    // 0x7998bc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x7998bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7998c0: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x7998C0u;
    {
        const bool branch_taken_0x7998c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x7998C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C0u;
        // 0x7998c4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998c0) {
            ctx->pc = 0x7998DCu;
            goto label_7998dc;
        }
    }
    ctx->pc = 0x7998C8u;
    // 0x7998c8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x7998c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7998cc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x7998ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x7998d0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x7998d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x7998d4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x7998d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x7998d8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x7998d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_7998dc:
    // 0x7998dc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x7998dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7998e0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x7998e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x7998e4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x7998e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x7998e8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x7998e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7998ec: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x7998ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7998f0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x7998f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x7998f4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7998f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7998f8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x7998f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7998fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7998fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799900: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x799900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799904: 0xc075136  jal         func_1D44D8
    ctx->pc = 0x799904u;
    SET_GPR_U32(ctx, 31, 0x79990Cu);
    ctx->pc = 0x799908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799904u;
    // 0x799908: 0x3c100074  lui         $s0, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D44D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D44D8u, 0x799904u, 0x79990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79990Cu;
label_79990c:
    // 0x79990c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x79990cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799914: 0x26107470  addiu       $s0, $s0, 0x7470
    ctx->pc = 0x799914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29808));
    // 0x799918: 0xa262ff89  sb          $v0, -0x77($s3)
    ctx->pc = 0x799918u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294967177), (uint8_t)GPR_U32(ctx, 2));
    // 0x79991c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79991cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799924: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x799924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799928: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79992c: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x79992cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x799930: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799930u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799934: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x799934u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799938: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x799938u;
    SET_GPR_U32(ctx, 31, 0x799940u);
    ctx->pc = 0x79993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799938u;
    // 0x79993c: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x799938u, 0x799940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799940u;
label_799940:
    // 0x799940: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x799940u;
    {
        const bool branch_taken_0x799940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799940u;
        // 0x799944: 0x9202001c  lbu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799940) {
            ctx->pc = 0x79996Cu;
            goto label_79996c;
        }
    }
    ctx->pc = 0x799948u;
label_799948:
    // 0x799948: 0xc0753de  jal         func_1D4F78
    ctx->pc = 0x799948u;
    SET_GPR_U32(ctx, 31, 0x799950u);
    ctx->pc = 0x79994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799948u;
    // 0x79994c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F78u, 0x799948u, 0x799950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799950u;
label_799950:
    // 0x799950: 0xc0753f4  jal         func_1D4FD0
    ctx->pc = 0x799950u;
    SET_GPR_U32(ctx, 31, 0x799958u);
    ctx->pc = 0x799954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799950u;
    // 0x799954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4FD0u, 0x799950u, 0x799958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799958u;
label_799958:
    // 0x799958: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79995c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79995cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799960: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799960u;
    SET_GPR_U32(ctx, 31, 0x799968u);
    ctx->pc = 0x799964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799960u;
    // 0x799964: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799960u, 0x799968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799968u;
label_799968:
    // 0x799968: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x799968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_79996c:
    // 0x79996c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x79996cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x799970: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799974: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x799974u;
    {
        const bool branch_taken_0x799974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799974) {
            ctx->pc = 0x799948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799948;
        }
    }
    ctx->pc = 0x79997Cu;
    // 0x79997c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x79997Cu;
    {
        const bool branch_taken_0x79997c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79997Cu;
        // 0x799980: 0x9e221800  lwu         $v0, 0x1800($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 6144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79997c) {
            ctx->pc = 0x7999A4u;
            goto label_7999a4;
        }
    }
    ctx->pc = 0x799984u;
    // 0x799984: 0x0  nop
    ctx->pc = 0x799984u;
    // NOP
label_799988:
    // 0x799988: 0xc074482  jal         func_1D1208
    ctx->pc = 0x799988u;
    SET_GPR_U32(ctx, 31, 0x799990u);
    ctx->pc = 0x79998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799988u;
    // 0x79998c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1208u, 0x799988u, 0x799990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799990u;
label_799990:
    // 0x799990: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799998: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799998u;
    SET_GPR_U32(ctx, 31, 0x7999A0u);
    ctx->pc = 0x79999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799998u;
    // 0x79999c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799998u, 0x7999A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999A0u;
label_7999a0:
    // 0x7999a0: 0x9e221800  lwu         $v0, 0x1800($s1)
    ctx->pc = 0x7999a0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 6144)));
label_7999a4:
    // 0x7999a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7999a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7999a8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7999A8u;
    {
        const bool branch_taken_0x7999a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999A8u;
        // 0x7999ac: 0x26b07470  addiu       $s0, $s5, 0x7470 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 29808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999a8) {
            ctx->pc = 0x799988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799988;
        }
    }
    ctx->pc = 0x7999B0u;
    // 0x7999b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7999b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7999b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999b8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x7999b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7999bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7999bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7999c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999c4: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x7999c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x7999c8: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x7999C8u;
    SET_GPR_U32(ctx, 31, 0x7999D0u);
    ctx->pc = 0x7999CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999C8u;
    // 0x7999cc: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x7999C8u, 0x7999D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999D0u;
label_7999d0:
    // 0x7999d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7999D0u;
    {
        const bool branch_taken_0x7999d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D0u;
        // 0x7999d4: 0x9202001c  lbu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999d0) {
            ctx->pc = 0x7999FCu;
            goto label_7999fc;
        }
    }
    ctx->pc = 0x7999D8u;
label_7999d8:
    // 0x7999d8: 0xc0753de  jal         func_1D4F78
    ctx->pc = 0x7999D8u;
    SET_GPR_U32(ctx, 31, 0x7999E0u);
    ctx->pc = 0x7999DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999D8u;
    // 0x7999dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F78u, 0x7999D8u, 0x7999E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E0u;
label_7999e0:
    // 0x7999e0: 0xc0753f4  jal         func_1D4FD0
    ctx->pc = 0x7999E0u;
    SET_GPR_U32(ctx, 31, 0x7999E8u);
    ctx->pc = 0x7999E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E0u;
    // 0x7999e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4FD0u, 0x7999E0u, 0x7999E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E8u;
label_7999e8:
    // 0x7999e8: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x7999ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7999ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7999f0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7999F0u;
    SET_GPR_U32(ctx, 31, 0x7999F8u);
    ctx->pc = 0x7999F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999F0u;
    // 0x7999f4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7999F0u, 0x7999F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999F8u;
label_7999f8:
    // 0x7999f8: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x7999f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_7999fc:
    // 0x7999fc: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x7999fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x799a00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799a04: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x799A04u;
    {
        const bool branch_taken_0x799a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799a04) {
            ctx->pc = 0x7999D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999d8;
        }
    }
    ctx->pc = 0x799A0Cu;
    // 0x799a0c: 0xc07515e  jal         func_1D4578
    ctx->pc = 0x799A0Cu;
    SET_GPR_U32(ctx, 31, 0x799A14u);
    ctx->pc = 0x799A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A0Cu;
    // 0x799a10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4578u, 0x799A0Cu, 0x799A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A14u;
label_799a14:
    // 0x799a14: 0xc07447a  jal         func_1D11E8
    ctx->pc = 0x799A14u;
    SET_GPR_U32(ctx, 31, 0x799A1Cu);
    ctx->pc = 0x799A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A14u;
    // 0x799a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D11E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D11E8u, 0x799A14u, 0x799A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A1Cu;
label_799a1c:
    // 0x799a1c: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x799a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x799a20: 0x3c04fbff  lui         $a0, 0xFBFF
    ctx->pc = 0x799a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64511 << 16));
    // 0x799a24: 0x24e774a0  addiu       $a3, $a3, 0x74A0
    ctx->pc = 0x799a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29856));
    // 0x799a28: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x799a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x799a2c: 0x8ce305e0  lw          $v1, 0x5E0($a3)
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x799a30: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x799a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x799a34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x799a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x799a38: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x799a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x799a3c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799a40: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x799a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x799a44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x799a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799a48: 0x3c087fff  lui         $t0, 0x7FFF
    ctx->pc = 0x799a48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32767 << 16));
    // 0x799a4c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x799a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x799a50: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x799a50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x799a54: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x799a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x799a58: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x799a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x799a5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x799a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x799a60: 0x3c04dfff  lui         $a0, 0xDFFF
    ctx->pc = 0x799a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57343 << 16));
    // 0x799a64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x799a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799a68: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x799a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x799a6c: 0x3c05efff  lui         $a1, 0xEFFF
    ctx->pc = 0x799a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61439 << 16));
    // 0x799a70: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799a74: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x799a74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x799a78: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x799a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x799a7c: 0x8ce605d8  lw          $a2, 0x5D8($a3)
    ctx->pc = 0x799a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1496)));
    // 0x799a80: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x799a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x799a84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x799a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x799a88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x799a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799a8c: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x799a8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x799a90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x799a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799a94: 0xace605d8  sw          $a2, 0x5D8($a3)
    ctx->pc = 0x799a94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1496), GPR_U32(ctx, 6));
    // 0x799a98: 0xa0e20569  sb          $v0, 0x569($a3)
    ctx->pc = 0x799a98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1385), (uint8_t)GPR_U32(ctx, 2));
    // 0x799a9c: 0xace305e0  sw          $v1, 0x5E0($a3)
    ctx->pc = 0x799a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1504), GPR_U32(ctx, 3));
    // 0x799aa0: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799aa4: 0x94850016  lhu         $a1, 0x16($a0)
    ctx->pc = 0x799aa4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x799aa8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x799aa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799aac: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x799aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799ab0: 0xc48c0010  lwc1        $f12, 0x10($a0)
    ctx->pc = 0x799ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x799ab4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x799ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ab8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799ab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799abc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799abcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ac0: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x799AC0u;
    SET_GPR_U32(ctx, 31, 0x799AC8u);
    ctx->pc = 0x799AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AC0u;
    // 0x799ac4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x799AC0u, 0x799AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AC8u;
label_799ac8:
    // 0x799ac8: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799acc: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799ACCu;
    SET_GPR_U32(ctx, 31, 0x799AD4u);
    ctx->pc = 0x799AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ACCu;
    // 0x799ad0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799ACCu, 0x799AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AD4u;
label_799ad4:
    // 0x799ad4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x799ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799ad8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x799ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799adc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x799adcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799ae0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x799ae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799ae4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x799ae4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799ae8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x799ae8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799aec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x799aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799af0: 0x3e00008  jr          $ra
    ctx->pc = 0x799AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AF0u;
        // 0x799af4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799AF8u;
}
} // namespace gh_r007
