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

// Function: func_0036A3E8
// Address: 0x36a3e8 - 0x36a5f8
void func_0036A3E8_0x36a3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036A3E8_0x36a3e8");
#endif

    switch (ctx->pc) {
        case 0x36a3e8u: goto label_36a3e8;
        case 0x36a3ecu: goto label_36a3ec;
        case 0x36a3f0u: goto label_36a3f0;
        case 0x36a3f4u: goto label_36a3f4;
        case 0x36a3f8u: goto label_36a3f8;
        case 0x36a3fcu: goto label_36a3fc;
        case 0x36a400u: goto label_36a400;
        case 0x36a404u: goto label_36a404;
        case 0x36a408u: goto label_36a408;
        case 0x36a40cu: goto label_36a40c;
        case 0x36a410u: goto label_36a410;
        case 0x36a414u: goto label_36a414;
        case 0x36a418u: goto label_36a418;
        case 0x36a41cu: goto label_36a41c;
        case 0x36a420u: goto label_36a420;
        case 0x36a424u: goto label_36a424;
        case 0x36a428u: goto label_36a428;
        case 0x36a42cu: goto label_36a42c;
        case 0x36a430u: goto label_36a430;
        case 0x36a434u: goto label_36a434;
        case 0x36a438u: goto label_36a438;
        case 0x36a43cu: goto label_36a43c;
        case 0x36a440u: goto label_36a440;
        case 0x36a444u: goto label_36a444;
        case 0x36a448u: goto label_36a448;
        case 0x36a44cu: goto label_36a44c;
        case 0x36a450u: goto label_36a450;
        case 0x36a454u: goto label_36a454;
        case 0x36a458u: goto label_36a458;
        case 0x36a45cu: goto label_36a45c;
        case 0x36a460u: goto label_36a460;
        case 0x36a464u: goto label_36a464;
        case 0x36a468u: goto label_36a468;
        case 0x36a46cu: goto label_36a46c;
        case 0x36a470u: goto label_36a470;
        case 0x36a474u: goto label_36a474;
        case 0x36a478u: goto label_36a478;
        case 0x36a47cu: goto label_36a47c;
        case 0x36a480u: goto label_36a480;
        case 0x36a484u: goto label_36a484;
        case 0x36a488u: goto label_36a488;
        case 0x36a48cu: goto label_36a48c;
        case 0x36a490u: goto label_36a490;
        case 0x36a494u: goto label_36a494;
        case 0x36a498u: goto label_36a498;
        case 0x36a49cu: goto label_36a49c;
        case 0x36a4a0u: goto label_36a4a0;
        case 0x36a4a4u: goto label_36a4a4;
        case 0x36a4a8u: goto label_36a4a8;
        case 0x36a4acu: goto label_36a4ac;
        case 0x36a4b0u: goto label_36a4b0;
        case 0x36a4b4u: goto label_36a4b4;
        case 0x36a4b8u: goto label_36a4b8;
        case 0x36a4bcu: goto label_36a4bc;
        case 0x36a4c0u: goto label_36a4c0;
        case 0x36a4c4u: goto label_36a4c4;
        case 0x36a4c8u: goto label_36a4c8;
        case 0x36a4ccu: goto label_36a4cc;
        case 0x36a4d0u: goto label_36a4d0;
        case 0x36a4d4u: goto label_36a4d4;
        case 0x36a4d8u: goto label_36a4d8;
        case 0x36a4dcu: goto label_36a4dc;
        case 0x36a4e0u: goto label_36a4e0;
        case 0x36a4e4u: goto label_36a4e4;
        case 0x36a4e8u: goto label_36a4e8;
        case 0x36a4ecu: goto label_36a4ec;
        case 0x36a4f0u: goto label_36a4f0;
        case 0x36a4f4u: goto label_36a4f4;
        case 0x36a4f8u: goto label_36a4f8;
        case 0x36a4fcu: goto label_36a4fc;
        case 0x36a500u: goto label_36a500;
        case 0x36a504u: goto label_36a504;
        case 0x36a508u: goto label_36a508;
        case 0x36a50cu: goto label_36a50c;
        case 0x36a510u: goto label_36a510;
        case 0x36a514u: goto label_36a514;
        case 0x36a518u: goto label_36a518;
        case 0x36a51cu: goto label_36a51c;
        case 0x36a520u: goto label_36a520;
        case 0x36a524u: goto label_36a524;
        case 0x36a528u: goto label_36a528;
        case 0x36a52cu: goto label_36a52c;
        case 0x36a530u: goto label_36a530;
        case 0x36a534u: goto label_36a534;
        case 0x36a538u: goto label_36a538;
        case 0x36a53cu: goto label_36a53c;
        case 0x36a540u: goto label_36a540;
        case 0x36a544u: goto label_36a544;
        case 0x36a548u: goto label_36a548;
        case 0x36a54cu: goto label_36a54c;
        case 0x36a550u: goto label_36a550;
        case 0x36a554u: goto label_36a554;
        case 0x36a558u: goto label_36a558;
        case 0x36a55cu: goto label_36a55c;
        case 0x36a560u: goto label_36a560;
        case 0x36a564u: goto label_36a564;
        case 0x36a568u: goto label_36a568;
        case 0x36a56cu: goto label_36a56c;
        case 0x36a570u: goto label_36a570;
        case 0x36a574u: goto label_36a574;
        case 0x36a578u: goto label_36a578;
        case 0x36a57cu: goto label_36a57c;
        case 0x36a580u: goto label_36a580;
        case 0x36a584u: goto label_36a584;
        case 0x36a588u: goto label_36a588;
        case 0x36a58cu: goto label_36a58c;
        case 0x36a590u: goto label_36a590;
        case 0x36a594u: goto label_36a594;
        case 0x36a598u: goto label_36a598;
        case 0x36a59cu: goto label_36a59c;
        case 0x36a5a0u: goto label_36a5a0;
        case 0x36a5a4u: goto label_36a5a4;
        case 0x36a5a8u: goto label_36a5a8;
        case 0x36a5acu: goto label_36a5ac;
        case 0x36a5b0u: goto label_36a5b0;
        case 0x36a5b4u: goto label_36a5b4;
        case 0x36a5b8u: goto label_36a5b8;
        case 0x36a5bcu: goto label_36a5bc;
        case 0x36a5c0u: goto label_36a5c0;
        case 0x36a5c4u: goto label_36a5c4;
        case 0x36a5c8u: goto label_36a5c8;
        case 0x36a5ccu: goto label_36a5cc;
        case 0x36a5d0u: goto label_36a5d0;
        case 0x36a5d4u: goto label_36a5d4;
        case 0x36a5d8u: goto label_36a5d8;
        case 0x36a5dcu: goto label_36a5dc;
        case 0x36a5e0u: goto label_36a5e0;
        case 0x36a5e4u: goto label_36a5e4;
        case 0x36a5e8u: goto label_36a5e8;
        case 0x36a5ecu: goto label_36a5ec;
        case 0x36a5f0u: goto label_36a5f0;
        case 0x36a5f4u: goto label_36a5f4;
        default: break;
    }

    ctx->pc = 0x36a3e8u;

