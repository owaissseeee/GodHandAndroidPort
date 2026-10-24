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

// Function: func_00278390
// Address: 0x278390 - 0x278570
void func_00278390_0x278390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00278390_0x278390");
#endif

    switch (ctx->pc) {
        case 0x278390u: goto label_278390;
        case 0x278394u: goto label_278394;
        case 0x278398u: goto label_278398;
        case 0x27839cu: goto label_27839c;
        case 0x2783a0u: goto label_2783a0;
        case 0x2783a4u: goto label_2783a4;
        case 0x2783a8u: goto label_2783a8;
        case 0x2783acu: goto label_2783ac;
        case 0x2783b0u: goto label_2783b0;
        case 0x2783b4u: goto label_2783b4;
        case 0x2783b8u: goto label_2783b8;
        case 0x2783bcu: goto label_2783bc;
        case 0x2783c0u: goto label_2783c0;
        case 0x2783c4u: goto label_2783c4;
        case 0x2783c8u: goto label_2783c8;
        case 0x2783ccu: goto label_2783cc;
        case 0x2783d0u: goto label_2783d0;
        case 0x2783d4u: goto label_2783d4;
        case 0x2783d8u: goto label_2783d8;
        case 0x2783dcu: goto label_2783dc;
        case 0x2783e0u: goto label_2783e0;
        case 0x2783e4u: goto label_2783e4;
        case 0x2783e8u: goto label_2783e8;
        case 0x2783ecu: goto label_2783ec;
        case 0x2783f0u: goto label_2783f0;
        case 0x2783f4u: goto label_2783f4;
        case 0x2783f8u: goto label_2783f8;
        case 0x2783fcu: goto label_2783fc;
        case 0x278400u: goto label_278400;
        case 0x278404u: goto label_278404;
        case 0x278408u: goto label_278408;
        case 0x27840cu: goto label_27840c;
        case 0x278410u: goto label_278410;
        case 0x278414u: goto label_278414;
        case 0x278418u: goto label_278418;
        case 0x27841cu: goto label_27841c;
        case 0x278420u: goto label_278420;
        case 0x278424u: goto label_278424;
        case 0x278428u: goto label_278428;
        case 0x27842cu: goto label_27842c;
        case 0x278430u: goto label_278430;
        case 0x278434u: goto label_278434;
        case 0x278438u: goto label_278438;
        case 0x27843cu: goto label_27843c;
        case 0x278440u: goto label_278440;
        case 0x278444u: goto label_278444;
        case 0x278448u: goto label_278448;
        case 0x27844cu: goto label_27844c;
        case 0x278450u: goto label_278450;
        case 0x278454u: goto label_278454;
        case 0x278458u: goto label_278458;
        case 0x27845cu: goto label_27845c;
        case 0x278460u: goto label_278460;
        case 0x278464u: goto label_278464;
        case 0x278468u: goto label_278468;
        case 0x27846cu: goto label_27846c;
        case 0x278470u: goto label_278470;
        case 0x278474u: goto label_278474;
        case 0x278478u: goto label_278478;
        case 0x27847cu: goto label_27847c;
        case 0x278480u: goto label_278480;
        case 0x278484u: goto label_278484;
        case 0x278488u: goto label_278488;
        case 0x27848cu: goto label_27848c;
        case 0x278490u: goto label_278490;
        case 0x278494u: goto label_278494;
        case 0x278498u: goto label_278498;
        case 0x27849cu: goto label_27849c;
        case 0x2784a0u: goto label_2784a0;
        case 0x2784a4u: goto label_2784a4;
        case 0x2784a8u: goto label_2784a8;
        case 0x2784acu: goto label_2784ac;
        case 0x2784b0u: goto label_2784b0;
        case 0x2784b4u: goto label_2784b4;
        case 0x2784b8u: goto label_2784b8;
        case 0x2784bcu: goto label_2784bc;
        case 0x2784c0u: goto label_2784c0;
        case 0x2784c4u: goto label_2784c4;
        case 0x2784c8u: goto label_2784c8;
        case 0x2784ccu: goto label_2784cc;
        case 0x2784d0u: goto label_2784d0;
        case 0x2784d4u: goto label_2784d4;
        case 0x2784d8u: goto label_2784d8;
        case 0x2784dcu: goto label_2784dc;
        case 0x2784e0u: goto label_2784e0;
        case 0x2784e4u: goto label_2784e4;
        case 0x2784e8u: goto label_2784e8;
        case 0x2784ecu: goto label_2784ec;
        case 0x2784f0u: goto label_2784f0;
        case 0x2784f4u: goto label_2784f4;
        case 0x2784f8u: goto label_2784f8;
        case 0x2784fcu: goto label_2784fc;
        case 0x278500u: goto label_278500;
        case 0x278504u: goto label_278504;
        case 0x278508u: goto label_278508;
        case 0x27850cu: goto label_27850c;
        case 0x278510u: goto label_278510;
        case 0x278514u: goto label_278514;
        case 0x278518u: goto label_278518;
        case 0x27851cu: goto label_27851c;
        case 0x278520u: goto label_278520;
        case 0x278524u: goto label_278524;
        case 0x278528u: goto label_278528;
        case 0x27852cu: goto label_27852c;
        case 0x278530u: goto label_278530;
        case 0x278534u: goto label_278534;
        case 0x278538u: goto label_278538;
        case 0x27853cu: goto label_27853c;
        case 0x278540u: goto label_278540;
        case 0x278544u: goto label_278544;
        case 0x278548u: goto label_278548;
        case 0x27854cu: goto label_27854c;
        case 0x278550u: goto label_278550;
        case 0x278554u: goto label_278554;
        case 0x278558u: goto label_278558;
        case 0x27855cu: goto label_27855c;
        case 0x278560u: goto label_278560;
        case 0x278564u: goto label_278564;
        case 0x278568u: goto label_278568;
        case 0x27856cu: goto label_27856c;
        default: break;
    }

    ctx->pc = 0x278390u;

