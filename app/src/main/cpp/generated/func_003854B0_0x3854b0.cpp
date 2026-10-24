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

// Function: func_003854B0
// Address: 0x3854b0 - 0x385a20
void func_003854B0_0x3854b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003854B0_0x3854b0");
#endif

    switch (ctx->pc) {
        case 0x385508u: goto label_385508;
        case 0x385544u: goto label_385544;
        case 0x3855b4u: goto label_3855b4;
        case 0x3855ccu: goto label_3855cc;
        case 0x3855e0u: goto label_3855e0;
        case 0x3855fcu: goto label_3855fc;
        case 0x385620u: goto label_385620;
        case 0x38563cu: goto label_38563c;
        case 0x38566cu: goto label_38566c;
        case 0x385690u: goto label_385690;
        case 0x3856b0u: goto label_3856b0;
        case 0x3856d8u: goto label_3856d8;
        case 0x3856f8u: goto label_3856f8;
        case 0x385720u: goto label_385720;
        case 0x385738u: goto label_385738;
        case 0x38576cu: goto label_38576c;
        case 0x38578cu: goto label_38578c;
        case 0x3857b8u: goto label_3857b8;
        case 0x3857d8u: goto label_3857d8;
        case 0x3857f8u: goto label_3857f8;
        case 0x385818u: goto label_385818;
        case 0x385828u: goto label_385828;
        case 0x385838u: goto label_385838;
        case 0x385850u: goto label_385850;
        case 0x38586cu: goto label_38586c;
        case 0x385884u: goto label_385884;
        case 0x3858a0u: goto label_3858a0;
        case 0x3858c4u: goto label_3858c4;
        case 0x3858ecu: goto label_3858ec;
        case 0x385908u: goto label_385908;
        case 0x385924u: goto label_385924;
        case 0x385940u: goto label_385940;
        case 0x385958u: goto label_385958;
        case 0x385978u: goto label_385978;
        case 0x385998u: goto label_385998;
        case 0x3859b4u: goto label_3859b4;
        case 0x3859d0u: goto label_3859d0;
        case 0x3859ecu: goto label_3859ec;
        default: break;
    }

    ctx->pc = 0x3854b0u;

    // 0x3854b0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x3854b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x3854b4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3854b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3854b8: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x3854b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x3854bc: 0x24e7cde8  addiu       $a3, $a3, -0x3218
    ctx->pc = 0x3854bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954472));
    // 0x3854c0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3854c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3854c4: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x3854c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x3854c8: 0x26c204bc  addiu       $v0, $s6, 0x4BC
    ctx->pc = 0x3854c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1212));
    // 0x3854cc: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x3854ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x3854d0: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x3854d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x3854d4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x3854d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3854d8: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x3854d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x3854dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3854dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3854e0: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x3854e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x3854e4: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x3854e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3854e8: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x3854e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x3854ec: 0x26d70470  addiu       $s7, $s6, 0x470
    ctx->pc = 0x3854ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1136));
    // 0x3854f0: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x3854f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x3854f4: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x3854f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x3854f8: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x3854f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
    // 0x3854fc: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x3854fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x385500: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x385500u;
    SET_GPR_U32(ctx, 31, 0x385508u);
    ctx->pc = 0x385504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385500u;
    // 0x385504: 0x26d50484  addiu       $s5, $s6, 0x484 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 1156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x385500u, 0x385508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385508u;
label_385508:
    // 0x385508: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x385508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x38550c: 0x8ec30044  lw          $v1, 0x44($s6)
    ctx->pc = 0x38550cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
    // 0x385510: 0x2447ce08  addiu       $a3, $v0, -0x31F8
    ctx->pc = 0x385510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954504));
    // 0x385514: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x385514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x385518: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x385518u;
    {
        const bool branch_taken_0x385518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385518u;
        // 0x38551c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385518) {
            ctx->pc = 0x38552Cu;
            goto label_38552c;
        }
    }
    ctx->pc = 0x385520u;
    // 0x385520: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x385520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x385524: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x385524u;
    {
        const bool branch_taken_0x385524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385524u;
        // 0x385528: 0x2448ce00  addiu       $t0, $v0, -0x3200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385524) {
            ctx->pc = 0x385534u;
            goto label_385534;
        }
    }
    ctx->pc = 0x38552Cu;
