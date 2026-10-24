#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __sjthrow
// Address: 0x7cb510 - 0x7cb688
void ps2___sjthrow_0x7cb510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sjthrow_0x7cb510");
#endif

    switch (ctx->pc) {
        case 0x7cb510u: goto label_7cb510;
        case 0x7cb514u: goto label_7cb514;
        case 0x7cb518u: goto label_7cb518;
        case 0x7cb51cu: goto label_7cb51c;
        case 0x7cb520u: goto label_7cb520;
        case 0x7cb524u: goto label_7cb524;
        case 0x7cb528u: goto label_7cb528;
        case 0x7cb52cu: goto label_7cb52c;
        case 0x7cb530u: goto label_7cb530;
        case 0x7cb534u: goto label_7cb534;
        case 0x7cb538u: goto label_7cb538;
        case 0x7cb53cu: goto label_7cb53c;
        case 0x7cb540u: goto label_7cb540;
        case 0x7cb544u: goto label_7cb544;
        case 0x7cb548u: goto label_7cb548;
        case 0x7cb54cu: goto label_7cb54c;
        case 0x7cb550u: goto label_7cb550;
        case 0x7cb554u: goto label_7cb554;
        case 0x7cb558u: goto label_7cb558;
        case 0x7cb55cu: goto label_7cb55c;
        case 0x7cb560u: goto label_7cb560;
        case 0x7cb564u: goto label_7cb564;
        case 0x7cb568u: goto label_7cb568;
        case 0x7cb56cu: goto label_7cb56c;
        case 0x7cb570u: goto label_7cb570;
        case 0x7cb574u: goto label_7cb574;
        case 0x7cb578u: goto label_7cb578;
        case 0x7cb57cu: goto label_7cb57c;
        case 0x7cb580u: goto label_7cb580;
        case 0x7cb584u: goto label_7cb584;
        case 0x7cb588u: goto label_7cb588;
        case 0x7cb58cu: goto label_7cb58c;
        case 0x7cb590u: goto label_7cb590;
        case 0x7cb594u: goto label_7cb594;
        case 0x7cb598u: goto label_7cb598;
        case 0x7cb59cu: goto label_7cb59c;
        case 0x7cb5a0u: goto label_7cb5a0;
        case 0x7cb5a4u: goto label_7cb5a4;
        case 0x7cb5a8u: goto label_7cb5a8;
        case 0x7cb5acu: goto label_7cb5ac;
        case 0x7cb5b0u: goto label_7cb5b0;
        case 0x7cb5b4u: goto label_7cb5b4;
        case 0x7cb5b8u: goto label_7cb5b8;
        case 0x7cb5bcu: goto label_7cb5bc;
        case 0x7cb5c0u: goto label_7cb5c0;
        case 0x7cb5c4u: goto label_7cb5c4;
        case 0x7cb5c8u: goto label_7cb5c8;
        case 0x7cb5ccu: goto label_7cb5cc;
        case 0x7cb5d0u: goto label_7cb5d0;
        case 0x7cb5d4u: goto label_7cb5d4;
        case 0x7cb5d8u: goto label_7cb5d8;
        case 0x7cb5dcu: goto label_7cb5dc;
        case 0x7cb5e0u: goto label_7cb5e0;
        case 0x7cb5e4u: goto label_7cb5e4;
        case 0x7cb5e8u: goto label_7cb5e8;
        case 0x7cb5ecu: goto label_7cb5ec;
        case 0x7cb5f0u: goto label_7cb5f0;
        case 0x7cb5f4u: goto label_7cb5f4;
        case 0x7cb5f8u: goto label_7cb5f8;
        case 0x7cb5fcu: goto label_7cb5fc;
        case 0x7cb600u: goto label_7cb600;
        case 0x7cb604u: goto label_7cb604;
        case 0x7cb608u: goto label_7cb608;
        case 0x7cb60cu: goto label_7cb60c;
        case 0x7cb610u: goto label_7cb610;
        case 0x7cb614u: goto label_7cb614;
        case 0x7cb618u: goto label_7cb618;
        case 0x7cb61cu: goto label_7cb61c;
        case 0x7cb620u: goto label_7cb620;
        case 0x7cb624u: goto label_7cb624;
        case 0x7cb628u: goto label_7cb628;
        case 0x7cb62cu: goto label_7cb62c;
        case 0x7cb630u: goto label_7cb630;
        case 0x7cb634u: goto label_7cb634;
        case 0x7cb638u: goto label_7cb638;
        case 0x7cb63cu: goto label_7cb63c;
        case 0x7cb640u: goto label_7cb640;
        case 0x7cb644u: goto label_7cb644;
        case 0x7cb648u: goto label_7cb648;
        case 0x7cb64cu: goto label_7cb64c;
        case 0x7cb650u: goto label_7cb650;
        case 0x7cb654u: goto label_7cb654;
        case 0x7cb658u: goto label_7cb658;
        case 0x7cb65cu: goto label_7cb65c;
        case 0x7cb660u: goto label_7cb660;
        case 0x7cb664u: goto label_7cb664;
        case 0x7cb668u: goto label_7cb668;
        case 0x7cb66cu: goto label_7cb66c;
        case 0x7cb670u: goto label_7cb670;
        case 0x7cb674u: goto label_7cb674;
        case 0x7cb678u: goto label_7cb678;
        case 0x7cb67cu: goto label_7cb67c;
        case 0x7cb680u: goto label_7cb680;
        case 0x7cb684u: goto label_7cb684;
        default: break;
    }

    ctx->pc = 0x7cb510u;

