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

// Function: func_001B6458
// Address: 0x1b6458 - 0x1b6660
void func_001B6458_0x1b6458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B6458_0x1b6458");
#endif

    switch (ctx->pc) {
        case 0x1b6484u: goto label_1b6484;
        case 0x1b6498u: goto label_1b6498;
        case 0x1b64a8u: goto label_1b64a8;
        case 0x1b64b8u: goto label_1b64b8;
        case 0x1b64c8u: goto label_1b64c8;
        case 0x1b6500u: goto label_1b6500;
        case 0x1b65b0u: goto label_1b65b0;
        case 0x1b6618u: goto label_1b6618;
        case 0x1b6628u: goto label_1b6628;
        default: break;
    }

    ctx->pc = 0x1b6458u;

    // 0x1b6458: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b6458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b645c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b6460: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b6460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b6464: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b6464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6468: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b6468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b646c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b646cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b6470: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1b6470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1b6474: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6474u;
    {
        const bool branch_taken_0x1b6474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6474) {
            ctx->pc = 0x1B6478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6474u;
            // 0x1b6478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6488u;
            goto label_1b6488;
        }
    }
    ctx->pc = 0x1B647Cu;
    // 0x1b647c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B647Cu;
    SET_GPR_U32(ctx, 31, 0x1B6484u);
    ctx->pc = 0x1B6480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B647Cu;
    // 0x1b6480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B647Cu, 0x1B6484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6484u;
label_1b6484:
    // 0x1b6484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6488:
    // 0x1b6488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b648c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b648cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6490: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1B6490u;
    SET_GPR_U32(ctx, 31, 0x1B6498u);
    ctx->pc = 0x1B6494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6490u;
    // 0x1b6494: 0x263005c0  addiu       $s0, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1B6490u, 0x1B6498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6498u;
label_1b6498:
    // 0x1b6498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b649c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1b649cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b64a0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1B64A0u;
    SET_GPR_U32(ctx, 31, 0x1B64A8u);
    ctx->pc = 0x1B64A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64A0u;
    // 0x1b64a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1B64A0u, 0x1B64A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64A8u;
label_1b64a8:
    // 0x1b64a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b64a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b64ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b64acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b64b0: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1B64B0u;
    SET_GPR_U32(ctx, 31, 0x1B64B8u);
    ctx->pc = 0x1B64B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64B0u;
    // 0x1b64b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1B64B0u, 0x1B64B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64B8u;
label_1b64b8:
    // 0x1b64b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b64b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b64bc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1b64bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b64c0: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1B64C0u;
    SET_GPR_U32(ctx, 31, 0x1B64C8u);
    ctx->pc = 0x1B64C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64C0u;
    // 0x1b64c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1B64C0u, 0x1B64C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64C8u;
label_1b64c8:
    // 0x1b64c8: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1b64c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1b64cc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1b64ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1b64d0: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x1b64d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b64d4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1b64d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b64d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b64d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b64dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b64dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b64e0: 0x10850031  beq         $a0, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1B64E0u;
    {
        const bool branch_taken_0x1b64e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B64E0u;
        // 0x1b64e4: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b64e0) {
            ctx->pc = 0x1B65A8u;
            goto label_1b65a8;
        }
    }
    ctx->pc = 0x1B64E8u;
    // 0x1b64e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b64e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b64ec: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x1b64ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1b64f0: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x1b64f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1b64f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b64f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b64f8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1b64f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b64fc: 0x0  nop
    ctx->pc = 0x1b64fcu;
    // NOP
label_1b6500:
    // 0x1b6500: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b6500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6504: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1b6504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1b6508: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6508u;
    {
        const bool branch_taken_0x1b6508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6508u;
        // 0x1b650c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6508) {
            ctx->pc = 0x1B6518u;
            goto label_1b6518;
        }
    }
    ctx->pc = 0x1B6510u;
    // 0x1b6510: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1b6510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b6514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6518:
    // 0x1b6518: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1b6518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b651c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B651Cu;
    {
        const bool branch_taken_0x1b651c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B651Cu;
        // 0x1b6520: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b651c) {
            ctx->pc = 0x1B6534u;
            goto label_1b6534;
        }
    }
    ctx->pc = 0x1B6524u;
    // 0x1b6524: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1b6524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b6528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b652c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B652Cu;
    {
        const bool branch_taken_0x1b652c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B652Cu;
        // 0x1b6530: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b652c) {
            ctx->pc = 0x1B6538u;
            goto label_1b6538;
        }
    }
    ctx->pc = 0x1B6534u;
