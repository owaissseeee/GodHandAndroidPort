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

// Function: func_00174448
// Address: 0x174448 - 0x174650
void func_00174448_0x174448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00174448_0x174448");
#endif

    switch (ctx->pc) {
        case 0x174474u: goto label_174474;
        case 0x174488u: goto label_174488;
        case 0x174498u: goto label_174498;
        case 0x1744a8u: goto label_1744a8;
        case 0x1744b8u: goto label_1744b8;
        case 0x1744f0u: goto label_1744f0;
        case 0x1745a0u: goto label_1745a0;
        case 0x174608u: goto label_174608;
        case 0x174618u: goto label_174618;
        default: break;
    }

    ctx->pc = 0x174448u;

    // 0x174448: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x174448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17444c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17444cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x174450: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x174450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x174454: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x174454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174458: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x174458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x17445c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x174460: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x174460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x174464: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x174464u;
    {
        const bool branch_taken_0x174464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x174464) {
            ctx->pc = 0x174468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174464u;
            // 0x174468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174478u;
            goto label_174478;
        }
    }
    ctx->pc = 0x17446Cu;
    // 0x17446c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x17446Cu;
    SET_GPR_U32(ctx, 31, 0x174474u);
    ctx->pc = 0x174470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17446Cu;
    // 0x174470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x17446Cu, 0x174474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174474u;
label_174474:
    // 0x174474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x174474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_174478:
    // 0x174478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17447c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17447cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174480: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x174480u;
    SET_GPR_U32(ctx, 31, 0x174488u);
    ctx->pc = 0x174484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174480u;
    // 0x174484: 0x263005c0  addiu       $s0, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x174480u, 0x174488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174488u;
label_174488:
    // 0x174488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x174488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17448c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x17448cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x174490: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x174490u;
    SET_GPR_U32(ctx, 31, 0x174498u);
    ctx->pc = 0x174494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174490u;
    // 0x174494: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x174490u, 0x174498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174498u;
label_174498:
    // 0x174498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x174498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17449c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17449cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744a0: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1744A0u;
    SET_GPR_U32(ctx, 31, 0x1744A8u);
    ctx->pc = 0x1744A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1744A0u;
    // 0x1744a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1744A0u, 0x1744A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1744A8u;
label_1744a8:
    // 0x1744a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1744a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744ac: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1744acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1744b0: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1744B0u;
    SET_GPR_U32(ctx, 31, 0x1744B8u);
    ctx->pc = 0x1744B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1744B0u;
    // 0x1744b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1744B0u, 0x1744B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1744B8u;
label_1744b8:
    // 0x1744b8: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1744b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1744bc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1744bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1744c0: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x1744c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1744c4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1744c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1744c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1744c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1744cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1744ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1744d0: 0x10850031  beq         $a0, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1744D0u;
    {
        const bool branch_taken_0x1744d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1744D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744D0u;
        // 0x1744d4: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1744d0) {
            ctx->pc = 0x174598u;
            goto label_174598;
        }
    }
    ctx->pc = 0x1744D8u;
    // 0x1744d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1744d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744dc: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x1744dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1744e0: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x1744e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1744e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1744e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1744e8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1744e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1744ec: 0x0  nop
    ctx->pc = 0x1744ecu;
    // NOP
label_1744f0:
    // 0x1744f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1744f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1744f4: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1744f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1744f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1744F8u;
    {
        const bool branch_taken_0x1744f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1744FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744F8u;
        // 0x1744fc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1744f8) {
            ctx->pc = 0x174508u;
            goto label_174508;
        }
    }
    ctx->pc = 0x174500u;
    // 0x174500: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x174500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x174504: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174508:
    // 0x174508: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x174508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17450c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17450Cu;
    {
        const bool branch_taken_0x17450c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17450Cu;
        // 0x174510: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17450c) {
            ctx->pc = 0x174524u;
            goto label_174524;
        }
    }
    ctx->pc = 0x174514u;
    // 0x174514: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x174514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x174518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17451c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17451Cu;
    {
        const bool branch_taken_0x17451c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17451Cu;
        // 0x174520: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17451c) {
            ctx->pc = 0x174528u;
            goto label_174528;
        }
    }
    ctx->pc = 0x174524u;
