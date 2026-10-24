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

// Function: func_0017D6B0
// Address: 0x17d6b0 - 0x17d798
void func_0017D6B0_0x17d6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017D6B0_0x17d6b0");
#endif

    switch (ctx->pc) {
        case 0x17d6b0u: goto label_17d6b0;
        case 0x17d6b4u: goto label_17d6b4;
        case 0x17d6b8u: goto label_17d6b8;
        case 0x17d6bcu: goto label_17d6bc;
        case 0x17d6c0u: goto label_17d6c0;
        case 0x17d6c4u: goto label_17d6c4;
        case 0x17d6c8u: goto label_17d6c8;
        case 0x17d6ccu: goto label_17d6cc;
        case 0x17d6d0u: goto label_17d6d0;
        case 0x17d6d4u: goto label_17d6d4;
        case 0x17d6d8u: goto label_17d6d8;
        case 0x17d6dcu: goto label_17d6dc;
        case 0x17d6e0u: goto label_17d6e0;
        case 0x17d6e4u: goto label_17d6e4;
        case 0x17d6e8u: goto label_17d6e8;
        case 0x17d6ecu: goto label_17d6ec;
        case 0x17d6f0u: goto label_17d6f0;
        case 0x17d6f4u: goto label_17d6f4;
        case 0x17d6f8u: goto label_17d6f8;
        case 0x17d6fcu: goto label_17d6fc;
        case 0x17d700u: goto label_17d700;
        case 0x17d704u: goto label_17d704;
        case 0x17d708u: goto label_17d708;
        case 0x17d70cu: goto label_17d70c;
        case 0x17d710u: goto label_17d710;
        case 0x17d714u: goto label_17d714;
        case 0x17d718u: goto label_17d718;
        case 0x17d71cu: goto label_17d71c;
        case 0x17d720u: goto label_17d720;
        case 0x17d724u: goto label_17d724;
        case 0x17d728u: goto label_17d728;
        case 0x17d72cu: goto label_17d72c;
        case 0x17d730u: goto label_17d730;
        case 0x17d734u: goto label_17d734;
        case 0x17d738u: goto label_17d738;
        case 0x17d73cu: goto label_17d73c;
        case 0x17d740u: goto label_17d740;
        case 0x17d744u: goto label_17d744;
        case 0x17d748u: goto label_17d748;
        case 0x17d74cu: goto label_17d74c;
        case 0x17d750u: goto label_17d750;
        case 0x17d754u: goto label_17d754;
        case 0x17d758u: goto label_17d758;
        case 0x17d75cu: goto label_17d75c;
        case 0x17d760u: goto label_17d760;
        case 0x17d764u: goto label_17d764;
        case 0x17d768u: goto label_17d768;
        case 0x17d76cu: goto label_17d76c;
        case 0x17d770u: goto label_17d770;
        case 0x17d774u: goto label_17d774;
        case 0x17d778u: goto label_17d778;
        case 0x17d77cu: goto label_17d77c;
        case 0x17d780u: goto label_17d780;
        case 0x17d784u: goto label_17d784;
        case 0x17d788u: goto label_17d788;
        case 0x17d78cu: goto label_17d78c;
        case 0x17d790u: goto label_17d790;
        case 0x17d794u: goto label_17d794;
        default: break;
    }

    ctx->pc = 0x17d6b0u;

label_17d6b0:
    // 0x17d6b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17d6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17d6b4:
    // 0x17d6b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17d6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_17d6b8:
    // 0x17d6b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17d6bc:
    // 0x17d6bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17d6c0:
    // 0x17d6c0: 0xc06ddac  jal         func_1B76B0
label_17d6c4:
    if (ctx->pc == 0x17D6C4u) {
        ctx->pc = 0x17D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6C0u;
        // 0x17d6c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D6C8u;
        goto label_17d6c8;
    }
    ctx->pc = 0x17D6C0u;
    SET_GPR_U32(ctx, 31, 0x17D6C8u);
    ctx->pc = 0x17D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D6C0u;
    // 0x17d6c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x17D6C0u, 0x17D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D6C8u;