label_36a3e8:
    // 0x36a3e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x36a3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_36a3ec:
    // 0x36a3ec: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x36a3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_36a3f0:
    // 0x36a3f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36a3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36a3f4:
    // 0x36a3f4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x36a3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_36a3f8:
    // 0x36a3f8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x36a3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_36a3fc:
    // 0x36a3fc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x36a3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_36a400:
    // 0x36a400: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x36a400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_36a404:
    // 0x36a404: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x36a404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_36a408:
    // 0x36a408: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x36a408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_36a40c:
    // 0x36a40c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x36a40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_36a410:
    // 0x36a410: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x36a410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_36a414:
    // 0x36a414: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x36a414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_36a418:
    // 0x36a418: 0xc0db17e  jal         func_36C5F8
label_36a41c:
    if (ctx->pc == 0x36A41Cu) {
        ctx->pc = 0x36A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A418u;
        // 0x36a41c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A420u;
        goto label_36a420;
    }
    ctx->pc = 0x36A418u;
    SET_GPR_U32(ctx, 31, 0x36A420u);
    ctx->pc = 0x36A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A418u;
    // 0x36a41c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5F8u, 0x36A418u, 0x36A420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A420u;
label_36a420:
    // 0x36a420: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_36a424:
    if (ctx->pc == 0x36A424u) {
        ctx->pc = 0x36A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A420u;
        // 0x36a424: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A428u;
        goto label_36a428;
    }
    ctx->pc = 0x36A420u;
    {
        const bool branch_taken_0x36a420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A420u;
        // 0x36a424: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a420) {
            ctx->pc = 0x36A440u;
            goto label_36a440;
        }
    }
    ctx->pc = 0x36A428u;