label_174524:
    // 0x174524: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x174524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174528:
    // 0x174528: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x174528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x17452c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17452cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174530: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x174530u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x174534: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x174534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x174538: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x174538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x17453c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x17453cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x174540: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x174540u;
    {
        const bool branch_taken_0x174540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174540u;
        // 0x174544: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174540) {
            ctx->pc = 0x174550u;
            goto label_174550;
        }
    }
    ctx->pc = 0x174548u;
    // 0x174548: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x174548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17454c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17454cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174550:
    // 0x174550: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x174550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x174554: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x174554u;
    {
        const bool branch_taken_0x174554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174554u;
        // 0x174558: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174554) {
            ctx->pc = 0x17456Cu;
            goto label_17456c;
        }
    }
    ctx->pc = 0x17455Cu;
    // 0x17455c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x17455cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x174560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174564: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174564u;
    {
        const bool branch_taken_0x174564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174564u;
        // 0x174568: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174564) {
            ctx->pc = 0x174570u;
            goto label_174570;
        }
    }
    ctx->pc = 0x17456Cu;
label_17456c:
    // 0x17456c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17456cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174570:
    // 0x174570: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x174570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x174574: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x174574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x174578: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x174578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17457c: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x17457cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x174580: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x174580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x174584: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x174584u;
    {
        const bool branch_taken_0x174584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174584u;
        // 0x174588: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174584) {
            ctx->pc = 0x174598u;
            goto label_174598;
        }
    }
    ctx->pc = 0x17458Cu;
    // 0x17458c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x17458cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x174590: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x174590u;
    {
        const bool branch_taken_0x174590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x174590) {
            ctx->pc = 0x174594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174590u;
            // 0x174594: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1744F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1744f0;
        }
    }
    ctx->pc = 0x174598u;
label_174598:
    // 0x174598: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x174598u;
    SET_GPR_U32(ctx, 31, 0x1745A0u);
    ctx->pc = 0x17459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174598u;
    // 0x17459c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x174598u, 0x1745A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1745A0u;
label_1745a0:
    // 0x1745a0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1745a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1745a4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1745a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1745a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1745a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1745ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1745acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1745b0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1745b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1745b4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1745b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1745b8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1745b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1745bc: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x1745bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1745c0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1745c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1745c4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1745c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1745c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1745c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1745cc: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1745ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1745d0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1745d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1745d4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1745d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1745d8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1745d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1745dc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1745dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1745e0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1745e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1745e4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1745e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1745e8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1745e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1745ec: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1745ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1745f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1745f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1745f4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1745f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1745f8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1745f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1745fc: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1745FCu;
    {
        const bool branch_taken_0x1745fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x174600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1745FCu;
        // 0x174600: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1745fc) {
            ctx->pc = 0x174634u;
            goto label_174634;
        }
    }
    ctx->pc = 0x174604u;
    // 0x174604: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x174604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174608:
    // 0x174608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x174608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17460c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x17460cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x174610: 0xc05d082  jal         func_174208
    ctx->pc = 0x174610u;
    SET_GPR_U32(ctx, 31, 0x174618u);
    ctx->pc = 0x174614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174610u;
    // 0x174614: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174208u, 0x174610u, 0x174618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174618u;
label_174618:
    // 0x174618: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x174618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17461c: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x17461cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x174620: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x174620u;
    {
        const bool branch_taken_0x174620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174620) {
            ctx->pc = 0x174624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174620u;
            // 0x174624: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174638u;
            goto label_174638;
        }
    }
    ctx->pc = 0x174628u;
    // 0x174628: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x174628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x17462c: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17462Cu;
    {
        const bool branch_taken_0x17462c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x174630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17462Cu;
        // 0x174630: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17462c) {
            ctx->pc = 0x174608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174608;
        }
    }
    ctx->pc = 0x174634u;
label_174634:
    // 0x174634: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x174634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_174638:
    // 0x174638: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x174638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17463c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x17463cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174640: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x174640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174644: 0x3e00008  jr          $ra
    ctx->pc = 0x174644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174644u;
        // 0x174648: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17464Cu;
    // 0x17464c: 0x0  nop
    ctx->pc = 0x17464cu;
    // NOP
    ctx->pc = 0x174650u;
}
