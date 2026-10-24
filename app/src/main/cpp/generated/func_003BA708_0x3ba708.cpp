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

// Function: func_003BA708
// Address: 0x3ba708 - 0x3ba800
void func_003BA708_0x3ba708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BA708_0x3ba708");
#endif

    switch (ctx->pc) {
        case 0x3ba708u: goto label_3ba708;
        case 0x3ba70cu: goto label_3ba70c;
        case 0x3ba710u: goto label_3ba710;
        case 0x3ba714u: goto label_3ba714;
        case 0x3ba718u: goto label_3ba718;
        case 0x3ba71cu: goto label_3ba71c;
        case 0x3ba720u: goto label_3ba720;
        case 0x3ba724u: goto label_3ba724;
        case 0x3ba728u: goto label_3ba728;
        case 0x3ba72cu: goto label_3ba72c;
        case 0x3ba730u: goto label_3ba730;
        case 0x3ba734u: goto label_3ba734;
        case 0x3ba738u: goto label_3ba738;
        case 0x3ba73cu: goto label_3ba73c;
        case 0x3ba740u: goto label_3ba740;
        case 0x3ba744u: goto label_3ba744;
        case 0x3ba748u: goto label_3ba748;
        case 0x3ba74cu: goto label_3ba74c;
        case 0x3ba750u: goto label_3ba750;
        case 0x3ba754u: goto label_3ba754;
        case 0x3ba758u: goto label_3ba758;
        case 0x3ba75cu: goto label_3ba75c;
        case 0x3ba760u: goto label_3ba760;
        case 0x3ba764u: goto label_3ba764;
        case 0x3ba768u: goto label_3ba768;
        case 0x3ba76cu: goto label_3ba76c;
        case 0x3ba770u: goto label_3ba770;
        case 0x3ba774u: goto label_3ba774;
        case 0x3ba778u: goto label_3ba778;
        case 0x3ba77cu: goto label_3ba77c;
        case 0x3ba780u: goto label_3ba780;
        case 0x3ba784u: goto label_3ba784;
        case 0x3ba788u: goto label_3ba788;
        case 0x3ba78cu: goto label_3ba78c;
        case 0x3ba790u: goto label_3ba790;
        case 0x3ba794u: goto label_3ba794;
        case 0x3ba798u: goto label_3ba798;
        case 0x3ba79cu: goto label_3ba79c;
        case 0x3ba7a0u: goto label_3ba7a0;
        case 0x3ba7a4u: goto label_3ba7a4;
        case 0x3ba7a8u: goto label_3ba7a8;
        case 0x3ba7acu: goto label_3ba7ac;
        case 0x3ba7b0u: goto label_3ba7b0;
        case 0x3ba7b4u: goto label_3ba7b4;
        case 0x3ba7b8u: goto label_3ba7b8;
        case 0x3ba7bcu: goto label_3ba7bc;
        case 0x3ba7c0u: goto label_3ba7c0;
        case 0x3ba7c4u: goto label_3ba7c4;
        case 0x3ba7c8u: goto label_3ba7c8;
        case 0x3ba7ccu: goto label_3ba7cc;
        case 0x3ba7d0u: goto label_3ba7d0;
        case 0x3ba7d4u: goto label_3ba7d4;
        case 0x3ba7d8u: goto label_3ba7d8;
        case 0x3ba7dcu: goto label_3ba7dc;
        case 0x3ba7e0u: goto label_3ba7e0;
        case 0x3ba7e4u: goto label_3ba7e4;
        case 0x3ba7e8u: goto label_3ba7e8;
        case 0x3ba7ecu: goto label_3ba7ec;
        case 0x3ba7f0u: goto label_3ba7f0;
        case 0x3ba7f4u: goto label_3ba7f4;
        case 0x3ba7f8u: goto label_3ba7f8;
        case 0x3ba7fcu: goto label_3ba7fc;
        default: break;
    }

    ctx->pc = 0x3ba708u;

label_3ba708:
    // 0x3ba708: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ba708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ba70c:
    // 0x3ba70c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ba70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ba710:
    // 0x3ba710: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3ba710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3ba714:
    // 0x3ba714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ba714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ba718:
    // 0x3ba718: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3ba718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_3ba71c:
    // 0x3ba71c: 0x24111800  addiu       $s1, $zero, 0x1800
    ctx->pc = 0x3ba71cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
