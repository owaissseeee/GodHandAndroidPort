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

// Function: func_003066D0
// Address: 0x3066d0 - 0x306838
void func_003066D0_0x3066d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003066D0_0x3066d0");
#endif

    switch (ctx->pc) {
        case 0x3066d0u: goto label_3066d0;
        case 0x3066d4u: goto label_3066d4;
        case 0x3066d8u: goto label_3066d8;
        case 0x3066dcu: goto label_3066dc;
        case 0x3066e0u: goto label_3066e0;
        case 0x3066e4u: goto label_3066e4;
        case 0x3066e8u: goto label_3066e8;
        case 0x3066ecu: goto label_3066ec;
        case 0x3066f0u: goto label_3066f0;
        case 0x3066f4u: goto label_3066f4;
        case 0x3066f8u: goto label_3066f8;
        case 0x3066fcu: goto label_3066fc;
        case 0x306700u: goto label_306700;
        case 0x306704u: goto label_306704;
        case 0x306708u: goto label_306708;
        case 0x30670cu: goto label_30670c;
        case 0x306710u: goto label_306710;
        case 0x306714u: goto label_306714;
        case 0x306718u: goto label_306718;
        case 0x30671cu: goto label_30671c;
        case 0x306720u: goto label_306720;
        case 0x306724u: goto label_306724;
        case 0x306728u: goto label_306728;
        case 0x30672cu: goto label_30672c;
        case 0x306730u: goto label_306730;
        case 0x306734u: goto label_306734;
        case 0x306738u: goto label_306738;
        case 0x30673cu: goto label_30673c;
        case 0x306740u: goto label_306740;
        case 0x306744u: goto label_306744;
        case 0x306748u: goto label_306748;
        case 0x30674cu: goto label_30674c;
        case 0x306750u: goto label_306750;
        case 0x306754u: goto label_306754;
        case 0x306758u: goto label_306758;
        case 0x30675cu: goto label_30675c;
        case 0x306760u: goto label_306760;
        case 0x306764u: goto label_306764;
        case 0x306768u: goto label_306768;
        case 0x30676cu: goto label_30676c;
        case 0x306770u: goto label_306770;
        case 0x306774u: goto label_306774;
        case 0x306778u: goto label_306778;
        case 0x30677cu: goto label_30677c;
        case 0x306780u: goto label_306780;
        case 0x306784u: goto label_306784;
        case 0x306788u: goto label_306788;
        case 0x30678cu: goto label_30678c;
        case 0x306790u: goto label_306790;
        case 0x306794u: goto label_306794;
        case 0x306798u: goto label_306798;
        case 0x30679cu: goto label_30679c;
        case 0x3067a0u: goto label_3067a0;
        case 0x3067a4u: goto label_3067a4;
        case 0x3067a8u: goto label_3067a8;
        case 0x3067acu: goto label_3067ac;
        case 0x3067b0u: goto label_3067b0;
        case 0x3067b4u: goto label_3067b4;
        case 0x3067b8u: goto label_3067b8;
        case 0x3067bcu: goto label_3067bc;
        case 0x3067c0u: goto label_3067c0;
        case 0x3067c4u: goto label_3067c4;
        case 0x3067c8u: goto label_3067c8;
        case 0x3067ccu: goto label_3067cc;
        case 0x3067d0u: goto label_3067d0;
        case 0x3067d4u: goto label_3067d4;
        case 0x3067d8u: goto label_3067d8;
        case 0x3067dcu: goto label_3067dc;
        case 0x3067e0u: goto label_3067e0;
        case 0x3067e4u: goto label_3067e4;
        case 0x3067e8u: goto label_3067e8;
        case 0x3067ecu: goto label_3067ec;
        case 0x3067f0u: goto label_3067f0;
        case 0x3067f4u: goto label_3067f4;
        case 0x3067f8u: goto label_3067f8;
        case 0x3067fcu: goto label_3067fc;
        case 0x306800u: goto label_306800;
        case 0x306804u: goto label_306804;
        case 0x306808u: goto label_306808;
        case 0x30680cu: goto label_30680c;
        case 0x306810u: goto label_306810;
        case 0x306814u: goto label_306814;
        case 0x306818u: goto label_306818;
        case 0x30681cu: goto label_30681c;
        case 0x306820u: goto label_306820;
        case 0x306824u: goto label_306824;
        case 0x306828u: goto label_306828;
        case 0x30682cu: goto label_30682c;
        case 0x306830u: goto label_306830;
        case 0x306834u: goto label_306834;
        default: break;
    }

    ctx->pc = 0x3066d0u;