label_38552c:
    // 0x38552c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x38552cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x385530: 0x8ec80044  lw          $t0, 0x44($s6)
    ctx->pc = 0x385530u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
label_385534:
    // 0x385534: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x385534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x385538: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x385538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38553c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x38553Cu;
    SET_GPR_U32(ctx, 31, 0x385544u);
    ctx->pc = 0x385540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38553Cu;
    // 0x385540: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x38553Cu, 0x385544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385544u;
label_385544:
    // 0x385544: 0x8ee3000c  lw          $v1, 0xC($s7)
    ctx->pc = 0x385544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x385548: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x385548u;
    {
        const bool branch_taken_0x385548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385548u;
        // 0x38554c: 0x241e000f  addiu       $fp, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385548) {
            ctx->pc = 0x385604u;
            goto label_385604;
        }
    }
    ctx->pc = 0x385550u;
    // 0x385550: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x385550u;
    {
        const bool branch_taken_0x385550 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x385554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385550u;
        // 0x385554: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385550) {
            ctx->pc = 0x38556Cu;
            goto label_38556c;
        }
    }
    ctx->pc = 0x385558u;
    // 0x385558: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x385558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38555c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38555Cu;
    {
        const bool branch_taken_0x38555c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x385560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38555Cu;
        // 0x385560: 0x241e000d  addiu       $fp, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38555c) {
            ctx->pc = 0x385584u;
            goto label_385584;
        }
    }
    ctx->pc = 0x385564u;
    // 0x385564: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x385564u;
    {
        const bool branch_taken_0x385564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385564u;
        // 0x385568: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385564) {
            ctx->pc = 0x385608u;
            goto label_385608;
        }
    }
    ctx->pc = 0x38556Cu;
label_38556c:
    // 0x38556c: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x38556Cu;
    {
        const bool branch_taken_0x38556c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x385570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38556Cu;
        // 0x385570: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38556c) {
            ctx->pc = 0x3855CCu;
            goto label_3855cc;
        }
    }
    ctx->pc = 0x385574u;
    // 0x385574: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x385574u;
    {
        const bool branch_taken_0x385574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x385578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385574u;
        // 0x385578: 0x241e000d  addiu       $fp, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385574) {
            ctx->pc = 0x3855D4u;
            goto label_3855d4;
        }
    }
    ctx->pc = 0x38557Cu;
    // 0x38557c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x38557Cu;
    {
        const bool branch_taken_0x38557c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38557Cu;
        // 0x385580: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38557c) {
            ctx->pc = 0x385608u;
            goto label_385608;
        }
    }
    ctx->pc = 0x385584u;
label_385584:
    // 0x385584: 0x92e20001  lbu         $v0, 0x1($s7)
    ctx->pc = 0x385584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x385588: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x385588u;
    {
        const bool branch_taken_0x385588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385588u;
        // 0x38558c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385588) {
            ctx->pc = 0x3855CCu;
            goto label_3855cc;
        }
    }
    ctx->pc = 0x385590u;
    // 0x385590: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x385590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x385594: 0x24632848  addiu       $v1, $v1, 0x2848
    ctx->pc = 0x385594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10312));
    // 0x385598: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x385598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x38559c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3855a0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3855a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3855a4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x3855a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3855a8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x3855a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3855ac: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3855ACu;
    SET_GPR_U32(ctx, 31, 0x3855B4u);
    ctx->pc = 0x3855B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3855ACu;
    // 0x3855b0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3855ACu, 0x3855B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3855B4u;
label_3855b4:
    // 0x3855b4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3855b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3855b8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x3855b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3855bc: 0x24e7ce18  addiu       $a3, $a3, -0x31E8
    ctx->pc = 0x3855bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954520));
    // 0x3855c0: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x3855c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x3855c4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3855C4u;
    SET_GPR_U32(ctx, 31, 0x3855CCu);
    ctx->pc = 0x3855C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3855C4u;
    // 0x3855c8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3855C4u, 0x3855CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3855CCu;
label_3855cc:
    // 0x3855cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3855CCu;
    {
        const bool branch_taken_0x3855cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3855D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3855CCu;
        // 0x3855d0: 0x241e000f  addiu       $fp, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3855cc) {
            ctx->pc = 0x385604u;
            goto label_385604;
        }
    }
    ctx->pc = 0x3855D4u;
