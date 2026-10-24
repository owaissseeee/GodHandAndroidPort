#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: dpdiv
// Address: 0x79c510 - 0x79c678
void dpdiv_0x79c510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpdiv_0x79c510");
#endif

    switch (ctx->pc) {
        case 0x79c530u: goto label_79c530;
        case 0x79c540u: goto label_79c540;
        case 0x79c610u: goto label_79c610;
        case 0x79c668u: goto label_79c668;
        default: break;
    }

    ctx->pc = 0x79c510u;

    // 0x79c510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x79c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x79c514: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x79c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x79c518: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x79c518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x79c51c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x79c51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79c520: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x79c520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x79c524: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79c528: 0xc1e6fb2  jal         func_79BEC8
    ctx->pc = 0x79C528u;
    SET_GPR_U32(ctx, 31, 0x79C530u);
    ctx->pc = 0x79C52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C528u;
    // 0x79c52c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEC8u, 0x79C528u, 0x79C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C530u;
label_79c530:
    // 0x79c530: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79c530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79c534: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x79c534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x79c538: 0xc1e6fb2  jal         func_79BEC8
    ctx->pc = 0x79C538u;
    SET_GPR_U32(ctx, 31, 0x79C540u);
    ctx->pc = 0x79C53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C538u;
    // 0x79c53c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEC8u, 0x79C538u, 0x79C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C540u;
label_79c540:
    // 0x79c540: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x79c540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c544: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x79c544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79c548: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C548u;
    {
        const bool branch_taken_0x79c548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C548u;
        // 0x79c54c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c548) {
            ctx->pc = 0x79C558u;
            goto label_79c558;
        }
    }
    ctx->pc = 0x79C550u;
    // 0x79c550: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x79C550u;
    {
        const bool branch_taken_0x79c550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C550u;
        // 0x79c554: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c550) {
            ctx->pc = 0x79C660u;
            goto label_79c660;
        }
    }
    ctx->pc = 0x79C558u;
label_79c558:
    // 0x79c558: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x79c558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79c55c: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x79c55cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79c560: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x79C560u;
    {
        const bool branch_taken_0x79c560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C560u;
        // 0x79c564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c560) {
            ctx->pc = 0x79C660u;
            goto label_79c660;
        }
    }
    ctx->pc = 0x79C568u;
    // 0x79c568: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79c568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79c56c: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x79c56cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x79c570: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x79c570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x79c574: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79c574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79c578: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79C578u;
    {
        const bool branch_taken_0x79c578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C578u;
        // 0x79c57c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c578) {
            ctx->pc = 0x79C58Cu;
            goto label_79c58c;
        }
    }
    ctx->pc = 0x79C580u;
    // 0x79c580: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x79c580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x79c584: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79C584u;
    {
        const bool branch_taken_0x79c584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C584u;
        // 0x79c588: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c584) {
            ctx->pc = 0x79C5A0u;
            goto label_79c5a0;
        }
    }
    ctx->pc = 0x79C58Cu;
label_79c58c:
    // 0x79c58c: 0x14e60034  bne         $a3, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x79C58Cu;
    {
        const bool branch_taken_0x79c58c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x79C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C58Cu;
        // 0x79c590: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c58c) {
            ctx->pc = 0x79C660u;
            goto label_79c660;
        }
    }
    ctx->pc = 0x79C594u;
    // 0x79c594: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79c594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79c598: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x79C598u;
    {
        const bool branch_taken_0x79c598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C598u;
        // 0x79c59c: 0x2444cdb0  addiu       $a0, $v0, -0x3250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c598) {
            ctx->pc = 0x79C660u;
            goto label_79c660;
        }
    }
    ctx->pc = 0x79C5A0u;
label_79c5a0:
    // 0x79c5a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C5A0u;
    {
        const bool branch_taken_0x79c5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C5A0u;
        // 0x79c5a4: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c5a0) {
            ctx->pc = 0x79C5B8u;
            goto label_79c5b8;
        }
    }
    ctx->pc = 0x79C5A8u;
    // 0x79c5a8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x79c5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x79c5ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79c5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c5b0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x79C5B0u;
    {
        const bool branch_taken_0x79c5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C5B0u;
        // 0x79c5b4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c5b0) {
            ctx->pc = 0x79C660u;
            goto label_79c660;
        }
    }
    ctx->pc = 0x79C5B8u;