label_36a428:
    // 0x36a428: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36a428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_36a42c:
    // 0x36a42c: 0xc0da7c8  jal         func_369F20
label_36a430:
    if (ctx->pc == 0x36A430u) {
        ctx->pc = 0x36A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A42Cu;
        // 0x36a430: 0x34a5020c  ori         $a1, $a1, 0x20C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A434u;
        goto label_36a434;
    }
    ctx->pc = 0x36A42Cu;
    SET_GPR_U32(ctx, 31, 0x36A434u);
    ctx->pc = 0x36A430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A42Cu;
    // 0x36a430: 0x34a5020c  ori         $a1, $a1, 0x20C (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
    ctx->in_delay_slot = false;
    ctx->pc = 0x369F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369F20u, 0x36A42Cu, 0x36A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A434u;
label_36a434:
    // 0x36a434: 0x10000064  b           . + 4 + (0x64 << 2)
label_36a438:
    if (ctx->pc == 0x36A438u) {
        ctx->pc = 0x36A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A434u;
        // 0x36a438: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A43Cu;
        goto label_36a43c;
    }
    ctx->pc = 0x36A434u;
    {
        const bool branch_taken_0x36a434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A434u;
        // 0x36a438: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a434) {
            ctx->pc = 0x36A5C8u;
            goto label_36a5c8;
        }
    }
    ctx->pc = 0x36A43Cu;
label_36a43c:
    // 0x36a43c: 0x0  nop
    ctx->pc = 0x36a43cu;
    // NOP
label_36a440:
    // 0x36a440: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x36a440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36a444:
    // 0x36a444: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x36a444u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_36a448:
    // 0x36a448: 0xae4003f4  sw          $zero, 0x3F4($s2)
    ctx->pc = 0x36a448u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1012), GPR_U32(ctx, 0));
label_36a44c:
    // 0x36a44c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x36a44cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36a450:
    // 0x36a450: 0x8c480018  lw          $t0, 0x18($v0)
    ctx->pc = 0x36a450u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_36a454:
    // 0x36a454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36a454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36a458:
    // 0x36a458: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36a45c:
    // 0x36a45c: 0x100f809  jalr        $t0
label_36a460:
    if (ctx->pc == 0x36A460u) {
        ctx->pc = 0x36A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A45Cu;
        // 0x36a460: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A464u;
        goto label_36a464;
    }
    ctx->pc = 0x36A45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x36A464u);
        ctx->pc = 0x36A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A45Cu;
        // 0x36a460: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A45Cu, 0x36A464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36A464u;
label_36a464:
    // 0x36a464: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x36a464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36a468:
    // 0x36a468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36a468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36a46c:
    // 0x36a46c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36a470:
    // 0x36a470: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x36a470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_36a474:
    // 0x36a474: 0x40f809  jalr        $v0
