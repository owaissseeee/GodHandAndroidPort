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
// Function: __sjpopnthrow
// Address: 0x7cb688 - 0x7cb7a0
void ps2___sjpopnthrow_0x7cb688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sjpopnthrow_0x7cb688");
#endif

    switch (ctx->pc) {
        case 0x7cb688u: goto label_7cb688;
        case 0x7cb68cu: goto label_7cb68c;
        case 0x7cb690u: goto label_7cb690;
        case 0x7cb694u: goto label_7cb694;
        case 0x7cb698u: goto label_7cb698;
        case 0x7cb69cu: goto label_7cb69c;
        case 0x7cb6a0u: goto label_7cb6a0;
        case 0x7cb6a4u: goto label_7cb6a4;
        case 0x7cb6a8u: goto label_7cb6a8;
        case 0x7cb6acu: goto label_7cb6ac;
        case 0x7cb6b0u: goto label_7cb6b0;
        case 0x7cb6b4u: goto label_7cb6b4;
        case 0x7cb6b8u: goto label_7cb6b8;
        case 0x7cb6bcu: goto label_7cb6bc;
        case 0x7cb6c0u: goto label_7cb6c0;
        case 0x7cb6c4u: goto label_7cb6c4;
        case 0x7cb6c8u: goto label_7cb6c8;
        case 0x7cb6ccu: goto label_7cb6cc;
        case 0x7cb6d0u: goto label_7cb6d0;
        case 0x7cb6d4u: goto label_7cb6d4;
        case 0x7cb6d8u: goto label_7cb6d8;
        case 0x7cb6dcu: goto label_7cb6dc;
        case 0x7cb6e0u: goto label_7cb6e0;
        case 0x7cb6e4u: goto label_7cb6e4;
        case 0x7cb6e8u: goto label_7cb6e8;
        case 0x7cb6ecu: goto label_7cb6ec;
        case 0x7cb6f0u: goto label_7cb6f0;
        case 0x7cb6f4u: goto label_7cb6f4;
        case 0x7cb6f8u: goto label_7cb6f8;
        case 0x7cb6fcu: goto label_7cb6fc;
        case 0x7cb700u: goto label_7cb700;
        case 0x7cb704u: goto label_7cb704;
        case 0x7cb708u: goto label_7cb708;
        case 0x7cb70cu: goto label_7cb70c;
        case 0x7cb710u: goto label_7cb710;
        case 0x7cb714u: goto label_7cb714;
        case 0x7cb718u: goto label_7cb718;
        case 0x7cb71cu: goto label_7cb71c;
        case 0x7cb720u: goto label_7cb720;
        case 0x7cb724u: goto label_7cb724;
        case 0x7cb728u: goto label_7cb728;
        case 0x7cb72cu: goto label_7cb72c;
        case 0x7cb730u: goto label_7cb730;
        case 0x7cb734u: goto label_7cb734;
        case 0x7cb738u: goto label_7cb738;
        case 0x7cb73cu: goto label_7cb73c;
        case 0x7cb740u: goto label_7cb740;
        case 0x7cb744u: goto label_7cb744;
        case 0x7cb748u: goto label_7cb748;
        case 0x7cb74cu: goto label_7cb74c;
        case 0x7cb750u: goto label_7cb750;
        case 0x7cb754u: goto label_7cb754;
        case 0x7cb758u: goto label_7cb758;
        case 0x7cb75cu: goto label_7cb75c;
        case 0x7cb760u: goto label_7cb760;
        case 0x7cb764u: goto label_7cb764;
        case 0x7cb768u: goto label_7cb768;
        case 0x7cb76cu: goto label_7cb76c;
        case 0x7cb770u: goto label_7cb770;
        case 0x7cb774u: goto label_7cb774;
        case 0x7cb778u: goto label_7cb778;
        case 0x7cb77cu: goto label_7cb77c;
        case 0x7cb780u: goto label_7cb780;
        case 0x7cb784u: goto label_7cb784;
        case 0x7cb788u: goto label_7cb788;
        case 0x7cb78cu: goto label_7cb78c;
        case 0x7cb790u: goto label_7cb790;
        case 0x7cb794u: goto label_7cb794;
        case 0x7cb798u: goto label_7cb798;
        case 0x7cb79cu: goto label_7cb79c;
        default: break;
    }

    ctx->pc = 0x7cb688u;

label_7cb688:
    // 0x7cb688: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cb688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
label_7cb68c:
    // 0x7cb68c: 0x27bdf8b0  addiu       $sp, $sp, -0x750
    ctx->pc = 0x7cb68cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965424));
label_7cb690:
    // 0x7cb690: 0x8c6201a4  lw          $v0, 0x1A4($v1)
    ctx->pc = 0x7cb690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 420)));
label_7cb694:
    // 0x7cb694: 0xffbf06e0  sd          $ra, 0x6E0($sp)
    ctx->pc = 0x7cb694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1760), GPR_U64(ctx, 31));
label_7cb698:
    // 0x7cb698: 0xffbe06d0  sd          $fp, 0x6D0($sp)
    ctx->pc = 0x7cb698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1744), GPR_U64(ctx, 30));
