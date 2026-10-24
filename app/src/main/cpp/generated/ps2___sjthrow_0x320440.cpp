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

// Function: __sjthrow
// Address: 0x320440 - 0x3205b8
void ps2___sjthrow_0x320440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sjthrow_0x320440");
#endif

    switch (ctx->pc) {
        case 0x320440u: goto label_320440;
        case 0x320444u: goto label_320444;
        case 0x320448u: goto label_320448;
        case 0x32044cu: goto label_32044c;
        case 0x320450u: goto label_320450;
        case 0x320454u: goto label_320454;
        case 0x320458u: goto label_320458;
        case 0x32045cu: goto label_32045c;
        case 0x320460u: goto label_320460;
        case 0x320464u: goto label_320464;
        case 0x320468u: goto label_320468;
        case 0x32046cu: goto label_32046c;
        case 0x320470u: goto label_320470;
        case 0x320474u: goto label_320474;
        case 0x320478u: goto label_320478;
        case 0x32047cu: goto label_32047c;
        case 0x320480u: goto label_320480;
        case 0x320484u: goto label_320484;
        case 0x320488u: goto label_320488;
        case 0x32048cu: goto label_32048c;
        case 0x320490u: goto label_320490;
        case 0x320494u: goto label_320494;
        case 0x320498u: goto label_320498;
        case 0x32049cu: goto label_32049c;
        case 0x3204a0u: goto label_3204a0;
        case 0x3204a4u: goto label_3204a4;
        case 0x3204a8u: goto label_3204a8;
        case 0x3204acu: goto label_3204ac;
        case 0x3204b0u: goto label_3204b0;
        case 0x3204b4u: goto label_3204b4;
        case 0x3204b8u: goto label_3204b8;
        case 0x3204bcu: goto label_3204bc;
        case 0x3204c0u: goto label_3204c0;
        case 0x3204c4u: goto label_3204c4;
        case 0x3204c8u: goto label_3204c8;
        case 0x3204ccu: goto label_3204cc;
        case 0x3204d0u: goto label_3204d0;
        case 0x3204d4u: goto label_3204d4;
        case 0x3204d8u: goto label_3204d8;
        case 0x3204dcu: goto label_3204dc;
        case 0x3204e0u: goto label_3204e0;
        case 0x3204e4u: goto label_3204e4;
        case 0x3204e8u: goto label_3204e8;
        case 0x3204ecu: goto label_3204ec;
        case 0x3204f0u: goto label_3204f0;
        case 0x3204f4u: goto label_3204f4;
        case 0x3204f8u: goto label_3204f8;
        case 0x3204fcu: goto label_3204fc;
        case 0x320500u: goto label_320500;
        case 0x320504u: goto label_320504;
        case 0x320508u: goto label_320508;
        case 0x32050cu: goto label_32050c;
        case 0x320510u: goto label_320510;
        case 0x320514u: goto label_320514;
        case 0x320518u: goto label_320518;
        case 0x32051cu: goto label_32051c;
        case 0x320520u: goto label_320520;
        case 0x320524u: goto label_320524;
        case 0x320528u: goto label_320528;
        case 0x32052cu: goto label_32052c;
        case 0x320530u: goto label_320530;
        case 0x320534u: goto label_320534;
        case 0x320538u: goto label_320538;
        case 0x32053cu: goto label_32053c;
        case 0x320540u: goto label_320540;
        case 0x320544u: goto label_320544;
        case 0x320548u: goto label_320548;
        case 0x32054cu: goto label_32054c;
        case 0x320550u: goto label_320550;
        case 0x320554u: goto label_320554;
        case 0x320558u: goto label_320558;
        case 0x32055cu: goto label_32055c;
        case 0x320560u: goto label_320560;
        case 0x320564u: goto label_320564;
        case 0x320568u: goto label_320568;
        case 0x32056cu: goto label_32056c;
        case 0x320570u: goto label_320570;
        case 0x320574u: goto label_320574;
        case 0x320578u: goto label_320578;
        case 0x32057cu: goto label_32057c;
        case 0x320580u: goto label_320580;
        case 0x320584u: goto label_320584;
        case 0x320588u: goto label_320588;
        case 0x32058cu: goto label_32058c;
        case 0x320590u: goto label_320590;
        case 0x320594u: goto label_320594;
        case 0x320598u: goto label_320598;
        case 0x32059cu: goto label_32059c;
        case 0x3205a0u: goto label_3205a0;
        case 0x3205a4u: goto label_3205a4;
        case 0x3205a8u: goto label_3205a8;
        case 0x3205acu: goto label_3205ac;
        case 0x3205b0u: goto label_3205b0;
        case 0x3205b4u: goto label_3205b4;
        default: break;
    }

    ctx->pc = 0x320440u;

