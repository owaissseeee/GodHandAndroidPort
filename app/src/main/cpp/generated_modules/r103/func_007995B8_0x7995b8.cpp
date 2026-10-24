#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r103_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r103
{
// Function: func_007995B8
// Address: 0x7995b8 - 0x7996f0
void func_007995B8_0x7995b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007995B8_0x7995b8");
#endif

    switch (ctx->pc) {
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
        default: break;
    }

    ctx->pc = 0x7995b8u;

label_7995b8:
    // 0x7995b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_7995bc:
    // 0x7995bc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_7995c0:
    // 0x7995c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7995c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_7995c4:
    // 0x7995c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_7995c8:
    // 0x7995c8: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x7995c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_7995cc:
    // 0x7995cc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x7995ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_7995d0:
    // 0x7995d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7995d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_7995d4:
    // 0x7995d4: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_7995d8:
    // 0x7995d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7995d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_7995dc:
    // 0x7995dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7995dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_7995e0:
    // 0x7995e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7995e4:
    // 0x7995e4: 0x3c01bfcc  lui         $at, 0xBFCC
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49100 << 16));
label_7995e8:
    // 0x7995e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x7995e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_7995ec:
    // 0x7995ec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x7995ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_7995f0:
    // 0x7995f0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7995f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_7995f4:
    // 0x7995f4: 0xc0b6dac  jal         func_2DB6B0
label_7995f8:
    if (ctx->pc == 0x7995F8u) {
        ctx->pc = 0x7995F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F4u;
        // 0x7995f8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7995FCu;
        goto label_7995fc;
    }
    ctx->pc = 0x7995F4u;
    SET_GPR_U32(ctx, 31, 0x7995FCu);
    ctx->pc = 0x7995F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F4u;
    // 0x7995f8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7995F4u, 0x7995FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995FCu;
label_7995fc:
    // 0x7995fc: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x7995fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_799600:
    // 0x799600: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_799604:
    // 0x799604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799608:
    // 0x799608: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_79960c:
    // 0x79960c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x79960cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_799610:
    // 0x799610: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_799614:
    // 0x799614: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799618:
    // 0x799618: 0x3c01c2b8  lui         $at, 0xC2B8
    ctx->pc = 0x799618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49848 << 16));
label_79961c:
    // 0x79961c: 0x3421bd71  ori         $at, $at, 0xBD71
    ctx->pc = 0x79961cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48497);
label_799620:
    // 0x799620: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799624:
    // 0x799624: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x799624u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_799628:
    // 0x799628: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x799628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_79962c:
    // 0x79962c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x79962cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_799630:
    // 0x799630: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x799630u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_799634:
    // 0x799634: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x799634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_799638:
    // 0x799638: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_79963c:
    // 0x79963c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_799640:
    // 0x799640: 0x60f809  jalr        $v1
label_799644:
    if (ctx->pc == 0x799644u) {
        ctx->pc = 0x799644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799640u;
        // 0x799644: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799648u;
        goto label_799648;
    }
    ctx->pc = 0x799640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x799648u);
        ctx->pc = 0x799644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799640u;
        // 0x799644: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799640u, 0x799648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799648u;
label_799648:
    // 0x799648: 0x8e060214  lw          $a2, 0x214($s0)
    ctx->pc = 0x799648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79964c:
    // 0x79964c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799650:
    // 0x799650: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x799650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799654:
    // 0x799654: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_799658:
    // 0x799658: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x799658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_79965c:
    // 0x79965c: 0xe4750004  swc1        $f21, 0x4($v1)
    ctx->pc = 0x79965cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_799660:
    // 0x799660: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x799660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_799664:
    // 0x799664: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x799664u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_799668:
    // 0x799668: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_79966c:
    // 0x79966c: 0x40f809  jalr        $v0
label_799670:
    if (ctx->pc == 0x799670u) {
        ctx->pc = 0x799670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79966Cu;
        // 0x799670: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799674u;
        goto label_799674;
    }
    ctx->pc = 0x79966Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799674u);
        ctx->pc = 0x799670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79966Cu;
        // 0x799670: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79966Cu, 0x799674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799674u;