label_3066d0:
    // 0x3066d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3066d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3066d4:
    // 0x3066d4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3066d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3066d8:
    // 0x3066d8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3066d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3066dc:
    // 0x3066dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3066dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3066e0:
    // 0x3066e0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3066e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3066e4:
    // 0x3066e4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3066e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3066e8:
    // 0x3066e8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3066e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_3066ec:
    // 0x3066ec: 0x2494ffff  addiu       $s4, $a0, -0x1
    ctx->pc = 0x3066ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3066f0:
    // 0x3066f0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3066f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_3066f4:
    // 0x3066f4: 0x3176ffff  andi        $s6, $t3, 0xFFFF
    ctx->pc = 0x3066f4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_3066f8:
    // 0x3066f8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3066f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_3066fc:
    // 0x3066fc: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x3066fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_306700:
    // 0x306700: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x306700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_306704:
    // 0x306704: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x306704u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_306708:
    // 0x306708: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x306708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_30670c:
    // 0x30670c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30670cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_306710:
    // 0x306710: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x306710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_306714:
    // 0x306714: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x306714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_306718:
    // 0x306718: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
label_30671c:
    if (ctx->pc == 0x30671Cu) {
        ctx->pc = 0x30671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306718u;
        // 0x30671c: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306720u;
        goto label_306720;
    }
    ctx->pc = 0x306718u;
    {
        const bool branch_taken_0x306718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306718u;
        // 0x30671c: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306718) {
            ctx->pc = 0x306804u;
            goto label_306804;
        }
    }
    ctx->pc = 0x306720u;
label_306720:
    // 0x306720: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x306720u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
label_306724:
    // 0x306724: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x306724u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
label_306728:
    // 0x306728: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
label_30672c:
    if (ctx->pc == 0x30672Cu) {
        ctx->pc = 0x30672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306728u;
        // 0x30672c: 0x92630074  lbu         $v1, 0x74($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306730u;
        goto label_306730;
    }
    ctx->pc = 0x306728u;
    {
        const bool branch_taken_0x306728 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x306728) {
            ctx->pc = 0x30672Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306728u;
            // 0x30672c: 0x92630074  lbu         $v1, 0x74($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306744u;
            goto label_306744;
        }
    }
    ctx->pc = 0x306730u;
label_306730:
    // 0x306730: 0x92420136  lbu         $v0, 0x136($s2)
    ctx->pc = 0x306730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 310)));
label_306734:
    // 0x306734: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_306738:
    if (ctx->pc == 0x306738u) {
        ctx->pc = 0x30673Cu;
        goto label_30673c;
    }
    ctx->pc = 0x306734u;
    {
        const bool branch_taken_0x306734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306734) {
            ctx->pc = 0x306750u;
            goto label_306750;
        }
    }
    ctx->pc = 0x30673Cu;
label_30673c:
    // 0x30673c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_306740:
    if (ctx->pc == 0x306740u) {
        ctx->pc = 0x306740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30673Cu;
        // 0x306740: 0x265202f0  addiu       $s2, $s2, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306744u;
        goto label_306744;
    }
    ctx->pc = 0x30673Cu;
    {
        const bool branch_taken_0x30673c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30673Cu;
        // 0x306740: 0x265202f0  addiu       $s2, $s2, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30673c) {
            ctx->pc = 0x3067F8u;
            goto label_3067f8;
        }
    }
    ctx->pc = 0x306744u;
label_306744:
    // 0x306744: 0x92420136  lbu         $v0, 0x136($s2)
    ctx->pc = 0x306744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 310)));
label_306748:
    // 0x306748: 0x5462002b  bnel        $v1, $v0, . + 4 + (0x2B << 2)
label_30674c:
    if (ctx->pc == 0x30674Cu) {
        ctx->pc = 0x30674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306748u;
        // 0x30674c: 0x265202f0  addiu       $s2, $s2, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306750u;
        goto label_306750;
    }
    ctx->pc = 0x306748u;
    {
        const bool branch_taken_0x306748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x306748) {
            ctx->pc = 0x30674Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306748u;
            // 0x30674c: 0x265202f0  addiu       $s2, $s2, 0x2F0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 752));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3067F8u;
            goto label_3067f8;
        }
    }
    ctx->pc = 0x306750u;
label_306750:
    // 0x306750: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_306754:
    if (ctx->pc == 0x306754u) {
        ctx->pc = 0x306754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306750u;
        // 0x306754: 0x8fb10000  lw          $s1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306758u;
        goto label_306758;
    }
    ctx->pc = 0x306750u;
    {
        const bool branch_taken_0x306750 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x306754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306750u;
        // 0x306754: 0x8fb10000  lw          $s1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306750) {
            ctx->pc = 0x306774u;
            goto label_306774;
        }
    }
    ctx->pc = 0x306758u;