label_7cb69c:
    // 0x7cb69c: 0xffb706c0  sd          $s7, 0x6C0($sp)
    ctx->pc = 0x7cb69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1728), GPR_U64(ctx, 23));
label_7cb6a0:
    // 0x7cb6a0: 0xffb606b0  sd          $s6, 0x6B0($sp)
    ctx->pc = 0x7cb6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1712), GPR_U64(ctx, 22));
label_7cb6a4:
    // 0x7cb6a4: 0xffb506a0  sd          $s5, 0x6A0($sp)
    ctx->pc = 0x7cb6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1696), GPR_U64(ctx, 21));
label_7cb6a8:
    // 0x7cb6a8: 0xffb40690  sd          $s4, 0x690($sp)
    ctx->pc = 0x7cb6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 20));
label_7cb6ac:
    // 0x7cb6ac: 0xffb30680  sd          $s3, 0x680($sp)
    ctx->pc = 0x7cb6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 19));
label_7cb6b0:
    // 0x7cb6b0: 0xffb20670  sd          $s2, 0x670($sp)
    ctx->pc = 0x7cb6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 18));
label_7cb6b4:
    // 0x7cb6b4: 0xffb10660  sd          $s1, 0x660($sp)
    ctx->pc = 0x7cb6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 17));
label_7cb6b8:
    // 0x7cb6b8: 0xffb00650  sd          $s0, 0x650($sp)
    ctx->pc = 0x7cb6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 16));
label_7cb6bc:
    // 0x7cb6bc: 0xe7bf0748  swc1        $f31, 0x748($sp)
    ctx->pc = 0x7cb6bcu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1864), bits); }
label_7cb6c0:
    // 0x7cb6c0: 0xe7be0740  swc1        $f30, 0x740($sp)
    ctx->pc = 0x7cb6c0u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
label_7cb6c4:
    // 0x7cb6c4: 0xe7bd0738  swc1        $f29, 0x738($sp)
    ctx->pc = 0x7cb6c4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1848), bits); }
label_7cb6c8:
    // 0x7cb6c8: 0xe7bc0730  swc1        $f28, 0x730($sp)
    ctx->pc = 0x7cb6c8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_7cb6cc:
    // 0x7cb6cc: 0xe7bb0728  swc1        $f27, 0x728($sp)
    ctx->pc = 0x7cb6ccu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
label_7cb6d0:
    // 0x7cb6d0: 0xe7ba0720  swc1        $f26, 0x720($sp)
    ctx->pc = 0x7cb6d0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
label_7cb6d4:
    // 0x7cb6d4: 0xe7b90718  swc1        $f25, 0x718($sp)
    ctx->pc = 0x7cb6d4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1816), bits); }
label_7cb6d8:
    // 0x7cb6d8: 0xe7b80710  swc1        $f24, 0x710($sp)
    ctx->pc = 0x7cb6d8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
label_7cb6dc:
    // 0x7cb6dc: 0xe7b70708  swc1        $f23, 0x708($sp)
    ctx->pc = 0x7cb6dcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
label_7cb6e0:
    // 0x7cb6e0: 0xe7b60700  swc1        $f22, 0x700($sp)
    ctx->pc = 0x7cb6e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1792), bits); }
label_7cb6e4:
    // 0x7cb6e4: 0xe7b506f8  swc1        $f21, 0x6F8($sp)
    ctx->pc = 0x7cb6e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_7cb6e8:
    // 0x7cb6e8: 0x40f809  jalr        $v0
label_7cb6ec:
    if (ctx->pc == 0x7CB6ECu) {
        ctx->pc = 0x7CB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB6E8u;
        // 0x7cb6ec: 0xe7b406f0  swc1        $f20, 0x6F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB6F0u;
        goto label_7cb6f0;
    }
    ctx->pc = 0x7CB6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7CB6F0u);
        ctx->pc = 0x7CB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB6E8u;
        // 0x7cb6ec: 0xe7b406f0  swc1        $f20, 0x6F0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB6E8u, 0x7CB6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CB6F0u;
label_7cb6f0:
    // 0x7cb6f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7cb6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_7cb6f4:
    // 0x7cb6f4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x7cb6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_7cb6f8:
    // 0x7cb6f8: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x7cb6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
label_7cb6fc:
    // 0x7cb6fc: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x7cb6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_7cb700:
    // 0x7cb700: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x7cb700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_7cb704:
    // 0x7cb704: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7cb704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7cb708:
    // 0x7cb708: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_7cb70c:
    if (ctx->pc == 0x7CB70Cu) {
        ctx->pc = 0x7CB70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB708u;
        // 0x7cb70c: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB710u;
        goto label_7cb710;
    }
    ctx->pc = 0x7CB708u;
    {
        const bool branch_taken_0x7cb708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CB70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB708u;
        // 0x7cb70c: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb708) {
            ctx->pc = 0x7CB78Cu;
            goto label_7cb78c;
        }
    }
    ctx->pc = 0x7CB710u;
