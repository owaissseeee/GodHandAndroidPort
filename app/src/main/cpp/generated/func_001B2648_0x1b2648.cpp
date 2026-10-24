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

// Function: func_001B2648
// Address: 0x1b2648 - 0x1b2708
void func_001B2648_0x1b2648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B2648_0x1b2648");
#endif

    switch (ctx->pc) {
        case 0x1b2648u: goto label_1b2648;
        case 0x1b264cu: goto label_1b264c;
        case 0x1b2650u: goto label_1b2650;
        case 0x1b2654u: goto label_1b2654;
        case 0x1b2658u: goto label_1b2658;
        case 0x1b265cu: goto label_1b265c;
        case 0x1b2660u: goto label_1b2660;
        case 0x1b2664u: goto label_1b2664;
        case 0x1b2668u: goto label_1b2668;
        case 0x1b266cu: goto label_1b266c;
        case 0x1b2670u: goto label_1b2670;
        case 0x1b2674u: goto label_1b2674;
        case 0x1b2678u: goto label_1b2678;
        case 0x1b267cu: goto label_1b267c;
        case 0x1b2680u: goto label_1b2680;
        case 0x1b2684u: goto label_1b2684;
        case 0x1b2688u: goto label_1b2688;
        case 0x1b268cu: goto label_1b268c;
        case 0x1b2690u: goto label_1b2690;
        case 0x1b2694u: goto label_1b2694;
        case 0x1b2698u: goto label_1b2698;
        case 0x1b269cu: goto label_1b269c;
        case 0x1b26a0u: goto label_1b26a0;
        case 0x1b26a4u: goto label_1b26a4;
        case 0x1b26a8u: goto label_1b26a8;
        case 0x1b26acu: goto label_1b26ac;
        case 0x1b26b0u: goto label_1b26b0;
        case 0x1b26b4u: goto label_1b26b4;
        case 0x1b26b8u: goto label_1b26b8;
        case 0x1b26bcu: goto label_1b26bc;
        case 0x1b26c0u: goto label_1b26c0;
        case 0x1b26c4u: goto label_1b26c4;
        case 0x1b26c8u: goto label_1b26c8;
        case 0x1b26ccu: goto label_1b26cc;
        case 0x1b26d0u: goto label_1b26d0;
        case 0x1b26d4u: goto label_1b26d4;
        case 0x1b26d8u: goto label_1b26d8;
        case 0x1b26dcu: goto label_1b26dc;
        case 0x1b26e0u: goto label_1b26e0;
        case 0x1b26e4u: goto label_1b26e4;
        case 0x1b26e8u: goto label_1b26e8;
        case 0x1b26ecu: goto label_1b26ec;
        case 0x1b26f0u: goto label_1b26f0;
        case 0x1b26f4u: goto label_1b26f4;
        case 0x1b26f8u: goto label_1b26f8;
        case 0x1b26fcu: goto label_1b26fc;
        case 0x1b2700u: goto label_1b2700;
        case 0x1b2704u: goto label_1b2704;
        default: break;
    }

    ctx->pc = 0x1b2648u;

label_1b2648:
    // 0x1b2648: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b264c:
    // 0x1b264c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b264cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b2650:
    // 0x1b2650: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b2650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b2654:
    // 0x1b2654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b2658:
    // 0x1b2658: 0xc06ddac  jal         func_1B76B0
label_1b265c:
    if (ctx->pc == 0x1B265Cu) {
        ctx->pc = 0x1B265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2658u;
        // 0x1b265c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2660u;
        goto label_1b2660;
    }
    ctx->pc = 0x1B2658u;
    SET_GPR_U32(ctx, 31, 0x1B2660u);
    ctx->pc = 0x1B265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2658u;
    // 0x1b265c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1B2658u, 0x1B2660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2660u;
label_1b2660:
    // 0x1b2660: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1b2664:
    if (ctx->pc == 0x1B2664u) {
        ctx->pc = 0x1B2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2660u;
        // 0x1b2664: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2668u;
        goto label_1b2668;
    }
    ctx->pc = 0x1B2660u;
    {
        const bool branch_taken_0x1b2660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2660u;
        // 0x1b2664: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2660) {
            ctx->pc = 0x1B26F0u;
            goto label_1b26f0;
        }
    }
    ctx->pc = 0x1B2668u;
label_1b2668:
    // 0x1b2668: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1b2668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1b266c:
    // 0x1b266c: 0x2446dcf8  addiu       $a2, $v0, -0x2308
    ctx->pc = 0x1b266cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958328));
label_1b2670:
    // 0x1b2670: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b2670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b2674:
    // 0x1b2674: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b2674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b2678:
    // 0x1b2678: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1b2678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1b267c:
    // 0x1b267c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1b267cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1b2680:
    // 0x1b2680: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1b2684:
    if (ctx->pc == 0x1B2684u) {
        ctx->pc = 0x1B2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2680u;
        // 0x1b2684: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2688u;
        goto label_1b2688;
    }
    ctx->pc = 0x1B2680u;
    {
        const bool branch_taken_0x1b2680 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2680u;
        // 0x1b2684: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2680) {
            ctx->pc = 0x1B26ACu;
            goto label_1b26ac;
        }
    }
    ctx->pc = 0x1B2688u;
