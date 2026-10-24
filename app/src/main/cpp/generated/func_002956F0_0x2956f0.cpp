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

// Function: func_002956F0
// Address: 0x2956f0 - 0x295860
void func_002956F0_0x2956f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002956F0_0x2956f0");
#endif

    switch (ctx->pc) {
        case 0x2956f0u: goto label_2956f0;
        case 0x2956f4u: goto label_2956f4;
        case 0x2956f8u: goto label_2956f8;
        case 0x2956fcu: goto label_2956fc;
        case 0x295700u: goto label_295700;
        case 0x295704u: goto label_295704;
        case 0x295708u: goto label_295708;
        case 0x29570cu: goto label_29570c;
        case 0x295710u: goto label_295710;
        case 0x295714u: goto label_295714;
        case 0x295718u: goto label_295718;
        case 0x29571cu: goto label_29571c;
        case 0x295720u: goto label_295720;
        case 0x295724u: goto label_295724;
        case 0x295728u: goto label_295728;
        case 0x29572cu: goto label_29572c;
        case 0x295730u: goto label_295730;
        case 0x295734u: goto label_295734;
        case 0x295738u: goto label_295738;
        case 0x29573cu: goto label_29573c;
        case 0x295740u: goto label_295740;
        case 0x295744u: goto label_295744;
        case 0x295748u: goto label_295748;
        case 0x29574cu: goto label_29574c;
        case 0x295750u: goto label_295750;
        case 0x295754u: goto label_295754;
        case 0x295758u: goto label_295758;
        case 0x29575cu: goto label_29575c;
        case 0x295760u: goto label_295760;
        case 0x295764u: goto label_295764;
        case 0x295768u: goto label_295768;
        case 0x29576cu: goto label_29576c;
        case 0x295770u: goto label_295770;
        case 0x295774u: goto label_295774;
        case 0x295778u: goto label_295778;
        case 0x29577cu: goto label_29577c;
        case 0x295780u: goto label_295780;
        case 0x295784u: goto label_295784;
        case 0x295788u: goto label_295788;
        case 0x29578cu: goto label_29578c;
        case 0x295790u: goto label_295790;
        case 0x295794u: goto label_295794;
        case 0x295798u: goto label_295798;
        case 0x29579cu: goto label_29579c;
        case 0x2957a0u: goto label_2957a0;
        case 0x2957a4u: goto label_2957a4;
        case 0x2957a8u: goto label_2957a8;
        case 0x2957acu: goto label_2957ac;
        case 0x2957b0u: goto label_2957b0;
        case 0x2957b4u: goto label_2957b4;
        case 0x2957b8u: goto label_2957b8;
        case 0x2957bcu: goto label_2957bc;
        case 0x2957c0u: goto label_2957c0;
        case 0x2957c4u: goto label_2957c4;
        case 0x2957c8u: goto label_2957c8;
        case 0x2957ccu: goto label_2957cc;
        case 0x2957d0u: goto label_2957d0;
        case 0x2957d4u: goto label_2957d4;
        case 0x2957d8u: goto label_2957d8;
        case 0x2957dcu: goto label_2957dc;
        case 0x2957e0u: goto label_2957e0;
        case 0x2957e4u: goto label_2957e4;
        case 0x2957e8u: goto label_2957e8;
        case 0x2957ecu: goto label_2957ec;
        case 0x2957f0u: goto label_2957f0;
        case 0x2957f4u: goto label_2957f4;
        case 0x2957f8u: goto label_2957f8;
        case 0x2957fcu: goto label_2957fc;
        case 0x295800u: goto label_295800;
        case 0x295804u: goto label_295804;
        case 0x295808u: goto label_295808;
        case 0x29580cu: goto label_29580c;
        case 0x295810u: goto label_295810;
        case 0x295814u: goto label_295814;
        case 0x295818u: goto label_295818;
        case 0x29581cu: goto label_29581c;
        case 0x295820u: goto label_295820;
        case 0x295824u: goto label_295824;
        case 0x295828u: goto label_295828;
        case 0x29582cu: goto label_29582c;
        case 0x295830u: goto label_295830;
        case 0x295834u: goto label_295834;
        case 0x295838u: goto label_295838;
        case 0x29583cu: goto label_29583c;
        case 0x295840u: goto label_295840;
        case 0x295844u: goto label_295844;
        case 0x295848u: goto label_295848;
        case 0x29584cu: goto label_29584c;
        case 0x295850u: goto label_295850;
        case 0x295854u: goto label_295854;
        case 0x295858u: goto label_295858;
        case 0x29585cu: goto label_29585c;
        default: break;
    }

    ctx->pc = 0x2956f0u;

label_2956f0:
    // 0x2956f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2956f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2956f4:
    // 0x2956f4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2956f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2956f8:
    // 0x2956f8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2956f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2956fc:
    // 0x2956fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2956fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_295700:
    // 0x295700: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x295700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_295704:
    // 0x295704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_295708:
    // 0x295708: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x295708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29570c:
    // 0x29570c: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x29570cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_295710:
    // 0x295710: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x295710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_295714:
    // 0x295714: 0x1043004d  beq         $v0, $v1, . + 4 + (0x4D << 2)