label_7cb710:
    // 0x7cb710: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x7cb710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_7cb714:
    // 0x7cb714: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x7cb714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_7cb718:
    // 0x7cb718: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x7cb718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_7cb71c:
    // 0x7cb71c: 0xafbd0008  sw          $sp, 0x8($sp)
    ctx->pc = 0x7cb71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 29));
label_7cb720:
    // 0x7cb720: 0x2442b730  addiu       $v0, $v0, -0x48D0
    ctx->pc = 0x7cb720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948656));
label_7cb724:
    // 0x7cb724: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x7cb724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_7cb728:
    // 0x7cb728: 0xafbd0648  sw          $sp, 0x648($sp)
    ctx->pc = 0x7cb728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1608), GPR_U32(ctx, 29));
label_7cb72c:
    // 0x7cb72c: 0xac7d0008  sw          $sp, 0x8($v1)
    ctx->pc = 0x7cb72cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
label_7cb730:
    // 0x7cb730: 0x8fa30640  lw          $v1, 0x640($sp)
    ctx->pc = 0x7cb730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_7cb734:
    // 0x7cb734: 0x8fa60648  lw          $a2, 0x648($sp)
    ctx->pc = 0x7cb734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_7cb738:
    // 0x7cb738: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x7cb738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_7cb73c:
    // 0x7cb73c: 0x8fa20644  lw          $v0, 0x644($sp)
    ctx->pc = 0x7cb73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_7cb740:
    // 0x7cb740: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7cb740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7cb744:
    // 0x7cb744: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_7cb748:
    if (ctx->pc == 0x7CB748u) {
        ctx->pc = 0x7CB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB744u;
        // 0x7cb748: 0x8fa60648  lw          $a2, 0x648($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB74Cu;
        goto label_7cb74c;
    }
    ctx->pc = 0x7CB744u;
    {
        const bool branch_taken_0x7cb744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB744u;
        // 0x7cb748: 0x8fa60648  lw          $a2, 0x648($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb744) {
            ctx->pc = 0x7CB780u;
            goto label_7cb780;
        }
    }
    ctx->pc = 0x7CB74Cu;
label_7cb74c:
    // 0x7cb74c: 0x0  nop
    ctx->pc = 0x7cb74cu;
    // NOP
label_7cb750:
    // 0x7cb750: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7cb750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_7cb754:
    // 0x7cb754: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7cb754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7cb758:
    // 0x7cb758: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x7cb758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_7cb75c:
    // 0x7cb75c: 0x8fa60644  lw          $a2, 0x644($sp)
    ctx->pc = 0x7cb75cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_7cb760:
    // 0x7cb760: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x7cb760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7cb764:
    // 0x7cb764: 0x60f809  jalr        $v1
label_7cb768:
    if (ctx->pc == 0x7CB768u) {
        ctx->pc = 0x7CB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB764u;
        // 0x7cb768: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB76Cu;
        goto label_7cb76c;
    }
    ctx->pc = 0x7CB764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7CB76Cu);
        ctx->pc = 0x7CB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB764u;
        // 0x7cb768: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB764u, 0x7CB76Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7CB76Cu;
label_7cb76c:
    // 0x7cb76c: 0x8fa30644  lw          $v1, 0x644($sp)
    ctx->pc = 0x7cb76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1604)));
label_7cb770:
    // 0x7cb770: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7cb770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_7cb774:
    // 0x7cb774: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_7cb778:
    if (ctx->pc == 0x7CB778u) {
        ctx->pc = 0x7CB778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB774u;
        // 0x7cb778: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB77Cu;
        goto label_7cb77c;
    }
    ctx->pc = 0x7CB774u;
    {
        const bool branch_taken_0x7cb774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CB778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB774u;
        // 0x7cb778: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb774) {
            ctx->pc = 0x7CB750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cb750;
        }
    }
    ctx->pc = 0x7CB77Cu;
label_7cb77c:
    // 0x7cb77c: 0x8fa60648  lw          $a2, 0x648($sp)
    ctx->pc = 0x7cb77cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1608)));
label_7cb780:
    // 0x7cb780: 0x8fa30640  lw          $v1, 0x640($sp)
    ctx->pc = 0x7cb780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_7cb784:
    // 0x7cb784: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x7cb784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_7cb788:
    // 0x7cb788: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x7cb788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_7cb78c:
    // 0x7cb78c: 0x8fa60640  lw          $a2, 0x640($sp)
    ctx->pc = 0x7cb78cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1600)));
label_7cb790:
    // 0x7cb790: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x7cb790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_7cb794:
    // 0x7cb794: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7cb794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7cb798:
    // 0x7cb798: 0xc1f2d44  jal         func_7CB510
label_7cb79c:
    if (ctx->pc == 0x7CB79Cu) {
        ctx->pc = 0x7CB79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB798u;
        // 0x7cb79c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7CB7A0u;
        goto label_fallthrough_0x7cb798;
    }
    ctx->pc = 0x7CB798u;
    SET_GPR_U32(ctx, 31, 0x7CB7A0u);
    ctx->pc = 0x7CB79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CB798u;
    // 0x7cb79c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB510u, 0x7CB798u, 0x7CB7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x7cb798:
    ctx->pc = 0x7CB7A0u;
}
} // namespace gh_mcport
