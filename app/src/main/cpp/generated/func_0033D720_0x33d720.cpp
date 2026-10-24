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

// Function: func_0033D720
// Address: 0x33d720 - 0x33d870
void func_0033D720_0x33d720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033D720_0x33d720");
#endif

    switch (ctx->pc) {
        case 0x33d720u: goto label_33d720;
        case 0x33d724u: goto label_33d724;
        case 0x33d728u: goto label_33d728;
        case 0x33d72cu: goto label_33d72c;
        case 0x33d730u: goto label_33d730;
        case 0x33d734u: goto label_33d734;
        case 0x33d738u: goto label_33d738;
        case 0x33d73cu: goto label_33d73c;
        case 0x33d740u: goto label_33d740;
        case 0x33d744u: goto label_33d744;
        case 0x33d748u: goto label_33d748;
        case 0x33d74cu: goto label_33d74c;
        case 0x33d750u: goto label_33d750;
        case 0x33d754u: goto label_33d754;
        case 0x33d758u: goto label_33d758;
        case 0x33d75cu: goto label_33d75c;
        case 0x33d760u: goto label_33d760;
        case 0x33d764u: goto label_33d764;
        case 0x33d768u: goto label_33d768;
        case 0x33d76cu: goto label_33d76c;
        case 0x33d770u: goto label_33d770;
        case 0x33d774u: goto label_33d774;
        case 0x33d778u: goto label_33d778;
        case 0x33d77cu: goto label_33d77c;
        case 0x33d780u: goto label_33d780;
        case 0x33d784u: goto label_33d784;
        case 0x33d788u: goto label_33d788;
        case 0x33d78cu: goto label_33d78c;
        case 0x33d790u: goto label_33d790;
        case 0x33d794u: goto label_33d794;
        case 0x33d798u: goto label_33d798;
        case 0x33d79cu: goto label_33d79c;
        case 0x33d7a0u: goto label_33d7a0;
        case 0x33d7a4u: goto label_33d7a4;
        case 0x33d7a8u: goto label_33d7a8;
        case 0x33d7acu: goto label_33d7ac;
        case 0x33d7b0u: goto label_33d7b0;
        case 0x33d7b4u: goto label_33d7b4;
        case 0x33d7b8u: goto label_33d7b8;
        case 0x33d7bcu: goto label_33d7bc;
        case 0x33d7c0u: goto label_33d7c0;
        case 0x33d7c4u: goto label_33d7c4;
        case 0x33d7c8u: goto label_33d7c8;
        case 0x33d7ccu: goto label_33d7cc;
        case 0x33d7d0u: goto label_33d7d0;
        case 0x33d7d4u: goto label_33d7d4;
        case 0x33d7d8u: goto label_33d7d8;
        case 0x33d7dcu: goto label_33d7dc;
        case 0x33d7e0u: goto label_33d7e0;
        case 0x33d7e4u: goto label_33d7e4;
        case 0x33d7e8u: goto label_33d7e8;
        case 0x33d7ecu: goto label_33d7ec;
        case 0x33d7f0u: goto label_33d7f0;
        case 0x33d7f4u: goto label_33d7f4;
        case 0x33d7f8u: goto label_33d7f8;
        case 0x33d7fcu: goto label_33d7fc;
        case 0x33d800u: goto label_33d800;
        case 0x33d804u: goto label_33d804;
        case 0x33d808u: goto label_33d808;
        case 0x33d80cu: goto label_33d80c;
        case 0x33d810u: goto label_33d810;
        case 0x33d814u: goto label_33d814;
        case 0x33d818u: goto label_33d818;
        case 0x33d81cu: goto label_33d81c;
        case 0x33d820u: goto label_33d820;
        case 0x33d824u: goto label_33d824;
        case 0x33d828u: goto label_33d828;
        case 0x33d82cu: goto label_33d82c;
        case 0x33d830u: goto label_33d830;
        case 0x33d834u: goto label_33d834;
        case 0x33d838u: goto label_33d838;
        case 0x33d83cu: goto label_33d83c;
        case 0x33d840u: goto label_33d840;
        case 0x33d844u: goto label_33d844;
        case 0x33d848u: goto label_33d848;
        case 0x33d84cu: goto label_33d84c;
        case 0x33d850u: goto label_33d850;
        case 0x33d854u: goto label_33d854;
        case 0x33d858u: goto label_33d858;
        case 0x33d85cu: goto label_33d85c;
        case 0x33d860u: goto label_33d860;
        case 0x33d864u: goto label_33d864;
        case 0x33d868u: goto label_33d868;
        case 0x33d86cu: goto label_33d86c;
        default: break;
    }

    ctx->pc = 0x33d720u;

