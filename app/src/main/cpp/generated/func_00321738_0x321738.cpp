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

// Function: func_00321738
// Address: 0x321738 - 0x3217b8
void func_00321738_0x321738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00321738_0x321738");
#endif

    switch (ctx->pc) {
        case 0x321738u: goto label_321738;
        case 0x32173cu: goto label_32173c;
        case 0x321740u: goto label_321740;
        case 0x321744u: goto label_321744;
        case 0x321748u: goto label_321748;
        case 0x32174cu: goto label_32174c;
        case 0x321750u: goto label_321750;
        case 0x321754u: goto label_321754;
        case 0x321758u: goto label_321758;
        case 0x32175cu: goto label_32175c;
        case 0x321760u: goto label_321760;
        case 0x321764u: goto label_321764;
        case 0x321768u: goto label_321768;
        case 0x32176cu: goto label_32176c;
        case 0x321770u: goto label_321770;
        case 0x321774u: goto label_321774;
        case 0x321778u: goto label_321778;
        case 0x32177cu: goto label_32177c;
        case 0x321780u: goto label_321780;
        case 0x321784u: goto label_321784;
        case 0x321788u: goto label_321788;
        case 0x32178cu: goto label_32178c;
        case 0x321790u: goto label_321790;
        case 0x321794u: goto label_321794;
        case 0x321798u: goto label_321798;
        case 0x32179cu: goto label_32179c;
        case 0x3217a0u: goto label_3217a0;
        case 0x3217a4u: goto label_3217a4;
        case 0x3217a8u: goto label_3217a8;
        case 0x3217acu: goto label_3217ac;
        case 0x3217b0u: goto label_3217b0;
        case 0x3217b4u: goto label_3217b4;
        default: break;
    }

    ctx->pc = 0x321738u;

label_321738:
    // 0x321738: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x321738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_32173c:
    // 0x32173c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x32173cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_321740:
    // 0x321740: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x321740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_321744:
    // 0x321744: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x321744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_321748:
    // 0x321748: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x321748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_32174c:
    // 0x32174c: 0x24511008  addiu       $s1, $v0, 0x1008
    ctx->pc = 0x32174cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4104));
label_321750:
    // 0x321750: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x321750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_321754:
    // 0x321754: 0x3c120045  lui         $s2, 0x45
    ctx->pc = 0x321754u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)69 << 16));
label_321758:
    // 0x321758: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x321758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_32175c:
    // 0x32175c: 0xc0c84b0  jal         func_3212C0
label_321760:
    if (ctx->pc == 0x321760u) {
        ctx->pc = 0x321760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32175Cu;
        // 0x321760: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321764u;
        goto label_321764;
    }
    ctx->pc = 0x32175Cu;
    SET_GPR_U32(ctx, 31, 0x321764u);
    ctx->pc = 0x321760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32175Cu;
    // 0x321760: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3212C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3212C0u, 0x32175Cu, 0x321764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321764u;
label_321764:
    // 0x321764: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321768:
    // 0x321768: 0x10000003  b           . + 4 + (0x3 << 2)
label_32176c:
    if (ctx->pc == 0x32176Cu) {
        ctx->pc = 0x32176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321768u;
        // 0x32176c: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321770u;
        goto label_321770;
    }
    ctx->pc = 0x321768u;
    {
        const bool branch_taken_0x321768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321768u;
        // 0x32176c: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321768) {
            ctx->pc = 0x321778u;
            goto label_321778;
        }
    }
    ctx->pc = 0x321770u;
label_321770:
    // 0x321770: 0xc0c8386  jal         func_320E18
label_321774:
    if (ctx->pc == 0x321774u) {
        ctx->pc = 0x321778u;
        goto label_321778;
    }
    ctx->pc = 0x321770u;
    SET_GPR_U32(ctx, 31, 0x321778u);
    ctx->pc = 0x320E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E18u, 0x321770u, 0x321778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321778u;
label_321778:
    // 0x321778: 0x26421288  addiu       $v0, $s2, 0x1288
    ctx->pc = 0x321778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4744));
label_32177c:
    // 0x32177c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x32177cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_321780:
    // 0x321780: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x321780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321784:
    // 0x321784: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x321784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_321788:
    // 0x321788: 0x40f809  jalr        $v0
label_32178c:
    if (ctx->pc == 0x32178Cu) {
        ctx->pc = 0x321790u;
        goto label_321790;
    }
    ctx->pc = 0x321788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321790u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321788u, 0x321790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321790u;
label_321790:
    // 0x321790: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x321790u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
label_321794:
    // 0x321794: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x321794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321798:
    // 0x321798: 0x24c6f330  addiu       $a2, $a2, -0xCD0
    ctx->pc = 0x321798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964016));
label_32179c:
    // 0x32179c: 0xc0c84de  jal         func_321378
label_3217a0:
    if (ctx->pc == 0x3217A0u) {
        ctx->pc = 0x3217A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32179Cu;
        // 0x3217a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3217A4u;
        goto label_3217a4;
    }
    ctx->pc = 0x32179Cu;
    SET_GPR_U32(ctx, 31, 0x3217A4u);
    ctx->pc = 0x3217A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32179Cu;
    // 0x3217a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321378u, 0x32179Cu, 0x3217A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3217A4u;
label_3217a4:
    // 0x3217a4: 0xc0c8386  jal         func_320E18
label_3217a8:
    if (ctx->pc == 0x3217A8u) {
        ctx->pc = 0x3217ACu;
        goto label_3217ac;
    }
    ctx->pc = 0x3217A4u;
    SET_GPR_U32(ctx, 31, 0x3217ACu);
    ctx->pc = 0x320E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E18u, 0x3217A4u, 0x3217ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3217ACu;
label_3217ac:
    // 0x3217ac: 0x26421288  addiu       $v0, $s2, 0x1288
    ctx->pc = 0x3217acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4744));
label_3217b0:
    // 0x3217b0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
label_3217b4:
    if (ctx->pc == 0x3217B4u) {
        ctx->pc = 0x3217B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217B0u;
        // 0x3217b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3217B8u;
        goto label_fallthrough_0x3217b0;
    }
    ctx->pc = 0x3217B0u;
    {
        const bool branch_taken_0x3217b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3217B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217B0u;
        // 0x3217b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3217b0) {
            ctx->pc = 0x321770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321770;
        }
    }
label_fallthrough_0x3217b0:
    ctx->pc = 0x3217B8u;
}