label_320440:
    // 0x320440: 0x27bdf8b0  addiu       $sp, $sp, -0x750
    ctx->pc = 0x320440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965424));
label_320444:
    // 0x320444: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x320444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_320448:
    // 0x320448: 0xffbe06d0  sd          $fp, 0x6D0($sp)
    ctx->pc = 0x320448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1744), GPR_U64(ctx, 30));
label_32044c:
    // 0x32044c: 0xffbf06e0  sd          $ra, 0x6E0($sp)
    ctx->pc = 0x32044cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1760), GPR_U64(ctx, 31));
label_320450:
    // 0x320450: 0xffb706c0  sd          $s7, 0x6C0($sp)
    ctx->pc = 0x320450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1728), GPR_U64(ctx, 23));
label_320454:
    // 0x320454: 0xffb606b0  sd          $s6, 0x6B0($sp)
    ctx->pc = 0x320454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1712), GPR_U64(ctx, 22));
label_320458:
    // 0x320458: 0xffb506a0  sd          $s5, 0x6A0($sp)
    ctx->pc = 0x320458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1696), GPR_U64(ctx, 21));
label_32045c:
    // 0x32045c: 0xffb40690  sd          $s4, 0x690($sp)
    ctx->pc = 0x32045cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 20));
label_320460:
    // 0x320460: 0xffb30680  sd          $s3, 0x680($sp)
    ctx->pc = 0x320460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 19));
label_320464:
    // 0x320464: 0xffb20670  sd          $s2, 0x670($sp)
    ctx->pc = 0x320464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 18));
label_320468:
    // 0x320468: 0xffb10660  sd          $s1, 0x660($sp)
    ctx->pc = 0x320468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 17));
label_32046c:
    // 0x32046c: 0xffb00650  sd          $s0, 0x650($sp)
    ctx->pc = 0x32046cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 16));
label_320470:
    // 0x320470: 0xe7bf0748  swc1        $f31, 0x748($sp)
    ctx->pc = 0x320470u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1864), bits); }
label_320474:
    // 0x320474: 0xe7be0740  swc1        $f30, 0x740($sp)
    ctx->pc = 0x320474u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1856), bits); }
label_320478:
    // 0x320478: 0xe7bd0738  swc1        $f29, 0x738($sp)
    ctx->pc = 0x320478u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1848), bits); }
label_32047c:
    // 0x32047c: 0xe7bc0730  swc1        $f28, 0x730($sp)
    ctx->pc = 0x32047cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_320480:
    // 0x320480: 0xe7bb0728  swc1        $f27, 0x728($sp)
    ctx->pc = 0x320480u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1832), bits); }
label_320484:
    // 0x320484: 0xe7ba0720  swc1        $f26, 0x720($sp)
    ctx->pc = 0x320484u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1824), bits); }
label_320488:
    // 0x320488: 0xe7b90718  swc1        $f25, 0x718($sp)
    ctx->pc = 0x320488u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1816), bits); }
label_32048c:
    // 0x32048c: 0xe7b80710  swc1        $f24, 0x710($sp)
    ctx->pc = 0x32048cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1808), bits); }
label_320490:
    // 0x320490: 0xe7b70708  swc1        $f23, 0x708($sp)
    ctx->pc = 0x320490u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1800), bits); }
label_320494:
    // 0x320494: 0xe7b60700  swc1        $f22, 0x700($sp)
    ctx->pc = 0x320494u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1792), bits); }
label_320498:
    // 0x320498: 0xe7b506f8  swc1        $f21, 0x6F8($sp)
    ctx->pc = 0x320498u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_32049c:
    // 0x32049c: 0xe7b406f0  swc1        $f20, 0x6F0($sp)
    ctx->pc = 0x32049cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
label_3204a0:
    // 0x3204a0: 0x8c62490c  lw          $v0, 0x490C($v1)
    ctx->pc = 0x3204a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18700)));
label_3204a4:
    // 0x3204a4: 0x40f809  jalr        $v0
label_3204a8:
    if (ctx->pc == 0x3204A8u) {
        ctx->pc = 0x3204A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204A4u;
        // 0x3204a8: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3204ACu;
        goto label_3204ac;
    }
    ctx->pc = 0x3204A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3204ACu);
        ctx->pc = 0x3204A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204A4u;
        // 0x3204a8: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3204A4u, 0x3204ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3204ACu;
label_3204ac:
    // 0x3204ac: 0xafc20640  sw          $v0, 0x640($fp)
    ctx->pc = 0x3204acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1600), GPR_U32(ctx, 2));
label_3204b0:
    // 0x3204b0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3204b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3204b4:
    // 0x3204b4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3204b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3204b8:
    // 0x3204b8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x3204b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3204bc:
    // 0x3204bc: 0xafc20644  sw          $v0, 0x644($fp)
    ctx->pc = 0x3204bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1604), GPR_U32(ctx, 2));