label_3855d4:
    // 0x3855d4: 0x8ea40030  lw          $a0, 0x30($s5)
    ctx->pc = 0x3855d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x3855d8: 0xc0cac2c  jal         func_32B0B0
    ctx->pc = 0x3855D8u;
    SET_GPR_U32(ctx, 31, 0x3855E0u);
    ctx->pc = 0x3855DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3855D8u;
    // 0x3855dc: 0x241e000a  addiu       $fp, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B0B0u, 0x3855D8u, 0x3855E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3855E0u;
label_3855e0:
    // 0x3855e0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3855e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3855e4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3855e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3855e8: 0x24e7ce30  addiu       $a3, $a3, -0x31D0
    ctx->pc = 0x3855e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954544));
    // 0x3855ec: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3855ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3855f0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3855f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3855f4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3855F4u;
    SET_GPR_U32(ctx, 31, 0x3855FCu);
    ctx->pc = 0x3855F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3855F4u;
    // 0x3855f8: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3855F4u, 0x3855FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3855FCu;
label_3855fc:
    // 0x3855fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3855FCu;
    {
        const bool branch_taken_0x3855fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3855FCu;
        // 0x385600: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3855fc) {
            ctx->pc = 0x385608u;
            goto label_385608;
        }
    }
    ctx->pc = 0x385604u;
label_385604:
    // 0x385604: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x385604u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_385608:
    // 0x385608: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x385608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38560c: 0x24e7ce40  addiu       $a3, $a3, -0x31C0
    ctx->pc = 0x38560cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954560));
    // 0x385610: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x385610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x385614: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x385614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x385618: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x385618u;
    SET_GPR_U32(ctx, 31, 0x385620u);
    ctx->pc = 0x38561Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385618u;
    // 0x38561c: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x385618u, 0x385620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385620u;
label_385620:
    // 0x385620: 0x3c140046  lui         $s4, 0x46
    ctx->pc = 0x385620u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
    // 0x385624: 0x92e80002  lbu         $t0, 0x2($s7)
    ctx->pc = 0x385624u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x385628: 0x2607ce58  addiu       $a3, $s0, -0x31A8
    ctx->pc = 0x385628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954584));
    // 0x38562c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x38562cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x385630: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x385630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x385634: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x385634u;
    SET_GPR_U32(ctx, 31, 0x38563Cu);
    ctx->pc = 0x385638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385634u;
    // 0x385638: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x385634u, 0x38563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38563Cu;
label_38563c:
    // 0x38563c: 0x27b20100  addiu       $s2, $sp, 0x100
    ctx->pc = 0x38563cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x385640: 0x27b30104  addiu       $s3, $sp, 0x104
    ctx->pc = 0x385640u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x385644: 0x27b00108  addiu       $s0, $sp, 0x108
    ctx->pc = 0x385644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x385648: 0x27b1010c  addiu       $s1, $sp, 0x10C
    ctx->pc = 0x385648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x38564c: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x38564cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x385650: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x385650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385654: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x385654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x385658: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x385658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38565c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x38565cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385660: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x385660u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385664: 0xc0e01c8  jal         func_380720
    ctx->pc = 0x385664u;
    SET_GPR_U32(ctx, 31, 0x38566Cu);
    ctx->pc = 0x385668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385664u;
    // 0x385668: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380720u, 0x385664u, 0x38566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38566Cu;
label_38566c:
    // 0x38566c: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x38566cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x385670: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x385670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x385674: 0x8fa90104  lw          $t1, 0x104($sp)
    ctx->pc = 0x385674u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x385678: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x385678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x38567c: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x38567cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x385680: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x385680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x385684: 0x8fab010c  lw          $t3, 0x10C($sp)
    ctx->pc = 0x385684u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x385688: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x385688u;
    SET_GPR_U32(ctx, 31, 0x385690u);
    ctx->pc = 0x38568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385688u;
    // 0x38568c: 0x2687ce68  addiu       $a3, $s4, -0x3198 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x385688u, 0x385690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385690u;