label_306758:
    // 0x306758: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x306758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_30675c:
    // 0x30675c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x30675cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_306760:
    // 0x306760: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_306764:
    if (ctx->pc == 0x306764u) {
        ctx->pc = 0x306768u;
        goto label_306768;
    }
    ctx->pc = 0x306760u;
    {
        const bool branch_taken_0x306760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306760) {
            ctx->pc = 0x306774u;
            goto label_306774;
        }
    }
    ctx->pc = 0x306768u;
label_306768:
    // 0x306768: 0xc0be890  jal         func_2FA240
label_30676c:
    if (ctx->pc == 0x30676Cu) {
        ctx->pc = 0x30676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306768u;
        // 0x30676c: 0x8e4402a0  lw          $a0, 0x2A0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 672)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306770u;
        goto label_306770;
    }
    ctx->pc = 0x306768u;
    SET_GPR_U32(ctx, 31, 0x306770u);
    ctx->pc = 0x30676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306768u;
    // 0x30676c: 0x8e4402a0  lw          $a0, 0x2A0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA240u, 0x306768u, 0x306770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306770u;
label_306770:
    // 0x306770: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x306770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_306774:
    // 0x306774: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_306778:
    if (ctx->pc == 0x306778u) {
        ctx->pc = 0x306778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306774u;
        // 0x306778: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30677Cu;
        goto label_30677c;
    }
    ctx->pc = 0x306774u;
    {
        const bool branch_taken_0x306774 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x306778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306774u;
        // 0x306778: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306774) {
            ctx->pc = 0x306790u;
            goto label_306790;
        }
    }
    ctx->pc = 0x30677Cu;
label_30677c:
    // 0x30677c: 0x824200be  lb          $v0, 0xBE($s2)
    ctx->pc = 0x30677cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 190)));
label_306780:
    // 0x306780: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_306784:
    if (ctx->pc == 0x306784u) {
        ctx->pc = 0x306784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306780u;
        // 0x306784: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306788u;
        goto label_306788;
    }
    ctx->pc = 0x306780u;
    {
        const bool branch_taken_0x306780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x306784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306780u;
        // 0x306784: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306780) {
            ctx->pc = 0x306790u;
            goto label_306790;
        }
    }
    ctx->pc = 0x306788u;
label_306788:
    // 0x306788: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
label_30678c:
    if (ctx->pc == 0x30678Cu) {
        ctx->pc = 0x30678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306788u;
        // 0x30678c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306790u;
        goto label_306790;
    }
    ctx->pc = 0x306788u;
    {
        const bool branch_taken_0x306788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306788u;
        // 0x30678c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306788) {
            ctx->pc = 0x306808u;
            goto label_306808;
        }
    }
    ctx->pc = 0x306790u;
label_306790:
    // 0x306790: 0xc0c0116  jal         func_300458
label_306794:
    if (ctx->pc == 0x306794u) {
        ctx->pc = 0x306794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306790u;
        // 0x306794: 0x92440128  lbu         $a0, 0x128($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306798u;
        goto label_306798;
    }
    ctx->pc = 0x306790u;
    SET_GPR_U32(ctx, 31, 0x306798u);
    ctx->pc = 0x306794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306790u;
    // 0x306794: 0x92440128  lbu         $a0, 0x128($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300458u, 0x306790u, 0x306798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306798u;
label_306798:
    // 0x306798: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x306798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30679c:
    // 0x30679c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_3067a0:
    if (ctx->pc == 0x3067A0u) {
        ctx->pc = 0x3067A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30679Cu;
        // 0x3067a0: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3067A4u;
        goto label_3067a4;
    }
    ctx->pc = 0x30679Cu;
    {
        const bool branch_taken_0x30679c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3067A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30679Cu;
        // 0x3067a0: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30679c) {
            ctx->pc = 0x3067F0u;
            goto label_3067f0;
        }
    }
    ctx->pc = 0x3067A4u;
label_3067a4:
    // 0x3067a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3067a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3067a8:
    // 0x3067a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3067a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3067ac:
    // 0x3067ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3067acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3067b0:
    // 0x3067b0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3067b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3067b4:
    // 0x3067b4: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x3067b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3067b8:
    // 0x3067b8: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x3067b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3067bc:
    // 0x3067bc: 0xc0c0e8c  jal         func_303A30
