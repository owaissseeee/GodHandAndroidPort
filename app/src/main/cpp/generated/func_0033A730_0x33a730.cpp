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

// Function: func_0033A730
// Address: 0x33a730 - 0x33a880
void func_0033A730_0x33a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A730_0x33a730");
#endif

    switch (ctx->pc) {
        case 0x33a730u: goto label_33a730;
        case 0x33a734u: goto label_33a734;
        case 0x33a738u: goto label_33a738;
        case 0x33a73cu: goto label_33a73c;
        case 0x33a740u: goto label_33a740;
        case 0x33a744u: goto label_33a744;
        case 0x33a748u: goto label_33a748;
        case 0x33a74cu: goto label_33a74c;
        case 0x33a750u: goto label_33a750;
        case 0x33a754u: goto label_33a754;
        case 0x33a758u: goto label_33a758;
        case 0x33a75cu: goto label_33a75c;
        case 0x33a760u: goto label_33a760;
        case 0x33a764u: goto label_33a764;
        case 0x33a768u: goto label_33a768;
        case 0x33a76cu: goto label_33a76c;
        case 0x33a770u: goto label_33a770;
        case 0x33a774u: goto label_33a774;
        case 0x33a778u: goto label_33a778;
        case 0x33a77cu: goto label_33a77c;
        case 0x33a780u: goto label_33a780;
        case 0x33a784u: goto label_33a784;
        case 0x33a788u: goto label_33a788;
        case 0x33a78cu: goto label_33a78c;
        case 0x33a790u: goto label_33a790;
        case 0x33a794u: goto label_33a794;
        case 0x33a798u: goto label_33a798;
        case 0x33a79cu: goto label_33a79c;
        case 0x33a7a0u: goto label_33a7a0;
        case 0x33a7a4u: goto label_33a7a4;
        case 0x33a7a8u: goto label_33a7a8;
        case 0x33a7acu: goto label_33a7ac;
        case 0x33a7b0u: goto label_33a7b0;
        case 0x33a7b4u: goto label_33a7b4;
        case 0x33a7b8u: goto label_33a7b8;
        case 0x33a7bcu: goto label_33a7bc;
        case 0x33a7c0u: goto label_33a7c0;
        case 0x33a7c4u: goto label_33a7c4;
        case 0x33a7c8u: goto label_33a7c8;
        case 0x33a7ccu: goto label_33a7cc;
        case 0x33a7d0u: goto label_33a7d0;
        case 0x33a7d4u: goto label_33a7d4;
        case 0x33a7d8u: goto label_33a7d8;
        case 0x33a7dcu: goto label_33a7dc;
        case 0x33a7e0u: goto label_33a7e0;
        case 0x33a7e4u: goto label_33a7e4;
        case 0x33a7e8u: goto label_33a7e8;
        case 0x33a7ecu: goto label_33a7ec;
        case 0x33a7f0u: goto label_33a7f0;
        case 0x33a7f4u: goto label_33a7f4;
        case 0x33a7f8u: goto label_33a7f8;
        case 0x33a7fcu: goto label_33a7fc;
        case 0x33a800u: goto label_33a800;
        case 0x33a804u: goto label_33a804;
        case 0x33a808u: goto label_33a808;
        case 0x33a80cu: goto label_33a80c;
        case 0x33a810u: goto label_33a810;
        case 0x33a814u: goto label_33a814;
        case 0x33a818u: goto label_33a818;
        case 0x33a81cu: goto label_33a81c;
        case 0x33a820u: goto label_33a820;
        case 0x33a824u: goto label_33a824;
        case 0x33a828u: goto label_33a828;
        case 0x33a82cu: goto label_33a82c;
        case 0x33a830u: goto label_33a830;
        case 0x33a834u: goto label_33a834;
        case 0x33a838u: goto label_33a838;
        case 0x33a83cu: goto label_33a83c;
        case 0x33a840u: goto label_33a840;
        case 0x33a844u: goto label_33a844;
        case 0x33a848u: goto label_33a848;
        case 0x33a84cu: goto label_33a84c;
        case 0x33a850u: goto label_33a850;
        case 0x33a854u: goto label_33a854;
        case 0x33a858u: goto label_33a858;
        case 0x33a85cu: goto label_33a85c;
        case 0x33a860u: goto label_33a860;
        case 0x33a864u: goto label_33a864;
        case 0x33a868u: goto label_33a868;
        case 0x33a86cu: goto label_33a86c;
        case 0x33a870u: goto label_33a870;
        case 0x33a874u: goto label_33a874;
        case 0x33a878u: goto label_33a878;
        case 0x33a87cu: goto label_33a87c;
        default: break;
    }

    ctx->pc = 0x33a730u;