label_33d720:
    // 0x33d720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33d720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33d724:
    // 0x33d724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33d724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d728:
    // 0x33d728: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33d72c:
    // 0x33d72c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33d72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33d730:
    // 0x33d730: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33d730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33d734:
    // 0x33d734: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33d734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33d738:
    // 0x33d738: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33d738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_33d73c:
    // 0x33d73c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33d73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33d740:
    // 0x33d740: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33d740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33d744:
    // 0x33d744: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
label_33d748:
    if (ctx->pc == 0x33D748u) {
        ctx->pc = 0x33D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D744u;
        // 0x33d748: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D74Cu;
        goto label_33d74c;
    }
    ctx->pc = 0x33D744u;
    {
        const bool branch_taken_0x33d744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d744) {
            ctx->pc = 0x33D748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D744u;
            // 0x33d748: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D794u;
            goto label_33d794;
        }
    }
    ctx->pc = 0x33D74Cu;
label_33d74c:
    // 0x33d74c: 0xc0cfe9a  jal         func_33FA68
label_33d750:
    if (ctx->pc == 0x33D750u) {
        ctx->pc = 0x33D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D74Cu;
        // 0x33d750: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D754u;
        goto label_33d754;
    }
    ctx->pc = 0x33D74Cu;
    SET_GPR_U32(ctx, 31, 0x33D754u);
    ctx->pc = 0x33D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D74Cu;
    // 0x33d750: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FA68u, 0x33D74Cu, 0x33D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D754u;
label_33d754:
    // 0x33d754: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_33d758:
    if (ctx->pc == 0x33D758u) {
        ctx->pc = 0x33D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D754u;
        // 0x33d758: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D75Cu;
        goto label_33d75c;
    }
    ctx->pc = 0x33D754u;
    {
        const bool branch_taken_0x33d754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d754) {
            ctx->pc = 0x33D758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D754u;
            // 0x33d758: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D790u;
            goto label_33d790;
        }
    }
    ctx->pc = 0x33D75Cu;
label_33d75c:
    // 0x33d75c: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x33d75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_33d760:
    // 0x33d760: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x33d760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_33d764:
    // 0x33d764: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x33d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_33d768:
    // 0x33d768: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x33d768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_33d76c:
    // 0x33d76c: 0x40f809  jalr        $v0
label_33d770:
    if (ctx->pc == 0x33D770u) {
        ctx->pc = 0x33D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D76Cu;
        // 0x33d770: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D774u;
        goto label_33d774;
    }
    ctx->pc = 0x33D76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33D774u);
        ctx->pc = 0x33D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D76Cu;
        // 0x33d770: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D76Cu, 0x33D774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D774u;
label_33d774:
    // 0x33d774: 0xc0cf4f4  jal         func_33D3D0
label_33d778:
    if (ctx->pc == 0x33D778u) {
        ctx->pc = 0x33D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D774u;
        // 0x33d778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D77Cu;
        goto label_33d77c;
    }
    ctx->pc = 0x33D774u;
    SET_GPR_U32(ctx, 31, 0x33D77Cu);
    ctx->pc = 0x33D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D774u;
    // 0x33d778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D3D0u, 0x33D774u, 0x33D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D77Cu;
label_33d77c:
    // 0x33d77c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33d780:
    // 0x33d780: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x33d780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_33d784:
    // 0x33d784: 0x10000003  b           . + 4 + (0x3 << 2)
label_33d788:
    if (ctx->pc == 0x33D788u) {
        ctx->pc = 0x33D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D784u;
        // 0x33d788: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D78Cu;
        goto label_33d78c;
    }
    ctx->pc = 0x33D784u;
    {
        const bool branch_taken_0x33d784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D784u;
        // 0x33d788: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d784) {
            ctx->pc = 0x33D794u;
            goto label_33d794;
        }
    }
    ctx->pc = 0x33D78Cu;
label_33d78c:
    // 0x33d78c: 0x0  nop
    ctx->pc = 0x33d78cu;
    // NOP
label_33d790:
    // 0x33d790: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33d790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33d794:
    // 0x33d794: 0x54620030  bnel        $v1, $v0, . + 4 + (0x30 << 2)