label_385690:
    // 0x385690: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x385690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x385694: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x385694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385698: 0x8ea60010  lw          $a2, 0x10($s5)
    ctx->pc = 0x385698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x38569c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x38569cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3856a0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3856a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3856a4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3856a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3856a8: 0xc0e01c8  jal         func_380720
    ctx->pc = 0x3856A8u;
    SET_GPR_U32(ctx, 31, 0x3856B0u);
    ctx->pc = 0x3856ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3856A8u;
    // 0x3856ac: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380720u, 0x3856A8u, 0x3856B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3856B0u;
label_3856b0:
    // 0x3856b0: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x3856b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3856b4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3856b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3856b8: 0x8fa90104  lw          $t1, 0x104($sp)
    ctx->pc = 0x3856b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x3856bc: 0x24e7ce88  addiu       $a3, $a3, -0x3178
    ctx->pc = 0x3856bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954632));
    // 0x3856c0: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x3856c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3856c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3856c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3856c8: 0x8fab010c  lw          $t3, 0x10C($sp)
    ctx->pc = 0x3856c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x3856cc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3856ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3856d0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3856D0u;
    SET_GPR_U32(ctx, 31, 0x3856D8u);
    ctx->pc = 0x3856D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3856D0u;
    // 0x3856d4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3856D0u, 0x3856D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3856D8u;
label_3856d8:
    // 0x3856d8: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x3856d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3856dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3856dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3856e0: 0x8ea60014  lw          $a2, 0x14($s5)
    ctx->pc = 0x3856e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x3856e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3856e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3856e8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3856e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3856ec: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3856ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3856f0: 0xc0e01c8  jal         func_380720
    ctx->pc = 0x3856F0u;
    SET_GPR_U32(ctx, 31, 0x3856F8u);
    ctx->pc = 0x3856F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3856F0u;
    // 0x3856f4: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380720u, 0x3856F0u, 0x3856F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3856F8u;
label_3856f8:
    // 0x3856f8: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x3856f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3856fc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3856fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x385700: 0x8fa90104  lw          $t1, 0x104($sp)
    ctx->pc = 0x385700u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x385704: 0x24e7cea8  addiu       $a3, $a3, -0x3158
    ctx->pc = 0x385704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954664));
    // 0x385708: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x385708u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x38570c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x38570cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x385710: 0x8fab010c  lw          $t3, 0x10C($sp)
    ctx->pc = 0x385710u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x385714: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x385714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x385718: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x385718u;
    SET_GPR_U32(ctx, 31, 0x385720u);
    ctx->pc = 0x38571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385718u;
    // 0x38571c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x385718u, 0x385720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385720u;
label_385720:
    // 0x385720: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x385720u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x385724: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x385724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x385728: 0x24e7cec8  addiu       $a3, $a3, -0x3138
    ctx->pc = 0x385728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954696));
    // 0x38572c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x38572cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x385730: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x385730u;
    SET_GPR_U32(ctx, 31, 0x385738u);
    ctx->pc = 0x385734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385730u;
    // 0x385734: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x385730u, 0x385738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385738u;
label_385738:
    // 0x385738: 0x8ee3000c  lw          $v1, 0xC($s7)
    ctx->pc = 0x385738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x38573c: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x38573Cu;
    {
        const bool branch_taken_0x38573c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x385740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38573Cu;
        // 0x385740: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38573c) {
            ctx->pc = 0x385774u;
            goto label_385774;
        }
    }
    ctx->pc = 0x385744u;
    // 0x385744: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x385744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x385748: 0x24422820  addiu       $v0, $v0, 0x2820
    ctx->pc = 0x385748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10272));
    // 0x38574c: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x38574cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x385750: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x385750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x385754: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x385754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385758: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x385758u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38575c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x38575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x385760: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x385760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x385764: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x385764u;
    SET_GPR_U32(ctx, 31, 0x38576Cu);
    ctx->pc = 0x385768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385764u;
    // 0x385768: 0x2607ced8  addiu       $a3, $s0, -0x3128 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x385764u, 0x38576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38576Cu;
label_38576c:
    // 0x38576c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38576Cu;
    {
        const bool branch_taken_0x38576c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38576Cu;
        // 0x385770: 0x3c140046  lui         $s4, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38576c) {
            ctx->pc = 0x385790u;
            goto label_385790;
        }
    }
    ctx->pc = 0x385774u;
