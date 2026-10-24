#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r104_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r104
{
// Function: func_007995C0
// Address: 0x7995c0 - 0x799820
void func_007995C0_0x7995c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007995C0_0x7995c0");
#endif

    switch (ctx->pc) {
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
        case 0x799690u: goto label_799690;
        case 0x799694u: goto label_799694;
        case 0x799698u: goto label_799698;
        case 0x79969cu: goto label_79969c;
        case 0x7996a0u: goto label_7996a0;
        case 0x7996a4u: goto label_7996a4;
        case 0x7996a8u: goto label_7996a8;
        case 0x7996acu: goto label_7996ac;
        case 0x7996b0u: goto label_7996b0;
        case 0x7996b4u: goto label_7996b4;
        case 0x7996b8u: goto label_7996b8;
        case 0x7996bcu: goto label_7996bc;
        case 0x7996c0u: goto label_7996c0;
        case 0x7996c4u: goto label_7996c4;
        case 0x7996c8u: goto label_7996c8;
        case 0x7996ccu: goto label_7996cc;
        case 0x7996d0u: goto label_7996d0;
        case 0x7996d4u: goto label_7996d4;
        case 0x7996d8u: goto label_7996d8;
        case 0x7996dcu: goto label_7996dc;
        case 0x7996e0u: goto label_7996e0;
        case 0x7996e4u: goto label_7996e4;
        case 0x7996e8u: goto label_7996e8;
        case 0x7996ecu: goto label_7996ec;
        case 0x7996f0u: goto label_7996f0;
        case 0x7996f4u: goto label_7996f4;
        case 0x7996f8u: goto label_7996f8;
        case 0x7996fcu: goto label_7996fc;
        case 0x799700u: goto label_799700;
        case 0x799704u: goto label_799704;
        case 0x799708u: goto label_799708;
        case 0x79970cu: goto label_79970c;
        case 0x799710u: goto label_799710;
        case 0x799714u: goto label_799714;
        case 0x799718u: goto label_799718;
        case 0x79971cu: goto label_79971c;
        case 0x799720u: goto label_799720;
        case 0x799724u: goto label_799724;
        case 0x799728u: goto label_799728;
        case 0x79972cu: goto label_79972c;
        case 0x799730u: goto label_799730;
        case 0x799734u: goto label_799734;
        case 0x799738u: goto label_799738;
        case 0x79973cu: goto label_79973c;
        case 0x799740u: goto label_799740;
        case 0x799744u: goto label_799744;
        case 0x799748u: goto label_799748;
        case 0x79974cu: goto label_79974c;
        case 0x799750u: goto label_799750;
        case 0x799754u: goto label_799754;
        case 0x799758u: goto label_799758;
        case 0x79975cu: goto label_79975c;
        case 0x799760u: goto label_799760;
        case 0x799764u: goto label_799764;
        case 0x799768u: goto label_799768;
        case 0x79976cu: goto label_79976c;
        case 0x799770u: goto label_799770;
        case 0x799774u: goto label_799774;
        case 0x799778u: goto label_799778;
        case 0x79977cu: goto label_79977c;
        case 0x799780u: goto label_799780;
        case 0x799784u: goto label_799784;
        case 0x799788u: goto label_799788;
        case 0x79978cu: goto label_79978c;
        case 0x799790u: goto label_799790;
        case 0x799794u: goto label_799794;
        case 0x799798u: goto label_799798;
        case 0x79979cu: goto label_79979c;
        case 0x7997a0u: goto label_7997a0;
        case 0x7997a4u: goto label_7997a4;
        case 0x7997a8u: goto label_7997a8;
        case 0x7997acu: goto label_7997ac;
        case 0x7997b0u: goto label_7997b0;
        case 0x7997b4u: goto label_7997b4;
        case 0x7997b8u: goto label_7997b8;
        case 0x7997bcu: goto label_7997bc;
        case 0x7997c0u: goto label_7997c0;
        case 0x7997c4u: goto label_7997c4;
        case 0x7997c8u: goto label_7997c8;
        case 0x7997ccu: goto label_7997cc;
        case 0x7997d0u: goto label_7997d0;
        case 0x7997d4u: goto label_7997d4;
        case 0x7997d8u: goto label_7997d8;
        case 0x7997dcu: goto label_7997dc;
        case 0x7997e0u: goto label_7997e0;
        case 0x7997e4u: goto label_7997e4;
        case 0x7997e8u: goto label_7997e8;
        case 0x7997ecu: goto label_7997ec;
        case 0x7997f0u: goto label_7997f0;
        case 0x7997f4u: goto label_7997f4;
        case 0x7997f8u: goto label_7997f8;
        case 0x7997fcu: goto label_7997fc;
        case 0x799800u: goto label_799800;
        case 0x799804u: goto label_799804;
        case 0x799808u: goto label_799808;
        case 0x79980cu: goto label_79980c;
        case 0x799810u: goto label_799810;
        case 0x799814u: goto label_799814;
        case 0x799818u: goto label_799818;
        case 0x79981cu: goto label_79981c;
        default: break;
    }

    ctx->pc = 0x7995c0u;

label_7995c0:
    // 0x7995c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x7995c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_7995c4:
    // 0x7995c4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x7995c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_7995c8:
    // 0x7995c8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7995c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_7995cc:
    // 0x7995cc: 0x240403da  addiu       $a0, $zero, 0x3DA
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 986));
label_7995d0:
    // 0x7995d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7995d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_7995d4:
    // 0x7995d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7995d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_7995d8:
    // 0x7995d8: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x7995d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
