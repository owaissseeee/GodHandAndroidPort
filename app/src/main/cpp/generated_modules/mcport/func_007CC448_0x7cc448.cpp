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
// Function: func_007CC448
// Address: 0x7cc448 - 0x7cc6b0
void func_007CC448_0x7cc448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CC448_0x7cc448");
#endif

    switch (ctx->pc) {
        case 0x7cc474u: goto label_7cc474;
        case 0x7cc480u: goto label_7cc480;
        case 0x7cc49cu: goto label_7cc49c;
        case 0x7cc4b0u: goto label_7cc4b0;
        case 0x7cc4c0u: goto label_7cc4c0;
        case 0x7cc590u: goto label_7cc590;
        case 0x7cc5c0u: goto label_7cc5c0;
        case 0x7cc688u: goto label_7cc688;
        case 0x7cc690u: goto label_7cc690;
        default: break;
    }

    ctx->pc = 0x7cc448u;

    // 0x7cc448: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7cc448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7cc44c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7cc44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x7cc450: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x7cc450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x7cc454: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7cc454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc458: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x7cc458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x7cc45c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cc45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cc460: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x7cc460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7cc464: 0x12050003  beq         $s0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CC464u;
    {
        const bool branch_taken_0x7cc464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x7CC468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC464u;
        // 0x7cc468: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc464) {
            ctx->pc = 0x7CC474u;
            goto label_7cc474;
        }
    }
    ctx->pc = 0x7CC46Cu;
    // 0x7cc46c: 0xc0e9ed2  jal         func_3A7B48
    ctx->pc = 0x7CC46Cu;
    SET_GPR_U32(ctx, 31, 0x7CC474u);
    ctx->pc = 0x3A7B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B48u, 0x7CC46Cu, 0x7CC474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC474u;
label_7cc474:
    // 0x7cc474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7cc474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc478: 0xc1f345a  jal         func_7CD168
    ctx->pc = 0x7CC478u;
    SET_GPR_U32(ctx, 31, 0x7CC480u);
    ctx->pc = 0x7CC47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CC478u;
    // 0x7cc47c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CD168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CD168u, 0x7CC478u, 0x7CC480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC480u;
label_7cc480:
    // 0x7cc480: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7cc480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7cc484: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x7cc484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7cc488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7cc488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7cc48c: 0x50500003  beql        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CC48Cu;
    {
        const bool branch_taken_0x7cc48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x7cc48c) {
            ctx->pc = 0x7CC490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CC48Cu;
            // 0x7cc490: 0x8e4d0004  lw          $t5, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CC49Cu;
            goto label_7cc49c;
        }
    }
    ctx->pc = 0x7CC494u;
    // 0x7cc494: 0xc0e9ed2  jal         func_3A7B48
    ctx->pc = 0x7CC494u;
    SET_GPR_U32(ctx, 31, 0x7CC49Cu);
    ctx->pc = 0x3A7B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B48u, 0x7CC494u, 0x7CC49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC49Cu;
label_7cc49c:
    // 0x7cc49c: 0x8e2b0008  lw          $t3, 0x8($s1)
    ctx->pc = 0x7cc49cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7cc4a0: 0x11a00034  beqz        $t5, . + 4 + (0x34 << 2)
    ctx->pc = 0x7CC4A0u;
    {
        const bool branch_taken_0x7cc4a0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC4A0u;
        // 0x7cc4a4: 0x1a0702d  daddu       $t6, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc4a0) {
            ctx->pc = 0x7CC574u;
            goto label_7cc574;
        }
    }
    ctx->pc = 0x7CC4A8u;
    // 0x7cc4a8: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x7cc4a8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x7cc4ac: 0x25c4ffff  addiu       $a0, $t6, -0x1
    ctx->pc = 0x7cc4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
label_7cc4b0:
    // 0x7cc4b0: 0x45040  sll         $t2, $a0, 1
    ctx->pc = 0x7cc4b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x7cc4b4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x7CC4B4u;
    {
        const bool branch_taken_0x7cc4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC4B4u;
        // 0x7cc4b8: 0x80702d  daddu       $t6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc4b4) {
            ctx->pc = 0x7CC554u;
            goto label_7cc554;
        }
    }
    ctx->pc = 0x7CC4BCu;
    // 0x7cc4bc: 0x0  nop
    ctx->pc = 0x7cc4bcu;
    // NOP