label_385774:
    // 0x385774: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x385774u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x385778: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x385778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38577c: 0x24e7cee0  addiu       $a3, $a3, -0x3120
    ctx->pc = 0x38577cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954720));
    // 0x385780: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x385780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x385784: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x385784u;
    SET_GPR_U32(ctx, 31, 0x38578Cu);
    ctx->pc = 0x385788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385784u;
    // 0x385788: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x385784u, 0x38578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38578Cu;
label_38578c:
    // 0x38578c: 0x3c140046  lui         $s4, 0x46
    ctx->pc = 0x38578cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
label_385790:
    // 0x385790: 0x92e30000  lbu         $v1, 0x0($s7)
    ctx->pc = 0x385790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x385794: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x385794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x385798: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x385798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x38579c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x38579cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3857a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3857a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3857a4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3857a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3857a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3857a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3857ac: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x3857acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3857b0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3857B0u;
    SET_GPR_U32(ctx, 31, 0x3857B8u);
    ctx->pc = 0x3857B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3857B0u;
    // 0x3857b4: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3857B0u, 0x3857B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3857B8u;
label_3857b8:
    // 0x3857b8: 0x3c130046  lui         $s3, 0x46
    ctx->pc = 0x3857b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
    // 0x3857bc: 0x8ea80004  lw          $t0, 0x4($s5)
    ctx->pc = 0x3857bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3857c0: 0x2673cee8  addiu       $s3, $s3, -0x3118
    ctx->pc = 0x3857c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954728));
    // 0x3857c4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3857c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3857c8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3857c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3857cc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3857ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3857d0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3857D0u;
    SET_GPR_U32(ctx, 31, 0x3857D8u);
    ctx->pc = 0x3857D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3857D0u;
    // 0x3857d4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3857D0u, 0x3857D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3857D8u;
label_3857d8:
    // 0x3857d8: 0x3c120046  lui         $s2, 0x46
    ctx->pc = 0x3857d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
    // 0x3857dc: 0x8ea80008  lw          $t0, 0x8($s5)
    ctx->pc = 0x3857dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3857e0: 0x2652cef8  addiu       $s2, $s2, -0x3108
    ctx->pc = 0x3857e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954744));
    // 0x3857e4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3857e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3857e8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3857e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3857ec: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3857ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3857f0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3857F0u;
    SET_GPR_U32(ctx, 31, 0x3857F8u);
    ctx->pc = 0x3857F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3857F0u;
    // 0x3857f4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3857F0u, 0x3857F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3857F8u;
label_3857f8:
    // 0x3857f8: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x3857f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    // 0x3857fc: 0x8ea8000c  lw          $t0, 0xC($s5)
    ctx->pc = 0x3857fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x385800: 0x2631cf08  addiu       $s1, $s1, -0x30F8
    ctx->pc = 0x385800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954760));
    // 0x385804: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x385804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x385808: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x385808u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38580c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x38580cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x385810: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x385810u;
    SET_GPR_U32(ctx, 31, 0x385818u);
    ctx->pc = 0x385814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385810u;
    // 0x385814: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x385810u, 0x385818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385818u;
label_385818:
    // 0x385818: 0xc6ac0018  lwc1        $f12, 0x18($s5)
    ctx->pc = 0x385818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x38581c: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x38581cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x385820: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x385820u;
    SET_GPR_U32(ctx, 31, 0x385828u);
    ctx->pc = 0x385824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385820u;
    // 0x385824: 0x2610cf18  addiu       $s0, $s0, -0x30E8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x385820u, 0x385828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385828u;
label_385828:
    // 0x385828: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x385828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38582c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38582cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385830: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x385830u;
    SET_GPR_U32(ctx, 31, 0x385838u);
    ctx->pc = 0x385834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385830u;
    // 0x385834: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x385830u, 0x385838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385838u;
label_385838:
    // 0x385838: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x385838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38583c: 0x2687ced8  addiu       $a3, $s4, -0x3128
    ctx->pc = 0x38583cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954712));
    // 0x385840: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x385840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x385844: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x385844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x385848: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x385848u;
    SET_GPR_U32(ctx, 31, 0x385850u);
    ctx->pc = 0x38584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385848u;
    // 0x38584c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x385848u, 0x385850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385850u;