label_3ba720:
    // 0x3ba720: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3ba720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3ba724:
    // 0x3ba724: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3ba724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ba728:
    // 0x3ba728: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3ba728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_3ba72c:
    // 0x3ba72c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3ba72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3ba730:
    // 0x3ba730: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ba730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba734:
    // 0x3ba734: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3ba734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3ba738:
    // 0x3ba738: 0x40f809  jalr        $v0
label_3ba73c:
    if (ctx->pc == 0x3BA73Cu) {
        ctx->pc = 0x3BA73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA738u;
        // 0x3ba73c: 0x24061800  addiu       $a2, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA740u;
        goto label_3ba740;
    }
    ctx->pc = 0x3BA738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BA740u);
        ctx->pc = 0x3BA73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA738u;
        // 0x3ba73c: 0x24061800  addiu       $a2, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA738u, 0x3BA740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA740u;
label_3ba740:
    // 0x3ba740: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3ba740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3ba744:
    // 0x3ba744: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3ba744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3ba748:
    // 0x3ba748: 0xc0e9452  jal         func_3A5148
label_3ba74c:
    if (ctx->pc == 0x3BA74Cu) {
        ctx->pc = 0x3BA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA748u;
        // 0x3ba74c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA750u;
        goto label_3ba750;
    }
    ctx->pc = 0x3BA748u;
    SET_GPR_U32(ctx, 31, 0x3BA750u);
    ctx->pc = 0x3BA74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA748u;
    // 0x3ba74c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3BA748u, 0x3BA750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA750u;
label_3ba750:
    // 0x3ba750: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3ba750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3ba754:
    // 0x3ba754: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x3ba754u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3ba758:
    // 0x3ba758: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ba758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ba75c:
    // 0x3ba75c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ba75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba760:
    // 0x3ba760: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3ba760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ba764:
    // 0x3ba764: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3ba764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3ba768:
    // 0x3ba768: 0x40f809  jalr        $v0
label_3ba76c:
    if (ctx->pc == 0x3BA76Cu) {
        ctx->pc = 0x3BA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA768u;
        // 0x3ba76c: 0x2328823  subu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA770u;
        goto label_3ba770;
    }
    ctx->pc = 0x3BA768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BA770u);
        ctx->pc = 0x3BA76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA768u;
        // 0x3ba76c: 0x2328823  subu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA768u, 0x3BA770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA770u;
label_3ba770:
    // 0x3ba770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ba770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ba774:
    // 0x3ba774: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3ba774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ba778:
    // 0x3ba778: 0x1a200013  blez        $s1, . + 4 + (0x13 << 2)
label_3ba77c:
    if (ctx->pc == 0x3BA77Cu) {
        ctx->pc = 0x3BA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA778u;
        // 0x3ba77c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA780u;
        goto label_3ba780;
    }
    ctx->pc = 0x3BA778u;
    {
        const bool branch_taken_0x3ba778 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x3BA77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA778u;
        // 0x3ba77c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba778) {
            ctx->pc = 0x3BA7C8u;
            goto label_3ba7c8;
        }
    }
    ctx->pc = 0x3BA780u;
label_3ba780:
    // 0x3ba780: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x3ba780u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3ba784:
    // 0x3ba784: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3ba784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3ba788:
    // 0x3ba788: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x3ba788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3ba78c:
    // 0x3ba78c: 0x60f809  jalr        $v1
label_3ba790:
    if (ctx->pc == 0x3BA790u) {
        ctx->pc = 0x3BA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA78Cu;
        // 0x3ba790: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA794u;
        goto label_3ba794;
    }
    ctx->pc = 0x3BA78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3BA794u);
        ctx->pc = 0x3BA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA78Cu;
        // 0x3ba790: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA78Cu, 0x3BA794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA794u;
label_3ba794:
    // 0x3ba794: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3ba794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3ba798:
    // 0x3ba798: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3ba798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3ba79c:
    // 0x3ba79c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3ba79cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3ba7a0:
    // 0x3ba7a0: 0xc0e9452  jal         func_3A5148