label_7cb510:
    // 0x7cb510: 0x27bdf8b0  addiu       $sp, $sp, -0x750
    ctx->pc = 0x7cb510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965424));
label_7cb514:
    // 0x7cb514: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cb514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
label_7cb518:
    // 0x7cb518: 0xffbe06d0  sd          $fp, 0x6D0($sp)
    ctx->pc = 0x7cb518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1744), GPR_U64(ctx, 30));
label_7cb51c:
    // 0x7cb51c: 0xffbf06e0  sd          $ra, 0x6E0($sp)
    ctx->pc = 0x7cb51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1760), GPR_U64(ctx, 31));
label_7cb520:
    // 0x7cb520: 0xffb706c0  sd          $s7, 0x6C0($sp)
    ctx->pc = 0x7cb520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1728), GPR_U64(ctx, 23));
label_7cb524:
    // 0x7cb524: 0xffb606b0  sd          $s6, 0x6B0($sp)
    ctx->pc = 0x7cb524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1712), GPR_U64(ctx, 22));
label_7cb528:
    // 0x7cb528: 0xffb506a0  sd          $s5, 0x6A0($sp)
    ctx->pc = 0x7cb528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1696), GPR_U64(ctx, 21));
label_7cb52c:
    // 0x7cb52c: 0xffb40690  sd          $s4, 0x690($sp)
    ctx->pc = 0x7cb52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 20));
label_7cb530:
    // 0x7cb530: 0xffb30680  sd          $s3, 0x680($sp)
    ctx->pc = 0x7cb530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 19));
label_7cb534:
    // 0x7cb534: 0xffb20670  sd          $s2, 0x670($sp)
    ctx->pc = 0x7cb534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 18));
label_7cb538:
    // 0x7cb538: 0xffb10660  sd          $s1, 0x660($sp)
    ctx->pc = 0x7cb538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 17));
label_7cb53c:
    // 0x7cb53c: 0xffb00650  sd          $s0, 0x650($sp)
    ctx->pc = 0x7cb53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 16));
label_7cb540:
    // 0x7cb540: 0xe7bf0748  swc1        $f31, 0x748($sp)
    ctx->pc = 0x7cb540u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1864), bits); }
label_7cb544:
    // 0x7cb544: 0xe7be0740  swc1        $f30, 0x740($sp)
    ctx->pc = 0x7cb544u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
label_7cb548:
    // 0x7cb548: 0xe7bd0738  swc1        $f29, 0x738($sp)
    ctx->pc = 0x7cb548u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1848), bits); }
label_7cb54c:
    // 0x7cb54c: 0xe7bc0730  swc1        $f28, 0x730($sp)
    ctx->pc = 0x7cb54cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_7cb550:
    // 0x7cb550: 0xe7bb0728  swc1        $f27, 0x728($sp)
    ctx->pc = 0x7cb550u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
label_7cb554:
    // 0x7cb554: 0xe7ba0720  swc1        $f26, 0x720($sp)
    ctx->pc = 0x7cb554u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
