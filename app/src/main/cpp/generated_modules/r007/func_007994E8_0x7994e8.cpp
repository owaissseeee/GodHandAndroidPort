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
// Function: func_007994E8
// Address: 0x7994e8 - 0x7997f0
void func_007994E8_0x7994e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007994E8_0x7994e8");
#endif

    switch (ctx->pc) {
        case 0x79956cu: goto label_79956c;
        case 0x799600u: goto label_799600;
        case 0x799634u: goto label_799634;
        case 0x799640u: goto label_799640;
        case 0x799648u: goto label_799648;
        case 0x799650u: goto label_799650;
        case 0x799660u: goto label_799660;
        case 0x799680u: goto label_799680;
        case 0x799688u: goto label_799688;
        case 0x799698u: goto label_799698;
        case 0x7996c8u: goto label_7996c8;
        case 0x7996d0u: goto label_7996d0;
        case 0x7996d8u: goto label_7996d8;
        case 0x7996e0u: goto label_7996e0;
        case 0x7996f0u: goto label_7996f0;
        case 0x79970cu: goto label_79970c;
        case 0x799714u: goto label_799714;
        case 0x7997c0u: goto label_7997c0;
        case 0x7997ccu: goto label_7997cc;
        default: break;
    }

    ctx->pc = 0x7994e8u;

    // 0x7994e8: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x7994ec: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x7994f0: 0x8ce27a80  lw          $v0, 0x7A80($a3)
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x7994f4: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x7994f8: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x7994fc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x7994fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x799500: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x799504: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x799504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x799508: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x799508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x79950c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79950cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799510: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x799510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x799514: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x799514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x799518: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x799518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x79951c: 0x24f37a80  addiu       $s3, $a3, 0x7A80
    ctx->pc = 0x79951cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 31360));
    // 0x799520: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x799520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x799524: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x799528: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x799528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x79952c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x79952cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x799530: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x799530u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x799534: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x799534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x799538: 0x8e64fff8  lw          $a0, -0x8($s3)
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A78u));
    // 0x79953c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799540: 0x8c719e00  lw          $s1, -0x6200($v1)
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x799E00u));
    // 0x799544: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x799548: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79954c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x79954cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x799550: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x799550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x799554: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x799554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x799558: 0xae64fff8  sw          $a0, -0x8($s3)
    ctx->pc = 0x799558u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x747A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A78u, _value); } while (0);
    // 0x79955c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79955cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x799560: 0xace27a80  sw          $v0, 0x7A80($a3)
    ctx->pc = 0x799560u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A80u, _value); } while (0);
    // 0x799564: 0xc075cb4  jal         func_1D72D0
    ctx->pc = 0x799564u;
    SET_GPR_U32(ctx, 31, 0x79956Cu);
    ctx->pc = 0x799568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799564u;
    // 0x799568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D72D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D72D0u, 0x799564u, 0x79956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79956Cu;
label_79956c:
    // 0x79956c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x79956cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799570: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x799570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799574: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799578: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x799578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79957c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799580: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x799580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x799584: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x799584u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799588: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x799588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x79958c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x79958cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x799590: 0x13b40007  beq         $sp, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x799590u;
    {
        const bool branch_taken_0x799590 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 20));
        ctx->pc = 0x799594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799590u;
        // 0x799594: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799590) {
            ctx->pc = 0x7995B0u;
            goto label_7995b0;
        }
    }
    ctx->pc = 0x799598u;
    // 0x799598: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x799598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79959c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x79959cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7995a0: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x7995a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x7995a4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x7995a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x7995a8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x7995a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x7995ac: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x7995acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_7995b0:
    // 0x7995b0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7995b4: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x7995B4u;
    {
        const bool branch_taken_0x7995b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x7995B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B4u;
        // 0x7995b8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995b4) {
            ctx->pc = 0x7995D0u;
            goto label_7995d0;
        }
    }
    ctx->pc = 0x7995BCu;
    // 0x7995bc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x7995bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7995c0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x7995c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x7995c4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x7995c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x7995c8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x7995c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x7995cc: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x7995ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_7995d0:
    // 0x7995d0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x7995d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7995d4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x7995d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x7995d8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x7995d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x7995dc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x7995dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7995e0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x7995e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7995e4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x7995e8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7995e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7995ec: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x7995ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7995f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7995f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x7995f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995f8: 0xc076f54  jal         func_1DBD50
    ctx->pc = 0x7995F8u;
    SET_GPR_U32(ctx, 31, 0x799600u);
    ctx->pc = 0x7995FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F8u;
    // 0x7995fc: 0x3c100074  lui         $s0, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBD50u, 0x7995F8u, 0x799600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799600u;
