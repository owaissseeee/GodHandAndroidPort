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

// Function: UpdateActionTable
// Address: 0x28a4a0 - 0x28a560
void UpdateActionTable_0x28a4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateActionTable_0x28a4a0");
#endif

    switch (ctx->pc) {
        case 0x28a4a0u: goto label_28a4a0;
        case 0x28a4a4u: goto label_28a4a4;
        case 0x28a4a8u: goto label_28a4a8;
        case 0x28a4acu: goto label_28a4ac;
        case 0x28a4b0u: goto label_28a4b0;
        case 0x28a4b4u: goto label_28a4b4;
        case 0x28a4b8u: goto label_28a4b8;
        case 0x28a4bcu: goto label_28a4bc;
        case 0x28a4c0u: goto label_28a4c0;
        case 0x28a4c4u: goto label_28a4c4;
        case 0x28a4c8u: goto label_28a4c8;
        case 0x28a4ccu: goto label_28a4cc;
        case 0x28a4d0u: goto label_28a4d0;
        case 0x28a4d4u: goto label_28a4d4;
        case 0x28a4d8u: goto label_28a4d8;
        case 0x28a4dcu: goto label_28a4dc;
        case 0x28a4e0u: goto label_28a4e0;
        case 0x28a4e4u: goto label_28a4e4;
        case 0x28a4e8u: goto label_28a4e8;
        case 0x28a4ecu: goto label_28a4ec;
        case 0x28a4f0u: goto label_28a4f0;
        case 0x28a4f4u: goto label_28a4f4;
        case 0x28a4f8u: goto label_28a4f8;
        case 0x28a4fcu: goto label_28a4fc;
        case 0x28a500u: goto label_28a500;
        case 0x28a504u: goto label_28a504;
        case 0x28a508u: goto label_28a508;
        case 0x28a50cu: goto label_28a50c;
        case 0x28a510u: goto label_28a510;
        case 0x28a514u: goto label_28a514;
        case 0x28a518u: goto label_28a518;
        case 0x28a51cu: goto label_28a51c;
        case 0x28a520u: goto label_28a520;
        case 0x28a524u: goto label_28a524;
        case 0x28a528u: goto label_28a528;
        case 0x28a52cu: goto label_28a52c;
        case 0x28a530u: goto label_28a530;
        case 0x28a534u: goto label_28a534;
        case 0x28a538u: goto label_28a538;
        case 0x28a53cu: goto label_28a53c;
        case 0x28a540u: goto label_28a540;
        case 0x28a544u: goto label_28a544;
        case 0x28a548u: goto label_28a548;
        case 0x28a54cu: goto label_28a54c;
        case 0x28a550u: goto label_28a550;
        case 0x28a554u: goto label_28a554;
        case 0x28a558u: goto label_28a558;
        case 0x28a55cu: goto label_28a55c;
        default: break;
    }

    ctx->pc = 0x28a4a0u;

label_28a4a0:
    // 0x28a4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28a4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_28a4a4:
    // 0x28a4a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28a4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_28a4a8:
    // 0x28a4a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28a4ac:
    // 0x28a4ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28a4b0:
    // 0x28a4b0: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x28a4b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_28a4b4:
    // 0x28a4b4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_28a4b8:
    if (ctx->pc == 0x28A4B8u) {
        ctx->pc = 0x28A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A4B4u;
        // 0x28a4b8: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A4BCu;
        goto label_28a4bc;
    }
    ctx->pc = 0x28A4B4u;
    {
        const bool branch_taken_0x28a4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a4b4) {
            ctx->pc = 0x28A4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A4B4u;
            // 0x28a4b8: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A4BCu;
            goto label_28a4bc;
        }
    }
    ctx->pc = 0x28A4BCu;
label_28a4bc:
    // 0x28a4bc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x28a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_28a4c0:
    // 0x28a4c0: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x28a4c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_28a4c4:
    // 0x28a4c4: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x28a4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
label_28a4c8:
    // 0x28a4c8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x28a4c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a4cc:
    // 0x28a4cc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x28a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_28a4d0:
    // 0x28a4d0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x28a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_28a4d4:
    // 0x28a4d4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x28a4d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_28a4d8:
    // 0x28a4d8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_28a4dc:
    if (ctx->pc == 0x28A4DCu) {
        ctx->pc = 0x28A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A4D8u;
        // 0x28a4dc: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A4E0u;
        goto label_28a4e0;
    }
    ctx->pc = 0x28A4D8u;
    {
        const bool branch_taken_0x28a4d8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x28A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A4D8u;
        // 0x28a4dc: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a4d8) {
            ctx->pc = 0x28A504u;
            goto label_28a504;
        }
    }
    ctx->pc = 0x28A4E0u;