label_7cb558:
    // 0x7cb558: 0xe7b90718  swc1        $f25, 0x718($sp)
    ctx->pc = 0x7cb558u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1816), bits); }
label_7cb55c:
    // 0x7cb55c: 0xe7b80710  swc1        $f24, 0x710($sp)
    ctx->pc = 0x7cb55cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
label_7cb560:
    // 0x7cb560: 0xe7b70708  swc1        $f23, 0x708($sp)
    ctx->pc = 0x7cb560u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
label_7cb564:
    // 0x7cb564: 0xe7b60700  swc1        $f22, 0x700($sp)
    ctx->pc = 0x7cb564u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1792), bits); }
label_7cb568:
    // 0x7cb568: 0xe7b506f8  swc1        $f21, 0x6F8($sp)
    ctx->pc = 0x7cb568u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_7cb56c:
    // 0x7cb56c: 0xe7b406f0  swc1        $f20, 0x6F0($sp)
    ctx->pc = 0x7cb56cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
label_7cb570:
    // 0x7cb570: 0x8c6201a4  lw          $v0, 0x1A4($v1)
    ctx->pc = 0x7cb570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
label_7cb574:
    // 0x7cb574: 0x40f809  jalr        $v0
label_7cb578:
    if (ctx->pc == 0x7CB578u) {
        ctx->pc = 0x7CB578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB574u;
        // 0x7cb578: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB57Cu;
        goto label_7cb57c;
    }
    ctx->pc = 0x7CB574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7CB57Cu);
        ctx->pc = 0x7CB578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB574u;
        // 0x7cb578: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB574u, 0x7CB57Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CB57Cu;
label_7cb57c:
    // 0x7cb57c: 0xafc20640  sw          $v0, 0x640($fp)
    ctx->pc = 0x7cb57cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1600), GPR_U32(ctx, 2));
label_7cb580:
    // 0x7cb580: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7cb580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7cb584:
    // 0x7cb584: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x7cb584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_7cb588:
    // 0x7cb588: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x7cb588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_7cb58c:
    // 0x7cb58c: 0xafc20644  sw          $v0, 0x644($fp)
    ctx->pc = 0x7cb58cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1604), GPR_U32(ctx, 2));
label_7cb590:
    // 0x7cb590: 0xafc50648  sw          $a1, 0x648($fp)
    ctx->pc = 0x7cb590u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1608), GPR_U32(ctx, 5));
label_7cb594:
    // 0x7cb594: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7cb594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7cb598:
    // 0x7cb598: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_7cb59c:
    if (ctx->pc == 0x7CB59Cu) {
        ctx->pc = 0x7CB59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB598u;
        // 0x7cb59c: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB5A0u;
        goto label_7cb5a0;
    }
    ctx->pc = 0x7CB598u;
    {
        const bool branch_taken_0x7cb598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CB59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB598u;
        // 0x7cb59c: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb598) {
            ctx->pc = 0x7CB638u;
            goto label_7cb638;
        }
    }
    ctx->pc = 0x7CB5A0u;
label_7cb5a0:
    // 0x7cb5a0: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x7cb5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_7cb5a4:
    // 0x7cb5a4: 0x2442b5c8  addiu       $v0, $v0, -0x4A38
    ctx->pc = 0x7cb5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948296));
label_7cb5a8:
    // 0x7cb5a8: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x7cb5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_7cb5ac:
    // 0x7cb5ac: 0x27c30008  addiu       $v1, $fp, 0x8
    ctx->pc = 0x7cb5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_7cb5b0:
    // 0x7cb5b0: 0xafde0008  sw          $fp, 0x8($fp)
    ctx->pc = 0x7cb5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 30));
label_7cb5b4:
    // 0x7cb5b4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x7cb5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_7cb5b8:
    // 0x7cb5b8: 0xafde064c  sw          $fp, 0x64C($fp)
    ctx->pc = 0x7cb5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1612), GPR_U32(ctx, 30));