label_799600:
    // 0x799600: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x799600u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799608: 0x26107470  addiu       $s0, $s0, 0x7470
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29808));
    // 0x79960c: 0xa262ff89  sb          $v0, -0x77($s3)
    ctx->pc = 0x79960cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294967177), (uint8_t)GPR_U32(ctx, 2));
    // 0x799610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799618: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x799618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79961c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79961cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799620: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x799620u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x799624: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799624u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799628: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79962c: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79962Cu;
    SET_GPR_U32(ctx, 31, 0x799634u);
    ctx->pc = 0x799630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79962Cu;
    // 0x799630: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79962Cu, 0x799634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799634u;
label_799634:
    // 0x799634: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x799634u;
    {
        const bool branch_taken_0x799634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799634u;
        // 0x799638: 0x9202001c  lbu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799634) {
            ctx->pc = 0x799664u;
            goto label_799664;
        }
    }
    ctx->pc = 0x79963Cu;
    // 0x79963c: 0x0  nop
    ctx->pc = 0x79963cu;
    // NOP
label_799640:
    // 0x799640: 0xc077e62  jal         func_1DF988
    ctx->pc = 0x799640u;
    SET_GPR_U32(ctx, 31, 0x799648u);
    ctx->pc = 0x799644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799640u;
    // 0x799644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF988u, 0x799640u, 0x799648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799648u;
label_799648:
    // 0x799648: 0xc077e6e  jal         func_1DF9B8
    ctx->pc = 0x799648u;
    SET_GPR_U32(ctx, 31, 0x799650u);
    ctx->pc = 0x79964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799648u;
    // 0x79964c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF9B8u, 0x799648u, 0x799650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799650u;
label_799650:
    // 0x799650: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799658: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799658u;
    SET_GPR_U32(ctx, 31, 0x799660u);
    ctx->pc = 0x79965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799658u;
    // 0x79965c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799658u, 0x799660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799660u;
label_799660:
    // 0x799660: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x799660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_799664:
    // 0x799664: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x799668: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79966c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x79966Cu;
    {
        const bool branch_taken_0x79966c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79966c) {
            ctx->pc = 0x799640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799640;
        }
    }
    ctx->pc = 0x799674u;
    // 0x799674: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x799674u;
    {
        const bool branch_taken_0x799674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799674u;
        // 0x799678: 0x9e223020  lwu         $v0, 0x3020($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799674) {
            ctx->pc = 0x79969Cu;
            goto label_79969c;
        }
    }
    ctx->pc = 0x79967Cu;
    // 0x79967c: 0x0  nop
    ctx->pc = 0x79967cu;
    // NOP
label_799680:
    // 0x799680: 0xc075cde  jal         func_1D7378
    ctx->pc = 0x799680u;
    SET_GPR_U32(ctx, 31, 0x799688u);
    ctx->pc = 0x799684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799680u;
    // 0x799684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7378u, 0x799680u, 0x799688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799688u;
label_799688:
    // 0x799688: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79968c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799690: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799690u;
    SET_GPR_U32(ctx, 31, 0x799698u);
    ctx->pc = 0x799694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799690u;
    // 0x799694: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799690u, 0x799698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799698u;
label_799698:
    // 0x799698: 0x9e223020  lwu         $v0, 0x3020($s1)
    ctx->pc = 0x799698u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12320)));
label_79969c:
    // 0x79969c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79969cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7996a0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7996A0u;
    {
        const bool branch_taken_0x7996a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A0u;
        // 0x7996a4: 0x26b07470  addiu       $s0, $s5, 0x7470 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 29808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996a0) {
            ctx->pc = 0x799680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799680;
        }
    }
    ctx->pc = 0x7996A8u;
    // 0x7996a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7996a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996b0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x7996b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7996b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7996b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7996b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996bc: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x7996bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x7996c0: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x7996C0u;
    SET_GPR_U32(ctx, 31, 0x7996C8u);
    ctx->pc = 0x7996C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C0u;
    // 0x7996c4: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x7996C0u, 0x7996C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C8u;
label_7996c8:
    // 0x7996c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7996C8u;
    {
        const bool branch_taken_0x7996c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C8u;
        // 0x7996cc: 0x9202001c  lbu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996c8) {
            ctx->pc = 0x7996F4u;
            goto label_7996f4;
        }
    }
    ctx->pc = 0x7996D0u;
label_7996d0:
    // 0x7996d0: 0xc077e62  jal         func_1DF988
    ctx->pc = 0x7996D0u;
    SET_GPR_U32(ctx, 31, 0x7996D8u);
    ctx->pc = 0x7996D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D0u;
    // 0x7996d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF988u, 0x7996D0u, 0x7996D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996D8u;
