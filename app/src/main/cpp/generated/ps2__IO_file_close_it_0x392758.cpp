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

// Function: _IO_file_close_it
// Address: 0x392758 - 0x392830
void ps2__IO_file_close_it_0x392758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_file_close_it_0x392758");
#endif

    switch (ctx->pc) {
        case 0x392758u: goto label_392758;
        case 0x39275cu: goto label_39275c;
        case 0x392760u: goto label_392760;
        case 0x392764u: goto label_392764;
        case 0x392768u: goto label_392768;
        case 0x39276cu: goto label_39276c;
        case 0x392770u: goto label_392770;
        case 0x392774u: goto label_392774;
        case 0x392778u: goto label_392778;
        case 0x39277cu: goto label_39277c;
        case 0x392780u: goto label_392780;
        case 0x392784u: goto label_392784;
        case 0x392788u: goto label_392788;
        case 0x39278cu: goto label_39278c;
        case 0x392790u: goto label_392790;
        case 0x392794u: goto label_392794;
        case 0x392798u: goto label_392798;
        case 0x39279cu: goto label_39279c;
        case 0x3927a0u: goto label_3927a0;
        case 0x3927a4u: goto label_3927a4;
        case 0x3927a8u: goto label_3927a8;
        case 0x3927acu: goto label_3927ac;
        case 0x3927b0u: goto label_3927b0;
        case 0x3927b4u: goto label_3927b4;
        case 0x3927b8u: goto label_3927b8;
        case 0x3927bcu: goto label_3927bc;
        case 0x3927c0u: goto label_3927c0;
        case 0x3927c4u: goto label_3927c4;
        case 0x3927c8u: goto label_3927c8;
        case 0x3927ccu: goto label_3927cc;
        case 0x3927d0u: goto label_3927d0;
        case 0x3927d4u: goto label_3927d4;
        case 0x3927d8u: goto label_3927d8;
        case 0x3927dcu: goto label_3927dc;
        case 0x3927e0u: goto label_3927e0;
        case 0x3927e4u: goto label_3927e4;
        case 0x3927e8u: goto label_3927e8;
        case 0x3927ecu: goto label_3927ec;
        case 0x3927f0u: goto label_3927f0;
        case 0x3927f4u: goto label_3927f4;
        case 0x3927f8u: goto label_3927f8;
        case 0x3927fcu: goto label_3927fc;
        case 0x392800u: goto label_392800;
        case 0x392804u: goto label_392804;
        case 0x392808u: goto label_392808;
        case 0x39280cu: goto label_39280c;
        case 0x392810u: goto label_392810;
        case 0x392814u: goto label_392814;
        case 0x392818u: goto label_392818;
        case 0x39281cu: goto label_39281c;
        case 0x392820u: goto label_392820;
        case 0x392824u: goto label_392824;
        case 0x392828u: goto label_392828;
        case 0x39282cu: goto label_39282c;
        default: break;
    }

    ctx->pc = 0x392758u;

label_392758:
    // 0x392758: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x392758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_39275c:
    // 0x39275c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39275cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_392760:
    // 0x392760: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x392760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_392764:
    // 0x392764: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x392764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_392768:
    // 0x392768: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x392768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_39276c:
    // 0x39276c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39276cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_392770:
    // 0x392770: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x392770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_392774:
    // 0x392774: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_392778:
    if (ctx->pc == 0x392778u) {
        ctx->pc = 0x392778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392774u;
        // 0x392778: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39277Cu;
        goto label_39277c;
    }
    ctx->pc = 0x392774u;
    {
        const bool branch_taken_0x392774 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x392774) {
            ctx->pc = 0x392778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392774u;
            // 0x392778: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392784u;
            goto label_392784;
        }
    }
    ctx->pc = 0x39277Cu;
label_39277c:
    // 0x39277c: 0x10000023  b           . + 4 + (0x23 << 2)
label_392780:
    if (ctx->pc == 0x392780u) {
        ctx->pc = 0x392780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39277Cu;
        // 0x392780: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392784u;
        goto label_392784;
    }
    ctx->pc = 0x39277Cu;
    {
        const bool branch_taken_0x39277c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39277Cu;
        // 0x392780: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39277c) {
            ctx->pc = 0x39280Cu;
            goto label_39280c;
        }
    }
    ctx->pc = 0x392784u;
label_392784:
    // 0x392784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x392784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_392788:
    // 0x392788: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x392788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_39278c:
    // 0x39278c: 0xc0e4aa0  jal         func_392A80
label_392790:
    if (ctx->pc == 0x392790u) {
        ctx->pc = 0x392790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39278Cu;
        // 0x392790: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392794u;
        goto label_392794;
    }
    ctx->pc = 0x39278Cu;
    SET_GPR_U32(ctx, 31, 0x392794u);
    ctx->pc = 0x392790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39278Cu;
    // 0x392790: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392A80u, 0x39278Cu, 0x392794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392794u;
