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

// Function: Slot1_payoutLine3
// Address: 0x1e26d8 - 0x1e28d0
void Slot1_payoutLine3_0x1e26d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot1_payoutLine3_0x1e26d8");
#endif

    switch (ctx->pc) {
        case 0x1e2748u: goto label_1e2748;
        case 0x1e2758u: goto label_1e2758;
        case 0x1e27c0u: goto label_1e27c0;
        case 0x1e27e0u: goto label_1e27e0;
        case 0x1e280cu: goto label_1e280c;
        case 0x1e2840u: goto label_1e2840;
        case 0x1e285cu: goto label_1e285c;
        case 0x1e2870u: goto label_1e2870;
        case 0x1e2880u: goto label_1e2880;
        case 0x1e289cu: goto label_1e289c;
        default: break;
    }

    ctx->pc = 0x1e26d8u;

    // 0x1e26d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e26d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e26dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e26dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e26e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e26e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e26e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e26e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e26e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e26e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e26ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e26ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e26f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e26f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e26f4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1e26f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e26f8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E26F8u;
    {
        const bool branch_taken_0x1e26f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26F8u;
        // 0x1e26fc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e26f8) {
            ctx->pc = 0x1E2768u;
            goto label_1e2768;
        }
    }
    ctx->pc = 0x1E2700u;
    // 0x1e2700: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2700u;
    {
        const bool branch_taken_0x1e2700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2700) {
            ctx->pc = 0x1E2704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2700u;
            // 0x1e2704: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2718u;
            goto label_1e2718;
        }
    }
    ctx->pc = 0x1E2708u;
    // 0x1e2708: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2708u;
    {
        const bool branch_taken_0x1e2708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2708u;
        // 0x1e270c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2708) {
            ctx->pc = 0x1E2730u;
            goto label_1e2730;
        }
    }
    ctx->pc = 0x1E2710u;
    // 0x1e2710: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1E2710u;
    {
        const bool branch_taken_0x1e2710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2710u;
        // 0x1e2714: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2710) {
            ctx->pc = 0x1E28B8u;
            goto label_1e28b8;
        }
    }
    ctx->pc = 0x1E2718u;
label_1e2718:
    // 0x1e2718: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1E2718u;
    {
        const bool branch_taken_0x1e2718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2718u;
        // 0x1e271c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2718) {
            ctx->pc = 0x1E27F4u;
            goto label_1e27f4;
        }
    }
    ctx->pc = 0x1E2720u;
    // 0x1e2720: 0x50620062  beql        $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1E2720u;
    {
        const bool branch_taken_0x1e2720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e2720) {
            ctx->pc = 0x1E2724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2720u;
            // 0x1e2724: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E28ACu;
            goto label_1e28ac;
        }
    }
    ctx->pc = 0x1E2728u;
    // 0x1e2728: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1E2728u;
    {
        const bool branch_taken_0x1e2728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2728u;
        // 0x1e272c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2728) {
            ctx->pc = 0x1E28B8u;
            goto label_1e28b8;
        }
    }
    ctx->pc = 0x1E2730u;
label_1e2730:
    // 0x1e2730: 0x96050494  lhu         $a1, 0x494($s0)
    ctx->pc = 0x1e2730u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x1e2734: 0xae020490  sw          $v0, 0x490($s0)
    ctx->pc = 0x1e2734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1168), GPR_U32(ctx, 2));
    // 0x1e2738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e273c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e273cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2740: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E2740u;
    SET_GPR_U32(ctx, 31, 0x1E2748u);
    ctx->pc = 0x1E2744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2740u;
    // 0x1e2744: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E2740u, 0x1E2748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2748u;
label_1e2748:
    // 0x1e2748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e274c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e274cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2750: 0xc078f5e  jal         func_1E3D78
    ctx->pc = 0x1E2750u;
    SET_GPR_U32(ctx, 31, 0x1E2758u);
    ctx->pc = 0x1E2754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2750u;
    // 0x1e2754: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3D78u, 0x1E2750u, 0x1E2758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2758u;