label_7996d8:
    // 0x7996d8: 0xc077e6e  jal         func_1DF9B8
    ctx->pc = 0x7996D8u;
    SET_GPR_U32(ctx, 31, 0x7996E0u);
    ctx->pc = 0x7996DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D8u;
    // 0x7996dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF9B8u, 0x7996D8u, 0x7996E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996E0u;
label_7996e0:
    // 0x7996e0: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x7996e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x7996e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7996e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7996e8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7996E8u;
    SET_GPR_U32(ctx, 31, 0x7996F0u);
    ctx->pc = 0x7996ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E8u;
    // 0x7996ec: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7996E8u, 0x7996F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996F0u;
label_7996f0:
    // 0x7996f0: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x7996f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_7996f4:
    // 0x7996f4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x7996f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x7996f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7996f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7996fc: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x7996FCu;
    {
        const bool branch_taken_0x7996fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7996fc) {
            ctx->pc = 0x7996D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996d0;
        }
    }
    ctx->pc = 0x799704u;
    // 0x799704: 0xc076f7c  jal         func_1DBDF0
    ctx->pc = 0x799704u;
    SET_GPR_U32(ctx, 31, 0x79970Cu);
    ctx->pc = 0x799708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799704u;
    // 0x799708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBDF0u, 0x799704u, 0x79970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79970Cu;
label_79970c:
    // 0x79970c: 0xc075cac  jal         func_1D72B0
    ctx->pc = 0x79970Cu;
    SET_GPR_U32(ctx, 31, 0x799714u);
    ctx->pc = 0x799710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79970Cu;
    // 0x799710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D72B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D72B0u, 0x79970Cu, 0x799714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799714u;
label_799714:
    // 0x799714: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x799718: 0x3c04fbff  lui         $a0, 0xFBFF
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64511 << 16));
    // 0x79971c: 0x24e774a0  addiu       $a3, $a3, 0x74A0
    ctx->pc = 0x79971cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29856));
    // 0x799720: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x799720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x799724: 0x8ce305e0  lw          $v1, 0x5E0($a3)
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x799728: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x79972c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79972cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x799730: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x799734: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799738: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x799738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x79973c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79973cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799740: 0x3c087fff  lui         $t0, 0x7FFF
    ctx->pc = 0x799740u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32767 << 16));
    // 0x799744: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x799744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x799748: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x799748u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x79974c: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x799750: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x799750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x799754: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x799754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x799758: 0x3c04dfff  lui         $a0, 0xDFFF
    ctx->pc = 0x799758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57343 << 16));
    // 0x79975c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x79975cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799760: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x799760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x799764: 0x3c05efff  lui         $a1, 0xEFFF
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61439 << 16));
    // 0x799768: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79976c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x79976cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x799770: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x799770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x799774: 0x8ce605d8  lw          $a2, 0x5D8($a3)
    ctx->pc = 0x799774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1496)));
    // 0x799778: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x799778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x79977c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79977cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x799780: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x799780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799784: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x799784u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x799788: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x799788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79978c: 0xace605d8  sw          $a2, 0x5D8($a3)
    ctx->pc = 0x79978cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1496), GPR_U32(ctx, 6));
    // 0x799790: 0xa0e20569  sb          $v0, 0x569($a3)
    ctx->pc = 0x799790u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1385), (uint8_t)GPR_U32(ctx, 2));
    // 0x799794: 0xace305e0  sw          $v1, 0x5E0($a3)
    ctx->pc = 0x799794u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1504), GPR_U32(ctx, 3));
    // 0x799798: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79979c: 0x94850016  lhu         $a1, 0x16($a0)
    ctx->pc = 0x79979cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x7997a0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x7997a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7997a4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x7997a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7997a8: 0xc48c0010  lwc1        $f12, 0x10($a0)
    ctx->pc = 0x7997a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x7997ac: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x7997acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7997b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7997b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997b8: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x7997B8u;
    SET_GPR_U32(ctx, 31, 0x7997C0u);
    ctx->pc = 0x7997BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997B8u;
    // 0x7997bc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x7997B8u, 0x7997C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997C0u;
label_7997c0:
    // 0x7997c0: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x7997c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x7997c4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7997C4u;
    SET_GPR_U32(ctx, 31, 0x7997CCu);
    ctx->pc = 0x7997C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997C4u;
    // 0x7997c8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7997C4u, 0x7997CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997CCu;
label_7997cc:
    // 0x7997cc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x7997ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x7997d0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x7997d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7997d4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x7997d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7997d8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x7997d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7997dc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x7997dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7997e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x7997e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7997e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7997e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7997e8: 0x3e00008  jr          $ra
    ctx->pc = 0x7997E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7997ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E8u;
        // 0x7997ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7997F0u;
}
} // namespace gh_r007