label_17d6c8:
    // 0x17d6c8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_17d6cc:
    if (ctx->pc == 0x17D6CCu) {
        ctx->pc = 0x17D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6C8u;
        // 0x17d6cc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D6D0u;
        goto label_17d6d0;
    }
    ctx->pc = 0x17D6C8u;
    {
        const bool branch_taken_0x17d6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6C8u;
        // 0x17d6cc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d6c8) {
            ctx->pc = 0x17D784u;
            goto label_17d784;
        }
    }
    ctx->pc = 0x17D6D0u;
label_17d6d0:
    // 0x17d6d0: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x17d6d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_17d6d4:
    // 0x17d6d4: 0x2446da58  addiu       $a2, $v0, -0x25A8
    ctx->pc = 0x17d6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957656));
label_17d6d8:
    // 0x17d6d8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x17d6d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17d6dc:
    // 0x17d6dc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x17d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_17d6e0:
    // 0x17d6e0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x17d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_17d6e4:
    // 0x17d6e4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x17d6e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_17d6e8:
    // 0x17d6e8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_17d6ec:
    if (ctx->pc == 0x17D6ECu) {
        ctx->pc = 0x17D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6E8u;
        // 0x17d6ec: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D6F0u;
        goto label_17d6f0;
    }
    ctx->pc = 0x17D6E8u;
    {
        const bool branch_taken_0x17d6e8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6E8u;
        // 0x17d6ec: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d6e8) {
            ctx->pc = 0x17D714u;
            goto label_17d714;
        }
    }
    ctx->pc = 0x17D6F0u;
label_17d6f0:
    // 0x17d6f0: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x17d6f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_17d6f4:
    // 0x17d6f4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x17d6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17d6f8:
    // 0x17d6f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17d6fc:
    // 0x17d6fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x17d6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17d700:
    // 0x17d700: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17d704:
    // 0x17d704: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x17d704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_17d708:
    // 0x17d708: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x17d708u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_17d70c:
    // 0x17d70c: 0x10000004  b           . + 4 + (0x4 << 2)
label_17d710:
    if (ctx->pc == 0x17D710u) {
        ctx->pc = 0x17D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D70Cu;
        // 0x17d710: 0x2503da58  addiu       $v1, $t0, -0x25A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D714u;
        goto label_17d714;
    }
    ctx->pc = 0x17D70Cu;
    {
        const bool branch_taken_0x17d70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D70Cu;
        // 0x17d710: 0x2503da58  addiu       $v1, $t0, -0x25A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d70c) {
            ctx->pc = 0x17D720u;
            goto label_17d720;
        }
    }
    ctx->pc = 0x17D714u;
label_17d714:
    // 0x17d714: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17d714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_17d718:
    // 0x17d718: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x17d718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17d71c:
    // 0x17d71c: 0x2503da58  addiu       $v1, $t0, -0x25A8
    ctx->pc = 0x17d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957656));
label_17d720:
    // 0x17d720: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x17d720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_17d724:
    // 0x17d724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17d728:
    // 0x17d728: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_17d72c:
    if (ctx->pc == 0x17D72Cu) {
        ctx->pc = 0x17D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D728u;
        // 0x17d72c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D730u;
        goto label_17d730;
    }
    ctx->pc = 0x17D728u;
    {
        const bool branch_taken_0x17d728 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D728u;
        // 0x17d72c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d728) {
            ctx->pc = 0x17D744u;
            goto label_17d744;
        }
    }
    ctx->pc = 0x17D730u;
label_17d730:
    // 0x17d730: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x17d730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_17d734:
    // 0x17d734: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x17d734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_17d738:
    // 0x17d738: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x17d738u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_17d73c:
    // 0x17d73c: 0x10000002  b           . + 4 + (0x2 << 2)