label_7cc4c0:
    // 0x7cc4c0: 0x246c0002  addiu       $t4, $v1, 0x2
    ctx->pc = 0x7cc4c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x7cc4c4: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x7cc4c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x7cc4c8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x7CC4C8u;
    {
        const bool branch_taken_0x7cc4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC4C8u;
        // 0x7cc4cc: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc4c8) {
            ctx->pc = 0x7CC518u;
            goto label_7cc518;
        }
    }
    ctx->pc = 0x7CC4D0u;
    // 0x7cc4d0: 0xeb4021  addu        $t0, $a3, $t3
    ctx->pc = 0x7cc4d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x7cc4d4: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x7cc4d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x7cc4d8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x7cc4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x7cc4dc: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x7cc4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x7cc4e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x7cc4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7cc4e4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x7cc4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x7cc4e8: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7CC4E8u;
    {
        const bool branch_taken_0x7cc4e8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7CC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC4E8u;
        // 0x7cc4ec: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc4e8) {
            ctx->pc = 0x7CC51Cu;
            goto label_7cc51c;
        }
    }
    ctx->pc = 0x7CC4F0u;
    // 0x7cc4f0: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x7cc4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x7cc4f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7cc4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7cc4f8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x7cc4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7cc4fc: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x7cc4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x7cc500: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7CC500u;
    {
        const bool branch_taken_0x7cc500 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7CC504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC500u;
        // 0x7cc504: 0xeb3821  addu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc500) {
            ctx->pc = 0x7CC520u;
            goto label_7cc520;
        }
    }
    ctx->pc = 0x7CC508u;
    // 0x7cc508: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x7cc508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x7cc50c: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x7cc50cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x7cc510: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x7CC510u;
    {
        const bool branch_taken_0x7cc510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC510u;
        // 0x7cc514: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc510) {
            ctx->pc = 0x7CC550u;
            goto label_7cc550;
        }
    }
    ctx->pc = 0x7CC518u;
label_7cc518:
    // 0x7cc518: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x7cc518u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_7cc51c:
    // 0x7cc51c: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x7cc51cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_7cc520:
    // 0x7cc520: 0xab3021  addu        $a2, $a1, $t3
    ctx->pc = 0x7cc520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x7cc524: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x7cc524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x7cc528: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x7cc528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7cc52c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x7cc52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7cc530: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x7cc530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7cc534: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x7cc534u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7cc538: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7CC538u;
    {
        const bool branch_taken_0x7cc538 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x7cc538) {
            ctx->pc = 0x7CC564u;
            goto label_7cc564;
        }
    }
    ctx->pc = 0x7CC540u;
    // 0x7cc540: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x7cc540u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x7cc544: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x7cc544u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x7cc548: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x7cc548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x7cc54c: 0x0  nop
    ctx->pc = 0x7cc54cu;
    // NOP
label_7cc550:
    // 0x7cc550: 0x45040  sll         $t2, $a0, 1
    ctx->pc = 0x7cc550u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_7cc554:
    // 0x7cc554: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x7cc554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x7cc558: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x7cc558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x7cc55c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x7CC55Cu;
    {
        const bool branch_taken_0x7cc55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC55Cu;
        // 0x7cc560: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc55c) {
            ctx->pc = 0x7CC4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cc4c0;
        }
    }
    ctx->pc = 0x7CC564u;
label_7cc564:
    // 0x7cc564: 0x15c0ffd2  bnez        $t6, . + 4 + (-0x2E << 2)
    ctx->pc = 0x7CC564u;
    {
        const bool branch_taken_0x7cc564 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CC568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC564u;
        // 0x7cc568: 0x25c4ffff  addiu       $a0, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc564) {
            ctx->pc = 0x7CC4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cc4b0;
        }
    }
    ctx->pc = 0x7CC56Cu;
    // 0x7cc56c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7CC56Cu;
    {
        const bool branch_taken_0x7cc56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7cc56c) {
            ctx->pc = 0x7CC578u;
            goto label_7cc578;
        }
    }
    ctx->pc = 0x7CC574u;
label_7cc574:
    // 0x7cc574: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x7cc574u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7cc578:
    // 0x7cc578: 0x15e00041  bnez        $t7, . + 4 + (0x41 << 2)
    ctx->pc = 0x7CC578u;
    {
        const bool branch_taken_0x7cc578 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC578u;
        // 0x7cc57c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc578) {
            ctx->pc = 0x7CC680u;
            goto label_7cc680;
        }
    }
    ctx->pc = 0x7CC580u;
    // 0x7cc580: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x7cc580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x7cc584: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x7cc584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cc588: 0x4b7021  addu        $t6, $v0, $t3
    ctx->pc = 0x7cc588u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x7cc58c: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x7cc58cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
label_7cc590:
    // 0x7cc590: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x7cc590u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x7cc594: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x7cc594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x7cc598: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x7cc598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x7cc59c: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x7cc59cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x7cc5a0: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x7cc5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x7cc5a4: 0x20d102b  sltu        $v0, $s0, $t5
    ctx->pc = 0x7cc5a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x7cc5a8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x7CC5A8u;
    {
        const bool branch_taken_0x7cc5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC5A8u;
        // 0x7cc5ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc5a8) {
            ctx->pc = 0x7CC670u;
            goto label_7cc670;
        }
    }
    ctx->pc = 0x7CC5B0u;
    // 0x7cc5b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x7cc5b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc5b4: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x7cc5b4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x7cc5b8: 0x254c0002  addiu       $t4, $t2, 0x2
    ctx->pc = 0x7cc5b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x7cc5bc: 0x0  nop
    ctx->pc = 0x7cc5bcu;
    // NOP