label_3067c0:
    if (ctx->pc == 0x3067C0u) {
        ctx->pc = 0x3067C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067BCu;
        // 0x3067c0: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3067C4u;
        goto label_3067c4;
    }
    ctx->pc = 0x3067BCu;
    SET_GPR_U32(ctx, 31, 0x3067C4u);
    ctx->pc = 0x3067C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3067BCu;
    // 0x3067c0: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303A30u, 0x3067BCu, 0x3067C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3067C4u;
label_3067c4:
    // 0x3067c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3067c8:
    if (ctx->pc == 0x3067C8u) {
        ctx->pc = 0x3067CCu;
        goto label_3067cc;
    }
    ctx->pc = 0x3067C4u;
    {
        const bool branch_taken_0x3067c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3067c4) {
            ctx->pc = 0x3067E8u;
            goto label_3067e8;
        }
    }
    ctx->pc = 0x3067CCu;
label_3067cc:
    // 0x3067cc: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x3067ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_3067d0:
    // 0x3067d0: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x3067d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_3067d4:
    // 0x3067d4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3067d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3067d8:
    // 0x3067d8: 0x40f809  jalr        $v0
label_3067dc:
    if (ctx->pc == 0x3067DCu) {
        ctx->pc = 0x3067DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067D8u;
        // 0x3067dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3067E0u;
        goto label_3067e0;
    }
    ctx->pc = 0x3067D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3067E0u);
        ctx->pc = 0x3067DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067D8u;
        // 0x3067dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3067D8u, 0x3067E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3067E0u;
label_3067e0:
    // 0x3067e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3067e4:
    if (ctx->pc == 0x3067E4u) {
        ctx->pc = 0x3067E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067E0u;
        // 0x3067e4: 0x265202f0  addiu       $s2, $s2, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3067E8u;
        goto label_3067e8;
    }
    ctx->pc = 0x3067E0u;
    {
        const bool branch_taken_0x3067e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3067E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067E0u;
        // 0x3067e4: 0x265202f0  addiu       $s2, $s2, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3067e0) {
            ctx->pc = 0x3067F8u;
            goto label_3067f8;
        }
    }
    ctx->pc = 0x3067E8u;
label_3067e8:
    // 0x3067e8: 0xc0c0176  jal         func_3005D8
label_3067ec:
    if (ctx->pc == 0x3067ECu) {
        ctx->pc = 0x3067ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067E8u;
        // 0x3067ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3067F0u;
        goto label_3067f0;
    }
    ctx->pc = 0x3067E8u;
    SET_GPR_U32(ctx, 31, 0x3067F0u);
    ctx->pc = 0x3067ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3067E8u;
    // 0x3067ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3005D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3005D8u, 0x3067E8u, 0x3067F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3067F0u;
label_3067f0:
    // 0x3067f0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3067f4:
    if (ctx->pc == 0x3067F4u) {
        ctx->pc = 0x3067F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067F0u;
        // 0x3067f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3067F8u;
        goto label_3067f8;
    }
    ctx->pc = 0x3067F0u;
    {
        const bool branch_taken_0x3067f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3067F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067F0u;
        // 0x3067f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3067f0) {
            ctx->pc = 0x306808u;
            goto label_306808;
        }
    }
    ctx->pc = 0x3067F8u;
label_3067f8:
    // 0x3067f8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3067f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3067fc:
    // 0x3067fc: 0x1695ffca  bne         $s4, $s5, . + 4 + (-0x36 << 2)
label_306800:
    if (ctx->pc == 0x306800u) {
        ctx->pc = 0x306804u;
        goto label_306804;
    }
    ctx->pc = 0x3067FCu;
    {
        const bool branch_taken_0x3067fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        if (branch_taken_0x3067fc) {
            ctx->pc = 0x306728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306728;
        }
    }
    ctx->pc = 0x306804u;
label_306804:
    // 0x306804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306808:
    // 0x306808: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x306808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_30680c:
    // 0x30680c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x30680cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_306810:
    // 0x306810: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x306810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_306814:
    // 0x306814: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x306814u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_306818:
    // 0x306818: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x306818u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30681c:
    // 0x30681c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30681cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_306820:
    // 0x306820: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x306820u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_306824:
    // 0x306824: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x306824u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_306828:
    // 0x306828: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x306828u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30682c:
    // 0x30682c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30682cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_306830:
    // 0x306830: 0x3e00008  jr          $ra
label_306834:
    if (ctx->pc == 0x306834u) {
        ctx->pc = 0x306834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306830u;
        // 0x306834: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306838u;
        goto label_fallthrough_0x306830;
    }
    ctx->pc = 0x306830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306830u;
        // 0x306834: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x306830:
    ctx->pc = 0x306838u;
}