label_7cb5bc:
    // 0x7cb5bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7cb5bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7cb5c0:
    // 0x7cb5c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_7cb5c4:
    if (ctx->pc == 0x7CB5C4u) {
        ctx->pc = 0x7CB5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB5C0u;
        // 0x7cb5c4: 0xac7d0008  sw          $sp, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB5C8u;
        goto label_7cb5c8;
    }
    ctx->pc = 0x7CB5C0u;
    {
        const bool branch_taken_0x7cb5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CB5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB5C0u;
        // 0x7cb5c4: 0xac7d0008  sw          $sp, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb5c0) {
            ctx->pc = 0x7CB5CCu;
            goto label_7cb5cc;
        }
    }
    ctx->pc = 0x7CB5C8u;
label_7cb5c8:
    // 0x7cb5c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7cb5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7cb5cc:
    // 0x7cb5cc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_7cb5d0:
    if (ctx->pc == 0x7CB5D0u) {
        ctx->pc = 0x7CB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB5CCu;
        // 0x7cb5d0: 0x8fc2064c  lw          $v0, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB5D4u;
        goto label_7cb5d4;
    }
    ctx->pc = 0x7CB5CCu;
    {
        const bool branch_taken_0x7cb5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB5CCu;
        // 0x7cb5d0: 0x8fc2064c  lw          $v0, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb5cc) {
            ctx->pc = 0x7CB630u;
            goto label_7cb630;
        }
    }
    ctx->pc = 0x7CB5D4u;
label_7cb5d4:
    // 0x7cb5d4: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x7cb5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_7cb5d8:
    // 0x7cb5d8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x7cb5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_7cb5dc:
    // 0x7cb5dc: 0x8fc50648  lw          $a1, 0x648($fp)
    ctx->pc = 0x7cb5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_7cb5e0:
    // 0x7cb5e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x7cb5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_7cb5e4:
    // 0x7cb5e4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_7cb5e8:
    if (ctx->pc == 0x7CB5E8u) {
        ctx->pc = 0x7CB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB5E4u;
        // 0x7cb5e8: 0x8fc5064c  lw          $a1, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB5ECu;
        goto label_7cb5ec;
    }
    ctx->pc = 0x7CB5E4u;
    {
        const bool branch_taken_0x7cb5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB5E4u;
        // 0x7cb5e8: 0x8fc5064c  lw          $a1, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb5e4) {
            ctx->pc = 0x7CB620u;
            goto label_7cb620;
        }
    }
    ctx->pc = 0x7CB5ECu;
label_7cb5ec:
    // 0x7cb5ec: 0x0  nop
    ctx->pc = 0x7cb5ecu;
    // NOP
label_7cb5f0:
    // 0x7cb5f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7cb5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_7cb5f4:
    // 0x7cb5f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7cb5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7cb5f8:
    // 0x7cb5f8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x7cb5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_7cb5fc:
    // 0x7cb5fc: 0x8fc60648  lw          $a2, 0x648($fp)
    ctx->pc = 0x7cb5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_7cb600:
    // 0x7cb600: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x7cb600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7cb604:
    // 0x7cb604: 0x60f809  jalr        $v1
label_7cb608:
    if (ctx->pc == 0x7CB608u) {
        ctx->pc = 0x7CB608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB604u;
        // 0x7cb608: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB60Cu;
        goto label_7cb60c;
    }
    ctx->pc = 0x7CB604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7CB60Cu);
        ctx->pc = 0x7CB608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB604u;
        // 0x7cb608: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB604u, 0x7CB60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CB60Cu;
label_7cb60c:
    // 0x7cb60c: 0x8fc30648  lw          $v1, 0x648($fp)
    ctx->pc = 0x7cb60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_7cb610:
    // 0x7cb610: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7cb610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_7cb614:
    // 0x7cb614: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_7cb618:
    if (ctx->pc == 0x7CB618u) {
        ctx->pc = 0x7CB618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB614u;
        // 0x7cb618: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB61Cu;
        goto label_7cb61c;
    }
    ctx->pc = 0x7CB614u;
    {
        const bool branch_taken_0x7cb614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CB618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB614u;
        // 0x7cb618: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb614) {
            ctx->pc = 0x7CB5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cb5f0;
        }
    }
    ctx->pc = 0x7CB61Cu;
label_7cb61c:
    // 0x7cb61c: 0x8fc5064c  lw          $a1, 0x64C($fp)
    ctx->pc = 0x7cb61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
label_7cb620:
    // 0x7cb620: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x7cb620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_7cb624:
    // 0x7cb624: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x7cb624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_7cb628:
    // 0x7cb628: 0x10000003  b           . + 4 + (0x3 << 2)