label_799674:
    // 0x799674: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_799678:
    // 0x799678: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x799678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_79967c:
    // 0x79967c: 0x8c627a30  lw          $v0, 0x7A30($v1)
    ctx->pc = 0x79967cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31280)));
label_799680:
    // 0x799680: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x799680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_799684:
    // 0x799684: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_799688:
    if (ctx->pc == 0x799688u) {
        ctx->pc = 0x799688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799684u;
        // 0x799688: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79968Cu;
        goto label_79968c;
    }
    ctx->pc = 0x799684u;
    {
        const bool branch_taken_0x799684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799684u;
        // 0x799688: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799684) {
            ctx->pc = 0x7996A0u;
            goto label_7996a0;
        }
    }
    ctx->pc = 0x79968Cu;
label_79968c:
    // 0x79968c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_799690:
    // 0x799690: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_799694:
    // 0x799694: 0xc0a58dc  jal         func_296370
label_799698:
    if (ctx->pc == 0x799698u) {
        ctx->pc = 0x799698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799694u;
        // 0x799698: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79969Cu;
        goto label_79969c;
    }
    ctx->pc = 0x799694u;
    SET_GPR_U32(ctx, 31, 0x79969Cu);
    ctx->pc = 0x799698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799694u;
    // 0x799698: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799694u, 0x79969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79969Cu;
label_79969c:
    // 0x79969c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79969cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_7996a0:
    // 0x7996a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7996a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7996a4:
    // 0x7996a4: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x7996a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
label_7996a8:
    // 0x7996a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7996a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7996ac:
    // 0x7996ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7996acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7996b0:
    // 0x7996b0: 0xc0b016c  jal         func_2C05B0
label_7996b4:
    if (ctx->pc == 0x7996B4u) {
        ctx->pc = 0x7996B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B0u;
        // 0x7996b4: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996B8u;
        goto label_7996b8;
    }
    ctx->pc = 0x7996B0u;
    SET_GPR_U32(ctx, 31, 0x7996B8u);
    ctx->pc = 0x7996B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996B0u;
    // 0x7996b4: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x7996B0u, 0x7996B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B8u;
label_7996b8:
    // 0x7996b8: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7996b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_7996bc:
    // 0x7996bc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7996bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_7996c0:
    // 0x7996c0: 0x24a596f0  addiu       $a1, $a1, -0x6910
    ctx->pc = 0x7996c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940400));
label_7996c4:
    // 0x7996c4: 0xc0b0e24  jal         func_2C3890
label_7996c8:
    if (ctx->pc == 0x7996C8u) {
        ctx->pc = 0x7996C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C4u;
        // 0x7996c8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996CCu;
        goto label_7996cc;
    }
    ctx->pc = 0x7996C4u;
    SET_GPR_U32(ctx, 31, 0x7996CCu);
    ctx->pc = 0x7996C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C4u;
    // 0x7996c8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7996C4u, 0x7996CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996CCu;
label_7996cc:
    // 0x7996cc: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x7996ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_7996d0:
    // 0x7996d0: 0xc0b5692  jal         func_2D5A48
label_7996d4:
    if (ctx->pc == 0x7996D4u) {
        ctx->pc = 0x7996D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D0u;
        // 0x7996d4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996D8u;
        goto label_7996d8;
    }
    ctx->pc = 0x7996D0u;
    SET_GPR_U32(ctx, 31, 0x7996D8u);
    ctx->pc = 0x7996D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D0u;
    // 0x7996d4: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7996D0u, 0x7996D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996D8u;
label_7996d8:
    // 0x7996d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7996d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7996dc:
    // 0x7996dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7996dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_7996e0:
    // 0x7996e0: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x7996e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_7996e4:
    // 0x7996e4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x7996e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_7996e8:
    // 0x7996e8: 0x3e00008  jr          $ra
label_7996ec:
    if (ctx->pc == 0x7996ECu) {
        ctx->pc = 0x7996ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E8u;
        // 0x7996ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996F0u;
        goto label_fallthrough_0x7996e8;
    }
    ctx->pc = 0x7996E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7996ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E8u;
        // 0x7996ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7996e8:
    ctx->pc = 0x7996F0u;
}
} // namespace gh_r103