label_385850:
    // 0x385850: 0x8ea8001c  lw          $t0, 0x1C($s5)
    ctx->pc = 0x385850u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x385854: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x385854u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x385858: 0x24e7cf30  addiu       $a3, $a3, -0x30D0
    ctx->pc = 0x385858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954800));
    // 0x38585c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x38585cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x385860: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x385860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x385864: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x385864u;
    SET_GPR_U32(ctx, 31, 0x38586Cu);
    ctx->pc = 0x385868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385864u;
    // 0x385868: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x385864u, 0x38586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38586Cu;
label_38586c:
    // 0x38586c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38586cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x385870: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x385870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x385874: 0x24e7cf40  addiu       $a3, $a3, -0x30C0
    ctx->pc = 0x385874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954816));
    // 0x385878: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x385878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x38587c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x38587Cu;
    SET_GPR_U32(ctx, 31, 0x385884u);
    ctx->pc = 0x385880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38587Cu;
    // 0x385880: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x38587Cu, 0x385884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385884u;
label_385884:
    // 0x385884: 0x92c80007  lbu         $t0, 0x7($s6)
    ctx->pc = 0x385884u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 7)));
    // 0x385888: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x385888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x38588c: 0x2447ce58  addiu       $a3, $v0, -0x31A8
    ctx->pc = 0x38588cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954584));
    // 0x385890: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x385890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x385894: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x385894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x385898: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x385898u;
    SET_GPR_U32(ctx, 31, 0x3858A0u);
    ctx->pc = 0x38589Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385898u;
    // 0x38589c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x385898u, 0x3858A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3858A0u;
label_3858a0:
    // 0x3858a0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x3858a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3858a4: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x3858a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3858a8: 0x27a80104  addiu       $t0, $sp, 0x104
    ctx->pc = 0x3858a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x3858ac: 0x27a90108  addiu       $t1, $sp, 0x108
    ctx->pc = 0x3858acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x3858b0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x3858b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3858b4: 0x27aa010c  addiu       $t2, $sp, 0x10C
    ctx->pc = 0x3858b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x3858b8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3858b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3858bc: 0xc0e01c8  jal         func_380720
    ctx->pc = 0x3858BCu;
    SET_GPR_U32(ctx, 31, 0x3858C4u);
    ctx->pc = 0x3858C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3858BCu;
    // 0x3858c0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380720u, 0x3858BCu, 0x3858C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3858C4u;
label_3858c4:
    // 0x3858c4: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x3858c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3858c8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3858c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3858cc: 0x8fa90104  lw          $t1, 0x104($sp)
    ctx->pc = 0x3858ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x3858d0: 0x2447ce68  addiu       $a3, $v0, -0x3198
    ctx->pc = 0x3858d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954600));
    // 0x3858d4: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x3858d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3858d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3858d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3858dc: 0x8fab010c  lw          $t3, 0x10C($sp)
    ctx->pc = 0x3858dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x3858e0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3858e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3858e4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3858E4u;
    SET_GPR_U32(ctx, 31, 0x3858ECu);
    ctx->pc = 0x3858E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3858E4u;
    // 0x3858e8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3858E4u, 0x3858ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3858ECu;
label_3858ec:
    // 0x3858ec: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x3858ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3858f0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3858f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3858f4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3858f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3858f8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3858f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3858fc: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x3858fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x385900: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x385900u;
    SET_GPR_U32(ctx, 31, 0x385908u);
    ctx->pc = 0x385904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385900u;
    // 0x385904: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x385900u, 0x385908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385908u;
label_385908:
    // 0x385908: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x385908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x38590c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x38590cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385910: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x385910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x385914: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x385914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x385918: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x385918u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x38591c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x38591Cu;
    SET_GPR_U32(ctx, 31, 0x385924u);
    ctx->pc = 0x385920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38591Cu;
    // 0x385920: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x38591Cu, 0x385924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385924u;
label_385924:
    // 0x385924: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x385924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x385928: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x385928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38592c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x38592cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x385930: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x385930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x385934: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x385934u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x385938: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x385938u;
    SET_GPR_U32(ctx, 31, 0x385940u);
    ctx->pc = 0x38593Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385938u;
    // 0x38593c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x385938u, 0x385940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385940u;