label_7cb62c:
    if (ctx->pc == 0x7CB62Cu) {
        ctx->pc = 0x7CB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB628u;
        // 0x7cb62c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB630u;
        goto label_7cb630;
    }
    ctx->pc = 0x7CB628u;
    {
        const bool branch_taken_0x7cb628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB628u;
        // 0x7cb62c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb628) {
            ctx->pc = 0x7CB638u;
            goto label_7cb638;
        }
    }
    ctx->pc = 0x7CB630u;
label_7cb630:
    // 0x7cb630: 0xc1f2cd4  jal         func_7CB350
label_7cb634:
    if (ctx->pc == 0x7CB634u) {
        ctx->pc = 0x7CB638u;
        goto label_7cb638;
    }
    ctx->pc = 0x7CB630u;
    SET_GPR_U32(ctx, 31, 0x7CB638u);
    ctx->pc = 0x7CB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB350u, 0x7CB630u, 0x7CB638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB638u;
label_7cb638:
    // 0x7cb638: 0x8fc30640  lw          $v1, 0x640($fp)
    ctx->pc = 0x7cb638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1600)));
label_7cb63c:
    // 0x7cb63c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x7cb63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_7cb640:
    // 0x7cb640: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_7cb644:
    if (ctx->pc == 0x7CB644u) {
        ctx->pc = 0x7CB644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB640u;
        // 0x7cb644: 0x8fc50644  lw          $a1, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB648u;
        goto label_7cb648;
    }
    ctx->pc = 0x7CB640u;
    {
        const bool branch_taken_0x7cb640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CB644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB640u;
        // 0x7cb644: 0x8fc50644  lw          $a1, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb640) {
            ctx->pc = 0x7CB658u;
            goto label_7cb658;
        }
    }
    ctx->pc = 0x7CB648u;
label_7cb648:
    // 0x7cb648: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x7cb648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_7cb64c:
    // 0x7cb64c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x7cb64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_7cb650:
    // 0x7cb650: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_7cb654:
    if (ctx->pc == 0x7CB654u) {
        ctx->pc = 0x7CB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB650u;
        // 0x7cb654: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB658u;
        goto label_7cb658;
    }
    ctx->pc = 0x7CB650u;
    {
        const bool branch_taken_0x7cb650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CB654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB650u;
        // 0x7cb654: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb650) {
            ctx->pc = 0x7CB674u;
            goto label_7cb674;
        }
    }
    ctx->pc = 0x7CB658u;
label_7cb658:
    // 0x7cb658: 0xc1f2cd4  jal         func_7CB350
label_7cb65c:
    if (ctx->pc == 0x7CB65Cu) {
        ctx->pc = 0x7CB660u;
        goto label_7cb660;
    }
    ctx->pc = 0x7CB658u;
    SET_GPR_U32(ctx, 31, 0x7CB660u);
    ctx->pc = 0x7CB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB350u, 0x7CB658u, 0x7CB660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB660u;
label_7cb660:
    // 0x7cb660: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x7cb660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_7cb664:
    // 0x7cb664: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x7cb664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_7cb668:
    // 0x7cb668: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x7cb668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_7cb66c:
    // 0x7cb66c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x7cb66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_7cb670:
    // 0x7cb670: 0x8fc50644  lw          $a1, 0x644($fp)
    ctx->pc = 0x7cb670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_7cb674:
    // 0x7cb674: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x7cb674u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_7cb678:
    // 0x7cb678: 0x8c9e0008  lw          $fp, 0x8($a0)
    ctx->pc = 0x7cb678u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_7cb67c:
    // 0x7cb67c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7cb67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7cb680:
    // 0x7cb680: 0x400008  jr          $v0
label_7cb684:
    if (ctx->pc == 0x7CB684u) {
        ctx->pc = 0x7CB684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB680u;
        // 0x7cb684: 0x8c7d0008  lw          $sp, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB688u;
        goto label_fallthrough_0x7cb680;
    }
    ctx->pc = 0x7CB680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x7CB684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB680u;
        // 0x7cb684: 0x8c7d0008  lw          $sp, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB680u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x7cb680:
    ctx->pc = 0x7CB688u;
}
} // namespace gh_mcport
