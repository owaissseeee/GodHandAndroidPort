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

// Function: _decodeOrSkipField
// Address: 0x39a720 - 0x39a8e8
void _decodeOrSkipField_0x39a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decodeOrSkipField_0x39a720");
#endif

    switch (ctx->pc) {
        case 0x39a720u: goto label_39a720;
        case 0x39a724u: goto label_39a724;
        case 0x39a728u: goto label_39a728;
        case 0x39a72cu: goto label_39a72c;
        case 0x39a730u: goto label_39a730;
        case 0x39a734u: goto label_39a734;
        case 0x39a738u: goto label_39a738;
        case 0x39a73cu: goto label_39a73c;
        case 0x39a740u: goto label_39a740;
        case 0x39a744u: goto label_39a744;
        case 0x39a748u: goto label_39a748;
        case 0x39a74cu: goto label_39a74c;
        case 0x39a750u: goto label_39a750;
        case 0x39a754u: goto label_39a754;
        case 0x39a758u: goto label_39a758;
        case 0x39a75cu: goto label_39a75c;
        case 0x39a760u: goto label_39a760;
        case 0x39a764u: goto label_39a764;
        case 0x39a768u: goto label_39a768;
        case 0x39a76cu: goto label_39a76c;
        case 0x39a770u: goto label_39a770;
        case 0x39a774u: goto label_39a774;
        case 0x39a778u: goto label_39a778;
        case 0x39a77cu: goto label_39a77c;
        case 0x39a780u: goto label_39a780;
        case 0x39a784u: goto label_39a784;
        case 0x39a788u: goto label_39a788;
        case 0x39a78cu: goto label_39a78c;
        case 0x39a790u: goto label_39a790;
        case 0x39a794u: goto label_39a794;
        case 0x39a798u: goto label_39a798;
        case 0x39a79cu: goto label_39a79c;
        case 0x39a7a0u: goto label_39a7a0;
        case 0x39a7a4u: goto label_39a7a4;
        case 0x39a7a8u: goto label_39a7a8;
        case 0x39a7acu: goto label_39a7ac;
        case 0x39a7b0u: goto label_39a7b0;
        case 0x39a7b4u: goto label_39a7b4;
        case 0x39a7b8u: goto label_39a7b8;
        case 0x39a7bcu: goto label_39a7bc;
        case 0x39a7c0u: goto label_39a7c0;
        case 0x39a7c4u: goto label_39a7c4;
        case 0x39a7c8u: goto label_39a7c8;
        case 0x39a7ccu: goto label_39a7cc;
        case 0x39a7d0u: goto label_39a7d0;
        case 0x39a7d4u: goto label_39a7d4;
        case 0x39a7d8u: goto label_39a7d8;
        case 0x39a7dcu: goto label_39a7dc;
        case 0x39a7e0u: goto label_39a7e0;
        case 0x39a7e4u: goto label_39a7e4;
        case 0x39a7e8u: goto label_39a7e8;
        case 0x39a7ecu: goto label_39a7ec;
        case 0x39a7f0u: goto label_39a7f0;
        case 0x39a7f4u: goto label_39a7f4;
        case 0x39a7f8u: goto label_39a7f8;
        case 0x39a7fcu: goto label_39a7fc;
        case 0x39a800u: goto label_39a800;
        case 0x39a804u: goto label_39a804;
        case 0x39a808u: goto label_39a808;
        case 0x39a80cu: goto label_39a80c;
        case 0x39a810u: goto label_39a810;
        case 0x39a814u: goto label_39a814;
        case 0x39a818u: goto label_39a818;
        case 0x39a81cu: goto label_39a81c;
        case 0x39a820u: goto label_39a820;
        case 0x39a824u: goto label_39a824;
        case 0x39a828u: goto label_39a828;
        case 0x39a82cu: goto label_39a82c;
        case 0x39a830u: goto label_39a830;
        case 0x39a834u: goto label_39a834;
        case 0x39a838u: goto label_39a838;
        case 0x39a83cu: goto label_39a83c;
        case 0x39a840u: goto label_39a840;
        case 0x39a844u: goto label_39a844;
        case 0x39a848u: goto label_39a848;
        case 0x39a84cu: goto label_39a84c;
        case 0x39a850u: goto label_39a850;
        case 0x39a854u: goto label_39a854;
        case 0x39a858u: goto label_39a858;
        case 0x39a85cu: goto label_39a85c;
        case 0x39a860u: goto label_39a860;
        case 0x39a864u: goto label_39a864;
        case 0x39a868u: goto label_39a868;
        case 0x39a86cu: goto label_39a86c;
        case 0x39a870u: goto label_39a870;
        case 0x39a874u: goto label_39a874;
        case 0x39a878u: goto label_39a878;
        case 0x39a87cu: goto label_39a87c;
        case 0x39a880u: goto label_39a880;
        case 0x39a884u: goto label_39a884;
        case 0x39a888u: goto label_39a888;
        case 0x39a88cu: goto label_39a88c;
        case 0x39a890u: goto label_39a890;
        case 0x39a894u: goto label_39a894;
        case 0x39a898u: goto label_39a898;
        case 0x39a89cu: goto label_39a89c;
        case 0x39a8a0u: goto label_39a8a0;
        case 0x39a8a4u: goto label_39a8a4;
        case 0x39a8a8u: goto label_39a8a8;
        case 0x39a8acu: goto label_39a8ac;
        case 0x39a8b0u: goto label_39a8b0;
        case 0x39a8b4u: goto label_39a8b4;
        case 0x39a8b8u: goto label_39a8b8;
        case 0x39a8bcu: goto label_39a8bc;
        case 0x39a8c0u: goto label_39a8c0;
        case 0x39a8c4u: goto label_39a8c4;
        case 0x39a8c8u: goto label_39a8c8;
        case 0x39a8ccu: goto label_39a8cc;
        case 0x39a8d0u: goto label_39a8d0;
        case 0x39a8d4u: goto label_39a8d4;
        case 0x39a8d8u: goto label_39a8d8;
        case 0x39a8dcu: goto label_39a8dc;
        case 0x39a8e0u: goto label_39a8e0;
        case 0x39a8e4u: goto label_39a8e4;
        default: break;
    }

    ctx->pc = 0x39a720u;