label_295718:
    if (ctx->pc == 0x295718u) {
        ctx->pc = 0x295718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295714u;
        // 0x295718: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29571Cu;
        goto label_29571c;
    }
    ctx->pc = 0x295714u;
    {
        const bool branch_taken_0x295714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x295718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295714u;
        // 0x295718: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295714) {
            ctx->pc = 0x29584Cu;
            goto label_29584c;
        }
    }
    ctx->pc = 0x29571Cu;
label_29571c:
    // 0x29571c: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_295720:
    if (ctx->pc == 0x295720u) {
        ctx->pc = 0x295720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29571Cu;
        // 0x295720: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295724u;
        goto label_295724;
    }
    ctx->pc = 0x29571Cu;
    {
        const bool branch_taken_0x29571c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x295720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29571Cu;
        // 0x295720: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29571c) {
            ctx->pc = 0x295850u;
            goto label_295850;
        }
    }
    ctx->pc = 0x295724u;
label_295724:
    // 0x295724: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x295724u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
label_295728:
    // 0x295728: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x295728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_29572c:
    // 0x29572c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_295730:
    if (ctx->pc == 0x295730u) {
        ctx->pc = 0x295730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29572Cu;
        // 0x295730: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295734u;
        goto label_295734;
    }
    ctx->pc = 0x29572Cu;
    {
        const bool branch_taken_0x29572c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29572Cu;
        // 0x295730: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29572c) {
            ctx->pc = 0x29573Cu;
            goto label_29573c;
        }
    }
    ctx->pc = 0x295734u;
label_295734:
    // 0x295734: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x295734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_295738:
    // 0x295738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x295738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29573c:
    // 0x29573c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x29573cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_295740:
    // 0x295740: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_295744:
    if (ctx->pc == 0x295744u) {
        ctx->pc = 0x295744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295740u;
        // 0x295744: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295748u;
        goto label_295748;
    }
    ctx->pc = 0x295740u;
    {
        const bool branch_taken_0x295740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295740u;
        // 0x295744: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295740) {
            ctx->pc = 0x295850u;
            goto label_295850;
        }
    }
    ctx->pc = 0x295748u;
label_295748:
    // 0x295748: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x295748u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_29574c:
    // 0x29574c: 0x18400040  blez        $v0, . + 4 + (0x40 << 2)
label_295750:
    if (ctx->pc == 0x295750u) {
        ctx->pc = 0x295750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29574Cu;
        // 0x295750: 0x24020220  addiu       $v0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295754u;
        goto label_295754;
    }
    ctx->pc = 0x29574Cu;
    {
        const bool branch_taken_0x29574c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x295750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29574Cu;
        // 0x295750: 0x24020220  addiu       $v0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29574c) {
            ctx->pc = 0x295850u;
            goto label_295850;
        }
    }
    ctx->pc = 0x295754u;
label_295754:
    // 0x295754: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_295758:
    if (ctx->pc == 0x295758u) {
        ctx->pc = 0x295758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295754u;
        // 0x295758: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29575Cu;
        goto label_29575c;
    }
    ctx->pc = 0x295754u;
    {
        const bool branch_taken_0x295754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x295758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295754u;
        // 0x295758: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295754) {
            ctx->pc = 0x295764u;
            goto label_295764;
        }
    }
    ctx->pc = 0x29575Cu;
label_29575c:
    // 0x29575c: 0x5462003d  bnel        $v1, $v0, . + 4 + (0x3D << 2)
label_295760:
    if (ctx->pc == 0x295760u) {
        ctx->pc = 0x295760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29575Cu;
        // 0x295760: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295764u;
        goto label_295764;
    }
    ctx->pc = 0x29575Cu;
    {
        const bool branch_taken_0x29575c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29575c) {
            ctx->pc = 0x295760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29575Cu;
            // 0x295760: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295854u;
            goto label_295854;
        }
    }
    ctx->pc = 0x295764u;
label_295764:
    // 0x295764: 0xc0a5598  jal         func_295660
label_295768:
    if (ctx->pc == 0x295768u) {
        ctx->pc = 0x295768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295764u;
        // 0x295768: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29576Cu;
        goto label_29576c;
    }
    ctx->pc = 0x295764u;
    SET_GPR_U32(ctx, 31, 0x29576Cu);
    ctx->pc = 0x295768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295764u;
    // 0x295768: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295660u, 0x295764u, 0x29576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29576Cu;
label_29576c:
    // 0x29576c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29576cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_295770:
    // 0x295770: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
label_295774:
    if (ctx->pc == 0x295774u) {
        ctx->pc = 0x295774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295770u;
        // 0x295774: 0x26241620  addiu       $a0, $s1, 0x1620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295778u;
        goto label_295778;
    }
    ctx->pc = 0x295770u;
    {
        const bool branch_taken_0x295770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x295774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295770u;
        // 0x295774: 0x26241620  addiu       $a0, $s1, 0x1620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295770) {
            ctx->pc = 0x29584Cu;
            goto label_29584c;
        }
    }
    ctx->pc = 0x295778u;