label_36a478:
    if (ctx->pc == 0x36A478u) {
        ctx->pc = 0x36A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A474u;
        // 0x36a478: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A47Cu;
        goto label_36a47c;
    }
    ctx->pc = 0x36A474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36A47Cu);
        ctx->pc = 0x36A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A474u;
        // 0x36a478: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A474u, 0x36A47Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36A47Cu;
label_36a47c:
    // 0x36a47c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36a480:
    // 0x36a480: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x36a480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_36a484:
    // 0x36a484: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x36a484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_36a488:
    // 0x36a488: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x36a488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_36a48c:
    // 0x36a48c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x36a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_36a490:
    // 0x36a490: 0xc0da9c2  jal         func_36A708
label_36a494:
    if (ctx->pc == 0x36A494u) {
        ctx->pc = 0x36A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A490u;
        // 0x36a494: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A498u;
        goto label_36a498;
    }
    ctx->pc = 0x36A490u;
    SET_GPR_U32(ctx, 31, 0x36A498u);
    ctx->pc = 0x36A494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A490u;
    // 0x36a494: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A708u, 0x36A490u, 0x36A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A498u;
label_36a498:
    // 0x36a498: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36a498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36a49c:
    // 0x36a49c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_36a4a0:
    if (ctx->pc == 0x36A4A0u) {
        ctx->pc = 0x36A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A49Cu;
        // 0x36a4a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A4A4u;
        goto label_36a4a4;
    }
    ctx->pc = 0x36A49Cu;
    {
        const bool branch_taken_0x36a49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x36A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A49Cu;
        // 0x36a4a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a49c) {
            ctx->pc = 0x36A4C8u;
            goto label_36a4c8;
        }
    }
    ctx->pc = 0x36A4A4u;
label_36a4a4:
    // 0x36a4a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36a4a8:
    // 0x36a4a8: 0xc0db1b2  jal         func_36C6C8
label_36a4ac:
    if (ctx->pc == 0x36A4ACu) {
        ctx->pc = 0x36A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4A8u;
        // 0x36a4ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A4B0u;
        goto label_36a4b0;
    }
    ctx->pc = 0x36A4A8u;
    SET_GPR_U32(ctx, 31, 0x36A4B0u);
    ctx->pc = 0x36A4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A4A8u;
    // 0x36a4ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6C8u, 0x36A4A8u, 0x36A4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A4B0u;
label_36a4b0:
    // 0x36a4b0: 0x10000045  b           . + 4 + (0x45 << 2)
label_36a4b4:
    if (ctx->pc == 0x36A4B4u) {
        ctx->pc = 0x36A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4B0u;
        // 0x36a4b4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A4B8u;
        goto label_36a4b8;
    }
    ctx->pc = 0x36A4B0u;
    {
        const bool branch_taken_0x36a4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4B0u;
        // 0x36a4b4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a4b0) {
            ctx->pc = 0x36A5C8u;
            goto label_36a5c8;
        }
    }
    ctx->pc = 0x36A4B8u;
label_36a4b8:
    // 0x36a4b8: 0xc0da7c8  jal         func_369F20
label_36a4bc:
    if (ctx->pc == 0x36A4BCu) {
        ctx->pc = 0x36A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4B8u;
        // 0x36a4bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A4C0u;
        goto label_36a4c0;
    }
    ctx->pc = 0x36A4B8u;
    SET_GPR_U32(ctx, 31, 0x36A4C0u);
    ctx->pc = 0x36A4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A4B8u;
    // 0x36a4bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369F20u, 0x36A4B8u, 0x36A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A4C0u;
label_36a4c0:
    // 0x36a4c0: 0x10000041  b           . + 4 + (0x41 << 2)
label_36a4c4:
    if (ctx->pc == 0x36A4C4u) {
        ctx->pc = 0x36A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4C0u;
        // 0x36a4c4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A4C8u;
        goto label_36a4c8;
    }
    ctx->pc = 0x36A4C0u;
    {
        const bool branch_taken_0x36a4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4C0u;
        // 0x36a4c4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a4c0) {
            ctx->pc = 0x36A5C8u;
            goto label_36a5c8;
        }
    }
    ctx->pc = 0x36A4C8u;
