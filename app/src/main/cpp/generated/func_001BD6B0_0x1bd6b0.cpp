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

// Function: func_001BD6B0
// Address: 0x1bd6b0 - 0x1bd778
void func_001BD6B0_0x1bd6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BD6B0_0x1bd6b0");
#endif

    switch (ctx->pc) {
        case 0x1bd6b0u: goto label_1bd6b0;
        case 0x1bd6b4u: goto label_1bd6b4;
        case 0x1bd6b8u: goto label_1bd6b8;
        case 0x1bd6bcu: goto label_1bd6bc;
        case 0x1bd6c0u: goto label_1bd6c0;
        case 0x1bd6c4u: goto label_1bd6c4;
        case 0x1bd6c8u: goto label_1bd6c8;
        case 0x1bd6ccu: goto label_1bd6cc;
        case 0x1bd6d0u: goto label_1bd6d0;
        case 0x1bd6d4u: goto label_1bd6d4;
        case 0x1bd6d8u: goto label_1bd6d8;
        case 0x1bd6dcu: goto label_1bd6dc;
        case 0x1bd6e0u: goto label_1bd6e0;
        case 0x1bd6e4u: goto label_1bd6e4;
        case 0x1bd6e8u: goto label_1bd6e8;
        case 0x1bd6ecu: goto label_1bd6ec;
        case 0x1bd6f0u: goto label_1bd6f0;
        case 0x1bd6f4u: goto label_1bd6f4;
        case 0x1bd6f8u: goto label_1bd6f8;
        case 0x1bd6fcu: goto label_1bd6fc;
        case 0x1bd700u: goto label_1bd700;
        case 0x1bd704u: goto label_1bd704;
        case 0x1bd708u: goto label_1bd708;
        case 0x1bd70cu: goto label_1bd70c;
        case 0x1bd710u: goto label_1bd710;
        case 0x1bd714u: goto label_1bd714;
        case 0x1bd718u: goto label_1bd718;
        case 0x1bd71cu: goto label_1bd71c;
        case 0x1bd720u: goto label_1bd720;
        case 0x1bd724u: goto label_1bd724;
        case 0x1bd728u: goto label_1bd728;
        case 0x1bd72cu: goto label_1bd72c;
        case 0x1bd730u: goto label_1bd730;
        case 0x1bd734u: goto label_1bd734;
        case 0x1bd738u: goto label_1bd738;
        case 0x1bd73cu: goto label_1bd73c;
        case 0x1bd740u: goto label_1bd740;
        case 0x1bd744u: goto label_1bd744;
        case 0x1bd748u: goto label_1bd748;
        case 0x1bd74cu: goto label_1bd74c;
        case 0x1bd750u: goto label_1bd750;
        case 0x1bd754u: goto label_1bd754;
        case 0x1bd758u: goto label_1bd758;
        case 0x1bd75cu: goto label_1bd75c;
        case 0x1bd760u: goto label_1bd760;
        case 0x1bd764u: goto label_1bd764;
        case 0x1bd768u: goto label_1bd768;
        case 0x1bd76cu: goto label_1bd76c;
        case 0x1bd770u: goto label_1bd770;
        case 0x1bd774u: goto label_1bd774;
        default: break;
    }

    ctx->pc = 0x1bd6b0u;

label_1bd6b0:
    // 0x1bd6b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bd6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1bd6b4:
    // 0x1bd6b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bd6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1bd6b8:
    // 0x1bd6b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bd6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bd6bc:
    // 0x1bd6bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bd6c0:
    // 0x1bd6c0: 0xc06ddac  jal         func_1B76B0
label_1bd6c4:
    if (ctx->pc == 0x1BD6C4u) {
        ctx->pc = 0x1BD6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD6C0u;
        // 0x1bd6c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD6C8u;
        goto label_1bd6c8;
    }
    ctx->pc = 0x1BD6C0u;
    SET_GPR_U32(ctx, 31, 0x1BD6C8u);
    ctx->pc = 0x1BD6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD6C0u;
    // 0x1bd6c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1BD6C0u, 0x1BD6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD6C8u;
label_1bd6c8:
    // 0x1bd6c8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1bd6cc:
    if (ctx->pc == 0x1BD6CCu) {
        ctx->pc = 0x1BD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD6C8u;
        // 0x1bd6cc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD6D0u;
        goto label_1bd6d0;
    }
    ctx->pc = 0x1BD6C8u;
    {
        const bool branch_taken_0x1bd6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD6C8u;
        // 0x1bd6cc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6c8) {
            ctx->pc = 0x1BD764u;
            goto label_1bd764;
        }
    }
    ctx->pc = 0x1BD6D0u;
label_1bd6d0:
    // 0x1bd6d0: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1bd6d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1bd6d4:
    // 0x1bd6d4: 0x2446ddc8  addiu       $a2, $v0, -0x2238
    ctx->pc = 0x1bd6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958536));
label_1bd6d8:
    // 0x1bd6d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1bd6d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bd6dc:
    // 0x1bd6dc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1bd6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bd6e0:
    // 0x1bd6e0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1bd6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1bd6e4:
    // 0x1bd6e4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1bd6e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1bd6e8:
    // 0x1bd6e8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1bd6ec:
    if (ctx->pc == 0x1BD6ECu) {
        ctx->pc = 0x1BD6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD6E8u;
        // 0x1bd6ec: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD6F0u;
        goto label_1bd6f0;
    }
    ctx->pc = 0x1BD6E8u;
    {
        const bool branch_taken_0x1bd6e8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1BD6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD6E8u;
        // 0x1bd6ec: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6e8) {
            ctx->pc = 0x1BD714u;
            goto label_1bd714;
        }
    }
    ctx->pc = 0x1BD6F0u;
