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

// Function: __sjpopnthrow
// Address: 0x3205b8 - 0x3206d0
void ps2___sjpopnthrow_0x3205b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sjpopnthrow_0x3205b8");
#endif

    switch (ctx->pc) {
        case 0x3205b8u: goto label_3205b8;
        case 0x3205bcu: goto label_3205bc;
        case 0x3205c0u: goto label_3205c0;
        case 0x3205c4u: goto label_3205c4;
        case 0x3205c8u: goto label_3205c8;
        case 0x3205ccu: goto label_3205cc;
        case 0x3205d0u: goto label_3205d0;
        case 0x3205d4u: goto label_3205d4;
        case 0x3205d8u: goto label_3205d8;
        case 0x3205dcu: goto label_3205dc;
        case 0x3205e0u: goto label_3205e0;
        case 0x3205e4u: goto label_3205e4;
        case 0x3205e8u: goto label_3205e8;
        case 0x3205ecu: goto label_3205ec;
        case 0x3205f0u: goto label_3205f0;
        case 0x3205f4u: goto label_3205f4;
        case 0x3205f8u: goto label_3205f8;
        case 0x3205fcu: goto label_3205fc;
        case 0x320600u: goto label_320600;
        case 0x320604u: goto label_320604;
        case 0x320608u: goto label_320608;
        case 0x32060cu: goto label_32060c;
        case 0x320610u: goto label_320610;
        case 0x320614u: goto label_320614;
        case 0x320618u: goto label_320618;
        case 0x32061cu: goto label_32061c;
        case 0x320620u: goto label_320620;
        case 0x320624u: goto label_320624;
        case 0x320628u: goto label_320628;
        case 0x32062cu: goto label_32062c;
        case 0x320630u: goto label_320630;
        case 0x320634u: goto label_320634;
        case 0x320638u: goto label_320638;
        case 0x32063cu: goto label_32063c;
        case 0x320640u: goto label_320640;
        case 0x320644u: goto label_320644;
        case 0x320648u: goto label_320648;
        case 0x32064cu: goto label_32064c;
        case 0x320650u: goto label_320650;
        case 0x320654u: goto label_320654;
        case 0x320658u: goto label_320658;
        case 0x32065cu: goto label_32065c;
        case 0x320660u: goto label_320660;
        case 0x320664u: goto label_320664;
        case 0x320668u: goto label_320668;
        case 0x32066cu: goto label_32066c;
        case 0x320670u: goto label_320670;
        case 0x320674u: goto label_320674;
        case 0x320678u: goto label_320678;
        case 0x32067cu: goto label_32067c;
        case 0x320680u: goto label_320680;
        case 0x320684u: goto label_320684;
        case 0x320688u: goto label_320688;
        case 0x32068cu: goto label_32068c;
        case 0x320690u: goto label_320690;
        case 0x320694u: goto label_320694;
        case 0x320698u: goto label_320698;
        case 0x32069cu: goto label_32069c;
        case 0x3206a0u: goto label_3206a0;
        case 0x3206a4u: goto label_3206a4;
        case 0x3206a8u: goto label_3206a8;
        case 0x3206acu: goto label_3206ac;
        case 0x3206b0u: goto label_3206b0;
        case 0x3206b4u: goto label_3206b4;
        case 0x3206b8u: goto label_3206b8;
        case 0x3206bcu: goto label_3206bc;
        case 0x3206c0u: goto label_3206c0;
        case 0x3206c4u: goto label_3206c4;
        case 0x3206c8u: goto label_3206c8;
        case 0x3206ccu: goto label_3206cc;
        default: break;
    }

    ctx->pc = 0x3205b8u;

label_3205b8:
    // 0x3205b8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x3205b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_3205bc:
    // 0x3205bc: 0x27bdf8b0  addiu       $sp, $sp, -0x750
    ctx->pc = 0x3205bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965424));
label_3205c0:
    // 0x3205c0: 0x8c62490c  lw          $v0, 0x490C($v1)
    ctx->pc = 0x3205c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18700)));
label_3205c4:
    // 0x3205c4: 0xffbf06e0  sd          $ra, 0x6E0($sp)
    ctx->pc = 0x3205c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1760), GPR_U64(ctx, 31));
label_3205c8:
    // 0x3205c8: 0xffbe06d0  sd          $fp, 0x6D0($sp)
    ctx->pc = 0x3205c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1744), GPR_U64(ctx, 30));