label_79c5b8:
    // 0x79c5b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C5B8u;
    {
        const bool branch_taken_0x79c5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C5B8u;
        // 0x79c5bc: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c5b8) {
            ctx->pc = 0x79C5D0u;
            goto label_79c5d0;
        }
    }
    ctx->pc = 0x79C5C0u;
    // 0x79c5c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79c5c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79c5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c5c8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x79C5C8u;
    {
        const bool branch_taken_0x79c5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C5C8u;
        // 0x79c5cc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c5c8) {
            ctx->pc = 0x79C660u;
            goto label_79c660;
        }
    }
    ctx->pc = 0x79C5D0u;
label_79c5d0:
    // 0x79c5d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x79c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x79c5d4: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x79c5d4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79c5d8: 0xdfa80030  ld          $t0, 0x30($sp)
    ctx->pc = 0x79c5d8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79c5dc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x79c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79c5e0: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79c5e0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x79c5e4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C5E4u;
    {
        const bool branch_taken_0x79c5e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C5E4u;
        // 0x79c5e8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c5e4) {
            ctx->pc = 0x79C5FCu;
            goto label_79c5fc;
        }
    }
    ctx->pc = 0x79C5ECu;
    // 0x79c5ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79c5f0: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x79c5f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x79c5f4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x79c5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x79c5f8: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79c5f8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_79c5fc:
    // 0x79c5fc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x79c5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79c600: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x79c600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x79c604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79C604u;
    {
        const bool branch_taken_0x79c604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C604u;
        // 0x79c608: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c604) {
            ctx->pc = 0x79C614u;
            goto label_79c614;
        }
    }
    ctx->pc = 0x79C60Cu;
    // 0x79c60c: 0x0  nop
    ctx->pc = 0x79c60cu;
    // NOP
label_79c610:
    // 0x79c610: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x79c610u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_79c614:
    // 0x79c614: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79C614u;
    {
        const bool branch_taken_0x79c614 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c614) {
            ctx->pc = 0x79C618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C614u;
            // 0x79c618: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C628u;
            goto label_79c628;
        }
    }
    ctx->pc = 0x79C61Cu;
    // 0x79c61c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x79c61cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x79c620: 0x88202f  dsubu       $a0, $a0, $t0
    ctx->pc = 0x79c620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x79c624: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x79c624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_79c628:
    // 0x79c628: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79C628u;
    {
        const bool branch_taken_0x79c628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C628u;
        // 0x79c62c: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c628) {
            ctx->pc = 0x79C610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c610;
        }
    }
    ctx->pc = 0x79C630u;
    // 0x79c630: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x79c630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x79c634: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x79c634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x79c638: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79C638u;
    {
        const bool branch_taken_0x79c638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79c638) {
            ctx->pc = 0x79C63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C638u;
            // 0x79c63c: 0xfca70010  sd          $a3, 0x10($a1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C65Cu;
            goto label_79c65c;
        }
    }
    ctx->pc = 0x79C640u;
    // 0x79c640: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x79c640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x79c644: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C644u;
    {
        const bool branch_taken_0x79c644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C644u;
        // 0x79c648: 0x64e20080  daddiu      $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c644) {
            ctx->pc = 0x79C654u;
            goto label_79c654;
        }
    }
    ctx->pc = 0x79C64Cu;
    // 0x79c64c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79C64Cu;
    {
        const bool branch_taken_0x79c64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C64Cu;
        // 0x79c650: 0x64e70080  daddiu      $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c64c) {
            ctx->pc = 0x79C658u;
            goto label_79c658;
        }
    }
    ctx->pc = 0x79C654u;
label_79c654:
    // 0x79c654: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x79c654u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_79c658:
    // 0x79c658: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x79c658u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_79c65c:
    // 0x79c65c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x79c65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_79c660:
    // 0x79c660: 0xc1e6f66  jal         func_79BD98
    ctx->pc = 0x79C660u;
    SET_GPR_U32(ctx, 31, 0x79C668u);
    ctx->pc = 0x79BD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BD98u, 0x79C660u, 0x79C668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C668u;
label_79c668:
    // 0x79c668: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x79c668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79c66c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x79c66cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79c670: 0x3e00008  jr          $ra
    ctx->pc = 0x79C670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C670u;
        // 0x79c674: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C678u;
}
} // namespace gh_r022