label_1bd6f0:
    // 0x1bd6f0: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1bd6f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1bd6f4:
    // 0x1bd6f4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1bd6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1bd6f8:
    // 0x1bd6f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1bd6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1bd6fc:
    // 0x1bd6fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bd6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bd700:
    // 0x1bd700: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd704:
    // 0x1bd704: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1bd704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1bd708:
    // 0x1bd708: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1bd708u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1bd70c:
    // 0x1bd70c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bd710:
    if (ctx->pc == 0x1BD710u) {
        ctx->pc = 0x1BD710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD70Cu;
        // 0x1bd710: 0x2503ddc8  addiu       $v1, $t0, -0x2238 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD714u;
        goto label_1bd714;
    }
    ctx->pc = 0x1BD70Cu;
    {
        const bool branch_taken_0x1bd70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD70Cu;
        // 0x1bd710: 0x2503ddc8  addiu       $v1, $t0, -0x2238 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd70c) {
            ctx->pc = 0x1BD720u;
            goto label_1bd720;
        }
    }
    ctx->pc = 0x1BD714u;
label_1bd714:
    // 0x1bd714: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1bd714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1bd718:
    // 0x1bd718: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1bd718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1bd71c:
    // 0x1bd71c: 0x2503ddc8  addiu       $v1, $t0, -0x2238
    ctx->pc = 0x1bd71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958536));
label_1bd720:
    // 0x1bd720: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1bd720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1bd724:
    // 0x1bd724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bd728:
    // 0x1bd728: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1bd72c:
    if (ctx->pc == 0x1BD72Cu) {
        ctx->pc = 0x1BD72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD728u;
        // 0x1bd72c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD730u;
        goto label_1bd730;
    }
    ctx->pc = 0x1BD728u;
    {
        const bool branch_taken_0x1bd728 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1BD72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD728u;
        // 0x1bd72c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd728) {
            ctx->pc = 0x1BD744u;
            goto label_1bd744;
        }
    }
    ctx->pc = 0x1BD730u;
label_1bd730:
    // 0x1bd730: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1bd730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1bd734:
    // 0x1bd734: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1bd734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bd738:
    // 0x1bd738: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1bd738u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1bd73c:
    // 0x1bd73c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bd740:
    if (ctx->pc == 0x1BD740u) {
        ctx->pc = 0x1BD740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD73Cu;
        // 0x1bd740: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD744u;
        goto label_1bd744;
    }
    ctx->pc = 0x1BD73Cu;
    {
        const bool branch_taken_0x1bd73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD73Cu;
        // 0x1bd740: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd73c) {
            ctx->pc = 0x1BD748u;
            goto label_1bd748;
        }
    }
    ctx->pc = 0x1BD744u;
label_1bd744:
    // 0x1bd744: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bd744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1bd748:
    // 0x1bd748: 0xc0f809  jalr        $a2
label_1bd74c:
    if (ctx->pc == 0x1BD74Cu) {
        ctx->pc = 0x1BD74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD748u;
        // 0x1bd74c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD750u;
        goto label_1bd750;
    }
    ctx->pc = 0x1BD748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1BD750u);
        ctx->pc = 0x1BD74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD748u;
        // 0x1bd74c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD748u, 0x1BD750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BD750u;
label_1bd750:
    // 0x1bd750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bd754:
    // 0x1bd754: 0xc0aa1fa  jal         func_2A87E8
label_1bd758:
    if (ctx->pc == 0x1BD758u) {
        ctx->pc = 0x1BD758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD754u;
        // 0x1bd758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD75Cu;
        goto label_1bd75c;
    }
    ctx->pc = 0x1BD754u;
    SET_GPR_U32(ctx, 31, 0x1BD75Cu);
    ctx->pc = 0x1BD758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD754u;
    // 0x1bd758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1BD754u, 0x1BD75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD75Cu;
label_1bd75c:
    // 0x1bd75c: 0xc06ddb6  jal         func_1B76D8
label_1bd760:
    if (ctx->pc == 0x1BD760u) {
        ctx->pc = 0x1BD760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD75Cu;
        // 0x1bd760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD764u;
        goto label_1bd764;
    }
    ctx->pc = 0x1BD75Cu;
    SET_GPR_U32(ctx, 31, 0x1BD764u);
    ctx->pc = 0x1BD760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD75Cu;
    // 0x1bd760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1BD75Cu, 0x1BD764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD764u;
label_1bd764:
    // 0x1bd764: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bd764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bd768:
    // 0x1bd768: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bd768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bd76c:
    // 0x1bd76c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd770:
    // 0x1bd770: 0x3e00008  jr          $ra
label_1bd774:
    if (ctx->pc == 0x1BD774u) {
        ctx->pc = 0x1BD774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD770u;
        // 0x1bd774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD778u;
        goto label_fallthrough_0x1bd770;
    }
    ctx->pc = 0x1BD770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD770u;
        // 0x1bd774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bd770:
    ctx->pc = 0x1BD778u;
}