label_7995dc:
    // 0x7995dc: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x7995dcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_7995e0:
    // 0x7995e0: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x7995e0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_7995e4:
    // 0x7995e4: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x7995e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_7995e8:
    // 0x7995e8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x7995e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_7995ec:
    // 0x7995ec: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x7995ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_7995f0:
    // 0x7995f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7995f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_7995f4:
    // 0x7995f4: 0xc0c3ea6  jal         func_30FA98
label_7995f8:
    if (ctx->pc == 0x7995F8u) {
        ctx->pc = 0x7995F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F4u;
        // 0x7995f8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995FCu;
        goto label_7995fc;
    }
    ctx->pc = 0x7995F4u;
    SET_GPR_U32(ctx, 31, 0x7995FCu);
    ctx->pc = 0x7995F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F4u;
    // 0x7995f8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x7995F4u, 0x7995FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995FCu;
label_7995fc:
    // 0x7995fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7995fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_799600:
    // 0x799600: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_799604:
    // 0x799604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799608:
    // 0x799608: 0x3c01bfbc  lui         $at, 0xBFBC
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49084 << 16));
label_79960c:
    // 0x79960c: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x79960cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_799610:
    // 0x799610: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_799614:
    // 0x799614: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799618:
    // 0x799618: 0x4600a606  mov.s       $f24, $f20
    ctx->pc = 0x799618u;
    ctx->f[24] = FPU_MOV_S(ctx->f[20]);
label_79961c:
    // 0x79961c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79961cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_799620:
    // 0x799620: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799620u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_799624:
    // 0x799624: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_799628:
    // 0x799628: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_79962c:
    // 0x79962c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_799630:
    // 0x799630: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_799634:
    // 0x799634: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x799634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_799638:
    // 0x799638: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x799638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_79963c:
    // 0x79963c: 0x40f809  jalr        $v0
label_799640:
    if (ctx->pc == 0x799640u) {
        ctx->pc = 0x799640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79963Cu;
        // 0x799640: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799644u;
        goto label_799644;
    }
    ctx->pc = 0x79963Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799644u);
        ctx->pc = 0x799640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79963Cu;
        // 0x799640: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79963Cu, 0x799644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799644u;
label_799644:
    // 0x799644: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x799644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799648:
    // 0x799648: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79964c:
    // 0x79964c: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
label_799650:
    // 0x799650: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x799650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_799654:
    // 0x799654: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_799658:
    // 0x799658: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x799658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_79965c:
    // 0x79965c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79965cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_799660:
    // 0x799660: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_799664:
    // 0x799664: 0x3c01c17b  lui         $at, 0xC17B
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49531 << 16));
label_799668:
    // 0x799668: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x799668u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_79966c:
    // 0x79966c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79966cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799670:
    // 0x799670: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_799674:
    // 0x799674: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x799674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_799678:
    // 0x799678: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x799678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_79967c:
    // 0x79967c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x79967cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_799680:
    // 0x799680: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x799680u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_799684:
    // 0x799684: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x799684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_799688:
    // 0x799688: 0x40f809  jalr        $v0
