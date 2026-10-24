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

// Function: _sceSifCmdIntrHdlr
// Address: 0x3b2708 - 0x3b2850
void _sceSifCmdIntrHdlr_0x3b2708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceSifCmdIntrHdlr_0x3b2708");
#endif

    switch (ctx->pc) {
        case 0x3b2708u: goto label_3b2708;
        case 0x3b270cu: goto label_3b270c;
        case 0x3b2710u: goto label_3b2710;
        case 0x3b2714u: goto label_3b2714;
        case 0x3b2718u: goto label_3b2718;
        case 0x3b271cu: goto label_3b271c;
        case 0x3b2720u: goto label_3b2720;
        case 0x3b2724u: goto label_3b2724;
        case 0x3b2728u: goto label_3b2728;
        case 0x3b272cu: goto label_3b272c;
        case 0x3b2730u: goto label_3b2730;
        case 0x3b2734u: goto label_3b2734;
        case 0x3b2738u: goto label_3b2738;
        case 0x3b273cu: goto label_3b273c;
        case 0x3b2740u: goto label_3b2740;
        case 0x3b2744u: goto label_3b2744;
        case 0x3b2748u: goto label_3b2748;
        case 0x3b274cu: goto label_3b274c;
        case 0x3b2750u: goto label_3b2750;
        case 0x3b2754u: goto label_3b2754;
        case 0x3b2758u: goto label_3b2758;
        case 0x3b275cu: goto label_3b275c;
        case 0x3b2760u: goto label_3b2760;
        case 0x3b2764u: goto label_3b2764;
        case 0x3b2768u: goto label_3b2768;
        case 0x3b276cu: goto label_3b276c;
        case 0x3b2770u: goto label_3b2770;
        case 0x3b2774u: goto label_3b2774;
        case 0x3b2778u: goto label_3b2778;
        case 0x3b277cu: goto label_3b277c;
        case 0x3b2780u: goto label_3b2780;
        case 0x3b2784u: goto label_3b2784;
        case 0x3b2788u: goto label_3b2788;
        case 0x3b278cu: goto label_3b278c;
        case 0x3b2790u: goto label_3b2790;
        case 0x3b2794u: goto label_3b2794;
        case 0x3b2798u: goto label_3b2798;
        case 0x3b279cu: goto label_3b279c;
        case 0x3b27a0u: goto label_3b27a0;
        case 0x3b27a4u: goto label_3b27a4;
        case 0x3b27a8u: goto label_3b27a8;
        case 0x3b27acu: goto label_3b27ac;
        case 0x3b27b0u: goto label_3b27b0;
        case 0x3b27b4u: goto label_3b27b4;
        case 0x3b27b8u: goto label_3b27b8;
        case 0x3b27bcu: goto label_3b27bc;
        case 0x3b27c0u: goto label_3b27c0;
        case 0x3b27c4u: goto label_3b27c4;
        case 0x3b27c8u: goto label_3b27c8;
        case 0x3b27ccu: goto label_3b27cc;
        case 0x3b27d0u: goto label_3b27d0;
        case 0x3b27d4u: goto label_3b27d4;
        case 0x3b27d8u: goto label_3b27d8;
        case 0x3b27dcu: goto label_3b27dc;
        case 0x3b27e0u: goto label_3b27e0;
        case 0x3b27e4u: goto label_3b27e4;
        case 0x3b27e8u: goto label_3b27e8;
        case 0x3b27ecu: goto label_3b27ec;
        case 0x3b27f0u: goto label_3b27f0;
        case 0x3b27f4u: goto label_3b27f4;
        case 0x3b27f8u: goto label_3b27f8;
        case 0x3b27fcu: goto label_3b27fc;
        case 0x3b2800u: goto label_3b2800;
        case 0x3b2804u: goto label_3b2804;
        case 0x3b2808u: goto label_3b2808;
        case 0x3b280cu: goto label_3b280c;
        case 0x3b2810u: goto label_3b2810;
        case 0x3b2814u: goto label_3b2814;
        case 0x3b2818u: goto label_3b2818;
        case 0x3b281cu: goto label_3b281c;
        case 0x3b2820u: goto label_3b2820;
        case 0x3b2824u: goto label_3b2824;
        case 0x3b2828u: goto label_3b2828;
        case 0x3b282cu: goto label_3b282c;
        case 0x3b2830u: goto label_3b2830;
        case 0x3b2834u: goto label_3b2834;
        case 0x3b2838u: goto label_3b2838;
        case 0x3b283cu: goto label_3b283c;
        case 0x3b2840u: goto label_3b2840;
        case 0x3b2844u: goto label_3b2844;
        case 0x3b2848u: goto label_3b2848;
        case 0x3b284cu: goto label_3b284c;
        default: break;
    }

    ctx->pc = 0x3b2708u;

label_3b2708:
    // 0x3b2708: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b2708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3b270c:
    // 0x3b270c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3b270cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
