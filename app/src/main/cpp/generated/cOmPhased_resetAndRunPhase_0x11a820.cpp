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

// Function: cOmPhased_resetAndRunPhase
// Address: 0x11a820 - 0x11a8f8
void cOmPhased_resetAndRunPhase_0x11a820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmPhased_resetAndRunPhase_0x11a820");
#endif

    switch (ctx->pc) {
        case 0x11a820u: goto label_11a820;
        case 0x11a824u: goto label_11a824;
        case 0x11a828u: goto label_11a828;
        case 0x11a82cu: goto label_11a82c;
        case 0x11a830u: goto label_11a830;
        case 0x11a834u: goto label_11a834;
        case 0x11a838u: goto label_11a838;
        case 0x11a83cu: goto label_11a83c;
        case 0x11a840u: goto label_11a840;
        case 0x11a844u: goto label_11a844;
        case 0x11a848u: goto label_11a848;
        case 0x11a84cu: goto label_11a84c;
        case 0x11a850u: goto label_11a850;
        case 0x11a854u: goto label_11a854;
        case 0x11a858u: goto label_11a858;
        case 0x11a85cu: goto label_11a85c;
        case 0x11a860u: goto label_11a860;
        case 0x11a864u: goto label_11a864;
        case 0x11a868u: goto label_11a868;
        case 0x11a86cu: goto label_11a86c;
        case 0x11a870u: goto label_11a870;
        case 0x11a874u: goto label_11a874;
        case 0x11a878u: goto label_11a878;
        case 0x11a87cu: goto label_11a87c;
        case 0x11a880u: goto label_11a880;
        case 0x11a884u: goto label_11a884;
        case 0x11a888u: goto label_11a888;
        case 0x11a88cu: goto label_11a88c;
        case 0x11a890u: goto label_11a890;
        case 0x11a894u: goto label_11a894;
        case 0x11a898u: goto label_11a898;
        case 0x11a89cu: goto label_11a89c;
        case 0x11a8a0u: goto label_11a8a0;
        case 0x11a8a4u: goto label_11a8a4;
        case 0x11a8a8u: goto label_11a8a8;
        case 0x11a8acu: goto label_11a8ac;
        case 0x11a8b0u: goto label_11a8b0;
        case 0x11a8b4u: goto label_11a8b4;
        case 0x11a8b8u: goto label_11a8b8;
        case 0x11a8bcu: goto label_11a8bc;
        case 0x11a8c0u: goto label_11a8c0;
        case 0x11a8c4u: goto label_11a8c4;
        case 0x11a8c8u: goto label_11a8c8;
        case 0x11a8ccu: goto label_11a8cc;
        case 0x11a8d0u: goto label_11a8d0;
        case 0x11a8d4u: goto label_11a8d4;
        case 0x11a8d8u: goto label_11a8d8;
        case 0x11a8dcu: goto label_11a8dc;
        case 0x11a8e0u: goto label_11a8e0;
        case 0x11a8e4u: goto label_11a8e4;
        case 0x11a8e8u: goto label_11a8e8;
        case 0x11a8ecu: goto label_11a8ec;
        case 0x11a8f0u: goto label_11a8f0;
        case 0x11a8f4u: goto label_11a8f4;
        default: break;
    }

    ctx->pc = 0x11a820u;

label_11a820:
    // 0x11a820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11a820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11a824:
    // 0x11a824: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11a824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_11a828:
    // 0x11a828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11a828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11a82c:
    // 0x11a82c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11a830:
    // 0x11a830: 0xc049396  jal         func_124E58
label_11a834:
    if (ctx->pc == 0x11A834u) {
        ctx->pc = 0x11A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A830u;
        // 0x11a834: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A838u;
        goto label_11a838;
    }
    ctx->pc = 0x11A830u;
    SET_GPR_U32(ctx, 31, 0x11A838u);
    ctx->pc = 0x11A834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A830u;
    // 0x11a834: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x11A830u, 0x11A838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A838u;
label_11a838:
    // 0x11a838: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x11a838u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
label_11a83c:
    // 0x11a83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11a840:
    // 0x11a840: 0xa60005e2  sh          $zero, 0x5E2($s0)
    ctx->pc = 0x11a840u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
label_11a844:
    // 0x11a844: 0xa2001603  sb          $zero, 0x1603($s0)
    ctx->pc = 0x11a844u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5635), (uint8_t)GPR_U32(ctx, 0));
label_11a848:
    // 0x11a848: 0xc04ae4a  jal         func_12B928
label_11a84c:
    if (ctx->pc == 0x11A84Cu) {
        ctx->pc = 0x11A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A848u;
        // 0x11a84c: 0xa6001618  sh          $zero, 0x1618($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 5656), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A850u;
        goto label_11a850;
    }
    ctx->pc = 0x11A848u;
    SET_GPR_U32(ctx, 31, 0x11A850u);
    ctx->pc = 0x11A84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A848u;
    // 0x11a84c: 0xa6001618  sh          $zero, 0x1618($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 5656), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11A848u, 0x11A850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A850u;
label_11a850:
    // 0x11a850: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x11a850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_11a854:
    // 0x11a854: 0x2c420026  sltiu       $v0, $v0, 0x26
    ctx->pc = 0x11a854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)38) ? 1 : 0);