label_79968c:
    if (ctx->pc == 0x79968Cu) {
        ctx->pc = 0x79968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799688u;
        // 0x79968c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799690u;
        goto label_799690;
    }
    ctx->pc = 0x799688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799690u);
        ctx->pc = 0x79968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799688u;
        // 0x79968c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799688u, 0x799690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799690u;
label_799690:
    // 0x799690: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799694:
    // 0x799694: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799698:
    // 0x799698: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x799698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_79969c:
    // 0x79969c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79969cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_7996a0:
    // 0x7996a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7996a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7996a4:
    // 0x7996a4: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x7996a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_7996a8:
    // 0x7996a8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x7996a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_7996ac:
    // 0x7996ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7996acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_7996b0:
    // 0x7996b0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x7996b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_7996b4:
    // 0x7996b4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x7996b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_7996b8:
    // 0x7996b8: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x7996b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_7996bc:
    // 0x7996bc: 0x40f809  jalr        $v0
label_7996c0:
    if (ctx->pc == 0x7996C0u) {
        ctx->pc = 0x7996C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996BCu;
        // 0x7996c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996C4u;
        goto label_7996c4;
    }
    ctx->pc = 0x7996BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7996C4u);
        ctx->pc = 0x7996C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996BCu;
        // 0x7996c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996BCu, 0x7996C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7996C4u;
label_7996c4:
    // 0x7996c4: 0x92030676  lbu         $v1, 0x676($s0)
    ctx->pc = 0x7996c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1654)));
label_7996c8:
    // 0x7996c8: 0x24020a5d  addiu       $v0, $zero, 0xA5D
    ctx->pc = 0x7996c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2653));
label_7996cc:
    // 0x7996cc: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x7996ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
label_7996d0:
    // 0x7996d0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x7996d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_7996d4:
    // 0x7996d4: 0xc0b6dac  jal         func_2DB6B0
label_7996d8:
    if (ctx->pc == 0x7996D8u) {
        ctx->pc = 0x7996D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D4u;
        // 0x7996d8: 0xa2030676  sb          $v1, 0x676($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1654), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996DCu;
        goto label_7996dc;
    }
    ctx->pc = 0x7996D4u;
    SET_GPR_U32(ctx, 31, 0x7996DCu);
    ctx->pc = 0x7996D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D4u;
    // 0x7996d8: 0xa2030676  sb          $v1, 0x676($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1654), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7996D4u, 0x7996DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996DCu;
label_7996dc:
    // 0x7996dc: 0x3c01bfb8  lui         $at, 0xBFB8
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49080 << 16));
label_7996e0:
    // 0x7996e0: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x7996e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_7996e4:
    // 0x7996e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7996e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_7996e8:
    // 0x7996e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7996e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7996ec:
    // 0x7996ec: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x7996ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_7996f0:
    // 0x7996f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x7996f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_7996f4:
    // 0x7996f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7996f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7996f8:
    // 0x7996f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7996f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7996fc:
    // 0x7996fc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x7996fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_799700:
    // 0x799700: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x799700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_799704:
    // 0x799704: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x799704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_799708:
    // 0x799708: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x799708u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_79970c:
    // 0x79970c: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x79970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799710:
    // 0x799710: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x799710u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_799714:
    // 0x799714: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_799718:
    // 0x799718: 0x60f809  jalr        $v1
label_79971c:
    if (ctx->pc == 0x79971Cu) {
        ctx->pc = 0x79971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799718u;
        // 0x79971c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799720u;
        goto label_799720;
    }
    ctx->pc = 0x799718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799720u);
        ctx->pc = 0x79971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799718u;
        // 0x79971c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799718u, 0x799720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799720u;
label_799720:
    // 0x799720: 0x8e060214  lw          $a2, 0x214($s0)
    ctx->pc = 0x799720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799724:
    // 0x799724: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799728:
    // 0x799728: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x799728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79972c:
    // 0x79972c: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_799730:
    // 0x799730: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x799730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_799734:
    // 0x799734: 0xe4750004  swc1        $f21, 0x4($v1)
    ctx->pc = 0x799734u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_799738:
    // 0x799738: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x799738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_79973c:
    // 0x79973c: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x79973cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_799740:
    // 0x799740: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x799740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_799744:
    // 0x799744: 0x40f809  jalr        $v0
label_799748:
    if (ctx->pc == 0x799748u) {
        ctx->pc = 0x799748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799744u;
        // 0x799748: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79974Cu;
        goto label_79974c;
    }
    ctx->pc = 0x799744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79974Cu);
        ctx->pc = 0x799748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799744u;
        // 0x799748: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799744u, 0x79974Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79974Cu;