label_1e2758:
    // 0x1e2758: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e2758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e275c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1e275cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e2760: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1E2760u;
    {
        const bool branch_taken_0x1e2760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2760u;
        // 0x1e2764: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2760) {
            ctx->pc = 0x1E2884u;
            goto label_1e2884;
        }
    }
    ctx->pc = 0x1E2768u;
label_1e2768:
    // 0x1e2768: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e2768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e276c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E276Cu;
    {
        const bool branch_taken_0x1e276c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E276Cu;
        // 0x1e2770: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e276c) {
            ctx->pc = 0x1E2780u;
            goto label_1e2780;
        }
    }
    ctx->pc = 0x1E2774u;
    // 0x1e2774: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e2774u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2778: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2778u;
    {
        const bool branch_taken_0x1e2778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2778u;
        // 0x1e277c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2778) {
            ctx->pc = 0x1E2784u;
            goto label_1e2784;
        }
    }
    ctx->pc = 0x1E2780u;
label_1e2780:
    // 0x1e2780: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2784:
    // 0x1e2784: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e2784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e2788: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1E2788u;
    {
        const bool branch_taken_0x1e2788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2788u;
        // 0x1e278c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2788) {
            ctx->pc = 0x1E28B4u;
            goto label_1e28b4;
        }
    }
    ctx->pc = 0x1E2790u;
    // 0x1e2790: 0x8e0303d4  lw          $v1, 0x3D4($s0)
    ctx->pc = 0x1e2790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 980)));
    // 0x1e2794: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e2794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e2798: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e2798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e279c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e279cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e27a0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E27A0u;
    {
        const bool branch_taken_0x1e27a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e27a0) {
            ctx->pc = 0x1E27A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E27A0u;
            // 0x1e27a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E27A8u;
            goto label_1e27a8;
        }
    }
    ctx->pc = 0x1E27A8u;
label_1e27a8:
    // 0x1e27a8: 0x1812  mflo        $v1
    ctx->pc = 0x1e27a8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1e27ac: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1e27acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1e27b0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1e27b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1e27b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e27b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e27b8: 0xc07a392  jal         func_1E8E48
    ctx->pc = 0x1E27B8u;
    SET_GPR_U32(ctx, 31, 0x1E27C0u);
    ctx->pc = 0x1E27BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E27B8u;
    // 0x1e27bc: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E48u, 0x1E27B8u, 0x1E27C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E27C0u;
label_1e27c0:
    // 0x1e27c0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e27c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e27c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e27c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e27c8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e27c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e27cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e27ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e27d0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1e27d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e27d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e27d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e27d8: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1E27D8u;
    SET_GPR_U32(ctx, 31, 0x1E27E0u);
    ctx->pc = 0x1E27DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E27D8u;
    // 0x1e27dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1E27D8u, 0x1E27E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E27E0u;
label_1e27e0:
    // 0x1e27e0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1e27e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e27e4: 0xae0204c8  sw          $v0, 0x4C8($s0)
    ctx->pc = 0x1e27e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 2));
    // 0x1e27e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e27e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e27ec: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1E27ECu;
    {
        const bool branch_taken_0x1e27ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E27F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27ECu;
        // 0x1e27f0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27ec) {
            ctx->pc = 0x1E28B4u;
            goto label_1e28b4;
        }
    }
    ctx->pc = 0x1E27F4u;
label_1e27f4:
    // 0x1e27f4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e27f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E27F8u;
    {
        const bool branch_taken_0x1e27f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E27FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27F8u;
        // 0x1e27fc: 0x3c110057  lui         $s1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27f8) {
            ctx->pc = 0x1E2830u;
            goto label_1e2830;
        }
    }
    ctx->pc = 0x1E2800u;
    // 0x1e2800: 0x26329b70  addiu       $s2, $s1, -0x6490
    ctx->pc = 0x1e2800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    // 0x1e2804: 0xc07ea38  jal         func_1FA8E0
    ctx->pc = 0x1E2804u;
    SET_GPR_U32(ctx, 31, 0x1E280Cu);
    ctx->pc = 0x1E2808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2804u;
    // 0x1e2808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA8E0u, 0x1E2804u, 0x1E280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E280Cu;
