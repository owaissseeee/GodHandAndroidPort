#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: func_00799520
// Address: 0x799520 - 0x799690
void func_00799520_0x799520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799520_0x799520");
#endif

    switch (ctx->pc) {
        case 0x799520u: goto label_799520;
        case 0x799524u: goto label_799524;
        case 0x799528u: goto label_799528;
        case 0x79952cu: goto label_79952c;
        case 0x799530u: goto label_799530;
        case 0x799534u: goto label_799534;
        case 0x799538u: goto label_799538;
        case 0x79953cu: goto label_79953c;
        case 0x799540u: goto label_799540;
        case 0x799544u: goto label_799544;
        case 0x799548u: goto label_799548;
        case 0x79954cu: goto label_79954c;
        case 0x799550u: goto label_799550;
        case 0x799554u: goto label_799554;
        case 0x799558u: goto label_799558;
        case 0x79955cu: goto label_79955c;
        case 0x799560u: goto label_799560;
        case 0x799564u: goto label_799564;
        case 0x799568u: goto label_799568;
        case 0x79956cu: goto label_79956c;
        case 0x799570u: goto label_799570;
        case 0x799574u: goto label_799574;
        case 0x799578u: goto label_799578;
        case 0x79957cu: goto label_79957c;
        case 0x799580u: goto label_799580;
        case 0x799584u: goto label_799584;
        case 0x799588u: goto label_799588;
        case 0x79958cu: goto label_79958c;
        case 0x799590u: goto label_799590;
        case 0x799594u: goto label_799594;
        case 0x799598u: goto label_799598;
        case 0x79959cu: goto label_79959c;
        case 0x7995a0u: goto label_7995a0;
        case 0x7995a4u: goto label_7995a4;
        case 0x7995a8u: goto label_7995a8;
        case 0x7995acu: goto label_7995ac;
        case 0x7995b0u: goto label_7995b0;
        case 0x7995b4u: goto label_7995b4;
        case 0x7995b8u: goto label_7995b8;
        case 0x7995bcu: goto label_7995bc;
        case 0x7995c0u: goto label_7995c0;
        case 0x7995c4u: goto label_7995c4;
        case 0x7995c8u: goto label_7995c8;
        case 0x7995ccu: goto label_7995cc;
        case 0x7995d0u: goto label_7995d0;
        case 0x7995d4u: goto label_7995d4;
        case 0x7995d8u: goto label_7995d8;
        case 0x7995dcu: goto label_7995dc;
        case 0x7995e0u: goto label_7995e0;
        case 0x7995e4u: goto label_7995e4;
        case 0x7995e8u: goto label_7995e8;
        case 0x7995ecu: goto label_7995ec;
        case 0x7995f0u: goto label_7995f0;
        case 0x7995f4u: goto label_7995f4;
        case 0x7995f8u: goto label_7995f8;
        case 0x7995fcu: goto label_7995fc;
        case 0x799600u: goto label_799600;
        case 0x799604u: goto label_799604;
        case 0x799608u: goto label_799608;
        case 0x79960cu: goto label_79960c;
        case 0x799610u: goto label_799610;
        case 0x799614u: goto label_799614;
        case 0x799618u: goto label_799618;
        case 0x79961cu: goto label_79961c;
        case 0x799620u: goto label_799620;
        case 0x799624u: goto label_799624;
        case 0x799628u: goto label_799628;
        case 0x79962cu: goto label_79962c;
        case 0x799630u: goto label_799630;
        case 0x799634u: goto label_799634;
        case 0x799638u: goto label_799638;
        case 0x79963cu: goto label_79963c;
        case 0x799640u: goto label_799640;
        case 0x799644u: goto label_799644;
        case 0x799648u: goto label_799648;
        case 0x79964cu: goto label_79964c;
        case 0x799650u: goto label_799650;
        case 0x799654u: goto label_799654;
        case 0x799658u: goto label_799658;
        case 0x79965cu: goto label_79965c;
        case 0x799660u: goto label_799660;
        case 0x799664u: goto label_799664;
        case 0x799668u: goto label_799668;
        case 0x79966cu: goto label_79966c;
        case 0x799670u: goto label_799670;
        case 0x799674u: goto label_799674;
        case 0x799678u: goto label_799678;
        case 0x79967cu: goto label_79967c;
        case 0x799680u: goto label_799680;
        case 0x799684u: goto label_799684;
        case 0x799688u: goto label_799688;
        case 0x79968cu: goto label_79968c;
        default: break;
    }

    ctx->pc = 0x799520u;