label_385940:
    // 0x385940: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x385940u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x385944: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x385944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x385948: 0x24e7cf50  addiu       $a3, $a3, -0x30B0
    ctx->pc = 0x385948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954832));
    // 0x38594c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x38594cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x385950: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x385950u;
    SET_GPR_U32(ctx, 31, 0x385958u);
    ctx->pc = 0x385954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385950u;
    // 0x385954: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x385950u, 0x385958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385958u;
label_385958:
    // 0x385958: 0x92c80007  lbu         $t0, 0x7($s6)
    ctx->pc = 0x385958u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 7)));
    // 0x38595c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38595cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x385960: 0x8ee90010  lw          $t1, 0x10($s7)
    ctx->pc = 0x385960u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x385964: 0x24e7cf70  addiu       $a3, $a3, -0x3090
    ctx->pc = 0x385964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954864));
    // 0x385968: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x385968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38596c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x38596cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x385970: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x385970u;
    SET_GPR_U32(ctx, 31, 0x385978u);
    ctx->pc = 0x385974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385970u;
    // 0x385974: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x385970u, 0x385978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385978u;
label_385978:
    // 0x385978: 0x86e90006  lh          $t1, 0x6($s7)
    ctx->pc = 0x385978u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x38597c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38597cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x385980: 0x86e80004  lh          $t0, 0x4($s7)
    ctx->pc = 0x385980u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x385984: 0x24e7cf88  addiu       $a3, $a3, -0x3078
    ctx->pc = 0x385984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954888));
    // 0x385988: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x385988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38598c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x38598cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x385990: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x385990u;
    SET_GPR_U32(ctx, 31, 0x385998u);
    ctx->pc = 0x385994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385990u;
    // 0x385994: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x385990u, 0x385998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385998u;
label_385998:
    // 0x385998: 0x86e80008  lh          $t0, 0x8($s7)
    ctx->pc = 0x385998u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x38599c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38599cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3859a0: 0x24e7cfa8  addiu       $a3, $a3, -0x3058
    ctx->pc = 0x3859a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954920));
    // 0x3859a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3859a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3859a8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x3859a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3859ac: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3859ACu;
    SET_GPR_U32(ctx, 31, 0x3859B4u);
    ctx->pc = 0x3859B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3859ACu;
    // 0x3859b0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3859ACu, 0x3859B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3859B4u;
label_3859b4:
    // 0x3859b4: 0x86e8000a  lh          $t0, 0xA($s7)
    ctx->pc = 0x3859b4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 10)));
    // 0x3859b8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3859b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3859bc: 0x24e7cfb8  addiu       $a3, $a3, -0x3048
    ctx->pc = 0x3859bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954936));
    // 0x3859c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3859c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3859c4: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x3859c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x3859c8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3859C8u;
    SET_GPR_U32(ctx, 31, 0x3859D0u);
    ctx->pc = 0x3859CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3859C8u;
    // 0x3859cc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3859C8u, 0x3859D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3859D0u;
label_3859d0:
    // 0x3859d0: 0x8ea80020  lw          $t0, 0x20($s5)
    ctx->pc = 0x3859d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x3859d4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3859d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3859d8: 0x24e7cfc8  addiu       $a3, $a3, -0x3038
    ctx->pc = 0x3859d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954952));
    // 0x3859dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3859dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3859e0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x3859e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3859e4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3859E4u;
    SET_GPR_U32(ctx, 31, 0x3859ECu);
    ctx->pc = 0x3859E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3859E4u;
    // 0x3859e8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3859E4u, 0x3859ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3859ECu;
label_3859ec:
    // 0x3859ec: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x3859ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x3859f0: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x3859f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x3859f4: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x3859f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x3859f8: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x3859f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3859fc: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x3859fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x385a00: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x385a00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x385a04: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x385a04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x385a08: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x385a08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x385a0c: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x385a0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x385a10: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x385a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x385a14: 0x3e00008  jr          $ra
    ctx->pc = 0x385A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385A14u;
        // 0x385a18: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385A1Cu;
    // 0x385a1c: 0x0  nop
    ctx->pc = 0x385a1cu;
    // NOP
    ctx->pc = 0x385a20u;
}