label_1b6534:
    // 0x1b6534: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b6534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6538:
    // 0x1b6538: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1b6538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1b653c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b653cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6540: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1b6540u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1b6544: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1b6544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1b6548: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1b6548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1b654c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b654cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b6550: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6550u;
    {
        const bool branch_taken_0x1b6550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6550u;
        // 0x1b6554: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6550) {
            ctx->pc = 0x1B6560u;
            goto label_1b6560;
        }
    }
    ctx->pc = 0x1B6558u;
    // 0x1b6558: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1b6558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b655c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b655cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6560:
    // 0x1b6560: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1b6560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1b6564: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6564u;
    {
        const bool branch_taken_0x1b6564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6564u;
        // 0x1b6568: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6564) {
            ctx->pc = 0x1B657Cu;
            goto label_1b657c;
        }
    }
    ctx->pc = 0x1B656Cu;
    // 0x1b656c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1b656cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b6570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6574: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6574u;
    {
        const bool branch_taken_0x1b6574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6574u;
        // 0x1b6578: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6574) {
            ctx->pc = 0x1B6580u;
            goto label_1b6580;
        }
    }
    ctx->pc = 0x1B657Cu;
label_1b657c:
    // 0x1b657c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b657cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6580:
    // 0x1b6580: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1b6580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1b6584: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b6584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b6588: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b6588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b658c: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x1b658cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1b6590: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1b6590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1b6594: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6594u;
    {
        const bool branch_taken_0x1b6594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6594u;
        // 0x1b6598: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6594) {
            ctx->pc = 0x1B65A8u;
            goto label_1b65a8;
        }
    }
    ctx->pc = 0x1B659Cu;
    // 0x1b659c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b659cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b65a0: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1B65A0u;
    {
        const bool branch_taken_0x1b65a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1b65a0) {
            ctx->pc = 0x1B65A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B65A0u;
            // 0x1b65a4: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6500;
        }
    }
    ctx->pc = 0x1B65A8u;
label_1b65a8:
    // 0x1b65a8: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1B65A8u;
    SET_GPR_U32(ctx, 31, 0x1B65B0u);
    ctx->pc = 0x1B65ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B65A8u;
    // 0x1b65ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1B65A8u, 0x1B65B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B65B0u;
label_1b65b0:
    // 0x1b65b0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b65b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b65b4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b65b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b65b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b65b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b65bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b65bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b65c0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1b65c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1b65c4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1b65c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1b65c8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1b65c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1b65cc: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x1b65ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1b65d0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1b65d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1b65d4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b65d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b65d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b65d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b65dc: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b65dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b65e0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1b65e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b65e4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b65e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b65e8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b65e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b65ec: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b65ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b65f0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1b65f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b65f4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b65f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b65f8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b65f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b65fc: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1b65fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1b6600: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6604: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b6604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b6608: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b6608u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b660c: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B660Cu;
    {
        const bool branch_taken_0x1b660c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B660Cu;
        // 0x1b6610: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b660c) {
            ctx->pc = 0x1B6644u;
            goto label_1b6644;
        }
    }
    ctx->pc = 0x1B6614u;
    // 0x1b6614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b6614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6618:
    // 0x1b6618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b661c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1b661cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b6620: 0xc06d886  jal         func_1B6218
    ctx->pc = 0x1B6620u;
    SET_GPR_U32(ctx, 31, 0x1B6628u);
    ctx->pc = 0x1B6624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6620u;
    // 0x1b6624: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6218u, 0x1B6620u, 0x1B6628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6628u;
label_1b6628:
    // 0x1b6628: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b6628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b662c: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x1b662cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1b6630: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6630u;
    {
        const bool branch_taken_0x1b6630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6630) {
            ctx->pc = 0x1B6634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6630u;
            // 0x1b6634: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6648u;
            goto label_1b6648;
        }
    }
    ctx->pc = 0x1B6638u;
    // 0x1b6638: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b6638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b663c: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B663Cu;
    {
        const bool branch_taken_0x1b663c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1B6640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B663Cu;
        // 0x1b6640: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b663c) {
            ctx->pc = 0x1B6618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6618;
        }
    }
    ctx->pc = 0x1B6644u;
label_1b6644:
    // 0x1b6644: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b6644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b6648:
    // 0x1b6648: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b6648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b664c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b664cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6650: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b6650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6654: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6654u;
        // 0x1b6658: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B665Cu;
    // 0x1b665c: 0x0  nop
    ctx->pc = 0x1b665cu;
    // NOP
    ctx->pc = 0x1b6660u;
}