label_799520:
    // 0x799520: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x799520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_799524:
    // 0x799524: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x799524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_799528:
    // 0x799528: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x799528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_79952c:
    // 0x79952c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x79952cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_799530:
    // 0x799530: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x799530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_799534:
    // 0x799534: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x799534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_799538:
    // 0x799538: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x799538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_79953c:
    // 0x79953c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x79953cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_799540:
    // 0x799540: 0xc0c73be  jal         func_31CEF8
label_799544:
    if (ctx->pc == 0x799544u) {
        ctx->pc = 0x799548u;
        goto label_799548;
    }
    ctx->pc = 0x799540u;
    SET_GPR_U32(ctx, 31, 0x799548u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x799540u, 0x799548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799548u;
label_799548:
    // 0x799548: 0x30520001  andi        $s2, $v0, 0x1
    ctx->pc = 0x799548u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_79954c:
    // 0x79954c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79954cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799550:
    // 0x799550: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_799554:
    // 0x799554: 0x26450007  addiu       $a1, $s2, 0x7
    ctx->pc = 0x799554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
label_799558:
    // 0x799558: 0x2454ea60  addiu       $s4, $v0, -0x15A0
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
label_79955c:
    // 0x79955c: 0xc0b0a92  jal         func_2C2A48
label_799560:
    if (ctx->pc == 0x799560u) {
        ctx->pc = 0x799560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79955Cu;
        // 0x799560: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799564u;
        goto label_799564;
    }
    ctx->pc = 0x79955Cu;
    SET_GPR_U32(ctx, 31, 0x799564u);
    ctx->pc = 0x799560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79955Cu;
    // 0x799560: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79955Cu, 0x799564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799564u;
label_799564:
    // 0x799564: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x799564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799568:
    // 0x799568: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x799568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_79956c:
    // 0x79956c: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_799570:
    // 0x799570: 0x24030242  addiu       $v1, $zero, 0x242
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
label_799574:
    // 0x799574: 0xa2130031  sb          $s3, 0x31($s0)
    ctx->pc = 0x799574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 19));
label_799578:
    // 0x799578: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_79957c:
    // 0x79957c: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
label_799580:
    if (ctx->pc == 0x799580u) {
        ctx->pc = 0x799580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79957Cu;
        // 0x799580: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799584u;
        goto label_799584;
    }
    ctx->pc = 0x79957Cu;
    {
        const bool branch_taken_0x79957c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x799580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79957Cu;
        // 0x799580: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79957c) {
            ctx->pc = 0x79959Cu;
            goto label_79959c;
        }
    }
    ctx->pc = 0x799584u;
label_799584:
    // 0x799584: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x799584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799588:
    // 0x799588: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x799588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79958c:
    // 0x79958c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x79958cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_799590:
    // 0x799590: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x799590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_799594:
    // 0x799594: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x799594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_799598:
    // 0x799598: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x799598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_79959c:
    // 0x79959c: 0x3c01bf9c  lui         $at, 0xBF9C
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49052 << 16));
label_7995a0:
    // 0x7995a0: 0x342161aa  ori         $at, $at, 0x61AA
    ctx->pc = 0x7995a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25002);
label_7995a4:
    // 0x7995a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7995a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7995a8:
    // 0x7995a8: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x7995a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
label_7995ac:
    // 0x7995ac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x7995acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_7995b0:
    // 0x7995b0: 0xc07df52  jal         func_1F7D48
label_7995b4:
    if (ctx->pc == 0x7995B4u) {
        ctx->pc = 0x7995B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B0u;
        // 0x7995b4: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995B8u;
        goto label_7995b8;
    }
    ctx->pc = 0x7995B0u;
    SET_GPR_U32(ctx, 31, 0x7995B8u);
    ctx->pc = 0x7995B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B0u;
    // 0x7995b4: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x7995B0u, 0x7995B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B8u;
label_7995b8:
    // 0x7995b8: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
label_7995bc:
    // 0x7995bc: 0x24030201  addiu       $v1, $zero, 0x201
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
label_7995c0:
    // 0x7995c0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x7995c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_7995c4:
    // 0x7995c4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_7995c8:
    // 0x7995c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7995c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7995cc:
    // 0x7995cc: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x7995ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_7995d0:
    // 0x7995d0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x7995d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_7995d4:
    // 0x7995d4: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
label_7995d8:
    // 0x7995d8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x7995d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_7995dc:
    // 0x7995dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7995dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7995e0:
    // 0x7995e0: 0xa3b30041  sb          $s3, 0x41($sp)
    ctx->pc = 0x7995e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 19));
label_7995e4:
    // 0x7995e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7995e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7995e8:
    // 0x7995e8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x7995e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_7995ec:
    // 0x7995ec: 0xc0a4174  jal         func_2905D0