label_278390:
    // 0x278390: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x278390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_278394:
    // 0x278394: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278394u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_278398:
    // 0x278398: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x278398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_27839c:
    // 0x27839c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x27839cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_2783a0:
    // 0x2783a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2783a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2783a4:
    // 0x2783a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2783a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2783a8:
    // 0x2783a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2783a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2783ac:
    // 0x2783ac: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2783acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_2783b0:
    // 0x2783b0: 0x14600069  bnez        $v1, . + 4 + (0x69 << 2)
label_2783b4:
    if (ctx->pc == 0x2783B4u) {
        ctx->pc = 0x2783B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2783B0u;
        // 0x2783b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2783B8u;
        goto label_2783b8;
    }
    ctx->pc = 0x2783B0u;
    {
        const bool branch_taken_0x2783b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2783B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2783B0u;
        // 0x2783b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783b0) {
            ctx->pc = 0x278558u;
            goto label_278558;
        }
    }
    ctx->pc = 0x2783B8u;
label_2783b8:
    // 0x2783b8: 0xc0b6dac  jal         func_2DB6B0
label_2783bc:
    if (ctx->pc == 0x2783BCu) {
        ctx->pc = 0x2783C0u;
        goto label_2783c0;
    }
    ctx->pc = 0x2783B8u;
    SET_GPR_U32(ctx, 31, 0x2783C0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2783B8u, 0x2783C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2783C0u;
label_2783c0:
    // 0x2783c0: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x2783c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_2783c4:
    // 0x2783c4: 0xc07dfac  jal         func_1F7EB0
label_2783c8:
    if (ctx->pc == 0x2783C8u) {
        ctx->pc = 0x2783C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2783C4u;
        // 0x2783c8: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2783CCu;
        goto label_2783cc;
    }
    ctx->pc = 0x2783C4u;
    SET_GPR_U32(ctx, 31, 0x2783CCu);
    ctx->pc = 0x2783C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2783C4u;
    // 0x2783c8: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2783C4u, 0x2783CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2783CCu;
label_2783cc:
    // 0x2783cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2783ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2783d0:
    // 0x2783d0: 0xc09e15c  jal         func_278570
label_2783d4:
    if (ctx->pc == 0x2783D4u) {
        ctx->pc = 0x2783D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2783D0u;
        // 0x2783d4: 0xe6000618  swc1        $f0, 0x618($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1560), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2783D8u;
        goto label_2783d8;
    }
    ctx->pc = 0x2783D0u;
    SET_GPR_U32(ctx, 31, 0x2783D8u);
    ctx->pc = 0x2783D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2783D0u;
    // 0x2783d4: 0xe6000618  swc1        $f0, 0x618($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1560), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x278570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278570u, 0x2783D0u, 0x2783D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2783D8u;
label_2783d8:
    // 0x2783d8: 0x8e041560  lw          $a0, 0x1560($s0)
    ctx->pc = 0x2783d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5472)));