label_3ba7a4:
    if (ctx->pc == 0x3BA7A4u) {
        ctx->pc = 0x3BA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA7A0u;
        // 0x3ba7a4: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA7A8u;
        goto label_3ba7a8;
    }
    ctx->pc = 0x3BA7A0u;
    SET_GPR_U32(ctx, 31, 0x3BA7A8u);
    ctx->pc = 0x3BA7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA7A0u;
    // 0x3ba7a4: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3BA7A0u, 0x3BA7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA7A8u;
label_3ba7a8:
    // 0x3ba7a8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3ba7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3ba7ac:
    // 0x3ba7ac: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x3ba7acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3ba7b0:
    // 0x3ba7b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ba7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ba7b4:
    // 0x3ba7b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ba7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ba7b8:
    // 0x3ba7b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3ba7b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ba7bc:
    // 0x3ba7bc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3ba7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3ba7c0:
    // 0x3ba7c0: 0x40f809  jalr        $v0
label_3ba7c4:
    if (ctx->pc == 0x3BA7C4u) {
        ctx->pc = 0x3BA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA7C0u;
        // 0x3ba7c4: 0x2278823  subu        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA7C8u;
        goto label_3ba7c8;
    }
    ctx->pc = 0x3BA7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BA7C8u);
        ctx->pc = 0x3BA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA7C0u;
        // 0x3ba7c4: 0x2278823  subu        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA7C0u, 0x3BA7C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BA7C8u;
label_3ba7c8:
    // 0x3ba7c8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_3ba7cc:
    if (ctx->pc == 0x3BA7CCu) {
        ctx->pc = 0x3BA7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA7C8u;
        // 0x3ba7cc: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA7D0u;
        goto label_3ba7d0;
    }
    ctx->pc = 0x3BA7C8u;
    {
        const bool branch_taken_0x3ba7c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA7C8u;
        // 0x3ba7cc: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba7c8) {
            ctx->pc = 0x3BA7E0u;
            goto label_3ba7e0;
        }
    }
    ctx->pc = 0x3BA7D0u;
label_3ba7d0:
    // 0x3ba7d0: 0xc0ee778  jal         func_3B9DE0
label_3ba7d4:
    if (ctx->pc == 0x3BA7D4u) {
        ctx->pc = 0x3BA7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA7D0u;
        // 0x3ba7d4: 0x24840a70  addiu       $a0, $a0, 0xA70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA7D8u;
        goto label_3ba7d8;
    }
    ctx->pc = 0x3BA7D0u;
    SET_GPR_U32(ctx, 31, 0x3BA7D8u);
    ctx->pc = 0x3BA7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA7D0u;
    // 0x3ba7d4: 0x24840a70  addiu       $a0, $a0, 0xA70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DE0u, 0x3BA7D0u, 0x3BA7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA7D8u;
label_3ba7d8:
    // 0x3ba7d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3ba7dc:
    if (ctx->pc == 0x3BA7DCu) {
        ctx->pc = 0x3BA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA7D8u;
        // 0x3ba7dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA7E0u;
        goto label_3ba7e0;
    }
    ctx->pc = 0x3BA7D8u;
    {
        const bool branch_taken_0x3ba7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA7D8u;
        // 0x3ba7dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba7d8) {
            ctx->pc = 0x3BA7E4u;
            goto label_3ba7e4;
        }
    }
    ctx->pc = 0x3BA7E0u;
label_3ba7e0:
    // 0x3ba7e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ba7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ba7e4:
    // 0x3ba7e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3ba7e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ba7e8:
    // 0x3ba7e8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3ba7e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3ba7ec:
    // 0x3ba7ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ba7ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ba7f0:
    // 0x3ba7f0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3ba7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3ba7f4:
    // 0x3ba7f4: 0x3e00008  jr          $ra
label_3ba7f8:
    if (ctx->pc == 0x3BA7F8u) {
        ctx->pc = 0x3BA7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA7F4u;
        // 0x3ba7f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BA7FCu;
        goto label_3ba7fc;
    }
    ctx->pc = 0x3BA7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA7F4u;
        // 0x3ba7f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA7FCu;
label_3ba7fc:
    // 0x3ba7fc: 0x0  nop
    ctx->pc = 0x3ba7fcu;
    // NOP
    ctx->pc = 0x3ba800u;
}
