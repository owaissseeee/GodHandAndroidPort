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

// Function: func_00382660
// Address: 0x382660 - 0x3827f0
void func_00382660_0x382660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00382660_0x382660");
#endif

    switch (ctx->pc) {
        case 0x3826c0u: goto label_3826c0;
        case 0x3826f0u: goto label_3826f0;
        case 0x38273cu: goto label_38273c;
        case 0x382754u: goto label_382754;
        case 0x382778u: goto label_382778;
        case 0x382788u: goto label_382788;
        case 0x3827b0u: goto label_3827b0;
        case 0x3827c4u: goto label_3827c4;
        default: break;
    }

    ctx->pc = 0x382660u;

    // 0x382660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x382660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x382664: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x382664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x382668: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x382668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x38266c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x38266cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x382670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x382670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x382674: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x382674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x382678: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x382678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38267c: 0x24b00318  addiu       $s0, $a1, 0x318
    ctx->pc = 0x38267cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 792));
    // 0x382680: 0x3042a000  andi        $v0, $v0, 0xA000
    ctx->pc = 0x382680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)40960);
    // 0x382684: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x382684u;
    {
        const bool branch_taken_0x382684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382684u;
        // 0x382688: 0x24b10348  addiu       $s1, $a1, 0x348 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382684) {
            ctx->pc = 0x3827D8u;
            goto label_3827d8;
        }
    }
    ctx->pc = 0x38268Cu;
    // 0x38268c: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x38268cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x382690: 0x24b20360  addiu       $s2, $a1, 0x360
    ctx->pc = 0x382690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 864));
    // 0x382694: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x382694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x382698: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x382698u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38269c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x38269cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3826a0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3826a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3826a4: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x3826a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3826a8: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3826A8u;
    {
        const bool branch_taken_0x3826a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3826ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3826A8u;
        // 0x3826ac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3826a8) {
            ctx->pc = 0x3826E8u;
            goto label_3826e8;
        }
    }
    ctx->pc = 0x3826B0u;
    // 0x3826b0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3826b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3826b4: 0x24a50361  addiu       $a1, $a1, 0x361
    ctx->pc = 0x3826b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 865));
    // 0x3826b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3826b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3826bc: 0x0  nop
    ctx->pc = 0x3826bcu;
    // NOP
label_3826c0:
    // 0x3826c0: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3826c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3826c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3826c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3826c8: 0x28c40004  slti        $a0, $a2, 0x4
    ctx->pc = 0x3826c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3826cc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3826ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3826d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3826d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3826d4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3826d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3826d8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3826D8u;
    {
        const bool branch_taken_0x3826d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3826DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3826D8u;
        // 0x3826dc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3826d8) {
            ctx->pc = 0x3826C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3826c0;
        }
    }
    ctx->pc = 0x3826E0u;
    // 0x3826e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3826E0u;
    {
        const bool branch_taken_0x3826e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3826E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3826E0u;
        // 0x3826e4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3826e0) {
            ctx->pc = 0x38270Cu;
            goto label_38270c;
        }
    }
    ctx->pc = 0x3826E8u;
label_3826e8:
    // 0x3826e8: 0xc0e09fc  jal         func_3827F0
    ctx->pc = 0x3826E8u;
    SET_GPR_U32(ctx, 31, 0x3826F0u);
    ctx->pc = 0x3826ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3826E8u;
    // 0x3826ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3827F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3827F0u, 0x3826E8u, 0x3826F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3826F0u;
label_3826f0:
    // 0x3826f0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3826F0u;
    {
        const bool branch_taken_0x3826f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3826f0) {
            ctx->pc = 0x3826F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3826F0u;
            // 0x3826f4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38270Cu;
            goto label_38270c;
        }
    }
    ctx->pc = 0x3826F8u;
    // 0x3826f8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3826f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3826fc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3826fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x382700: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x382700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x382704: 0xa2230018  sb          $v1, 0x18($s1)
    ctx->pc = 0x382704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x382708: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x382708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_38270c:
    // 0x38270c: 0x50800033  beql        $a0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x38270Cu;
    {
        const bool branch_taken_0x38270c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38270c) {
            ctx->pc = 0x382710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38270Cu;
            // 0x382710: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3827DCu;
            goto label_3827dc;
        }
    }
    ctx->pc = 0x382714u;
    // 0x382714: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x382714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x382718: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x382718u;
    {
        const bool branch_taken_0x382718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382718u;
        // 0x38271c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382718) {
            ctx->pc = 0x38275Cu;
            goto label_38275c;
        }
    }
    ctx->pc = 0x382720u;
    // 0x382720: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x382720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x382724: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x382724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x382728: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x382728u;
    {
        const bool branch_taken_0x382728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382728u;
        // 0x38272c: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382728) {
            ctx->pc = 0x382744u;
            goto label_382744;
        }
    }
    ctx->pc = 0x382730u;
    // 0x382730: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x382730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x382734: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x382734u;
    SET_GPR_U32(ctx, 31, 0x38273Cu);
    ctx->pc = 0x382738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382734u;
    // 0x382738: 0x2406fc40  addiu       $a2, $zero, -0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x382734u, 0x38273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38273Cu;