label_3204c0:
    // 0x3204c0: 0xafc50648  sw          $a1, 0x648($fp)
    ctx->pc = 0x3204c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1608), GPR_U32(ctx, 5));
label_3204c4:
    // 0x3204c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3204c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3204c8:
    // 0x3204c8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_3204cc:
    if (ctx->pc == 0x3204CCu) {
        ctx->pc = 0x3204CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204C8u;
        // 0x3204cc: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3204D0u;
        goto label_3204d0;
    }
    ctx->pc = 0x3204C8u;
    {
        const bool branch_taken_0x3204c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3204CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204C8u;
        // 0x3204cc: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3204c8) {
            ctx->pc = 0x320568u;
            goto label_320568;
        }
    }
    ctx->pc = 0x3204D0u;
label_3204d0:
    // 0x3204d0: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x3204d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_3204d4:
    // 0x3204d4: 0x244204f8  addiu       $v0, $v0, 0x4F8
    ctx->pc = 0x3204d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1272));
label_3204d8:
    // 0x3204d8: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x3204d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_3204dc:
    // 0x3204dc: 0x27c30008  addiu       $v1, $fp, 0x8
    ctx->pc = 0x3204dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3204e0:
    // 0x3204e0: 0xafde0008  sw          $fp, 0x8($fp)
    ctx->pc = 0x3204e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 30));
label_3204e4:
    // 0x3204e4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3204e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3204e8:
    // 0x3204e8: 0xafde064c  sw          $fp, 0x64C($fp)
    ctx->pc = 0x3204e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1612), GPR_U32(ctx, 30));
label_3204ec:
    // 0x3204ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3204ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3204f0:
    // 0x3204f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3204f4:
    if (ctx->pc == 0x3204F4u) {
        ctx->pc = 0x3204F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204F0u;
        // 0x3204f4: 0xac7d0008  sw          $sp, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3204F8u;
        goto label_3204f8;
    }
    ctx->pc = 0x3204F0u;
    {
        const bool branch_taken_0x3204f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3204F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204F0u;
        // 0x3204f4: 0xac7d0008  sw          $sp, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3204f0) {
            ctx->pc = 0x3204FCu;
            goto label_3204fc;
        }
    }
    ctx->pc = 0x3204F8u;
label_3204f8:
    // 0x3204f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3204f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3204fc:
    // 0x3204fc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_320500:
    if (ctx->pc == 0x320500u) {
        ctx->pc = 0x320500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204FCu;
        // 0x320500: 0x8fc2064c  lw          $v0, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320504u;
        goto label_320504;
    }
    ctx->pc = 0x3204FCu;
    {
        const bool branch_taken_0x3204fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3204FCu;
        // 0x320500: 0x8fc2064c  lw          $v0, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3204fc) {
            ctx->pc = 0x320560u;
            goto label_320560;
        }
    }
    ctx->pc = 0x320504u;
label_320504:
    // 0x320504: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x320504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_320508:
    // 0x320508: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x320508u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_32050c:
    // 0x32050c: 0x8fc50648  lw          $a1, 0x648($fp)
    ctx->pc = 0x32050cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_320510:
    // 0x320510: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x320510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_320514:
    // 0x320514: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_320518:
    if (ctx->pc == 0x320518u) {
        ctx->pc = 0x320518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320514u;
        // 0x320518: 0x8fc5064c  lw          $a1, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32051Cu;
        goto label_32051c;
    }
    ctx->pc = 0x320514u;
    {
        const bool branch_taken_0x320514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320514u;
        // 0x320518: 0x8fc5064c  lw          $a1, 0x64C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320514) {
            ctx->pc = 0x320550u;
            goto label_320550;
        }
    }
    ctx->pc = 0x32051Cu;
label_32051c:
    // 0x32051c: 0x0  nop
    ctx->pc = 0x32051cu;
    // NOP
label_320520:
    // 0x320520: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x320520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_320524:
    // 0x320524: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x320524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_320528:
    // 0x320528: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x320528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_32052c:
    // 0x32052c: 0x8fc60648  lw          $a2, 0x648($fp)
    ctx->pc = 0x32052cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_320530:
    // 0x320530: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x320530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320534:
    // 0x320534: 0x60f809  jalr        $v1
label_320538:
    if (ctx->pc == 0x320538u) {
        ctx->pc = 0x320538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320534u;
        // 0x320538: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32053Cu;
        goto label_32053c;
    }
    ctx->pc = 0x320534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32053Cu);
        ctx->pc = 0x320538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320534u;
        // 0x320538: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320534u, 0x32053Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32053Cu;