label_33d798:
    if (ctx->pc == 0x33D798u) {
        ctx->pc = 0x33D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D794u;
        // 0x33d798: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D79Cu;
        goto label_33d79c;
    }
    ctx->pc = 0x33D794u;
    {
        const bool branch_taken_0x33d794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33d794) {
            ctx->pc = 0x33D798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D794u;
            // 0x33d798: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D858u;
            goto label_33d858;
        }
    }
    ctx->pc = 0x33D79Cu;
label_33d79c:
    // 0x33d79c: 0xc0cfede  jal         func_33FB78
label_33d7a0:
    if (ctx->pc == 0x33D7A0u) {
        ctx->pc = 0x33D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D79Cu;
        // 0x33d7a0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D7A4u;
        goto label_33d7a4;
    }
    ctx->pc = 0x33D79Cu;
    SET_GPR_U32(ctx, 31, 0x33D7A4u);
    ctx->pc = 0x33D7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D79Cu;
    // 0x33d7a0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FB78u, 0x33D79Cu, 0x33D7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D7A4u;
label_33d7a4:
    // 0x33d7a4: 0xc0cfe9a  jal         func_33FA68
label_33d7a8:
    if (ctx->pc == 0x33D7A8u) {
        ctx->pc = 0x33D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7A4u;
        // 0x33d7a8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D7ACu;
        goto label_33d7ac;
    }
    ctx->pc = 0x33D7A4u;
    SET_GPR_U32(ctx, 31, 0x33D7ACu);
    ctx->pc = 0x33D7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D7A4u;
    // 0x33d7a8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FA68u, 0x33D7A4u, 0x33D7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D7ACu;
label_33d7ac:
    // 0x33d7ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33d7b0:
    // 0x33d7b0: 0x54430029  bnel        $v0, $v1, . + 4 + (0x29 << 2)
label_33d7b4:
    if (ctx->pc == 0x33D7B4u) {
        ctx->pc = 0x33D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7B0u;
        // 0x33d7b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D7B8u;
        goto label_33d7b8;
    }
    ctx->pc = 0x33D7B0u;
    {
        const bool branch_taken_0x33d7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33d7b0) {
            ctx->pc = 0x33D7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D7B0u;
            // 0x33d7b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D858u;
            goto label_33d858;
        }
    }
    ctx->pc = 0x33D7B8u;
label_33d7b8:
    // 0x33d7b8: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x33d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_33d7bc:
    // 0x33d7bc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_33d7c0:
    if (ctx->pc == 0x33D7C0u) {
        ctx->pc = 0x33D7C4u;
        goto label_33d7c4;
    }
    ctx->pc = 0x33D7BCu;
    {
        const bool branch_taken_0x33d7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d7bc) {
            ctx->pc = 0x33D828u;
            goto label_33d828;
        }
    }
    ctx->pc = 0x33D7C4u;
label_33d7c4:
    // 0x33d7c4: 0xc0cf99e  jal         func_33E678
label_33d7c8:
    if (ctx->pc == 0x33D7C8u) {
        ctx->pc = 0x33D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7C4u;
        // 0x33d7c8: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D7CCu;
        goto label_33d7cc;
    }
    ctx->pc = 0x33D7C4u;
    SET_GPR_U32(ctx, 31, 0x33D7CCu);
    ctx->pc = 0x33D7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D7C4u;
    // 0x33d7c8: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x33D7C4u, 0x33D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D7CCu;
label_33d7cc:
    // 0x33d7cc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x33d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_33d7d0:
    // 0x33d7d0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x33d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_33d7d4:
    // 0x33d7d4: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_33d7d8:
    if (ctx->pc == 0x33D7D8u) {
        ctx->pc = 0x33D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7D4u;
        // 0x33d7d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D7DCu;
        goto label_33d7dc;
    }
    ctx->pc = 0x33D7D4u;
    {
        const bool branch_taken_0x33d7d4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x33D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7D4u;
        // 0x33d7d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d7d4) {
            ctx->pc = 0x33D820u;
            goto label_33d820;
        }
    }
    ctx->pc = 0x33D7DCu;
label_33d7dc:
    // 0x33d7dc: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x33d7dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
label_33d7e0:
    // 0x33d7e0: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x33d7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_33d7e4:
    // 0x33d7e4: 0x0  nop
    ctx->pc = 0x33d7e4u;
    // NOP