label_3b2710:
    // 0x3b2710: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x3b2710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
label_3b2714:
    // 0x3b2714: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3b2714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3b2718:
    // 0x3b2718: 0x2471e518  addiu       $s1, $v1, -0x1AE8
    ctx->pc = 0x3b2718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960408));
label_3b271c:
    // 0x3b271c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x3b271cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_3b2720:
    // 0x3b2720: 0x8c67e518  lw          $a3, -0x1AE8($v1)
    ctx->pc = 0x3b2720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960408)));
label_3b2724:
    // 0x3b2724: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3b2724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_3b2728:
    // 0x3b2728: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3b2728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3b272c:
    // 0x3b272c: 0x10a00043  beqz        $a1, . + 4 + (0x43 << 2)
label_3b2730:
    if (ctx->pc == 0x3B2730u) {
        ctx->pc = 0x3B2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B272Cu;
        // 0x3b2730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2734u;
        goto label_3b2734;
    }
    ctx->pc = 0x3B272Cu;
    {
        const bool branch_taken_0x3b272c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B272Cu;
        // 0x3b2730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b272c) {
            ctx->pc = 0x3B283Cu;
            goto label_3b283c;
        }
    }
    ctx->pc = 0x3B2734u;
label_3b2734:
    // 0x3b2734: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x3b2734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_3b2738:
    // 0x3b2738: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b2738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b273c:
    // 0x3b273c: 0x24a4001e  addiu       $a0, $a1, 0x1E
    ctx->pc = 0x3b273cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
label_3b2740:
    // 0x3b2740: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3b2740u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3b2744:
    // 0x3b2744: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x3b2744u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_3b2748:
    // 0x3b2748: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3b2748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3b274c:
    // 0x3b274c: 0x42903  sra         $a1, $a0, 4
    ctx->pc = 0x3b274cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 4));
label_3b2750:
    // 0x3b2750: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x3b2750u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_3b2754:
    // 0x3b2754: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
label_3b2758:
    if (ctx->pc == 0x3B2758u) {
        ctx->pc = 0x3B2758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2754u;
        // 0x3b2758: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B275Cu;
        goto label_3b275c;
    }
    ctx->pc = 0x3B2754u;
    {
        const bool branch_taken_0x3b2754 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x3B2758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2754u;
        // 0x3b2758: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2754) {
            ctx->pc = 0x3B277Cu;
            goto label_3b277c;
        }
    }
    ctx->pc = 0x3B275Cu;
label_3b275c:
    // 0x3b275c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x3b275cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b2760:
    // 0x3b2760: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x3b2760u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_3b2764:
    // 0x3b2764: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3b2764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3b2768:
    // 0x3b2768: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3b2768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3b276c:
    // 0x3b276c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3b276cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_3b2770:
    // 0x3b2770: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3b2770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3b2774:
    // 0x3b2774: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_3b2778:
    if (ctx->pc == 0x3B2778u) {
        ctx->pc = 0x3B277Cu;
        goto label_3b277c;
    }
    ctx->pc = 0x3B2774u;
    {
        const bool branch_taken_0x3b2774 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2774) {
            ctx->pc = 0x3B2760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2760;
        }
    }
    ctx->pc = 0x3B277Cu;
label_3b277c:
    // 0x3b277c: 0xc0ec024  jal         func_3B0090
label_3b2780:
    if (ctx->pc == 0x3B2780u) {
        ctx->pc = 0x3B2784u;
        goto label_3b2784;
    }
    ctx->pc = 0x3B277Cu;
    SET_GPR_U32(ctx, 31, 0x3B2784u);
    ctx->pc = 0x3B0090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0090u, 0x3B277Cu, 0x3B2784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2784u;
label_3b2784:
    // 0x3b2784: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3b2784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3b2788:
    // 0x3b2788: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
label_3b278c:
    if (ctx->pc == 0x3B278Cu) {
        ctx->pc = 0x3B2790u;
        goto label_3b2790;
    }
    ctx->pc = 0x3B2788u;
    {
        const bool branch_taken_0x3b2788 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x3b2788) {
            ctx->pc = 0x3B27DCu;
            goto label_3b27dc;
        }
    }
    ctx->pc = 0x3B2790u;
label_3b2790:
    // 0x3b2790: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3b2790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3b2794:
    // 0x3b2794: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3b2794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_3b2798:
    // 0x3b2798: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3b2798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3b279c:
    // 0x3b279c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x3b279cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3b27a0:
    // 0x3b27a0: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x3b27a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3b27a4:
    // 0x3b27a4: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x3b27a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3b27a8:
    // 0x3b27a8: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_3b27ac:
    if (ctx->pc == 0x3B27ACu) {
        ctx->pc = 0x3B27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B27A8u;
        // 0x3b27ac: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B27B0u;
        goto label_3b27b0;
    }
    ctx->pc = 0x3B27A8u;
    {
        const bool branch_taken_0x3b27a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B27A8u;
        // 0x3b27ac: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b27a8) {
            ctx->pc = 0x3B2830u;
            goto label_3b2830;
        }
    }
    ctx->pc = 0x3B27B0u;
