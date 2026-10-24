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

// Function: func_001873F0
// Address: 0x1873f0 - 0x1875f8
void func_001873F0_0x1873f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001873F0_0x1873f0");
#endif

    switch (ctx->pc) {
        case 0x18741cu: goto label_18741c;
        case 0x187430u: goto label_187430;
        case 0x187440u: goto label_187440;
        case 0x187450u: goto label_187450;
        case 0x187460u: goto label_187460;
        case 0x187498u: goto label_187498;
        case 0x187548u: goto label_187548;
        case 0x1875b0u: goto label_1875b0;
        case 0x1875c0u: goto label_1875c0;
        default: break;
    }

    ctx->pc = 0x1873f0u;

    // 0x1873f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1873f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1873f4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1873f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1873f8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1873f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1873fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1873fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187400: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x187400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x187404: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x187404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x187408: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x187408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x18740c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18740Cu;
    {
        const bool branch_taken_0x18740c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18740c) {
            ctx->pc = 0x187410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18740Cu;
            // 0x187410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187420u;
            goto label_187420;
        }
    }
    ctx->pc = 0x187414u;
    // 0x187414: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x187414u;
    SET_GPR_U32(ctx, 31, 0x18741Cu);
    ctx->pc = 0x187418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187414u;
    // 0x187418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x187414u, 0x18741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18741Cu;
label_18741c:
    // 0x18741c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18741cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187420:
    // 0x187420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187428: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x187428u;
    SET_GPR_U32(ctx, 31, 0x187430u);
    ctx->pc = 0x18742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187428u;
    // 0x18742c: 0x263005c0  addiu       $s0, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x187428u, 0x187430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187430u;
label_187430:
    // 0x187430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187434: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x187434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x187438: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x187438u;
    SET_GPR_U32(ctx, 31, 0x187440u);
    ctx->pc = 0x18743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187438u;
    // 0x18743c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x187438u, 0x187440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187440u;
label_187440:
    // 0x187440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187448: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x187448u;
    SET_GPR_U32(ctx, 31, 0x187450u);
    ctx->pc = 0x18744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187448u;
    // 0x18744c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x187448u, 0x187450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187450u;
label_187450:
    // 0x187450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x187450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187454: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x187454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x187458: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x187458u;
    SET_GPR_U32(ctx, 31, 0x187460u);
    ctx->pc = 0x18745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187458u;
    // 0x18745c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x187458u, 0x187460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187460u;
label_187460:
    // 0x187460: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x187460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x187464: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x187464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x187468: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x187468u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18746c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x18746cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x187470: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x187470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x187474: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x187474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187478: 0x10850031  beq         $a0, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x187478u;
    {
        const bool branch_taken_0x187478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x18747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187478u;
        // 0x18747c: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187478) {
            ctx->pc = 0x187540u;
            goto label_187540;
        }
    }
    ctx->pc = 0x187480u;
    // 0x187480: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x187480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187484: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x187484u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x187488: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x187488u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x18748c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18748cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187490: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x187490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x187494: 0x0  nop
    ctx->pc = 0x187494u;
    // NOP
label_187498:
    // 0x187498: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18749c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x18749cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1874a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1874A0u;
    {
        const bool branch_taken_0x1874a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1874A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874A0u;
        // 0x1874a4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1874a0) {
            ctx->pc = 0x1874B0u;
            goto label_1874b0;
        }
    }
    ctx->pc = 0x1874A8u;
    // 0x1874a8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1874a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1874ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1874acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1874b0:
    // 0x1874b0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1874b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1874b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1874B4u;
    {
        const bool branch_taken_0x1874b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1874B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874B4u;
        // 0x1874b8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1874b4) {
            ctx->pc = 0x1874CCu;
            goto label_1874cc;
        }
    }
    ctx->pc = 0x1874BCu;
    // 0x1874bc: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1874bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1874c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1874c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1874c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1874C4u;
    {
        const bool branch_taken_0x1874c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1874C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874C4u;
        // 0x1874c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1874c4) {
            ctx->pc = 0x1874D0u;
            goto label_1874d0;
        }
    }
    ctx->pc = 0x1874CCu;