label_79974c:
    // 0x79974c: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799750:
    // 0x799750: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799754:
    // 0x799754: 0xc0b56a8  jal         func_2D5AA0
label_799758:
    if (ctx->pc == 0x799758u) {
        ctx->pc = 0x799758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799754u;
        // 0x799758: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79975Cu;
        goto label_79975c;
    }
    ctx->pc = 0x799754u;
    SET_GPR_U32(ctx, 31, 0x79975Cu);
    ctx->pc = 0x799758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799754u;
    // 0x799758: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799754u, 0x79975Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79975Cu;
label_79975c:
    // 0x79975c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x79975cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799760:
    // 0x799760: 0xc0b6cac  jal         func_2DB2B0
label_799764:
    if (ctx->pc == 0x799764u) {
        ctx->pc = 0x799764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799760u;
        // 0x799764: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799768u;
        goto label_799768;
    }
    ctx->pc = 0x799760u;
    SET_GPR_U32(ctx, 31, 0x799768u);
    ctx->pc = 0x799764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799760u;
    // 0x799764: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799760u, 0x799768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799768u;
label_799768:
    // 0x799768: 0x4617b580  add.s       $f22, $f22, $f23
    ctx->pc = 0x799768u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
label_79976c:
    // 0x79976c: 0x0  nop
    ctx->pc = 0x79976cu;
    // NOP
label_799770:
    // 0x799770: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x799770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799774:
    // 0x799774: 0xc0b6cc6  jal         func_2DB318
label_799778:
    if (ctx->pc == 0x799778u) {
        ctx->pc = 0x799778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799774u;
        // 0x799778: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79977Cu;
        goto label_79977c;
    }
    ctx->pc = 0x799774u;
    SET_GPR_U32(ctx, 31, 0x79977Cu);
    ctx->pc = 0x799778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799774u;
    // 0x799778: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x799774u, 0x79977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79977Cu;
label_79977c:
    // 0x79977c: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799780:
    // 0x799780: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799784:
    // 0x799784: 0xc0b56a8  jal         func_2D5AA0
label_799788:
    if (ctx->pc == 0x799788u) {
        ctx->pc = 0x799788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799784u;
        // 0x799788: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79978Cu;
        goto label_79978c;
    }
    ctx->pc = 0x799784u;
    SET_GPR_U32(ctx, 31, 0x79978Cu);
    ctx->pc = 0x799788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799784u;
    // 0x799788: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799784u, 0x79978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79978Cu;
label_79978c:
    // 0x79978c: 0x4618b034  c.lt.s      $f22, $f24
    ctx->pc = 0x79978cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_799790:
    // 0x799790: 0x0  nop
    ctx->pc = 0x799790u;
    // NOP
label_799794:
    // 0x799794: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
label_799798:
    if (ctx->pc == 0x799798u) {
        ctx->pc = 0x799798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799794u;
        // 0x799798: 0x4617b580  add.s       $f22, $f22, $f23 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79979Cu;
        goto label_79979c;
    }
    ctx->pc = 0x799794u;
    {
        const bool branch_taken_0x799794 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x799794) {
            ctx->pc = 0x799798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799794u;
            // 0x799798: 0x4617b580  add.s       $f22, $f22, $f23 (Delay Slot)
            ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x799770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799770;
        }
    }
    ctx->pc = 0x79979Cu;
label_79979c:
    // 0x79979c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79979cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_7997a0:
    // 0x7997a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7997a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_7997a4:
    // 0x7997a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x7997a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_7997a8:
    // 0x7997a8: 0xc0b6cc6  jal         func_2DB318
label_7997ac:
    if (ctx->pc == 0x7997ACu) {
        ctx->pc = 0x7997ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A8u;
        // 0x7997ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997B0u;
        goto label_7997b0;
    }
    ctx->pc = 0x7997A8u;
    SET_GPR_U32(ctx, 31, 0x7997B0u);
    ctx->pc = 0x7997ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997A8u;
    // 0x7997ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x7997A8u, 0x7997B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997B0u;
label_7997b0:
    // 0x7997b0: 0x10000004  b           . + 4 + (0x4 << 2)