label_33a730:
    // 0x33a730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33a730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_33a734:
    // 0x33a734: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x33a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_33a738:
    // 0x33a738: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x33a738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_33a73c:
    // 0x33a73c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x33a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_33a740:
    // 0x33a740: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x33a740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_33a744:
    // 0x33a744: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_33a748:
    if (ctx->pc == 0x33A748u) {
        ctx->pc = 0x33A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A744u;
        // 0x33a748: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A74Cu;
        goto label_33a74c;
    }
    ctx->pc = 0x33A744u;
    {
        const bool branch_taken_0x33a744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A744u;
        // 0x33a748: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a744) {
            ctx->pc = 0x33A768u;
            goto label_33a768;
        }
    }
    ctx->pc = 0x33A74Cu;
label_33a74c:
    // 0x33a74c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33a74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33a750:
    // 0x33a750: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33a750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_33a754:
    // 0x33a754: 0x24845ca8  addiu       $a0, $a0, 0x5CA8
    ctx->pc = 0x33a754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23720));
label_33a758:
    // 0x33a758: 0xc0ce812  jal         func_33A048
label_33a75c:
    if (ctx->pc == 0x33A75Cu) {
        ctx->pc = 0x33A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A758u;
        // 0x33a75c: 0x24a55bd8  addiu       $a1, $a1, 0x5BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A760u;
        goto label_33a760;
    }
    ctx->pc = 0x33A758u;
    SET_GPR_U32(ctx, 31, 0x33A760u);
    ctx->pc = 0x33A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A758u;
    // 0x33a75c: 0x24a55bd8  addiu       $a1, $a1, 0x5BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A048u, 0x33A758u, 0x33A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A760u;
label_33a760:
    // 0x33a760: 0x10000042  b           . + 4 + (0x42 << 2)
label_33a764:
    if (ctx->pc == 0x33A764u) {
        ctx->pc = 0x33A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A760u;
        // 0x33a764: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A768u;
        goto label_33a768;
    }
    ctx->pc = 0x33A760u;
    {
        const bool branch_taken_0x33a760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A760u;
        // 0x33a764: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a760) {
            ctx->pc = 0x33A86Cu;
            goto label_33a86c;
        }
    }
    ctx->pc = 0x33A768u;
label_33a768:
    // 0x33a768: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x33a768u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_33a76c:
    // 0x33a76c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_33a770:
    if (ctx->pc == 0x33A770u) {
        ctx->pc = 0x33A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A76Cu;
        // 0x33a770: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A774u;
        goto label_33a774;
    }
    ctx->pc = 0x33A76Cu;
    {
        const bool branch_taken_0x33a76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A76Cu;
        // 0x33a770: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a76c) {
            ctx->pc = 0x33A790u;
            goto label_33a790;
        }
    }
    ctx->pc = 0x33A774u;
label_33a774:
    // 0x33a774: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33a774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33a778:
    // 0x33a778: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33a778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_33a77c:
    // 0x33a77c: 0x24845cb8  addiu       $a0, $a0, 0x5CB8
    ctx->pc = 0x33a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23736));
label_33a780:
    // 0x33a780: 0xc0ce812  jal         func_33A048
label_33a784:
    if (ctx->pc == 0x33A784u) {
        ctx->pc = 0x33A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A780u;
        // 0x33a784: 0x24a55c08  addiu       $a1, $a1, 0x5C08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A788u;
        goto label_33a788;
    }
    ctx->pc = 0x33A780u;
    SET_GPR_U32(ctx, 31, 0x33A788u);
    ctx->pc = 0x33A784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A780u;
    // 0x33a784: 0x24a55c08  addiu       $a1, $a1, 0x5C08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A048u, 0x33A780u, 0x33A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A788u;
label_33a788:
    // 0x33a788: 0x10000038  b           . + 4 + (0x38 << 2)
label_33a78c:
    if (ctx->pc == 0x33A78Cu) {
        ctx->pc = 0x33A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A788u;
        // 0x33a78c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A790u;
        goto label_33a790;
    }
    ctx->pc = 0x33A788u;
    {
        const bool branch_taken_0x33a788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A788u;
        // 0x33a78c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a788) {
            ctx->pc = 0x33A86Cu;
            goto label_33a86c;
        }
    }
    ctx->pc = 0x33A790u;