label_36a4c8:
    // 0x36a4c8: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x36a4c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_36a4cc:
    // 0x36a4cc: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x36a4ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36a4d0:
    // 0x36a4d0: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x36a4d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_36a4d4:
    // 0x36a4d4: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x36a4d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_36a4d8:
    // 0x36a4d8: 0x10000028  b           . + 4 + (0x28 << 2)
label_36a4dc:
    if (ctx->pc == 0x36A4DCu) {
        ctx->pc = 0x36A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4D8u;
        // 0x36a4dc: 0x24170040  addiu       $s7, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A4E0u;
        goto label_36a4e0;
    }
    ctx->pc = 0x36A4D8u;
    {
        const bool branch_taken_0x36a4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4D8u;
        // 0x36a4dc: 0x24170040  addiu       $s7, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a4d8) {
            ctx->pc = 0x36A57Cu;
            goto label_36a57c;
        }
    }
    ctx->pc = 0x36A4E0u;
label_36a4e0:
    // 0x36a4e0: 0x1074001d  beq         $v1, $s4, . + 4 + (0x1D << 2)
label_36a4e4:
    if (ctx->pc == 0x36A4E4u) {
        ctx->pc = 0x36A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4E0u;
        // 0x36a4e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A4E8u;
        goto label_36a4e8;
    }
    ctx->pc = 0x36A4E0u;
    {
        const bool branch_taken_0x36a4e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x36A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4E0u;
        // 0x36a4e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a4e0) {
            ctx->pc = 0x36A558u;
            goto label_36a558;
        }
    }
    ctx->pc = 0x36A4E8u;
label_36a4e8:
    // 0x36a4e8: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x36a4e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
label_36a4ec:
    // 0x36a4ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_36a4f0:
    if (ctx->pc == 0x36A4F0u) {
        ctx->pc = 0x36A4F4u;
        goto label_36a4f4;
    }
    ctx->pc = 0x36A4ECu;
    {
        const bool branch_taken_0x36a4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a4ec) {
            ctx->pc = 0x36A510u;
            goto label_36a510;
        }
    }
    ctx->pc = 0x36A4F4u;
label_36a4f4:
    // 0x36a4f4: 0x10760014  beq         $v1, $s6, . + 4 + (0x14 << 2)
label_36a4f8:
    if (ctx->pc == 0x36A4F8u) {
        ctx->pc = 0x36A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4F4u;
        // 0x36a4f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A4FCu;
        goto label_36a4fc;
    }
    ctx->pc = 0x36A4F4u;
    {
        const bool branch_taken_0x36a4f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x36A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4F4u;
        // 0x36a4f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a4f4) {
            ctx->pc = 0x36A548u;
            goto label_36a548;
        }
    }
    ctx->pc = 0x36A4FCu;
label_36a4fc:
    // 0x36a4fc: 0x107e000e  beq         $v1, $fp, . + 4 + (0xE << 2)
label_36a500:
    if (ctx->pc == 0x36A500u) {
        ctx->pc = 0x36A504u;
        goto label_36a504;
    }
    ctx->pc = 0x36A4FCu;
    {
        const bool branch_taken_0x36a4fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        if (branch_taken_0x36a4fc) {
            ctx->pc = 0x36A538u;
            goto label_36a538;
        }
    }
    ctx->pc = 0x36A504u;
label_36a504:
    // 0x36a504: 0x1000001f  b           . + 4 + (0x1F << 2)
label_36a508:
    if (ctx->pc == 0x36A508u) {
        ctx->pc = 0x36A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A504u;
        // 0x36a508: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A50Cu;
        goto label_36a50c;
    }
    ctx->pc = 0x36A504u;
    {
        const bool branch_taken_0x36a504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A504u;
        // 0x36a508: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a504) {
            ctx->pc = 0x36A584u;
            goto label_36a584;
        }
    }
    ctx->pc = 0x36A50Cu;