label_38273c:
    // 0x38273c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x38273Cu;
    {
        const bool branch_taken_0x38273c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38273Cu;
        // 0x382740: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38273c) {
            ctx->pc = 0x3827DCu;
            goto label_3827dc;
        }
    }
    ctx->pc = 0x382744u;
label_382744:
    // 0x382744: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x382744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x382748: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x382748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x38274c: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x38274Cu;
    SET_GPR_U32(ctx, 31, 0x382754u);
    ctx->pc = 0x382750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38274Cu;
    // 0x382750: 0x84460004  lh          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x38274Cu, 0x382754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382754u;
label_382754:
    // 0x382754: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x382754u;
    {
        const bool branch_taken_0x382754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382754u;
        // 0x382758: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382754) {
            ctx->pc = 0x3827DCu;
            goto label_3827dc;
        }
    }
    ctx->pc = 0x38275Cu;
label_38275c:
    // 0x38275c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x38275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x382760: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x382760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x382764: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x382764u;
    {
        const bool branch_taken_0x382764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x382768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382764u;
        // 0x382768: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382764) {
            ctx->pc = 0x3827A0u;
            goto label_3827a0;
        }
    }
    ctx->pc = 0x38276Cu;
    // 0x38276c: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x38276Cu;
    {
        const bool branch_taken_0x38276c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x382770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38276Cu;
        // 0x382770: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38276c) {
            ctx->pc = 0x3827D8u;
            goto label_3827d8;
        }
    }
    ctx->pc = 0x382774u;
    // 0x382774: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x382774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_382778:
    // 0x382778: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x382778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38277c: 0x2406fc40  addiu       $a2, $zero, -0x3C0
    ctx->pc = 0x38277cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
    // 0x382780: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x382780u;
    SET_GPR_U32(ctx, 31, 0x382788u);
    ctx->pc = 0x382784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382780u;
    // 0x382784: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x382780u, 0x382788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382788u;
label_382788:
    // 0x382788: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x382788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x38278c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x38278cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x382790: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x382790u;
    {
        const bool branch_taken_0x382790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x382790) {
            ctx->pc = 0x382794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382790u;
            // 0x382794: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382778;
        }
    }
    ctx->pc = 0x382798u;
    // 0x382798: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x382798u;
    {
        const bool branch_taken_0x382798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382798u;
        // 0x38279c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382798) {
            ctx->pc = 0x3827DCu;
            goto label_3827dc;
        }
    }
    ctx->pc = 0x3827A0u;
label_3827a0:
    // 0x3827a0: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3827A0u;
    {
        const bool branch_taken_0x3827a0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3827A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3827A0u;
        // 0x3827a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3827a0) {
            ctx->pc = 0x3827D8u;
            goto label_3827d8;
        }
    }
    ctx->pc = 0x3827A8u;
    // 0x3827a8: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x3827a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3827ac: 0x24b00001  addiu       $s0, $a1, 0x1
    ctx->pc = 0x3827acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3827b0:
    // 0x3827b0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x3827b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3827b4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x3827b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3827b8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3827b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3827bc: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x3827BCu;
    SET_GPR_U32(ctx, 31, 0x3827C4u);
    ctx->pc = 0x3827C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3827BCu;
    // 0x3827c0: 0x84460000  lh          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x3827BCu, 0x3827C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3827C4u;
label_3827c4:
    // 0x3827c4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3827c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3827c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3827c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3827cc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3827ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3827d0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3827D0u;
    {
        const bool branch_taken_0x3827d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3827D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3827D0u;
        // 0x3827d4: 0x24b00001  addiu       $s0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3827d0) {
            ctx->pc = 0x3827B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3827b0;
        }
    }
    ctx->pc = 0x3827D8u;
label_3827d8:
    // 0x3827d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3827d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3827dc:
    // 0x3827dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3827dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3827e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3827e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3827e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3827e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3827e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3827E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3827ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3827E8u;
        // 0x3827ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3827E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3827F0u;
}