label_39a720:
    // 0x39a720: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x39a720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_39a724:
    // 0x39a724: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39a724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39a728:
    // 0x39a728: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x39a728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_39a72c:
    // 0x39a72c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x39a72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_39a730:
    // 0x39a730: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39a730u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a734:
    // 0x39a734: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x39a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_39a738:
    // 0x39a738: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39a738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a73c:
    // 0x39a73c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x39a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_39a740:
    // 0x39a740: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x39a740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_39a744:
    // 0x39a744: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x39a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_39a748:
    // 0x39a748: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x39a748u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_39a74c:
    // 0x39a74c: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_39a750:
    if (ctx->pc == 0x39A750u) {
        ctx->pc = 0x39A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A74Cu;
        // 0x39a750: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A754u;
        goto label_39a754;
    }
    ctx->pc = 0x39A74Cu;
    {
        const bool branch_taken_0x39a74c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x39A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A74Cu;
        // 0x39a750: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a74c) {
            ctx->pc = 0x39A760u;
            goto label_39a760;
        }
    }
    ctx->pc = 0x39A754u;
label_39a754:
    // 0x39a754: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x39a754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_39a758:
    // 0x39a758: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_39a75c:
    if (ctx->pc == 0x39A75Cu) {
        ctx->pc = 0x39A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A758u;
        // 0x39a75c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A760u;
        goto label_39a760;
    }
    ctx->pc = 0x39A758u;
    {
        const bool branch_taken_0x39a758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a758) {
            ctx->pc = 0x39A75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A758u;
            // 0x39a75c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A768u;
            goto label_39a768;
        }
    }
    ctx->pc = 0x39A760u;