label_7cc5c0:
    // 0x7cc5c0: 0x18d102b  sltu        $v0, $t4, $t5
    ctx->pc = 0x7cc5c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x7cc5c4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x7CC5C4u;
    {
        const bool branch_taken_0x7cc5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC5C4u;
        // 0x7cc5c8: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc5c4) {
            ctx->pc = 0x7CC618u;
            goto label_7cc618;
        }
    }
    ctx->pc = 0x7CC5CCu;
    // 0x7cc5cc: 0xeb4021  addu        $t0, $a3, $t3
    ctx->pc = 0x7cc5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x7cc5d0: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x7cc5d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x7cc5d4: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x7cc5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x7cc5d8: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x7cc5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x7cc5dc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x7cc5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7cc5e0: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x7cc5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x7cc5e4: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7CC5E4u;
    {
        const bool branch_taken_0x7cc5e4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7CC5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC5E4u;
        // 0x7cc5e8: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc5e4) {
            ctx->pc = 0x7CC61Cu;
            goto label_7cc61c;
        }
    }
    ctx->pc = 0x7CC5ECu;
    // 0x7cc5ec: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x7cc5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x7cc5f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7cc5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7cc5f4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x7cc5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7cc5f8: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x7cc5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x7cc5fc: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CC5FCu;
    {
        const bool branch_taken_0x7cc5fc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7CC600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC5FCu;
        // 0x7cc600: 0xeb3821  addu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc5fc) {
            ctx->pc = 0x7CC620u;
            goto label_7cc620;
        }
    }
    ctx->pc = 0x7CC604u;
    // 0x7cc604: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x7cc604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x7cc608: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x7cc608u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x7cc60c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x7CC60Cu;
    {
        const bool branch_taken_0x7cc60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC60Cu;
        // 0x7cc610: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc60c) {
            ctx->pc = 0x7CC650u;
            goto label_7cc650;
        }
    }
    ctx->pc = 0x7CC614u;
    // 0x7cc614: 0x0  nop
    ctx->pc = 0x7cc614u;
    // NOP
label_7cc618:
    // 0x7cc618: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x7cc618u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_7cc61c:
    // 0x7cc61c: 0xeb3821  addu        $a3, $a3, $t3
    ctx->pc = 0x7cc61cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_7cc620:
    // 0x7cc620: 0xab3021  addu        $a2, $a1, $t3
    ctx->pc = 0x7cc620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x7cc624: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x7cc624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x7cc628: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x7cc628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7cc62c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x7cc62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7cc630: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x7cc630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7cc634: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x7cc634u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7cc638: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7CC638u;
    {
        const bool branch_taken_0x7cc638 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x7cc638) {
            ctx->pc = 0x7CC674u;
            goto label_7cc674;
        }
    }
    ctx->pc = 0x7CC640u;
    // 0x7cc640: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x7cc640u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x7cc644: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x7cc644u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x7cc648: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x7cc648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x7cc64c: 0x0  nop
    ctx->pc = 0x7cc64cu;
    // NOP
label_7cc650:
    // 0x7cc650: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x7cc650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x7cc654: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x7cc654u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc658: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x7cc658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x7cc65c: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x7cc65cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x7cc660: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x7CC660u;
    {
        const bool branch_taken_0x7cc660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CC664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC660u;
        // 0x7cc664: 0x254c0002  addiu       $t4, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc660) {
            ctx->pc = 0x7CC5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cc5c0;
        }
    }
    ctx->pc = 0x7CC668u;
    // 0x7cc668: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7CC668u;
    {
        const bool branch_taken_0x7cc668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7cc668) {
            ctx->pc = 0x7CC674u;
            goto label_7cc674;
        }
    }
    ctx->pc = 0x7CC670u;
label_7cc670:
    // 0x7cc670: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x7cc670u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_7cc674:
    // 0x7cc674: 0x11e0ffc6  beqz        $t7, . + 4 + (-0x3A << 2)
    ctx->pc = 0x7CC674u;
    {
        const bool branch_taken_0x7cc674 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC674u;
        // 0x7cc678: 0x25cefffc  addiu       $t6, $t6, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc674) {
            ctx->pc = 0x7CC590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cc590;
        }
    }
    ctx->pc = 0x7CC67Cu;
    // 0x7cc67c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x7cc67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7cc680:
    // 0x7cc680: 0xc1f30d2  jal         func_7CC348
    ctx->pc = 0x7CC680u;
    SET_GPR_U32(ctx, 31, 0x7CC688u);
    ctx->pc = 0x7CC684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CC680u;
    // 0x7cc684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC348u, 0x7CC680u, 0x7CC688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC688u;
label_7cc688:
    // 0x7cc688: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x7CC688u;
    SET_GPR_U32(ctx, 31, 0x7CC690u);
    ctx->pc = 0x7CC68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CC688u;
    // 0x7cc68c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x7CC688u, 0x7CC690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC690u;
label_7cc690:
    // 0x7cc690: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x7cc690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7cc694: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x7cc694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cc698: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x7cc698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cc69c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7cc69cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cc6a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cc6a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cc6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x7CC6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC6A4u;
        // 0x7cc6a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CC6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CC6ACu;
    // 0x7cc6ac: 0x0  nop
    ctx->pc = 0x7cc6acu;
    // NOP
    ctx->pc = 0x7cc6b0u;
}
} // namespace gh_mcport