label_295778:
    // 0x295778: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x295778u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
label_29577c:
    // 0x29577c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x29577cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_295780:
    // 0x295780: 0xa2030012  sb          $v1, 0x12($s0)
    ctx->pc = 0x295780u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 3));
label_295784:
    // 0x295784: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x295784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_295788:
    // 0x295788: 0xa2020011  sb          $v0, 0x11($s0)
    ctx->pc = 0x295788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
label_29578c:
    // 0x29578c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x29578cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_295790:
    // 0x295790: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x295790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_295794:
    // 0x295794: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x295794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_295798:
    // 0x295798: 0xa2050010  sb          $a1, 0x10($s0)
    ctx->pc = 0x295798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 5));
label_29579c:
    // 0x29579c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x29579cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2957a0:
    // 0x2957a0: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x2957a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_2957a4:
    // 0x2957a4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2957a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2957a8:
    // 0x2957a8: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x2957a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2957ac:
    // 0x2957ac: 0x40f809  jalr        $v0
label_2957b0:
    if (ctx->pc == 0x2957B0u) {
        ctx->pc = 0x2957B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2957ACu;
        // 0x2957b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2957B4u;
        goto label_2957b4;
    }
    ctx->pc = 0x2957ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2957B4u);
        ctx->pc = 0x2957B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2957ACu;
        // 0x2957b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2957ACu, 0x2957B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2957B4u;
label_2957b4:
    // 0x2957b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2957b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2957b8:
    // 0x2957b8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2957b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_2957bc:
    // 0x2957bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2957bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2957c0:
    // 0x2957c0: 0x0  nop
    ctx->pc = 0x2957c0u;
    // NOP
label_2957c4:
    // 0x2957c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2957c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2957c8:
    // 0x2957c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2957c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2957cc:
    // 0x2957cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2957ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2957d0:
    // 0x2957d0: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2957d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_2957d4:
    // 0x2957d4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2957d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2957d8:
    // 0x2957d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2957d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2957dc:
    // 0x2957dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2957dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2957e0:
    // 0x2957e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2957e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2957e4:
    // 0x2957e4: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x2957e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_2957e8:
    // 0x2957e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2957e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2957ec:
    // 0x2957ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2957ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2957f0:
    // 0x2957f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2957f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2957f4:
    // 0x2957f4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2957f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2957f8:
    // 0x2957f8: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2957f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_2957fc:
    // 0x2957fc: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x2957fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_295800:
    // 0x295800: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x295800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_295804:
    // 0x295804: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x295804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_295808:
    // 0x295808: 0x40f809  jalr        $v0
label_29580c:
    if (ctx->pc == 0x29580Cu) {
        ctx->pc = 0x29580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295808u;
        // 0x29580c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295810u;
        goto label_295810;
    }
    ctx->pc = 0x295808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x295810u);
        ctx->pc = 0x29580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295808u;
        // 0x29580c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295808u, 0x295810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x295810u;
label_295810:
    // 0x295810: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x295810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295814:
    // 0x295814: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x295814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_295818:
    // 0x295818: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x295818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_29581c:
    // 0x29581c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29581cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_295820:
    // 0x295820: 0x0  nop
    ctx->pc = 0x295820u;
    // NOP
label_295824:
    // 0x295824: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x295824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_295828:
    // 0x295828: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x295828u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_29582c:
    // 0x29582c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x29582cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_295830:
    // 0x295830: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x295830u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_295834:
    // 0x295834: 0x8624054a  lh          $a0, 0x54A($s1)
    ctx->pc = 0x295834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_295838:
    // 0x295838: 0x58800002  blezl       $a0, . + 4 + (0x2 << 2)
label_29583c:
    if (ctx->pc == 0x29583Cu) {
        ctx->pc = 0x29583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295838u;
        // 0x29583c: 0xa6000016  sh          $zero, 0x16($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295840u;
        goto label_295840;
    }
    ctx->pc = 0x295838u;
    {
        const bool branch_taken_0x295838 = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x295838) {
            ctx->pc = 0x29583Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295838u;
            // 0x29583c: 0xa6000016  sh          $zero, 0x16($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295844u;
            goto label_295844;
        }
    }
    ctx->pc = 0x295840u;
label_295840:
    // 0x295840: 0xa6040016  sh          $a0, 0x16($s0)
    ctx->pc = 0x295840u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 4));
label_295844:
    // 0x295844: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x295844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_295848:
    // 0x295848: 0xa2020013  sb          $v0, 0x13($s0)
    ctx->pc = 0x295848u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
label_29584c:
    // 0x29584c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29584cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_295850:
    // 0x295850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x295850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_295854:
    // 0x295854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_295858:
    // 0x295858: 0x3e00008  jr          $ra
label_29585c:
    if (ctx->pc == 0x29585Cu) {
        ctx->pc = 0x29585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295858u;
        // 0x29585c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295860u;
        goto label_fallthrough_0x295858;
    }
    ctx->pc = 0x295858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295858u;
        // 0x29585c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x295858:
    ctx->pc = 0x295860u;
}