label_1b2688:
    // 0x1b2688: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1b2688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1b268c:
    // 0x1b268c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1b268cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1b2690:
    // 0x1b2690: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b2690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b2694:
    // 0x1b2694: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b2694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b2698:
    // 0x1b2698: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b2698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b269c:
    // 0x1b269c: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1b269cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1b26a0:
    // 0x1b26a0: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1b26a0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1b26a4:
    // 0x1b26a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b26a8:
    if (ctx->pc == 0x1B26A8u) {
        ctx->pc = 0x1B26A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26A4u;
        // 0x1b26a8: 0x2503dcf8  addiu       $v1, $t0, -0x2308 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B26ACu;
        goto label_1b26ac;
    }
    ctx->pc = 0x1B26A4u;
    {
        const bool branch_taken_0x1b26a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B26A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26A4u;
        // 0x1b26a8: 0x2503dcf8  addiu       $v1, $t0, -0x2308 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26a4) {
            ctx->pc = 0x1B26B8u;
            goto label_1b26b8;
        }
    }
    ctx->pc = 0x1B26ACu;
label_1b26ac:
    // 0x1b26ac: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1b26acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1b26b0:
    // 0x1b26b0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b26b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b26b4:
    // 0x1b26b4: 0x2503dcf8  addiu       $v1, $t0, -0x2308
    ctx->pc = 0x1b26b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958328));
label_1b26b8:
    // 0x1b26b8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1b26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1b26bc:
    // 0x1b26bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b26c0:
    // 0x1b26c0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1b26c4:
    if (ctx->pc == 0x1B26C4u) {
        ctx->pc = 0x1B26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26C0u;
        // 0x1b26c4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B26C8u;
        goto label_1b26c8;
    }
    ctx->pc = 0x1B26C0u;
    {
        const bool branch_taken_0x1b26c0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26C0u;
        // 0x1b26c4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26c0) {
            ctx->pc = 0x1B26DCu;
            goto label_1b26dc;
        }
    }
    ctx->pc = 0x1B26C8u;
label_1b26c8:
    // 0x1b26c8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1b26c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1b26cc:
    // 0x1b26cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1b26d0:
    // 0x1b26d0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1b26d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1b26d4:
    // 0x1b26d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b26d8:
    if (ctx->pc == 0x1B26D8u) {
        ctx->pc = 0x1B26D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26D4u;
        // 0x1b26d8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B26DCu;
        goto label_1b26dc;
    }
    ctx->pc = 0x1B26D4u;
    {
        const bool branch_taken_0x1b26d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B26D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26D4u;
        // 0x1b26d8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26d4) {
            ctx->pc = 0x1B26E0u;
            goto label_1b26e0;
        }
    }
    ctx->pc = 0x1B26DCu;
label_1b26dc:
    // 0x1b26dc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b26dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b26e0:
    // 0x1b26e0: 0xc0f809  jalr        $a2
label_1b26e4:
    if (ctx->pc == 0x1B26E4u) {
        ctx->pc = 0x1B26E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26E0u;
        // 0x1b26e4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B26E8u;
        goto label_1b26e8;
    }
    ctx->pc = 0x1B26E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B26E8u);
        ctx->pc = 0x1B26E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26E0u;
        // 0x1b26e4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B26E0u, 0x1B26E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B26E8u;
label_1b26e8:
    // 0x1b26e8: 0xc06ddb6  jal         func_1B76D8
label_1b26ec:
    if (ctx->pc == 0x1B26ECu) {
        ctx->pc = 0x1B26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26E8u;
        // 0x1b26ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B26F0u;
        goto label_1b26f0;
    }
    ctx->pc = 0x1B26E8u;
    SET_GPR_U32(ctx, 31, 0x1B26F0u);
    ctx->pc = 0x1B26ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B26E8u;
    // 0x1b26ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1B26E8u, 0x1B26F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B26F0u;
label_1b26f0:
    // 0x1b26f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b26f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b26f4:
    // 0x1b26f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b26f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b26f8:
    // 0x1b26f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b26f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b26fc:
    // 0x1b26fc: 0x3e00008  jr          $ra
label_1b2700:
    if (ctx->pc == 0x1B2700u) {
        ctx->pc = 0x1B2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26FCu;
        // 0x1b2700: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2704u;
        goto label_1b2704;
    }
    ctx->pc = 0x1B26FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26FCu;
        // 0x1b2700: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B26FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2704u;
label_1b2704:
    // 0x1b2704: 0x0  nop
    ctx->pc = 0x1b2704u;
    // NOP
    ctx->pc = 0x1b2708u;
}