label_3205cc:
    // 0x3205cc: 0xffb706c0  sd          $s7, 0x6C0($sp)
    ctx->pc = 0x3205ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1728), GPR_U64(ctx, 23));
label_3205d0:
    // 0x3205d0: 0xffb606b0  sd          $s6, 0x6B0($sp)
    ctx->pc = 0x3205d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1712), GPR_U64(ctx, 22));
label_3205d4:
    // 0x3205d4: 0xffb506a0  sd          $s5, 0x6A0($sp)
    ctx->pc = 0x3205d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1696), GPR_U64(ctx, 21));
label_3205d8:
    // 0x3205d8: 0xffb40690  sd          $s4, 0x690($sp)
    ctx->pc = 0x3205d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 20));
label_3205dc:
    // 0x3205dc: 0xffb30680  sd          $s3, 0x680($sp)
    ctx->pc = 0x3205dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 19));
label_3205e0:
    // 0x3205e0: 0xffb20670  sd          $s2, 0x670($sp)
    ctx->pc = 0x3205e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 18));
label_3205e4:
    // 0x3205e4: 0xffb10660  sd          $s1, 0x660($sp)
    ctx->pc = 0x3205e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 17));
label_3205e8:
    // 0x3205e8: 0xffb00650  sd          $s0, 0x650($sp)
    ctx->pc = 0x3205e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 16));
label_3205ec:
    // 0x3205ec: 0xe7bf0748  swc1        $f31, 0x748($sp)
    ctx->pc = 0x3205ecu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1864), bits); }
label_3205f0:
    // 0x3205f0: 0xe7be0740  swc1        $f30, 0x740($sp)
    ctx->pc = 0x3205f0u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
label_3205f4:
    // 0x3205f4: 0xe7bd0738  swc1        $f29, 0x738($sp)
    ctx->pc = 0x3205f4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1848), bits); }
label_3205f8:
    // 0x3205f8: 0xe7bc0730  swc1        $f28, 0x730($sp)
    ctx->pc = 0x3205f8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_3205fc:
    // 0x3205fc: 0xe7bb0728  swc1        $f27, 0x728($sp)
    ctx->pc = 0x3205fcu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
label_320600:
    // 0x320600: 0xe7ba0720  swc1        $f26, 0x720($sp)
    ctx->pc = 0x320600u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
label_320604:
    // 0x320604: 0xe7b90718  swc1        $f25, 0x718($sp)
    ctx->pc = 0x320604u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1816), bits); }
label_320608:
    // 0x320608: 0xe7b80710  swc1        $f24, 0x710($sp)
    ctx->pc = 0x320608u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
label_32060c:
    // 0x32060c: 0xe7b70708  swc1        $f23, 0x708($sp)
    ctx->pc = 0x32060cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
label_320610:
    // 0x320610: 0xe7b60700  swc1        $f22, 0x700($sp)
    ctx->pc = 0x320610u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1792), bits); }
label_320614:
    // 0x320614: 0xe7b506f8  swc1        $f21, 0x6F8($sp)
    ctx->pc = 0x320614u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_320618:
    // 0x320618: 0x40f809  jalr        $v0
label_32061c:
    if (ctx->pc == 0x32061Cu) {
        ctx->pc = 0x32061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320618u;
        // 0x32061c: 0xe7b406f0  swc1        $f20, 0x6F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x320620u;
        goto label_320620;
    }
    ctx->pc = 0x320618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320620u);
        ctx->pc = 0x32061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320618u;
        // 0x32061c: 0xe7b406f0  swc1        $f20, 0x6F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320618u, 0x320620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320620u;
label_320620:
    // 0x320620: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x320620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_320624:
    // 0x320624: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x320624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_320628:
    // 0x320628: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x320628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
label_32062c:
    // 0x32062c: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x32062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_320630:
    // 0x320630: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x320630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_320634:
    // 0x320634: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320638:
    // 0x320638: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_32063c:
    if (ctx->pc == 0x32063Cu) {
        ctx->pc = 0x32063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320638u;
        // 0x32063c: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320640u;
        goto label_320640;
    }
    ctx->pc = 0x320638u;
    {
        const bool branch_taken_0x320638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320638u;
        // 0x32063c: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320638) {
            ctx->pc = 0x3206BCu;
            goto label_3206bc;
        }
    }
    ctx->pc = 0x320640u;
label_320640:
    // 0x320640: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x320640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_320644:
    // 0x320644: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x320644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_320648:
    // 0x320648: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x320648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_32064c:
    // 0x32064c: 0xafbd0008  sw          $sp, 0x8($sp)
    ctx->pc = 0x32064cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 29));