label_3b27b0:
    // 0x3b27b0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3b27b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3b27b4:
    // 0x3b27b4: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x3b27b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3b27b8:
    // 0x3b27b8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x3b27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3b27bc:
    // 0x3b27bc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3b27bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b27c0:
    // 0x3b27c0: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
label_3b27c4:
    if (ctx->pc == 0x3B27C4u) {
        ctx->pc = 0x3B27C8u;
        goto label_3b27c8;
    }
    ctx->pc = 0x3B27C0u;
    {
        const bool branch_taken_0x3b27c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b27c0) {
            ctx->pc = 0x3B2830u;
            goto label_3b2830;
        }
    }
    ctx->pc = 0x3B27C8u;
label_3b27c8:
    // 0x3b27c8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3b27c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3b27cc:
    // 0x3b27cc: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x3b27ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3b27d0:
    // 0x3b27d0: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x3b27d0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3b27d4:
    // 0x3b27d4: 0x10000010  b           . + 4 + (0x10 << 2)
label_3b27d8:
    if (ctx->pc == 0x3B27D8u) {
        ctx->pc = 0x3B27D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B27D4u;
        // 0x3b27d8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B27DCu;
        goto label_3b27dc;
    }
    ctx->pc = 0x3B27D4u;
    {
        const bool branch_taken_0x3b27d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B27D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B27D4u;
        // 0x3b27d8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b27d4) {
            ctx->pc = 0x3B2818u;
            goto label_3b2818;
        }
    }
    ctx->pc = 0x3B27DCu;
label_3b27dc:
    // 0x3b27dc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3b27dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3b27e0:
    // 0x3b27e0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3b27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3b27e4:
    // 0x3b27e4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3b27e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3b27e8:
    // 0x3b27e8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3b27ec:
    if (ctx->pc == 0x3B27ECu) {
        ctx->pc = 0x3B27ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B27E8u;
        // 0x3b27ec: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B27F0u;
        goto label_3b27f0;
    }
    ctx->pc = 0x3B27E8u;
    {
        const bool branch_taken_0x3b27e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B27ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B27E8u;
        // 0x3b27ec: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b27e8) {
            ctx->pc = 0x3B2830u;
            goto label_3b2830;
        }
    }
    ctx->pc = 0x3B27F0u;
label_3b27f0:
    // 0x3b27f0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3b27f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3b27f4:
    // 0x3b27f4: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x3b27f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3b27f8:
    // 0x3b27f8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x3b27f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3b27fc:
    // 0x3b27fc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3b27fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b2800:
    // 0x3b2800: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_3b2804:
    if (ctx->pc == 0x3B2804u) {
        ctx->pc = 0x3B2808u;
        goto label_3b2808;
    }
    ctx->pc = 0x3B2800u;
    {
        const bool branch_taken_0x3b2800 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2800) {
            ctx->pc = 0x3B2830u;
            goto label_3b2830;
        }
    }
    ctx->pc = 0x3B2808u;
label_3b2808:
    // 0x3b2808: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3b2808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3b280c:
    // 0x3b280c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x3b280cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3b2810:
    // 0x3b2810: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x3b2810u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3b2814:
    // 0x3b2814: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3b2814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3b2818:
    // 0x3b2818: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b2818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b281c:
    // 0x3b281c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3b281cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b2820:
    // 0x3b2820: 0xc0f809  jalr        $a2
label_3b2824:
    if (ctx->pc == 0x3B2824u) {
        ctx->pc = 0x3B2824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2820u;
        // 0x3b2824: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2828u;
        goto label_3b2828;
    }
    ctx->pc = 0x3B2820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3B2828u);
        ctx->pc = 0x3B2824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2820u;
        // 0x3b2824: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2820u, 0x3B2828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2828u;
label_3b2828:
    // 0x3b2828: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x3b2828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3b282c:
    // 0x3b282c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x3b282cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b2830:
    // 0x3b2830: 0xf  sync
    ctx->pc = 0x3b2830u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3b2834:
    // 0x3b2834: 0x42000038  ei
    ctx->pc = 0x3b2834u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3b2838:
    // 0x3b2838: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b2838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b283c:
    // 0x3b283c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3b283cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3b2840:
    // 0x3b2840: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x3b2840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3b2844:
    // 0x3b2844: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x3b2844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3b2848:
    // 0x3b2848: 0x3e00008  jr          $ra
label_3b284c:
    if (ctx->pc == 0x3B284Cu) {
        ctx->pc = 0x3B284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2848u;
        // 0x3b284c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2850u;
        goto label_fallthrough_0x3b2848;
    }
    ctx->pc = 0x3B2848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2848u;
        // 0x3b284c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b2848:
    ctx->pc = 0x3B2850u;
}