label_11a858:
    // 0x11a858: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_11a85c:
    if (ctx->pc == 0x11A85Cu) {
        ctx->pc = 0x11A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A858u;
        // 0x11a85c: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A860u;
        goto label_11a860;
    }
    ctx->pc = 0x11A858u;
    {
        const bool branch_taken_0x11a858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a858) {
            ctx->pc = 0x11A85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A858u;
            // 0x11a85c: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A860u;
            goto label_11a860;
        }
    }
    ctx->pc = 0x11A860u;
label_11a860:
    // 0x11a860: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x11a860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_11a864:
    // 0x11a864: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x11a864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_11a868:
    // 0x11a868: 0x2446d328  addiu       $a2, $v0, -0x2CD8
    ctx->pc = 0x11a868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955816));
label_11a86c:
    // 0x11a86c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x11a86cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a870:
    // 0x11a870: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x11a870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_11a874:
    // 0x11a874: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x11a874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_11a878:
    // 0x11a878: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x11a878u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_11a87c:
    // 0x11a87c: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_11a880:
    if (ctx->pc == 0x11A880u) {
        ctx->pc = 0x11A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A87Cu;
        // 0x11a880: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A884u;
        goto label_11a884;
    }
    ctx->pc = 0x11A87Cu;
    {
        const bool branch_taken_0x11a87c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x11A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A87Cu;
        // 0x11a880: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a87c) {
            ctx->pc = 0x11A8A8u;
            goto label_11a8a8;
        }
    }
    ctx->pc = 0x11A884u;
label_11a884:
    // 0x11a884: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x11a884u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_11a888:
    // 0x11a888: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x11a888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_11a88c:
    // 0x11a88c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x11a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_11a890:
    // 0x11a890: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11a890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11a894:
    // 0x11a894: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11a894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_11a898:
    // 0x11a898: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x11a898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_11a89c:
    // 0x11a89c: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x11a89cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_11a8a0:
    // 0x11a8a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_11a8a4:
    if (ctx->pc == 0x11A8A4u) {
        ctx->pc = 0x11A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8A0u;
        // 0x11a8a4: 0x2503d328  addiu       $v1, $t0, -0x2CD8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A8A8u;
        goto label_11a8a8;
    }
    ctx->pc = 0x11A8A0u;
    {
        const bool branch_taken_0x11a8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8A0u;
        // 0x11a8a4: 0x2503d328  addiu       $v1, $t0, -0x2CD8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8a0) {
            ctx->pc = 0x11A8B4u;
            goto label_11a8b4;
        }
    }
    ctx->pc = 0x11A8A8u;
label_11a8a8:
    // 0x11a8a8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x11a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_11a8ac:
    // 0x11a8ac: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x11a8acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11a8b0:
    // 0x11a8b0: 0x2503d328  addiu       $v1, $t0, -0x2CD8
    ctx->pc = 0x11a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955816));
label_11a8b4:
    // 0x11a8b4: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x11a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_11a8b8:
    // 0x11a8b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_11a8bc:
    // 0x11a8bc: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_11a8c0:
    if (ctx->pc == 0x11A8C0u) {
        ctx->pc = 0x11A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8BCu;
        // 0x11a8c0: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A8C4u;
        goto label_11a8c4;
    }
    ctx->pc = 0x11A8BCu;
    {
        const bool branch_taken_0x11a8bc = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x11A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8BCu;
        // 0x11a8c0: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8bc) {
            ctx->pc = 0x11A8D8u;
            goto label_11a8d8;
        }
    }
    ctx->pc = 0x11A8C4u;
label_11a8c4:
    // 0x11a8c4: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x11a8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_11a8c8:
    // 0x11a8c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x11a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_11a8cc:
    // 0x11a8cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x11a8ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_11a8d0:
    // 0x11a8d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_11a8d4:
    if (ctx->pc == 0x11A8D4u) {
        ctx->pc = 0x11A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8D0u;
        // 0x11a8d4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A8D8u;
        goto label_11a8d8;
    }
    ctx->pc = 0x11A8D0u;
    {
        const bool branch_taken_0x11a8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8D0u;
        // 0x11a8d4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8d0) {
            ctx->pc = 0x11A8DCu;
            goto label_11a8dc;
        }
    }
    ctx->pc = 0x11A8D8u;
label_11a8d8:
    // 0x11a8d8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11a8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11a8dc:
    // 0x11a8dc: 0xc0f809  jalr        $a2
label_11a8e0:
    if (ctx->pc == 0x11A8E0u) {
        ctx->pc = 0x11A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8DCu;
        // 0x11a8e0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A8E4u;
        goto label_11a8e4;
    }
    ctx->pc = 0x11A8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x11A8E4u);
        ctx->pc = 0x11A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8DCu;
        // 0x11a8e0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A8DCu, 0x11A8E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A8E4u;
label_11a8e4:
    // 0x11a8e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11a8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11a8e8:
    // 0x11a8e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11a8e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11a8ec:
    // 0x11a8ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11a8f0:
    // 0x11a8f0: 0x3e00008  jr          $ra
label_11a8f4:
    if (ctx->pc == 0x11A8F4u) {
        ctx->pc = 0x11A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8F0u;
        // 0x11a8f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A8F8u;
        goto label_fallthrough_0x11a8f0;
    }
    ctx->pc = 0x11A8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8F0u;
        // 0x11a8f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11a8f0:
    ctx->pc = 0x11A8F8u;
}