label_7997b4:
    if (ctx->pc == 0x7997B4u) {
        ctx->pc = 0x7997B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B0u;
        // 0x7997b4: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997B8u;
        goto label_7997b8;
    }
    ctx->pc = 0x7997B0u;
    {
        const bool branch_taken_0x7997b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B0u;
        // 0x7997b4: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997b0) {
            ctx->pc = 0x7997C4u;
            goto label_7997c4;
        }
    }
    ctx->pc = 0x7997B8u;
label_7997b8:
    // 0x7997b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7997b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7997bc:
    // 0x7997bc: 0xc0b56a8  jal         func_2D5AA0
label_7997c0:
    if (ctx->pc == 0x7997C0u) {
        ctx->pc = 0x7997C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997BCu;
        // 0x7997c0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997C4u;
        goto label_7997c4;
    }
    ctx->pc = 0x7997BCu;
    SET_GPR_U32(ctx, 31, 0x7997C4u);
    ctx->pc = 0x7997C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997BCu;
    // 0x7997c0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7997BCu, 0x7997C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997C4u;
label_7997c4:
    // 0x7997c4: 0xc0a572a  jal         func_295CA8
label_7997c8:
    if (ctx->pc == 0x7997C8u) {
        ctx->pc = 0x7997C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997C4u;
        // 0x7997c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997CCu;
        goto label_7997cc;
    }
    ctx->pc = 0x7997C4u;
    SET_GPR_U32(ctx, 31, 0x7997CCu);
    ctx->pc = 0x7997C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997C4u;
    // 0x7997c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7997C4u, 0x7997CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997CCu;
label_7997cc:
    // 0x7997cc: 0x1450fffa  bne         $v0, $s0, . + 4 + (-0x6 << 2)
label_7997d0:
    if (ctx->pc == 0x7997D0u) {
        ctx->pc = 0x7997D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997CCu;
        // 0x7997d0: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997D4u;
        goto label_7997d4;
    }
    ctx->pc = 0x7997CCu;
    {
        const bool branch_taken_0x7997cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x7997D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997CCu;
        // 0x7997d0: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997cc) {
            ctx->pc = 0x7997B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997b8;
        }
    }
    ctx->pc = 0x7997D4u;
label_7997d4:
    // 0x7997d4: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x7997d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_7997d8:
    // 0x7997d8: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7997d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_7997dc:
    // 0x7997dc: 0x24a59538  addiu       $a1, $a1, -0x6AC8
    ctx->pc = 0x7997dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939960));
label_7997e0:
    // 0x7997e0: 0xc0b0e24  jal         func_2C3890
label_7997e4:
    if (ctx->pc == 0x7997E4u) {
        ctx->pc = 0x7997E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E0u;
        // 0x7997e4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997E8u;
        goto label_7997e8;
    }
    ctx->pc = 0x7997E0u;
    SET_GPR_U32(ctx, 31, 0x7997E8u);
    ctx->pc = 0x7997E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997E0u;
    // 0x7997e4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7997E0u, 0x7997E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997E8u;
label_7997e8:
    // 0x7997e8: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_7997ec:
    // 0x7997ec: 0xc0b5692  jal         func_2D5A48
label_7997f0:
    if (ctx->pc == 0x7997F0u) {
        ctx->pc = 0x7997F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997ECu;
        // 0x7997f0: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997F4u;
        goto label_7997f4;
    }
    ctx->pc = 0x7997ECu;
    SET_GPR_U32(ctx, 31, 0x7997F4u);
    ctx->pc = 0x7997F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997ECu;
    // 0x7997f0: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7997ECu, 0x7997F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F4u;
label_7997f4:
    // 0x7997f4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7997f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7997f8:
    // 0x7997f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7997f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7997fc:
    // 0x7997fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7997fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_799800:
    // 0x799800: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799804:
    // 0x799804: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x799804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_799808:
    // 0x799808: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x799808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_79980c:
    // 0x79980c: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x79980cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_799810:
    // 0x799810: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x799810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_799814:
    // 0x799814: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x799814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_799818:
    // 0x799818: 0x3e00008  jr          $ra
label_79981c:
    if (ctx->pc == 0x79981Cu) {
        ctx->pc = 0x79981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799818u;
        // 0x79981c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799820u;
        goto label_fallthrough_0x799818;
    }
    ctx->pc = 0x799818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799818u;
        // 0x79981c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799818:
    ctx->pc = 0x799820u;
}
} // namespace gh_r104