label_1e280c:
    // 0x1e280c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E280Cu;
    {
        const bool branch_taken_0x1e280c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e280c) {
            ctx->pc = 0x1E2810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E280Cu;
            // 0x1e2810: 0x8e0504c8  lw          $a1, 0x4C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2834u;
            goto label_1e2834;
        }
    }
    ctx->pc = 0x1E2814u;
    // 0x1e2814: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1e2814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1e2818: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x1e2818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1e281c: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1e281cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1e2820: 0xdc437650  ld          $v1, 0x7650($v0)
    ctx->pc = 0x1e2820u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30288)));
    // 0x1e2824: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e2824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e2828: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E2828u;
    {
        const bool branch_taken_0x1e2828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2828) {
            ctx->pc = 0x1E282Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2828u;
            // 0x1e282c: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2890u;
            goto label_1e2890;
        }
    }
    ctx->pc = 0x1E2830u;
label_1e2830:
    // 0x1e2830: 0x8e0504c8  lw          $a1, 0x4C8($s0)
    ctx->pc = 0x1e2830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1224)));
label_1e2834:
    // 0x1e2834: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e2834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e2838: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1E2838u;
    SET_GPR_U32(ctx, 31, 0x1E2840u);
    ctx->pc = 0x1E283Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2838u;
    // 0x1e283c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1E2838u, 0x1E2840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2840u;
label_1e2840:
    // 0x1e2840: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1e2840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1e2844: 0x26249b70  addiu       $a0, $s1, -0x6490
    ctx->pc = 0x1e2844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    // 0x1e2848: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x1e2848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e284c: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1e284cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e2850: 0x2812  mflo        $a1
    ctx->pc = 0x1e2850u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1e2854: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E2854u;
    SET_GPR_U32(ctx, 31, 0x1E285Cu);
    ctx->pc = 0x1E2858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2854u;
    // 0x1e2858: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E2854u, 0x1E285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E285Cu;
label_1e285c:
    // 0x1e285c: 0x96050494  lhu         $a1, 0x494($s0)
    ctx->pc = 0x1e285cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x1e2860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2864: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e2864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2868: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E2868u;
    SET_GPR_U32(ctx, 31, 0x1E2870u);
    ctx->pc = 0x1E286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2868u;
    // 0x1e286c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E2868u, 0x1E2870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2870u;
label_1e2870:
    // 0x1e2870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2874: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e2874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2878: 0xc078f5e  jal         func_1E3D78
    ctx->pc = 0x1E2878u;
    SET_GPR_U32(ctx, 31, 0x1E2880u);
    ctx->pc = 0x1E287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2878u;
    // 0x1e287c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3D78u, 0x1E2878u, 0x1E2880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2880u;
label_1e2880:
    // 0x1e2880: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e2880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e2884:
    // 0x1e2884: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e2888: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E2888u;
    {
        const bool branch_taken_0x1e2888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2888u;
        // 0x1e288c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2888) {
            ctx->pc = 0x1E28B4u;
            goto label_1e28b4;
        }
    }
    ctx->pc = 0x1E2890u;
label_1e2890:
    // 0x1e2890: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e2890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2894: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E2894u;
    SET_GPR_U32(ctx, 31, 0x1E289Cu);
    ctx->pc = 0x1E2898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2894u;
    // 0x1e2898: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E2894u, 0x1E289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E289Cu;
label_1e289c:
    // 0x1e289c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e28a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e28a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E28A4u;
    {
        const bool branch_taken_0x1e28a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28A4u;
        // 0x1e28a8: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28a4) {
            ctx->pc = 0x1E28B4u;
            goto label_1e28b4;
        }
    }
    ctx->pc = 0x1E28ACu;
label_1e28ac:
    // 0x1e28ac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e28acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e28b0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e28b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1e28b4:
    // 0x1e28b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e28b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e28b8:
    // 0x1e28b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e28b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e28bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e28bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e28c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e28c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e28c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E28C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28C4u;
        // 0x1e28c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E28C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E28CCu;
    // 0x1e28cc: 0x0  nop
    ctx->pc = 0x1e28ccu;
    // NOP
    ctx->pc = 0x1e28d0u;
}