label_33d7e8:
    // 0x33d7e8: 0x123840  sll         $a3, $s2, 1
    ctx->pc = 0x33d7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_33d7ec:
    // 0x33d7ec: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x33d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_33d7f0:
    // 0x33d7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33d7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33d7f4:
    // 0x33d7f4: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x33d7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_33d7f8:
    // 0x33d7f8: 0x8e639d4c  lw          $v1, -0x62B4($s3)
    ctx->pc = 0x33d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294942028)));
label_33d7fc:
    // 0x33d7fc: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x33d7fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_33d800:
    // 0x33d800: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x33d800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_33d804:
    // 0x33d804: 0x60f809  jalr        $v1
label_33d808:
    if (ctx->pc == 0x33D808u) {
        ctx->pc = 0x33D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D804u;
        // 0x33d808: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D80Cu;
        goto label_33d80c;
    }
    ctx->pc = 0x33D804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33D80Cu);
        ctx->pc = 0x33D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D804u;
        // 0x33d808: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D804u, 0x33D80Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D80Cu;
label_33d80c:
    // 0x33d80c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x33d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_33d810:
    // 0x33d810: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x33d810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_33d814:
    // 0x33d814: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x33d814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_33d818:
    // 0x33d818: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_33d81c:
    if (ctx->pc == 0x33D81Cu) {
        ctx->pc = 0x33D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D818u;
        // 0x33d81c: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D820u;
        goto label_33d820;
    }
    ctx->pc = 0x33D818u;
    {
        const bool branch_taken_0x33d818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d818) {
            ctx->pc = 0x33D81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D818u;
            // 0x33d81c: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d7e8;
        }
    }
    ctx->pc = 0x33D820u;
label_33d820:
    // 0x33d820: 0xc0cf9a4  jal         func_33E690
label_33d824:
    if (ctx->pc == 0x33D824u) {
        ctx->pc = 0x33D828u;
        goto label_33d828;
    }
    ctx->pc = 0x33D820u;
    SET_GPR_U32(ctx, 31, 0x33D828u);
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x33D820u, 0x33D828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D828u;
label_33d828:
    // 0x33d828: 0xc0cf566  jal         func_33D598
label_33d82c:
    if (ctx->pc == 0x33D82Cu) {
        ctx->pc = 0x33D82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D828u;
        // 0x33d82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D830u;
        goto label_33d830;
    }
    ctx->pc = 0x33D828u;
    SET_GPR_U32(ctx, 31, 0x33D830u);
    ctx->pc = 0x33D82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D828u;
    // 0x33d82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D598u, 0x33D828u, 0x33D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D830u;
label_33d830:
    // 0x33d830: 0xc0cfed2  jal         func_33FB48
label_33d834:
    if (ctx->pc == 0x33D834u) {
        ctx->pc = 0x33D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D830u;
        // 0x33d834: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D838u;
        goto label_33d838;
    }
    ctx->pc = 0x33D830u;
    SET_GPR_U32(ctx, 31, 0x33D838u);
    ctx->pc = 0x33D834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D830u;
    // 0x33d834: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FB48u, 0x33D830u, 0x33D838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D838u;
label_33d838:
    // 0x33d838: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x33d838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_33d83c:
    // 0x33d83c: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x33d83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_33d840:
    // 0x33d840: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x33d840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_33d844:
    // 0x33d844: 0x60f809  jalr        $v1
label_33d848:
    if (ctx->pc == 0x33D848u) {
        ctx->pc = 0x33D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D844u;
        // 0x33d848: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D84Cu;
        goto label_33d84c;
    }
    ctx->pc = 0x33D844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33D84Cu);
        ctx->pc = 0x33D848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D844u;
        // 0x33d848: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D844u, 0x33D84Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D84Cu;
label_33d84c:
    // 0x33d84c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33d850:
    // 0x33d850: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x33d850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_33d854:
    // 0x33d854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33d858:
    // 0x33d858: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33d858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33d85c:
    // 0x33d85c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33d85cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33d860:
    // 0x33d860: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33d860u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33d864:
    // 0x33d864: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33d864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33d868:
    // 0x33d868: 0x3e00008  jr          $ra
label_33d86c:
    if (ctx->pc == 0x33D86Cu) {
        ctx->pc = 0x33D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D868u;
        // 0x33d86c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D870u;
        goto label_fallthrough_0x33d868;
    }
    ctx->pc = 0x33D868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D868u;
        // 0x33d86c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33d868:
    ctx->pc = 0x33D870u;
}