label_17d740:
    if (ctx->pc == 0x17D740u) {
        ctx->pc = 0x17D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D73Cu;
        // 0x17d740: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D744u;
        goto label_17d744;
    }
    ctx->pc = 0x17D73Cu;
    {
        const bool branch_taken_0x17d73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D73Cu;
        // 0x17d740: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d73c) {
            ctx->pc = 0x17D748u;
            goto label_17d748;
        }
    }
    ctx->pc = 0x17D744u;
label_17d744:
    // 0x17d744: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17d744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17d748:
    // 0x17d748: 0xc0f809  jalr        $a2
label_17d74c:
    if (ctx->pc == 0x17D74Cu) {
        ctx->pc = 0x17D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D748u;
        // 0x17d74c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D750u;
        goto label_17d750;
    }
    ctx->pc = 0x17D748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x17D750u);
        ctx->pc = 0x17D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D748u;
        // 0x17d74c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D748u, 0x17D750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17D750u;
label_17d750:
    // 0x17d750: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x17d750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_17d754:
    // 0x17d754: 0xc0a4bd4  jal         func_292F50
label_17d758:
    if (ctx->pc == 0x17D758u) {
        ctx->pc = 0x17D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D754u;
        // 0x17d758: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D75Cu;
        goto label_17d75c;
    }
    ctx->pc = 0x17D754u;
    SET_GPR_U32(ctx, 31, 0x17D75Cu);
    ctx->pc = 0x17D758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D754u;
    // 0x17d758: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x17D754u, 0x17D75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D75Cu;
label_17d75c:
    // 0x17d75c: 0xc6010608  lwc1        $f1, 0x608($s0)
    ctx->pc = 0x17d75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17d760:
    // 0x17d760: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x17d760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17d764:
    // 0x17d764: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17d764u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_17d768:
    // 0x17d768: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x17d768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17d76c:
    // 0x17d76c: 0x0  nop
    ctx->pc = 0x17d76cu;
    // NOP
label_17d770:
    // 0x17d770: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_17d774:
    if (ctx->pc == 0x17D774u) {
        ctx->pc = 0x17D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D770u;
        // 0x17d774: 0xe6010608  swc1        $f1, 0x608($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1544), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D778u;
        goto label_17d778;
    }
    ctx->pc = 0x17D770u;
    {
        const bool branch_taken_0x17d770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D770u;
        // 0x17d774: 0xe6010608  swc1        $f1, 0x608($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d770) {
            ctx->pc = 0x17D77Cu;
            goto label_17d77c;
        }
    }
    ctx->pc = 0x17D778u;
label_17d778:
    // 0x17d778: 0xe6020608  swc1        $f2, 0x608($s0)
    ctx->pc = 0x17d778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1544), bits); }
label_17d77c:
    // 0x17d77c: 0xc06ddb6  jal         func_1B76D8
label_17d780:
    if (ctx->pc == 0x17D780u) {
        ctx->pc = 0x17D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D77Cu;
        // 0x17d780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D784u;
        goto label_17d784;
    }
    ctx->pc = 0x17D77Cu;
    SET_GPR_U32(ctx, 31, 0x17D784u);
    ctx->pc = 0x17D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D77Cu;
    // 0x17d780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x17D77Cu, 0x17D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D784u;
label_17d784:
    // 0x17d784: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17d784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17d788:
    // 0x17d788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17d78c:
    // 0x17d78c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d790:
    // 0x17d790: 0x3e00008  jr          $ra
label_17d794:
    if (ctx->pc == 0x17D794u) {
        ctx->pc = 0x17D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D790u;
        // 0x17d794: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D798u;
        goto label_fallthrough_0x17d790;
    }
    ctx->pc = 0x17D790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D790u;
        // 0x17d794: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17d790:
    ctx->pc = 0x17D798u;
}