label_1874cc:
    // 0x1874cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1874ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1874d0:
    // 0x1874d0: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1874d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1874d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1874d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1874d8: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1874d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1874dc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1874dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1874e0: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1874e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1874e4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1874e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1874e8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1874E8u;
    {
        const bool branch_taken_0x1874e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1874ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874E8u;
        // 0x1874ec: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1874e8) {
            ctx->pc = 0x1874F8u;
            goto label_1874f8;
        }
    }
    ctx->pc = 0x1874F0u;
    // 0x1874f0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1874f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1874f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1874f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1874f8:
    // 0x1874f8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1874f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1874fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1874FCu;
    {
        const bool branch_taken_0x1874fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874FCu;
        // 0x187500: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1874fc) {
            ctx->pc = 0x187514u;
            goto label_187514;
        }
    }
    ctx->pc = 0x187504u;
    // 0x187504: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x187504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x187508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18750c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18750Cu;
    {
        const bool branch_taken_0x18750c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18750Cu;
        // 0x187510: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18750c) {
            ctx->pc = 0x187518u;
            goto label_187518;
        }
    }
    ctx->pc = 0x187514u;
label_187514:
    // 0x187514: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187518:
    // 0x187518: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x187518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18751c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18751cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x187520: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x187520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x187524: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x187524u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x187528: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x187528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x18752c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18752Cu;
    {
        const bool branch_taken_0x18752c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x187530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18752Cu;
        // 0x187530: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18752c) {
            ctx->pc = 0x187540u;
            goto label_187540;
        }
    }
    ctx->pc = 0x187534u;
    // 0x187534: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x187534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x187538: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x187538u;
    {
        const bool branch_taken_0x187538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x187538) {
            ctx->pc = 0x18753Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187538u;
            // 0x18753c: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187498;
        }
    }
    ctx->pc = 0x187540u;
label_187540:
    // 0x187540: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x187540u;
    SET_GPR_U32(ctx, 31, 0x187548u);
    ctx->pc = 0x187544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187540u;
    // 0x187544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x187540u, 0x187548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187548u;
label_187548:
    // 0x187548: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x187548u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18754c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18754cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x187550: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x187550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x187554: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x187554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x187558: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x187558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x18755c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18755cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x187560: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x187560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x187564: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x187564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x187568: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x187568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x18756c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18756cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x187570: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x187570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187574: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x187574u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187578: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x187578u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x18757c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18757cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x187580: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x187580u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x187584: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x187584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x187588: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x187588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18758c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18758cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187590: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x187590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x187594: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x187594u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x187598: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x187598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18759c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18759cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1875a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1875a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1875a4: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1875A4u;
    {
        const bool branch_taken_0x1875a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1875A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875A4u;
        // 0x1875a8: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1875a4) {
            ctx->pc = 0x1875DCu;
            goto label_1875dc;
        }
    }
    ctx->pc = 0x1875ACu;
    // 0x1875ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1875acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1875b0:
    // 0x1875b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1875b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1875b4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1875b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1875b8: 0xc061c6c  jal         func_1871B0
    ctx->pc = 0x1875B8u;
    SET_GPR_U32(ctx, 31, 0x1875C0u);
    ctx->pc = 0x1875BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1875B8u;
    // 0x1875bc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1871B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1871B0u, 0x1875B8u, 0x1875C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1875C0u;
label_1875c0:
    // 0x1875c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1875c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1875c4: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x1875c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1875c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1875C8u;
    {
        const bool branch_taken_0x1875c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1875c8) {
            ctx->pc = 0x1875CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1875C8u;
            // 0x1875cc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1875E0u;
            goto label_1875e0;
        }
    }
    ctx->pc = 0x1875D0u;
    // 0x1875d0: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1875d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1875d4: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1875D4u;
    {
        const bool branch_taken_0x1875d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1875D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875D4u;
        // 0x1875d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1875d4) {
            ctx->pc = 0x1875B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1875b0;
        }
    }
    ctx->pc = 0x1875DCu;
label_1875dc:
    // 0x1875dc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1875dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1875e0:
    // 0x1875e0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1875e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1875e4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1875e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1875e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1875e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1875ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1875ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1875F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875ECu;
        // 0x1875f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1875ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1875F4u;
    // 0x1875f4: 0x0  nop
    ctx->pc = 0x1875f4u;
    // NOP
    ctx->pc = 0x1875f8u;
}