label_2783dc:
    // 0x2783dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2783dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2783e0:
    // 0x2783e0: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x2783e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_2783e4:
    // 0x2783e4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2783e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2783e8:
    // 0x2783e8: 0x920502f4  lbu         $a1, 0x2F4($s0)
    ctx->pc = 0x2783e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_2783ec:
    // 0x2783ec: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2783ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2783f0:
    // 0x2783f0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2783f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2783f4:
    // 0x2783f4: 0xae041560  sw          $a0, 0x1560($s0)
    ctx->pc = 0x2783f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5472), GPR_U32(ctx, 4));
label_2783f8:
    // 0x2783f8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2783f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2783fc:
    // 0x2783fc: 0x2463fb00  addiu       $v1, $v1, -0x500
    ctx->pc = 0x2783fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966016));
label_278400:
    // 0x278400: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x278400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_278404:
    // 0x278404: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x278404u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_278408:
    // 0x278408: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
label_27840c:
    if (ctx->pc == 0x27840Cu) {
        ctx->pc = 0x27840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278408u;
        // 0x27840c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278410u;
        goto label_278410;
    }
    ctx->pc = 0x278408u;
    {
        const bool branch_taken_0x278408 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x27840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278408u;
        // 0x27840c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278408) {
            ctx->pc = 0x278434u;
            goto label_278434;
        }
    }
    ctx->pc = 0x278410u;
label_278410:
    // 0x278410: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x278410u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_278414:
    // 0x278414: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x278414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_278418:
    // 0x278418: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x278418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_27841c:
    // 0x27841c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27841cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_278420:
    // 0x278420: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x278420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_278424:
    // 0x278424: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x278424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_278428:
    // 0x278428: 0x11283f  dsra32      $a1, $s1, 0
    ctx->pc = 0x278428u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 17) >> (32 + 0));
label_27842c:
    // 0x27842c: 0x10000003  b           . + 4 + (0x3 << 2)
label_278430:
    if (ctx->pc == 0x278430u) {
        ctx->pc = 0x278430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27842Cu;
        // 0x278430: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278434u;
        goto label_278434;
    }
    ctx->pc = 0x27842Cu;
    {
        const bool branch_taken_0x27842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27842Cu;
        // 0x278430: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27842c) {
            ctx->pc = 0x27843Cu;
            goto label_27843c;
        }
    }
    ctx->pc = 0x278434u;
label_278434:
    // 0x278434: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x278434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_278438:
    // 0x278438: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x278438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_27843c:
    // 0x27843c: 0x24e3fb00  addiu       $v1, $a3, -0x500
    ctx->pc = 0x27843cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966016));
label_278440:
    // 0x278440: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x278440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_278444:
    // 0x278444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_278448:
    // 0x278448: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
label_27844c:
    if (ctx->pc == 0x27844Cu) {
        ctx->pc = 0x27844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278448u;
        // 0x27844c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278450u;
        goto label_278450;
    }
    ctx->pc = 0x278448u;
    {
        const bool branch_taken_0x278448 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x27844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278448u;
        // 0x27844c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278448) {
            ctx->pc = 0x278464u;
            goto label_278464;
        }
    }
    ctx->pc = 0x278450u;
label_278450:
    // 0x278450: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x278450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_278454:
    // 0x278454: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x278454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_278458:
    // 0x278458: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x278458u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_27845c:
    // 0x27845c: 0x10000002  b           . + 4 + (0x2 << 2)
label_278460:
    if (ctx->pc == 0x278460u) {
        ctx->pc = 0x278460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27845Cu;
        // 0x278460: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278464u;
        goto label_278464;
    }
    ctx->pc = 0x27845Cu;
    {
        const bool branch_taken_0x27845c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27845Cu;
        // 0x278460: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27845c) {
            ctx->pc = 0x278468u;
            goto label_278468;
        }
    }
    ctx->pc = 0x278464u;
label_278464:
    // 0x278464: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x278464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_278468:
    // 0x278468: 0xa0f809  jalr        $a1
label_27846c:
    if (ctx->pc == 0x27846Cu) {
        ctx->pc = 0x27846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278468u;
        // 0x27846c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278470u;
        goto label_278470;
    }
    ctx->pc = 0x278468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x278470u);
        ctx->pc = 0x27846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278468u;
        // 0x27846c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278468u, 0x278470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x278470u;
label_278470:
    // 0x278470: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x278470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_278474:
    // 0x278474: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x278474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_278478:
    // 0x278478: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_27847c:
    if (ctx->pc == 0x27847Cu) {
        ctx->pc = 0x27847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278478u;
        // 0x27847c: 0x8e03156c  lw          $v1, 0x156C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278480u;
        goto label_278480;
    }
    ctx->pc = 0x278478u;
    {
        const bool branch_taken_0x278478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278478) {
            ctx->pc = 0x27847Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278478u;
            // 0x27847c: 0x8e03156c  lw          $v1, 0x156C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2784BCu;
            goto label_2784bc;
        }
    }
    ctx->pc = 0x278480u;