label_36a50c:
    // 0x36a50c: 0x0  nop
    ctx->pc = 0x36a50cu;
    // NOP
label_36a510:
    // 0x36a510: 0x10750017  beq         $v1, $s5, . + 4 + (0x17 << 2)
label_36a514:
    if (ctx->pc == 0x36A514u) {
        ctx->pc = 0x36A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A510u;
        // 0x36a514: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A518u;
        goto label_36a518;
    }
    ctx->pc = 0x36A510u;
    {
        const bool branch_taken_0x36a510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x36A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A510u;
        // 0x36a514: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a510) {
            ctx->pc = 0x36A570u;
            goto label_36a570;
        }
    }
    ctx->pc = 0x36A518u;
label_36a518:
    // 0x36a518: 0x1477001a  bne         $v1, $s7, . + 4 + (0x1A << 2)
label_36a51c:
    if (ctx->pc == 0x36A51Cu) {
        ctx->pc = 0x36A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A518u;
        // 0x36a51c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A520u;
        goto label_36a520;
    }
    ctx->pc = 0x36A518u;
    {
        const bool branch_taken_0x36a518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x36A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A518u;
        // 0x36a51c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a518) {
            ctx->pc = 0x36A584u;
            goto label_36a584;
        }
    }
    ctx->pc = 0x36A520u;
label_36a520:
    // 0x36a520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36a524:
    // 0x36a524: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36a524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36a528:
    // 0x36a528: 0xc0da9ec  jal         func_36A7B0
label_36a52c:
    if (ctx->pc == 0x36A52Cu) {
        ctx->pc = 0x36A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A528u;
        // 0x36a52c: 0x24130040  addiu       $s3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A530u;
        goto label_36a530;
    }
    ctx->pc = 0x36A528u;
    SET_GPR_U32(ctx, 31, 0x36A530u);
    ctx->pc = 0x36A52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A528u;
    // 0x36a52c: 0x24130040  addiu       $s3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A7B0u, 0x36A528u, 0x36A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A530u;
label_36a530:
    // 0x36a530: 0x10000013  b           . + 4 + (0x13 << 2)
label_36a534:
    if (ctx->pc == 0x36A534u) {
        ctx->pc = 0x36A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A530u;
        // 0x36a534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A538u;
        goto label_36a538;
    }
    ctx->pc = 0x36A530u;
    {
        const bool branch_taken_0x36a530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A530u;
        // 0x36a534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a530) {
            ctx->pc = 0x36A580u;
            goto label_36a580;
        }
    }
    ctx->pc = 0x36A538u;
label_36a538:
    // 0x36a538: 0xc0dab9c  jal         func_36AE70
label_36a53c:
    if (ctx->pc == 0x36A53Cu) {
        ctx->pc = 0x36A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A538u;
        // 0x36a53c: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A540u;
        goto label_36a540;
    }
    ctx->pc = 0x36A538u;
    SET_GPR_U32(ctx, 31, 0x36A540u);
    ctx->pc = 0x36A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A538u;
    // 0x36a53c: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AE70u, 0x36A538u, 0x36A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A540u;
label_36a540:
    // 0x36a540: 0x1000000f  b           . + 4 + (0xF << 2)
label_36a544:
    if (ctx->pc == 0x36A544u) {
        ctx->pc = 0x36A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A540u;
        // 0x36a544: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A548u;
        goto label_36a548;
    }
    ctx->pc = 0x36A540u;
    {
        const bool branch_taken_0x36a540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A540u;
        // 0x36a544: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a540) {
            ctx->pc = 0x36A580u;
            goto label_36a580;
        }
    }
    ctx->pc = 0x36A548u;
label_36a548:
    // 0x36a548: 0xc0dac3c  jal         func_36B0F0