label_33a790:
    // 0x33a790: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_33a794:
    if (ctx->pc == 0x33A794u) {
        ctx->pc = 0x33A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A790u;
        // 0x33a794: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A798u;
        goto label_33a798;
    }
    ctx->pc = 0x33A790u;
    {
        const bool branch_taken_0x33a790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A790u;
        // 0x33a794: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a790) {
            ctx->pc = 0x33A7B8u;
            goto label_33a7b8;
        }
    }
    ctx->pc = 0x33A798u;
label_33a798:
    // 0x33a798: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x33a798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_33a79c:
    // 0x33a79c: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_33a7a0:
    if (ctx->pc == 0x33A7A0u) {
        ctx->pc = 0x33A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A79Cu;
        // 0x33a7a0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A7A4u;
        goto label_33a7a4;
    }
    ctx->pc = 0x33A79Cu;
    {
        const bool branch_taken_0x33a79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a79c) {
            ctx->pc = 0x33A7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A79Cu;
            // 0x33a7a0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A864u;
            goto label_33a864;
        }
    }
    ctx->pc = 0x33A7A4u;
label_33a7a4:
    // 0x33a7a4: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x33a7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_33a7a8:
    // 0x33a7a8: 0x40f809  jalr        $v0
label_33a7ac:
    if (ctx->pc == 0x33A7ACu) {
        ctx->pc = 0x33A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7A8u;
        // 0x33a7ac: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A7B0u;
        goto label_33a7b0;
    }
    ctx->pc = 0x33A7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A7B0u);
        ctx->pc = 0x33A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7A8u;
        // 0x33a7ac: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A7A8u, 0x33A7B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A7B0u;
label_33a7b0:
    // 0x33a7b0: 0x1000002c  b           . + 4 + (0x2C << 2)
label_33a7b4:
    if (ctx->pc == 0x33A7B4u) {
        ctx->pc = 0x33A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7B0u;
        // 0x33a7b4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A7B8u;
        goto label_33a7b8;
    }
    ctx->pc = 0x33A7B0u;
    {
        const bool branch_taken_0x33a7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7B0u;
        // 0x33a7b4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a7b0) {
            ctx->pc = 0x33A864u;
            goto label_33a864;
        }
    }
    ctx->pc = 0x33A7B8u;
label_33a7b8:
    // 0x33a7b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_33a7bc:
    // 0x33a7bc: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x33a7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_33a7c0:
    // 0x33a7c0: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x33a7c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33a7c4:
    // 0x33a7c4: 0x10e00026  beqz        $a3, . + 4 + (0x26 << 2)
label_33a7c8:
    if (ctx->pc == 0x33A7C8u) {
        ctx->pc = 0x33A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7C4u;
        // 0x33a7c8: 0x24f20008  addiu       $s2, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A7CCu;
        goto label_33a7cc;
    }
    ctx->pc = 0x33A7C4u;
    {
        const bool branch_taken_0x33a7c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7C4u;
        // 0x33a7c8: 0x24f20008  addiu       $s2, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a7c4) {
            ctx->pc = 0x33A860u;
            goto label_33a860;
        }
    }
    ctx->pc = 0x33A7CCu;
label_33a7cc:
    // 0x33a7cc: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x33a7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_33a7d0:
    // 0x33a7d0: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x33a7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_33a7d4:
    // 0x33a7d4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x33a7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_33a7d8:
    // 0x33a7d8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x33a7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_33a7dc:
    // 0x33a7dc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x33a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_33a7e0:
    // 0x33a7e0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x33a7e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_33a7e4:
    // 0x33a7e4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_33a7e8:
    if (ctx->pc == 0x33A7E8u) {
        ctx->pc = 0x33A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A7E4u;
        // 0x33a7e8: 0x80830005  lb          $v1, 0x5($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A7ECu;
        goto label_33a7ec;
    }
    ctx->pc = 0x33A7E4u;
    {
        const bool branch_taken_0x33a7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a7e4) {
            ctx->pc = 0x33A7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A7E4u;
            // 0x33a7e8: 0x80830005  lb          $v1, 0x5($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A818u;
            goto label_33a818;
        }
    }
    ctx->pc = 0x33A7ECu;