label_320650:
    // 0x320650: 0x24420660  addiu       $v0, $v0, 0x660
    ctx->pc = 0x320650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1632));
label_320654:
    // 0x320654: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x320654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_320658:
    // 0x320658: 0xafbd0648  sw          $sp, 0x648($sp)
    ctx->pc = 0x320658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1608), GPR_U32(ctx, 29));
label_32065c:
    // 0x32065c: 0xac7d0008  sw          $sp, 0x8($v1)
    ctx->pc = 0x32065cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
label_320660:
    // 0x320660: 0x8fa30640  lw          $v1, 0x640($sp)
    ctx->pc = 0x320660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_320664:
    // 0x320664: 0x8fa60648  lw          $a2, 0x648($sp)
    ctx->pc = 0x320664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_320668:
    // 0x320668: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x320668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_32066c:
    // 0x32066c: 0x8fa20644  lw          $v0, 0x644($sp)
    ctx->pc = 0x32066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_320670:
    // 0x320670: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x320670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_320674:
    // 0x320674: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_320678:
    if (ctx->pc == 0x320678u) {
        ctx->pc = 0x320678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320674u;
        // 0x320678: 0x8fa60648  lw          $a2, 0x648($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32067Cu;
        goto label_32067c;
    }
    ctx->pc = 0x320674u;
    {
        const bool branch_taken_0x320674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320674u;
        // 0x320678: 0x8fa60648  lw          $a2, 0x648($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320674) {
            ctx->pc = 0x3206B0u;
            goto label_3206b0;
        }
    }
    ctx->pc = 0x32067Cu;
label_32067c:
    // 0x32067c: 0x0  nop
    ctx->pc = 0x32067cu;
    // NOP
label_320680:
    // 0x320680: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x320680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_320684:
    // 0x320684: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x320684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_320688:
    // 0x320688: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x320688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_32068c:
    // 0x32068c: 0x8fa60644  lw          $a2, 0x644($sp)
    ctx->pc = 0x32068cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_320690:
    // 0x320690: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x320690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320694:
    // 0x320694: 0x60f809  jalr        $v1
label_320698:
    if (ctx->pc == 0x320698u) {
        ctx->pc = 0x320698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320694u;
        // 0x320698: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32069Cu;
        goto label_32069c;
    }
    ctx->pc = 0x320694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32069Cu);
        ctx->pc = 0x320698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320694u;
        // 0x320698: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320694u, 0x32069Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32069Cu;
label_32069c:
    // 0x32069c: 0x8fa30644  lw          $v1, 0x644($sp)
    ctx->pc = 0x32069cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_3206a0:
    // 0x3206a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3206a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3206a4:
    // 0x3206a4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3206a8:
    if (ctx->pc == 0x3206A8u) {
        ctx->pc = 0x3206A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206A4u;
        // 0x3206a8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3206ACu;
        goto label_3206ac;
    }
    ctx->pc = 0x3206A4u;
    {
        const bool branch_taken_0x3206a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3206A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206A4u;
        // 0x3206a8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3206a4) {
            ctx->pc = 0x320680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320680;
        }
    }
    ctx->pc = 0x3206ACu;
label_3206ac:
    // 0x3206ac: 0x8fa60648  lw          $a2, 0x648($sp)
    ctx->pc = 0x3206acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_3206b0:
    // 0x3206b0: 0x8fa30640  lw          $v1, 0x640($sp)
    ctx->pc = 0x3206b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_3206b4:
    // 0x3206b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3206b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3206b8:
    // 0x3206b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3206b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3206bc:
    // 0x3206bc: 0x8fa60640  lw          $a2, 0x640($sp)
    ctx->pc = 0x3206bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_3206c0:
    // 0x3206c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3206c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3206c4:
    // 0x3206c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3206c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3206c8:
    // 0x3206c8: 0xc0c8110  jal         func_320440
label_3206cc:
    if (ctx->pc == 0x3206CCu) {
        ctx->pc = 0x3206CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206C8u;
        // 0x3206cc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3206D0u;
        goto label_fallthrough_0x3206c8;
    }
    ctx->pc = 0x3206C8u;
    SET_GPR_U32(ctx, 31, 0x3206D0u);
    ctx->pc = 0x3206CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3206C8u;
    // 0x3206cc: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320440u, 0x3206C8u, 0x3206D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x3206c8:
    ctx->pc = 0x3206D0u;
}