label_39a760:
    // 0x39a760: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x39a760u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a764:
    // 0x39a764: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x39a764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39a768:
    // 0x39a768: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_39a76c:
    if (ctx->pc == 0x39A76Cu) {
        ctx->pc = 0x39A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A768u;
        // 0x39a76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A770u;
        goto label_39a770;
    }
    ctx->pc = 0x39A768u;
    {
        const bool branch_taken_0x39a768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A768u;
        // 0x39a76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a768) {
            ctx->pc = 0x39A77Cu;
            goto label_39a77c;
        }
    }
    ctx->pc = 0x39A770u;
label_39a770:
    // 0x39a770: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x39a770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_39a774:
    // 0x39a774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a778:
    // 0x39a778: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x39a778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_39a77c:
    // 0x39a77c: 0xc0e68be  jal         func_39A2F8
label_39a780:
    if (ctx->pc == 0x39A780u) {
        ctx->pc = 0x39A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A77Cu;
        // 0x39a780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A784u;
        goto label_39a784;
    }
    ctx->pc = 0x39A77Cu;
    SET_GPR_U32(ctx, 31, 0x39A784u);
    ctx->pc = 0x39A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A77Cu;
    // 0x39a780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A2F8u, 0x39A77Cu, 0x39A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A784u;
label_39a784:
    // 0x39a784: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_39a788:
    if (ctx->pc == 0x39A788u) {
        ctx->pc = 0x39A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A784u;
        // 0x39a788: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A78Cu;
        goto label_39a78c;
    }
    ctx->pc = 0x39A784u;
    {
        const bool branch_taken_0x39a784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a784) {
            ctx->pc = 0x39A788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A784u;
            // 0x39a788: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A7A0u;
            goto label_39a7a0;
        }
    }
    ctx->pc = 0x39A78Cu;
label_39a78c:
    // 0x39a78c: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
label_39a790:
    if (ctx->pc == 0x39A790u) {
        ctx->pc = 0x39A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A78Cu;
        // 0x39a790: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A794u;
        goto label_39a794;
    }
    ctx->pc = 0x39A78Cu;
    {
        const bool branch_taken_0x39a78c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a78c) {
            ctx->pc = 0x39A790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A78Cu;
            // 0x39a790: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A7A0u;
            goto label_39a7a0;
        }
    }
    ctx->pc = 0x39A794u;
label_39a794:
    // 0x39a794: 0xc0e6b36  jal         func_39ACD8
label_39a798:
    if (ctx->pc == 0x39A798u) {
        ctx->pc = 0x39A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A794u;
        // 0x39a798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A79Cu;
        goto label_39a79c;
    }
    ctx->pc = 0x39A794u;
    SET_GPR_U32(ctx, 31, 0x39A79Cu);
    ctx->pc = 0x39A798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A794u;
    // 0x39a798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ACD8u, 0x39A794u, 0x39A79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A79Cu;
label_39a79c:
    // 0x39a79c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x39a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_39a7a0:
    // 0x39a7a0: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_39a7a4:
    if (ctx->pc == 0x39A7A4u) {
        ctx->pc = 0x39A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7A0u;
        // 0x39a7a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A7A8u;
        goto label_39a7a8;
    }
    ctx->pc = 0x39A7A0u;
    {
        const bool branch_taken_0x39a7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7A0u;
        // 0x39a7a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a7a0) {
            ctx->pc = 0x39A8C4u;
            goto label_39a8c4;
        }
    }
    ctx->pc = 0x39A7A8u;
label_39a7a8:
    // 0x39a7a8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x39a7a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a7ac:
    // 0x39a7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39a7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a7b0:
    // 0x39a7b0: 0xc0e838a  jal         func_3A0E28