label_33a7ec:
    // 0x33a7ec: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x33a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33a7f0:
    // 0x33a7f0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x33a7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_33a7f4:
    // 0x33a7f4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x33a7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_33a7f8:
    // 0x33a7f8: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x33a7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_33a7fc:
    // 0x33a7fc: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x33a7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_33a800:
    // 0x33a800: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x33a800u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_33a804:
    // 0x33a804: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x33a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_33a808:
    // 0x33a808: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33a808u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_33a80c:
    // 0x33a80c: 0x10000016  b           . + 4 + (0x16 << 2)
label_33a810:
    if (ctx->pc == 0x33A810u) {
        ctx->pc = 0x33A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A80Cu;
        // 0x33a810: 0xac870014  sw          $a3, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A814u;
        goto label_33a814;
    }
    ctx->pc = 0x33A80Cu;
    {
        const bool branch_taken_0x33a80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A80Cu;
        // 0x33a810: 0xac870014  sw          $a3, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a80c) {
            ctx->pc = 0x33A868u;
            goto label_33a868;
        }
    }
    ctx->pc = 0x33A814u;
label_33a814:
    // 0x33a814: 0x0  nop
    ctx->pc = 0x33a814u;
    // NOP
label_33a818:
    // 0x33a818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33a818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33a81c:
    // 0x33a81c: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_33a820:
    if (ctx->pc == 0x33A820u) {
        ctx->pc = 0x33A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A81Cu;
        // 0x33a820: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A824u;
        goto label_33a824;
    }
    ctx->pc = 0x33A81Cu;
    {
        const bool branch_taken_0x33a81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33a81c) {
            ctx->pc = 0x33A820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A81Cu;
            // 0x33a820: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A864u;
            goto label_33a864;
        }
    }
    ctx->pc = 0x33A824u;
label_33a824:
    // 0x33a824: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x33a824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33a828:
    // 0x33a828: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x33a828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33a82c:
    // 0x33a82c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33a82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33a830:
    // 0x33a830: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33a830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33a834:
    // 0x33a834: 0xc0ceb28  jal         func_33ACA0
label_33a838:
    if (ctx->pc == 0x33A838u) {
        ctx->pc = 0x33A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A834u;
        // 0x33a838: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A83Cu;
        goto label_33a83c;
    }
    ctx->pc = 0x33A834u;
    SET_GPR_U32(ctx, 31, 0x33A83Cu);
    ctx->pc = 0x33A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A834u;
    // 0x33a838: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x33A834u, 0x33A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A83Cu;
label_33a83c:
    // 0x33a83c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x33a83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_33a840:
    // 0x33a840: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x33a840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_33a844:
    // 0x33a844: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x33a844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_33a848:
    // 0x33a848: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x33a848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_33a84c:
    // 0x33a84c: 0x6a060007  ldl         $a2, 0x7($s0)
    ctx->pc = 0x33a84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_33a850:
    // 0x33a850: 0x6e060000  ldr         $a2, 0x0($s0)
    ctx->pc = 0x33a850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_33a854:
    // 0x33a854: 0xb2460007  sdl         $a2, 0x7($s2)
    ctx->pc = 0x33a854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_33a858:
    // 0x33a858: 0x10000003  b           . + 4 + (0x3 << 2)
label_33a85c:
    if (ctx->pc == 0x33A85Cu) {
        ctx->pc = 0x33A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A858u;
        // 0x33a85c: 0xb6460000  sdr         $a2, 0x0($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A860u;
        goto label_33a860;
    }
    ctx->pc = 0x33A858u;
    {
        const bool branch_taken_0x33a858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A858u;
        // 0x33a85c: 0xb6460000  sdr         $a2, 0x0($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a858) {
            ctx->pc = 0x33A868u;
            goto label_33a868;
        }
    }
    ctx->pc = 0x33A860u;
label_33a860:
    // 0x33a860: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x33a860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_33a864:
    // 0x33a864: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x33a864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_33a868:
    // 0x33a868: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x33a868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33a86c:
    // 0x33a86c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x33a86cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_33a870:
    // 0x33a870: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x33a870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_33a874:
    // 0x33a874: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x33a874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_33a878:
    // 0x33a878: 0x3e00008  jr          $ra
label_33a87c:
    if (ctx->pc == 0x33A87Cu) {
        ctx->pc = 0x33A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A878u;
        // 0x33a87c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A880u;
        goto label_fallthrough_0x33a878;
    }
    ctx->pc = 0x33A878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A878u;
        // 0x33a87c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33a878:
    ctx->pc = 0x33A880u;
}