label_28a4e0:
    // 0x28a4e0: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x28a4e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_28a4e4:
    // 0x28a4e4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x28a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_28a4e8:
    // 0x28a4e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28a4ec:
    // 0x28a4ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28a4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28a4f0:
    // 0x28a4f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28a4f4:
    // 0x28a4f4: 0xdc67fff8  ld          $a3, -0x8($v1)
    ctx->pc = 0x28a4f4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_28a4f8:
    // 0x28a4f8: 0x7303f  dsra32      $a2, $a3, 0
    ctx->pc = 0x28a4f8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 7) >> (32 + 0));
label_28a4fc:
    // 0x28a4fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_28a500:
    if (ctx->pc == 0x28A500u) {
        ctx->pc = 0x28A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A4FCu;
        // 0x28a500: 0x25230480  addiu       $v1, $t1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A504u;
        goto label_28a504;
    }
    ctx->pc = 0x28A4FCu;
    {
        const bool branch_taken_0x28a4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A4FCu;
        // 0x28a500: 0x25230480  addiu       $v1, $t1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a4fc) {
            ctx->pc = 0x28A510u;
            goto label_28a510;
        }
    }
    ctx->pc = 0x28A504u;
label_28a504:
    // 0x28a504: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x28a504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_28a508:
    // 0x28a508: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x28a508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_28a50c:
    // 0x28a50c: 0x25230480  addiu       $v1, $t1, 0x480
    ctx->pc = 0x28a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1152));
label_28a510:
    // 0x28a510: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x28a510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_28a514:
    // 0x28a514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28a514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28a518:
    // 0x28a518: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_28a51c:
    if (ctx->pc == 0x28A51Cu) {
        ctx->pc = 0x28A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A518u;
        // 0x28a51c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A520u;
        goto label_28a520;
    }
    ctx->pc = 0x28A518u;
    {
        const bool branch_taken_0x28a518 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x28A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A518u;
        // 0x28a51c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a518) {
            ctx->pc = 0x28A534u;
            goto label_28a534;
        }
    }
    ctx->pc = 0x28A520u;
label_28a520:
    // 0x28a520: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x28a520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_28a524:
    // 0x28a524: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28a524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_28a528:
    // 0x28a528: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x28a528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_28a52c:
    // 0x28a52c: 0x10000002  b           . + 4 + (0x2 << 2)
label_28a530:
    if (ctx->pc == 0x28A530u) {
        ctx->pc = 0x28A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A52Cu;
        // 0x28a530: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A534u;
        goto label_28a534;
    }
    ctx->pc = 0x28A52Cu;
    {
        const bool branch_taken_0x28a52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A52Cu;
        // 0x28a530: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a52c) {
            ctx->pc = 0x28A538u;
            goto label_28a538;
        }
    }
    ctx->pc = 0x28A534u;
label_28a534:
    // 0x28a534: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28a534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28a538:
    // 0x28a538: 0xc0f809  jalr        $a2
label_28a53c:
    if (ctx->pc == 0x28A53Cu) {
        ctx->pc = 0x28A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A538u;
        // 0x28a53c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A540u;
        goto label_28a540;
    }
    ctx->pc = 0x28A538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x28A540u);
        ctx->pc = 0x28A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A538u;
        // 0x28a53c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A538u, 0x28A540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28A540u;
label_28a540:
    // 0x28a540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28a544:
    // 0x28a544: 0xc0aa1fa  jal         func_2A87E8
label_28a548:
    if (ctx->pc == 0x28A548u) {
        ctx->pc = 0x28A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A544u;
        // 0x28a548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A54Cu;
        goto label_28a54c;
    }
    ctx->pc = 0x28A544u;
    SET_GPR_U32(ctx, 31, 0x28A54Cu);
    ctx->pc = 0x28A548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A544u;
    // 0x28a548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x28A544u, 0x28A54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A54Cu;
label_28a54c:
    // 0x28a54c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28a54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28a550:
    // 0x28a550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28a550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28a554:
    // 0x28a554: 0x3e00008  jr          $ra
label_28a558:
    if (ctx->pc == 0x28A558u) {
        ctx->pc = 0x28A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A554u;
        // 0x28a558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A55Cu;
        goto label_28a55c;
    }
    ctx->pc = 0x28A554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A554u;
        // 0x28a558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A55Cu;
label_28a55c:
    // 0x28a55c: 0x0  nop
    ctx->pc = 0x28a55cu;
    // NOP
    ctx->pc = 0x28a560u;
}