label_278480:
    // 0x278480: 0x8e04156c  lw          $a0, 0x156C($s0)
    ctx->pc = 0x278480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5484)));
label_278484:
    // 0x278484: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_278488:
    if (ctx->pc == 0x278488u) {
        ctx->pc = 0x278488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278484u;
        // 0x278488: 0x8e031570  lw          $v1, 0x1570($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27848Cu;
        goto label_27848c;
    }
    ctx->pc = 0x278484u;
    {
        const bool branch_taken_0x278484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x278484) {
            ctx->pc = 0x278488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278484u;
            // 0x278488: 0x8e031570  lw          $v1, 0x1570($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2784A4u;
            goto label_2784a4;
        }
    }
    ctx->pc = 0x27848Cu;
label_27848c:
    // 0x27848c: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x27848cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
label_278490:
    // 0x278490: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x278490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_278494:
    // 0x278494: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x278494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_278498:
    // 0x278498: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x278498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_27849c:
    // 0x27849c: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x27849cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_2784a0:
    // 0x2784a0: 0x8e031570  lw          $v1, 0x1570($s0)
    ctx->pc = 0x2784a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5488)));
label_2784a4:
    // 0x2784a4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_2784a8:
    if (ctx->pc == 0x2784A8u) {
        ctx->pc = 0x2784ACu;
        goto label_2784ac;
    }
    ctx->pc = 0x2784A4u;
    {
        const bool branch_taken_0x2784a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2784a4) {
            ctx->pc = 0x2784F0u;
            goto label_2784f0;
        }
    }
    ctx->pc = 0x2784ACu;
label_2784ac:
    // 0x2784ac: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x2784acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_2784b0:
    // 0x2784b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2784b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2784b4:
    // 0x2784b4: 0x1000000e  b           . + 4 + (0xE << 2)
label_2784b8:
    if (ctx->pc == 0x2784B8u) {
        ctx->pc = 0x2784B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784B4u;
        // 0x2784b8: 0xac620380  sw          $v0, 0x380($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2784BCu;
        goto label_2784bc;
    }
    ctx->pc = 0x2784B4u;
    {
        const bool branch_taken_0x2784b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2784B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784B4u;
        // 0x2784b8: 0xac620380  sw          $v0, 0x380($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2784b4) {
            ctx->pc = 0x2784F0u;
            goto label_2784f0;
        }
    }
    ctx->pc = 0x2784BCu;
label_2784bc:
    // 0x2784bc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_2784c0:
    if (ctx->pc == 0x2784C0u) {
        ctx->pc = 0x2784C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784BCu;
        // 0x2784c0: 0x8e041570  lw          $a0, 0x1570($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5488)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2784C4u;
        goto label_2784c4;
    }
    ctx->pc = 0x2784BCu;
    {
        const bool branch_taken_0x2784bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2784bc) {
            ctx->pc = 0x2784C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2784BCu;
            // 0x2784c0: 0x8e041570  lw          $a0, 0x1570($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2784D4u;
            goto label_2784d4;
        }
    }
    ctx->pc = 0x2784C4u;
label_2784c4:
    // 0x2784c4: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x2784c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
label_2784c8:
    // 0x2784c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2784c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2784cc:
    // 0x2784cc: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x2784ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_2784d0:
    // 0x2784d0: 0x8e041570  lw          $a0, 0x1570($s0)
    ctx->pc = 0x2784d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5488)));
label_2784d4:
    // 0x2784d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2784d8:
    if (ctx->pc == 0x2784D8u) {
        ctx->pc = 0x2784DCu;
        goto label_2784dc;
    }
    ctx->pc = 0x2784D4u;
    {
        const bool branch_taken_0x2784d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2784d4) {
            ctx->pc = 0x2784F0u;
            goto label_2784f0;
        }
    }
    ctx->pc = 0x2784DCu;
label_2784dc:
    // 0x2784dc: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x2784dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
label_2784e0:
    // 0x2784e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2784e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2784e4:
    // 0x2784e4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2784e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_2784e8:
    // 0x2784e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2784e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2784ec:
    // 0x2784ec: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x2784ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_2784f0:
    // 0x2784f0: 0xc053ed2  jal         func_14FB48