label_39a7b4:
    if (ctx->pc == 0x39A7B4u) {
        ctx->pc = 0x39A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7B0u;
        // 0x39a7b4: 0xae120130  sw          $s2, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A7B8u;
        goto label_39a7b8;
    }
    ctx->pc = 0x39A7B0u;
    SET_GPR_U32(ctx, 31, 0x39A7B8u);
    ctx->pc = 0x39A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A7B0u;
    // 0x39a7b4: 0xae120130  sw          $s2, 0x130($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0E28u, 0x39A7B0u, 0x39A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A7B8u;
label_39a7b8:
    // 0x39a7b8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_39a7bc:
    if (ctx->pc == 0x39A7BCu) {
        ctx->pc = 0x39A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7B8u;
        // 0x39a7bc: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A7C0u;
        goto label_39a7c0;
    }
    ctx->pc = 0x39A7B8u;
    {
        const bool branch_taken_0x39a7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a7b8) {
            ctx->pc = 0x39A7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A7B8u;
            // 0x39a7bc: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A7D4u;
            goto label_39a7d4;
        }
    }
    ctx->pc = 0x39A7C0u;
label_39a7c0:
    // 0x39a7c0: 0xc0e6e04  jal         func_39B810
label_39a7c4:
    if (ctx->pc == 0x39A7C4u) {
        ctx->pc = 0x39A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7C0u;
        // 0x39a7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A7C8u;
        goto label_39a7c8;
    }
    ctx->pc = 0x39A7C0u;
    SET_GPR_U32(ctx, 31, 0x39A7C8u);
    ctx->pc = 0x39A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A7C0u;
    // 0x39a7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B810u, 0x39A7C0u, 0x39A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A7C8u;
label_39a7c8:
    // 0x39a7c8: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x39a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_39a7cc:
    // 0x39a7cc: 0x1000003d  b           . + 4 + (0x3D << 2)
label_39a7d0:
    if (ctx->pc == 0x39A7D0u) {
        ctx->pc = 0x39A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7CCu;
        // 0x39a7d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A7D4u;
        goto label_39a7d4;
    }
    ctx->pc = 0x39A7CCu;
    {
        const bool branch_taken_0x39a7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7CCu;
        // 0x39a7d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a7cc) {
            ctx->pc = 0x39A8C4u;
            goto label_39a8c4;
        }
    }
    ctx->pc = 0x39A7D4u;
label_39a7d4:
    // 0x39a7d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39a7d8:
    // 0x39a7d8: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x39a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_39a7dc:
    // 0x39a7dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x39a7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_39a7e0:
    // 0x39a7e0: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x39a7e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
label_39a7e4:
    // 0x39a7e4: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
label_39a7e8:
    if (ctx->pc == 0x39A7E8u) {
        ctx->pc = 0x39A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7E4u;
        // 0x39a7e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A7ECu;
        goto label_39a7ec;
    }
    ctx->pc = 0x39A7E4u;
    {
        const bool branch_taken_0x39a7e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x39A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7E4u;
        // 0x39a7e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a7e4) {
            ctx->pc = 0x39A8C4u;
            goto label_39a8c4;
        }
    }
    ctx->pc = 0x39A7ECu;
label_39a7ec:
    // 0x39a7ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39a7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a7f0:
    // 0x39a7f0: 0xc0e68be  jal         func_39A2F8
label_39a7f4:
    if (ctx->pc == 0x39A7F4u) {
        ctx->pc = 0x39A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7F0u;
        // 0x39a7f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A7F8u;
        goto label_39a7f8;
    }
    ctx->pc = 0x39A7F0u;
    SET_GPR_U32(ctx, 31, 0x39A7F8u);
    ctx->pc = 0x39A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A7F0u;
    // 0x39a7f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A2F8u, 0x39A7F0u, 0x39A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A7F8u;
label_39a7f8:
    // 0x39a7f8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x39a7f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a7fc:
    // 0x39a7fc: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x39a7fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