label_7995f0:
    if (ctx->pc == 0x7995F0u) {
        ctx->pc = 0x7995F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ECu;
        // 0x7995f0: 0xa3a00040  sb          $zero, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995F4u;
        goto label_7995f4;
    }
    ctx->pc = 0x7995ECu;
    SET_GPR_U32(ctx, 31, 0x7995F4u);
    ctx->pc = 0x7995F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995ECu;
    // 0x7995f0: 0xa3a00040  sb          $zero, 0x40($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2905D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2905D0u, 0x7995ECu, 0x7995F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F4u;
label_7995f4:
    // 0x7995f4: 0x8e23b770  lw          $v1, -0x4890($s1)
    ctx->pc = 0x7995f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948720)));
label_7995f8:
    // 0x7995f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x7995f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_7995fc:
    // 0x7995fc: 0x8e22b770  lw          $v0, -0x4890($s1)
    ctx->pc = 0x7995fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948720)));
label_799600:
    // 0x799600: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x799600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799604:
    // 0x799604: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_799608:
    if (ctx->pc == 0x799608u) {
        ctx->pc = 0x799608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799604u;
        // 0x799608: 0x2645000d  addiu       $a1, $s2, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79960Cu;
        goto label_79960c;
    }
    ctx->pc = 0x799604u;
    {
        const bool branch_taken_0x799604 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799604u;
        // 0x799608: 0x2645000d  addiu       $a1, $s2, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799604) {
            ctx->pc = 0x79964Cu;
            goto label_79964c;
        }
    }
    ctx->pc = 0x79960Cu;
label_79960c:
    // 0x79960c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79960cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_799610:
    // 0x799610: 0xc0b0a92  jal         func_2C2A48
label_799614:
    if (ctx->pc == 0x799614u) {
        ctx->pc = 0x799614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799610u;
        // 0x799614: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799618u;
        goto label_799618;
    }
    ctx->pc = 0x799610u;
    SET_GPR_U32(ctx, 31, 0x799618u);
    ctx->pc = 0x799614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799610u;
    // 0x799614: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799610u, 0x799618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799618u;
label_799618:
    // 0x799618: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x799618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79961c:
    // 0x79961c: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x79961cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_799620:
    // 0x799620: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x799620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_799624:
    // 0x799624: 0x60f809  jalr        $v1
label_799628:
    if (ctx->pc == 0x799628u) {
        ctx->pc = 0x799628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799624u;
        // 0x799628: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79962Cu;
        goto label_79962c;
    }
    ctx->pc = 0x799624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79962Cu);
        ctx->pc = 0x799628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799624u;
        // 0x799628: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799624u, 0x79962Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79962Cu;
label_79962c:
    // 0x79962c: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_799630:
    // 0x799630: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_799634:
    // 0x799634: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799638:
    // 0x799638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79963c:
    // 0x79963c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79963cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799640:
    // 0x799640: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799644:
    // 0x799644: 0xc09ba62  jal         func_26E988
label_799648:
    if (ctx->pc == 0x799648u) {
        ctx->pc = 0x799648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799644u;
        // 0x799648: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79964Cu;
        goto label_79964c;
    }
    ctx->pc = 0x799644u;
    SET_GPR_U32(ctx, 31, 0x79964Cu);
    ctx->pc = 0x799648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799644u;
    // 0x799648: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E988u, 0x799644u, 0x79964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79964Cu;
label_79964c:
    // 0x79964c: 0x8e23b770  lw          $v1, -0x4890($s1)
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948720)));
label_799650:
    // 0x799650: 0x3c0143e1  lui         $at, 0x43E1
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17377 << 16));
label_799654:
    // 0x799654: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799658:
    // 0x799658: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x799658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_79965c:
    // 0x79965c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79965cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_799660:
    // 0x799660: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x799660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_799664:
    // 0x799664: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x799664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_799668:
    // 0x799668: 0x8e22b770  lw          $v0, -0x4890($s1)
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948720)));
label_79966c:
    // 0x79966c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x79966cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_799670:
    // 0x799670: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x799670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_799674:
    // 0x799674: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x799674u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_799678:
    // 0x799678: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x799678u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79967c:
    // 0x79967c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79967cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_799680:
    // 0x799680: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x799680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_799684:
    // 0x799684: 0x3e00008  jr          $ra
label_799688:
    if (ctx->pc == 0x799688u) {
        ctx->pc = 0x799688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799684u;
        // 0x799688: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79968Cu;
        goto label_79968c;
    }
    ctx->pc = 0x799684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799684u;
        // 0x799688: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79968Cu;
label_79968c:
    // 0x79968c: 0x0  nop
    ctx->pc = 0x79968cu;
    // NOP
    ctx->pc = 0x799690u;
}
} // namespace gh_r607