label_2784f4:
    if (ctx->pc == 0x2784F4u) {
        ctx->pc = 0x2784F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784F0u;
        // 0x2784f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2784F8u;
        goto label_2784f8;
    }
    ctx->pc = 0x2784F0u;
    SET_GPR_U32(ctx, 31, 0x2784F8u);
    ctx->pc = 0x2784F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2784F0u;
    // 0x2784f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB48u, 0x2784F0u, 0x2784F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2784F8u;
label_2784f8:
    // 0x2784f8: 0xc09e6c8  jal         func_279B20
label_2784fc:
    if (ctx->pc == 0x2784FCu) {
        ctx->pc = 0x2784FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784F8u;
        // 0x2784fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278500u;
        goto label_278500;
    }
    ctx->pc = 0x2784F8u;
    SET_GPR_U32(ctx, 31, 0x278500u);
    ctx->pc = 0x2784FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2784F8u;
    // 0x2784fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B20u, 0x2784F8u, 0x278500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278500u;
label_278500:
    // 0x278500: 0xc0527ae  jal         func_149EB8
label_278504:
    if (ctx->pc == 0x278504u) {
        ctx->pc = 0x278504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278500u;
        // 0x278504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278508u;
        goto label_278508;
    }
    ctx->pc = 0x278500u;
    SET_GPR_U32(ctx, 31, 0x278508u);
    ctx->pc = 0x278504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278500u;
    // 0x278504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x278500u, 0x278508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278508u;
label_278508:
    // 0x278508: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x278508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27850c:
    // 0x27850c: 0xc054a88  jal         func_152A20
label_278510:
    if (ctx->pc == 0x278510u) {
        ctx->pc = 0x278510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27850Cu;
        // 0x278510: 0x26040448  addiu       $a0, $s0, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278514u;
        goto label_278514;
    }
    ctx->pc = 0x27850Cu;
    SET_GPR_U32(ctx, 31, 0x278514u);
    ctx->pc = 0x278510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27850Cu;
    // 0x278510: 0x26040448  addiu       $a0, $s0, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x27850Cu, 0x278514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278514u;
label_278514:
    // 0x278514: 0xc05280e  jal         func_14A038
label_278518:
    if (ctx->pc == 0x278518u) {
        ctx->pc = 0x278518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278514u;
        // 0x278518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27851Cu;
        goto label_27851c;
    }
    ctx->pc = 0x278514u;
    SET_GPR_U32(ctx, 31, 0x27851Cu);
    ctx->pc = 0x278518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278514u;
    // 0x278518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x278514u, 0x27851Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27851Cu;
label_27851c:
    // 0x27851c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x27851cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_278520:
    // 0x278520: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x278520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278524:
    // 0x278524: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x278524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_278528:
    // 0x278528: 0xc04d476  jal         func_1351D8
label_27852c:
    if (ctx->pc == 0x27852Cu) {
        ctx->pc = 0x27852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278528u;
        // 0x27852c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278530u;
        goto label_278530;
    }
    ctx->pc = 0x278528u;
    SET_GPR_U32(ctx, 31, 0x278530u);
    ctx->pc = 0x27852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278528u;
    // 0x27852c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x278528u, 0x278530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278530u;
label_278530:
    // 0x278530: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x278530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_278534:
    // 0x278534: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x278534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_278538:
    // 0x278538: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_27853c:
    if (ctx->pc == 0x27853Cu) {
        ctx->pc = 0x27853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278538u;
        // 0x27853c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278540u;
        goto label_278540;
    }
    ctx->pc = 0x278538u;
    {
        const bool branch_taken_0x278538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x278538) {
            ctx->pc = 0x27853Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278538u;
            // 0x27853c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27855Cu;
            goto label_27855c;
        }
    }
    ctx->pc = 0x278540u;
label_278540:
    // 0x278540: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x278540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278544:
    // 0x278544: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x278544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
label_278548:
    // 0x278548: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x278548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27854c:
    // 0x27854c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27854cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_278550:
    // 0x278550: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x278550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278554:
    // 0x278554: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x278554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_278558:
    // 0x278558: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x278558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27855c:
    // 0x27855c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27855cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_278560:
    // 0x278560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_278564:
    // 0x278564: 0x3e00008  jr          $ra
label_278568:
    if (ctx->pc == 0x278568u) {
        ctx->pc = 0x278568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278564u;
        // 0x278568: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27856Cu;
        goto label_27856c;
    }
    ctx->pc = 0x278564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278564u;
        // 0x278568: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27856Cu;
label_27856c:
    // 0x27856c: 0x0  nop
    ctx->pc = 0x27856cu;
    // NOP
    ctx->pc = 0x278570u;
}