label_39a800:
    // 0x39a800: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_39a804:
    if (ctx->pc == 0x39A804u) {
        ctx->pc = 0x39A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A800u;
        // 0x39a804: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A808u;
        goto label_39a808;
    }
    ctx->pc = 0x39A800u;
    {
        const bool branch_taken_0x39a800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A800u;
        // 0x39a804: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a800) {
            ctx->pc = 0x39A81Cu;
            goto label_39a81c;
        }
    }
    ctx->pc = 0x39A808u;
label_39a808:
    // 0x39a808: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
label_39a80c:
    if (ctx->pc == 0x39A80Cu) {
        ctx->pc = 0x39A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A808u;
        // 0x39a80c: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A810u;
        goto label_39a810;
    }
    ctx->pc = 0x39A808u;
    {
        const bool branch_taken_0x39a808 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a808) {
            ctx->pc = 0x39A80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A808u;
            // 0x39a80c: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A820u;
            goto label_39a820;
        }
    }
    ctx->pc = 0x39A810u;
label_39a810:
    // 0x39a810: 0xc0e6b36  jal         func_39ACD8
label_39a814:
    if (ctx->pc == 0x39A814u) {
        ctx->pc = 0x39A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A810u;
        // 0x39a814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A818u;
        goto label_39a818;
    }
    ctx->pc = 0x39A810u;
    SET_GPR_U32(ctx, 31, 0x39A818u);
    ctx->pc = 0x39A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A810u;
    // 0x39a814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ACD8u, 0x39A810u, 0x39A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A818u;
label_39a818:
    // 0x39a818: 0x242a00b  movn        $s4, $s2, $v0
    ctx->pc = 0x39a818u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 18));
label_39a81c:
    // 0x39a81c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x39a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_39a820:
    // 0x39a820: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_39a824:
    if (ctx->pc == 0x39A824u) {
        ctx->pc = 0x39A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A820u;
        // 0x39a824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A828u;
        goto label_39a828;
    }
    ctx->pc = 0x39A820u;
    {
        const bool branch_taken_0x39a820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A820u;
        // 0x39a824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a820) {
            ctx->pc = 0x39A8C4u;
            goto label_39a8c4;
        }
    }
    ctx->pc = 0x39A828u;
label_39a828:
    // 0x39a828: 0x8e050128  lw          $a1, 0x128($s0)
    ctx->pc = 0x39a828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_39a82c:
    // 0x39a82c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39a82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a830:
    // 0x39a830: 0xc0e6e34  jal         func_39B8D0
label_39a834:
    if (ctx->pc == 0x39A834u) {
        ctx->pc = 0x39A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A830u;
        // 0x39a834: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A838u;
        goto label_39a838;
    }
    ctx->pc = 0x39A830u;
    SET_GPR_U32(ctx, 31, 0x39A838u);
    ctx->pc = 0x39A834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A830u;
    // 0x39a834: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B8D0u, 0x39A830u, 0x39A838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A838u;
label_39a838:
    // 0x39a838: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x39a838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_39a83c:
    // 0x39a83c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x39a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_39a840:
    // 0x39a840: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x39a840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_39a844:
    // 0x39a844: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x39a844u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39a848:
    // 0x39a848: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x39a848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_39a84c:
    // 0x39a84c: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x39a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_39a850:
    // 0x39a850: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x39a850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39a854:
    // 0x39a854: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39a854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_39a858:
    // 0x39a858: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39a858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_39a85c:
    // 0x39a85c: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x39a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
label_39a860:
    // 0x39a860: 0x16600017  bnez        $s3, . + 4 + (0x17 << 2)
label_39a864:
    if (ctx->pc == 0x39A864u) {
        ctx->pc = 0x39A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A860u;
        // 0x39a864: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A868u;
        goto label_39a868;
    }
    ctx->pc = 0x39A860u;
    {
        const bool branch_taken_0x39a860 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A860u;
        // 0x39a864: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a860) {
            ctx->pc = 0x39A8C0u;
            goto label_39a8c0;
        }
    }
    ctx->pc = 0x39A868u;