label_36a54c:
    if (ctx->pc == 0x36A54Cu) {
        ctx->pc = 0x36A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A548u;
        // 0x36a54c: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A550u;
        goto label_36a550;
    }
    ctx->pc = 0x36A548u;
    SET_GPR_U32(ctx, 31, 0x36A550u);
    ctx->pc = 0x36A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A548u;
    // 0x36a54c: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B0F0u, 0x36A548u, 0x36A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A550u;
label_36a550:
    // 0x36a550: 0x1000000b  b           . + 4 + (0xB << 2)
label_36a554:
    if (ctx->pc == 0x36A554u) {
        ctx->pc = 0x36A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A550u;
        // 0x36a554: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A558u;
        goto label_36a558;
    }
    ctx->pc = 0x36A550u;
    {
        const bool branch_taken_0x36a550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A550u;
        // 0x36a554: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a550) {
            ctx->pc = 0x36A580u;
            goto label_36a580;
        }
    }
    ctx->pc = 0x36A558u;
label_36a558:
    // 0x36a558: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36a558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36a55c:
    // 0x36a55c: 0xc0dadb6  jal         func_36B6D8
label_36a560:
    if (ctx->pc == 0x36A560u) {
        ctx->pc = 0x36A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A55Cu;
        // 0x36a560: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A564u;
        goto label_36a564;
    }
    ctx->pc = 0x36A55Cu;
    SET_GPR_U32(ctx, 31, 0x36A564u);
    ctx->pc = 0x36A560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A55Cu;
    // 0x36a560: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B6D8u, 0x36A55Cu, 0x36A564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A564u;
label_36a564:
    // 0x36a564: 0x10000006  b           . + 4 + (0x6 << 2)
label_36a568:
    if (ctx->pc == 0x36A568u) {
        ctx->pc = 0x36A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A564u;
        // 0x36a568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A56Cu;
        goto label_36a56c;
    }
    ctx->pc = 0x36A564u;
    {
        const bool branch_taken_0x36a564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A564u;
        // 0x36a568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a564) {
            ctx->pc = 0x36A580u;
            goto label_36a580;
        }
    }
    ctx->pc = 0x36A56Cu;
label_36a56c:
    // 0x36a56c: 0x0  nop
    ctx->pc = 0x36a56cu;
    // NOP
label_36a570:
    // 0x36a570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36a570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36a574:
    // 0x36a574: 0xc0dade6  jal         func_36B798
label_36a578:
    if (ctx->pc == 0x36A578u) {
        ctx->pc = 0x36A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A574u;
        // 0x36a578: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A57Cu;
        goto label_36a57c;
    }
    ctx->pc = 0x36A574u;
    SET_GPR_U32(ctx, 31, 0x36A57Cu);
    ctx->pc = 0x36A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A574u;
    // 0x36a578: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B798u, 0x36A574u, 0x36A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A57Cu;
label_36a57c:
    // 0x36a57c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36a580:
    // 0x36a580: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x36a580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36a584:
    // 0x36a584: 0xc0daf34  jal         func_36BCD0
label_36a588:
    if (ctx->pc == 0x36A588u) {
        ctx->pc = 0x36A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A584u;
        // 0x36a588: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A58Cu;
        goto label_36a58c;
    }
    ctx->pc = 0x36A584u;
    SET_GPR_U32(ctx, 31, 0x36A58Cu);
    ctx->pc = 0x36A588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A584u;
    // 0x36a588: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BCD0u, 0x36A584u, 0x36A58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A58Cu;
label_36a58c:
    // 0x36a58c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36a58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36a590:
    // 0x36a590: 0x5600ffc9  bnel        $s0, $zero, . + 4 + (-0x37 << 2)