label_32053c:
    // 0x32053c: 0x8fc30648  lw          $v1, 0x648($fp)
    ctx->pc = 0x32053cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1608)));
label_320540:
    // 0x320540: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x320540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_320544:
    // 0x320544: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_320548:
    if (ctx->pc == 0x320548u) {
        ctx->pc = 0x320548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320544u;
        // 0x320548: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32054Cu;
        goto label_32054c;
    }
    ctx->pc = 0x320544u;
    {
        const bool branch_taken_0x320544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320544u;
        // 0x320548: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320544) {
            ctx->pc = 0x320520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320520;
        }
    }
    ctx->pc = 0x32054Cu;
label_32054c:
    // 0x32054c: 0x8fc5064c  lw          $a1, 0x64C($fp)
    ctx->pc = 0x32054cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1612)));
label_320550:
    // 0x320550: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x320550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_320554:
    // 0x320554: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x320554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_320558:
    // 0x320558: 0x10000003  b           . + 4 + (0x3 << 2)
label_32055c:
    if (ctx->pc == 0x32055Cu) {
        ctx->pc = 0x32055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320558u;
        // 0x32055c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320560u;
        goto label_320560;
    }
    ctx->pc = 0x320558u;
    {
        const bool branch_taken_0x320558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320558u;
        // 0x32055c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320558) {
            ctx->pc = 0x320568u;
            goto label_320568;
        }
    }
    ctx->pc = 0x320560u;
label_320560:
    // 0x320560: 0xc0c80a0  jal         func_320280
label_320564:
    if (ctx->pc == 0x320564u) {
        ctx->pc = 0x320568u;
        goto label_320568;
    }
    ctx->pc = 0x320560u;
    SET_GPR_U32(ctx, 31, 0x320568u);
    ctx->pc = 0x320280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320280u, 0x320560u, 0x320568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320568u;
label_320568:
    // 0x320568: 0x8fc30640  lw          $v1, 0x640($fp)
    ctx->pc = 0x320568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1600)));
label_32056c:
    // 0x32056c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x32056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_320570:
    // 0x320570: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_320574:
    if (ctx->pc == 0x320574u) {
        ctx->pc = 0x320574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320570u;
        // 0x320574: 0x8fc50644  lw          $a1, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320578u;
        goto label_320578;
    }
    ctx->pc = 0x320570u;
    {
        const bool branch_taken_0x320570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320570u;
        // 0x320574: 0x8fc50644  lw          $a1, 0x644($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320570) {
            ctx->pc = 0x320588u;
            goto label_320588;
        }
    }
    ctx->pc = 0x320578u;
label_320578:
    // 0x320578: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x320578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_32057c:
    // 0x32057c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x32057cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_320580:
    // 0x320580: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_320584:
    if (ctx->pc == 0x320584u) {
        ctx->pc = 0x320584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320580u;
        // 0x320584: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320588u;
        goto label_320588;
    }
    ctx->pc = 0x320580u;
    {
        const bool branch_taken_0x320580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320580u;
        // 0x320584: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320580) {
            ctx->pc = 0x3205A4u;
            goto label_3205a4;
        }
    }
    ctx->pc = 0x320588u;
label_320588:
    // 0x320588: 0xc0c80a0  jal         func_320280
label_32058c:
    if (ctx->pc == 0x32058Cu) {
        ctx->pc = 0x320590u;
        goto label_320590;
    }
    ctx->pc = 0x320588u;
    SET_GPR_U32(ctx, 31, 0x320590u);
    ctx->pc = 0x320280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320280u, 0x320588u, 0x320590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320590u;
label_320590:
    // 0x320590: 0x8fc60644  lw          $a2, 0x644($fp)
    ctx->pc = 0x320590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_320594:
    // 0x320594: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x320594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_320598:
    // 0x320598: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x320598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32059c:
    // 0x32059c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x32059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3205a0:
    // 0x3205a0: 0x8fc50644  lw          $a1, 0x644($fp)
    ctx->pc = 0x3205a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
label_3205a4:
    // 0x3205a4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3205a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3205a8:
    // 0x3205a8: 0x8c9e0008  lw          $fp, 0x8($a0)
    ctx->pc = 0x3205a8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3205ac:
    // 0x3205ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3205acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3205b0:
    // 0x3205b0: 0x400008  jr          $v0
label_3205b4:
    if (ctx->pc == 0x3205B4u) {
        ctx->pc = 0x3205B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3205B0u;
        // 0x3205b4: 0x8c7d0008  lw          $sp, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3205B8u;
        goto label_fallthrough_0x3205b0;
    }
    ctx->pc = 0x3205B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x3205B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3205B0u;
        // 0x3205b4: 0x8c7d0008  lw          $sp, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3205B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x3205b0:
    ctx->pc = 0x3205B8u;
}