label_39a868:
    // 0x39a868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a86c:
    // 0x39a86c: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_39a870:
    if (ctx->pc == 0x39A870u) {
        ctx->pc = 0x39A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A86Cu;
        // 0x39a870: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A874u;
        goto label_39a874;
    }
    ctx->pc = 0x39A86Cu;
    {
        const bool branch_taken_0x39a86c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A86Cu;
        // 0x39a870: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a86c) {
            ctx->pc = 0x39A8C0u;
            goto label_39a8c0;
        }
    }
    ctx->pc = 0x39A874u;
label_39a874:
    // 0x39a874: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x39a874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_39a878:
    // 0x39a878: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_39a87c:
    if (ctx->pc == 0x39A87Cu) {
        ctx->pc = 0x39A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A878u;
        // 0x39a87c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A880u;
        goto label_39a880;
    }
    ctx->pc = 0x39A878u;
    {
        const bool branch_taken_0x39a878 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A878u;
        // 0x39a87c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a878) {
            ctx->pc = 0x39A8C4u;
            goto label_39a8c4;
        }
    }
    ctx->pc = 0x39A880u;
label_39a880:
    // 0x39a880: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x39a880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_39a884:
    // 0x39a884: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_39a888:
    if (ctx->pc == 0x39A888u) {
        ctx->pc = 0x39A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A884u;
        // 0x39a888: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A88Cu;
        goto label_39a88c;
    }
    ctx->pc = 0x39A884u;
    {
        const bool branch_taken_0x39a884 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A884u;
        // 0x39a888: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a884) {
            ctx->pc = 0x39A8C8u;
            goto label_39a8c8;
        }
    }
    ctx->pc = 0x39A88Cu;
label_39a88c:
    // 0x39a88c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x39a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_39a890:
    // 0x39a890: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x39a890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_39a894:
    // 0x39a894: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x39a894u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39a898:
    // 0x39a898: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39a898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39a89c:
    // 0x39a89c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x39a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_39a8a0:
    // 0x39a8a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39a8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39a8a4:
    // 0x39a8a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39a8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39a8a8:
    // 0x39a8a8: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x39a8a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_39a8ac:
    // 0x39a8ac: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x39a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_39a8b0:
    // 0x39a8b0: 0xe0f809  jalr        $a3
label_39a8b4:
    if (ctx->pc == 0x39A8B4u) {
        ctx->pc = 0x39A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8B0u;
        // 0x39a8b4: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A8B8u;
        goto label_39a8b8;
    }
    ctx->pc = 0x39A8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x39A8B8u);
        ctx->pc = 0x39A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8B0u;
        // 0x39a8b4: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A8B0u, 0x39A8B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A8B8u;
label_39a8b8:
    // 0x39a8b8: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x39a8b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_39a8bc:
    // 0x39a8bc: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x39a8bcu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a8c0:
    // 0x39a8c0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x39a8c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39a8c4:
    // 0x39a8c4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x39a8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_39a8c8:
    // 0x39a8c8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x39a8c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_39a8cc:
    // 0x39a8cc: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x39a8ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_39a8d0:
    // 0x39a8d0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x39a8d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39a8d4:
    // 0x39a8d4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x39a8d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39a8d8:
    // 0x39a8d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x39a8d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39a8dc:
    // 0x39a8dc: 0x3e00008  jr          $ra
label_39a8e0:
    if (ctx->pc == 0x39A8E0u) {
        ctx->pc = 0x39A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8DCu;
        // 0x39a8e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A8E4u;
        goto label_39a8e4;
    }
    ctx->pc = 0x39A8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8DCu;
        // 0x39a8e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A8E4u;
label_39a8e4:
    // 0x39a8e4: 0x0  nop
    ctx->pc = 0x39a8e4u;
    // NOP
    ctx->pc = 0x39a8e8u;
}