label_36a594:
    if (ctx->pc == 0x36A594u) {
        ctx->pc = 0x36A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A590u;
        // 0x36a594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A598u;
        goto label_36a598;
    }
    ctx->pc = 0x36A590u;
    {
        const bool branch_taken_0x36a590 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a590) {
            ctx->pc = 0x36A594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36A590u;
            // 0x36a594: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36A4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a4b8;
        }
    }
    ctx->pc = 0x36A598u;
label_36a598:
    // 0x36a598: 0xc0da97e  jal         func_36A5F8
label_36a59c:
    if (ctx->pc == 0x36A59Cu) {
        ctx->pc = 0x36A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A598u;
        // 0x36a59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A5A0u;
        goto label_36a5a0;
    }
    ctx->pc = 0x36A598u;
    SET_GPR_U32(ctx, 31, 0x36A5A0u);
    ctx->pc = 0x36A59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A598u;
    // 0x36a59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A5F8u, 0x36A598u, 0x36A5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A5A0u;
label_36a5a0:
    // 0x36a5a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x36a5a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36a5a4:
    // 0x36a5a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_36a5a8:
    if (ctx->pc == 0x36A5A8u) {
        ctx->pc = 0x36A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A5A4u;
        // 0x36a5a8: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A5ACu;
        goto label_36a5ac;
    }
    ctx->pc = 0x36A5A4u;
    {
        const bool branch_taken_0x36a5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A5A4u;
        // 0x36a5a8: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a5a4) {
            ctx->pc = 0x36A5C0u;
            goto label_36a5c0;
        }
    }
    ctx->pc = 0x36A5ACu;
label_36a5ac:
    // 0x36a5ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_36a5b0:
    if (ctx->pc == 0x36A5B0u) {
        ctx->pc = 0x36A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A5ACu;
        // 0x36a5b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A5B4u;
        goto label_36a5b4;
    }
    ctx->pc = 0x36A5ACu;
    {
        const bool branch_taken_0x36a5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A5ACu;
        // 0x36a5b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a5ac) {
            ctx->pc = 0x36A5C4u;
            goto label_36a5c4;
        }
    }
    ctx->pc = 0x36A5B4u;
label_36a5b4:
    // 0x36a5b4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x36a5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_36a5b8:
    // 0x36a5b8: 0x1040ffc9  beqz        $v0, . + 4 + (-0x37 << 2)
label_36a5bc:
    if (ctx->pc == 0x36A5BCu) {
        ctx->pc = 0x36A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A5B8u;
        // 0x36a5bc: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A5C0u;
        goto label_36a5c0;
    }
    ctx->pc = 0x36A5B8u;
    {
        const bool branch_taken_0x36a5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A5B8u;
        // 0x36a5bc: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a5b8) {
            ctx->pc = 0x36A4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a4e0;
        }
    }
    ctx->pc = 0x36A5C0u;
label_36a5c0:
    // 0x36a5c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a5c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36a5c4:
    // 0x36a5c4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x36a5c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36a5c8:
    // 0x36a5c8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x36a5c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_36a5cc:
    // 0x36a5cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x36a5ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_36a5d0:
    // 0x36a5d0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x36a5d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_36a5d4:
    // 0x36a5d4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x36a5d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_36a5d8:
    // 0x36a5d8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x36a5d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_36a5dc:
    // 0x36a5dc: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x36a5dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_36a5e0:
    // 0x36a5e0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x36a5e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_36a5e4:
    // 0x36a5e4: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x36a5e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_36a5e8:
    // 0x36a5e8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x36a5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_36a5ec:
    // 0x36a5ec: 0x3e00008  jr          $ra
label_36a5f0:
    if (ctx->pc == 0x36A5F0u) {
        ctx->pc = 0x36A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A5ECu;
        // 0x36a5f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A5F4u;
        goto label_36a5f4;
    }
    ctx->pc = 0x36A5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A5ECu;
        // 0x36a5f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A5F4u;
label_36a5f4:
    // 0x36a5f4: 0x0  nop
    ctx->pc = 0x36a5f4u;
    // NOP
    ctx->pc = 0x36a5f8u;
}