label_392794:
    // 0x392794: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x392794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392798:
    // 0x392798: 0xc0e3450  jal         func_38D140
label_39279c:
    if (ctx->pc == 0x39279Cu) {
        ctx->pc = 0x39279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392798u;
        // 0x39279c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3927A0u;
        goto label_3927a0;
    }
    ctx->pc = 0x392798u;
    SET_GPR_U32(ctx, 31, 0x3927A0u);
    ctx->pc = 0x39279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392798u;
    // 0x39279c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D140u, 0x392798u, 0x3927A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3927A0u;
label_3927a0:
    // 0x3927a0: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x3927a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_3927a4:
    // 0x3927a4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x3927a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_3927a8:
    // 0x3927a8: 0x40f809  jalr        $v0
label_3927ac:
    if (ctx->pc == 0x3927ACu) {
        ctx->pc = 0x3927ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927A8u;
        // 0x3927ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3927B0u;
        goto label_3927b0;
    }
    ctx->pc = 0x3927A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3927B0u);
        ctx->pc = 0x3927ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927A8u;
        // 0x3927ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3927A8u, 0x3927B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3927B0u;
label_3927b0:
    // 0x3927b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3927b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3927b4:
    // 0x3927b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3927b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3927b8:
    // 0x3927b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3927b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3927bc:
    // 0x3927bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3927bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3927c0:
    // 0x3927c0: 0xc0e31da  jal         func_38C768
label_3927c4:
    if (ctx->pc == 0x3927C4u) {
        ctx->pc = 0x3927C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927C0u;
        // 0x3927c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3927C8u;
        goto label_3927c8;
    }
    ctx->pc = 0x3927C0u;
    SET_GPR_U32(ctx, 31, 0x3927C8u);
    ctx->pc = 0x3927C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3927C0u;
    // 0x3927c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C768u, 0x3927C0u, 0x3927C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3927C8u;
label_3927c8:
    // 0x3927c8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x3927c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_3927cc:
    // 0x3927cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3927ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3927d0:
    // 0x3927d0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3927d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3927d4:
    // 0x3927d4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3927d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_3927d8:
    // 0x3927d8: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3927d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_3927dc:
    // 0x3927dc: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x3927dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_3927e0:
    // 0x3927e0: 0xc0e306a  jal         func_38C1A8
label_3927e4:
    if (ctx->pc == 0x3927E4u) {
        ctx->pc = 0x3927E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927E0u;
        // 0x3927e4: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3927E8u;
        goto label_3927e8;
    }
    ctx->pc = 0x3927E0u;
    SET_GPR_U32(ctx, 31, 0x3927E8u);
    ctx->pc = 0x3927E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3927E0u;
    // 0x3927e4: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C1A8u, 0x3927E0u, 0x3927E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3927E8u;
label_3927e8:
    // 0x3927e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3927e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3927ec:
    // 0x3927ec: 0x3c03fbad  lui         $v1, 0xFBAD
    ctx->pc = 0x3927ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64429 << 16));
label_3927f0:
    // 0x3927f0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3927f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3927f4:
    // 0x3927f4: 0x3463240c  ori         $v1, $v1, 0x240C
    ctx->pc = 0x3927f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9228);
label_3927f8:
    // 0x3927f8: 0xfe420040  sd          $v0, 0x40($s2)
    ctx->pc = 0x3927f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
label_3927fc:
    // 0x3927fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3927fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_392800:
    // 0x392800: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x392800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_392804:
    // 0x392804: 0xae440038  sw          $a0, 0x38($s2)
    ctx->pc = 0x392804u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 4));
label_392808:
    // 0x392808: 0x210100b  movn        $v0, $s0, $s0
    ctx->pc = 0x392808u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_39280c:
    // 0x39280c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39280cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_392810:
    // 0x392810: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x392810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_392814:
    // 0x392814: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x392814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_392818:
    // 0x392818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x392818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39281c:
    // 0x39281c: 0x3e00008  jr          $ra
label_392820:
    if (ctx->pc == 0x392820u) {
        ctx->pc = 0x392820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39281Cu;
        // 0x392820: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392824u;
        goto label_392824;
    }
    ctx->pc = 0x39281Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39281Cu;
        // 0x392820: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39281Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392824u;
label_392824:
    // 0x392824: 0x0  nop
    ctx->pc = 0x392824u;
    // NOP
label_392828:
    // 0x392828: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x392828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_39282c:
    // 0x39282c: 0x0  nop
    ctx->pc = 0x39282cu;
    // NOP
    ctx->pc = 0x392830u;
}
