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

// Function: func_00337728
// Address: 0x337728 - 0x337a00
void func_00337728_0x337728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00337728_0x337728");
#endif

    switch (ctx->pc) {
        case 0x3377a0u: goto label_3377a0;
        case 0x3377a8u: goto label_3377a8;
        case 0x3377b0u: goto label_3377b0;
        case 0x3377b8u: goto label_3377b8;
        case 0x3377c0u: goto label_3377c0;
        case 0x3377d0u: goto label_3377d0;
        case 0x3377f8u: goto label_3377f8;
        case 0x337810u: goto label_337810;
        case 0x337848u: goto label_337848;
        case 0x337878u: goto label_337878;
        case 0x33788cu: goto label_33788c;
        case 0x337890u: goto label_337890;
        case 0x3378ccu: goto label_3378cc;
        case 0x3378e4u: goto label_3378e4;
        case 0x33791cu: goto label_33791c;
        case 0x337934u: goto label_337934;
        case 0x337938u: goto label_337938;
        case 0x337968u: goto label_337968;
        case 0x3379b8u: goto label_3379b8;
        default: break;
    }

    ctx->pc = 0x337728u;

    // 0x337728: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x337728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33772c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x33772cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x337730: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x337730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x337734: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337738: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x337738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x33773c: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x33773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x337740: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x337740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x337744: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x337744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x337748: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x337748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x33774c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x33774cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x337750: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x337750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x337754: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x337754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x337758: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x337758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x33775c: 0x8c640710  lw          $a0, 0x710($v1)
    ctx->pc = 0x33775cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3E0710u));
    // 0x337760: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x337760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337764: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x337764u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3DF760u));
    // 0x337768: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x337768u;
    {
        const bool branch_taken_0x337768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x33776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337768u;
        // 0x33776c: 0x3c17003e  lui         $s7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337768) {
            ctx->pc = 0x337784u;
            goto label_337784;
        }
    }
    ctx->pc = 0x337770u;
    // 0x337770: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337774: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x337774u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x337778: 0x18600094  blez        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x337778u;
    {
        const bool branch_taken_0x337778 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x33777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337778u;
        // 0x33777c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337778) {
            ctx->pc = 0x3379CCu;
            goto label_3379cc;
        }
    }
    ctx->pc = 0x337780u;
    // 0x337780: 0x3c17003e  lui         $s7, 0x3E
    ctx->pc = 0x337780u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)62 << 16));
label_337784:
    // 0x337784: 0x8ee20754  lw          $v0, 0x754($s7)
    ctx->pc = 0x337784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 1876)));
    // 0x337788: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x337788u;
    {
        const bool branch_taken_0x337788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337788u;
        // 0x33778c: 0x26e30754  addiu       $v1, $s7, 0x754 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1876));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337788) {
            ctx->pc = 0x3379BCu;
            goto label_3379bc;
        }
    }
    ctx->pc = 0x337790u;
    // 0x337790: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x337790u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    // 0x337794: 0x3c13003e  lui         $s3, 0x3E
    ctx->pc = 0x337794u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
    // 0x337798: 0xc0cebf0  jal         func_33AFC0
    ctx->pc = 0x337798u;
    SET_GPR_U32(ctx, 31, 0x3377A0u);
    ctx->pc = 0x33779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337798u;
    // 0x33779c: 0x261031b0  addiu       $s0, $s0, 0x31B0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AFC0u, 0x337798u, 0x3377A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3377A0u;
label_3377a0:
    // 0x3377a0: 0xc0cec86  jal         func_33B218
    ctx->pc = 0x3377A0u;
    SET_GPR_U32(ctx, 31, 0x3377A8u);
    ctx->pc = 0x3377A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3377A0u;
    // 0x3377a4: 0x2671075c  addiu       $s1, $s3, 0x75C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1884));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B218u, 0x3377A0u, 0x3377A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3377A8u;
label_3377a8:
    // 0x3377a8: 0xc0cc942  jal         func_332508
    ctx->pc = 0x3377A8u;
    SET_GPR_U32(ctx, 31, 0x3377B0u);
    ctx->pc = 0x3377ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3377A8u;
    // 0x3377ac: 0x3c14003e  lui         $s4, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)62 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332508u, 0x3377A8u, 0x3377B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3377B0u;
label_3377b0:
    // 0x3377b0: 0xc0cde80  jal         func_337A00
    ctx->pc = 0x3377B0u;
    SET_GPR_U32(ctx, 31, 0x3377B8u);
    ctx->pc = 0x3377B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3377B0u;
    // 0x3377b4: 0x3c12003e  lui         $s2, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)62 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337A00u, 0x3377B0u, 0x3377B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3377B8u;
label_3377b8:
    // 0x3377b8: 0xc0cdbd2  jal         func_336F48
    ctx->pc = 0x3377B8u;
    SET_GPR_U32(ctx, 31, 0x3377C0u);
    ctx->pc = 0x336F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F48u, 0x3377B8u, 0x3377C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3377C0u;
label_3377c0:
    // 0x3377c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3377c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3377c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3377c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3377c8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3377C8u;
    SET_GPR_U32(ctx, 31, 0x3377D0u);
    ctx->pc = 0x3377CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3377C8u;
    // 0x3377cc: 0x240608d0  addiu       $a2, $zero, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3377C8u, 0x3377D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3377D0u;
label_3377d0:
    // 0x3377d0: 0x24040880  addiu       $a0, $zero, 0x880
    ctx->pc = 0x3377d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2176));
    // 0x3377d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3377d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3377d8: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x3377d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3377dc: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x3377dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x3377e0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3377e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3377e4: 0xae8431ac  sw          $a0, 0x31AC($s4)
    ctx->pc = 0x3377e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12716), GPR_U32(ctx, 4));
    // 0x3377e8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3377E8u;
    {
        const bool branch_taken_0x3377e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3377ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3377E8u;
        // 0x3377ec: 0xae500758  sw          $s0, 0x758($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1880), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3377e8) {
            ctx->pc = 0x337830u;
            goto label_337830;
        }
    }
    ctx->pc = 0x3377F0u;
    // 0x3377f0: 0xc0ed65a  jal         func_3B5968
    ctx->pc = 0x3377F0u;
    SET_GPR_U32(ctx, 31, 0x3377F8u);
    ctx->pc = 0x3377F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3377F0u;
    // 0x3377f4: 0x240408d0  addiu       $a0, $zero, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5968u, 0x3377F0u, 0x3377F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3377F8u;
label_3377f8:
    // 0x3377f8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3377F8u;
    {
        const bool branch_taken_0x3377f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3377FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3377F8u;
        // 0x3377fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3377f8) {
            ctx->pc = 0x337830u;
            goto label_337830;
        }
    }
    ctx->pc = 0x337800u;
    // 0x337800: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x337800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x337804: 0x240508d0  addiu       $a1, $zero, 0x8D0
    ctx->pc = 0x337804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    // 0x337808: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x337808u;
    SET_GPR_U32(ctx, 31, 0x337810u);
    ctx->pc = 0x33780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337808u;
    // 0x33780c: 0x248455b8  addiu       $a0, $a0, 0x55B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x337808u, 0x337810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337810u;
label_337810:
    // 0x337810: 0x0  nop
    ctx->pc = 0x337810u;
    // NOP
    // 0x337814: 0x0  nop
    ctx->pc = 0x337814u;
    // NOP
    // 0x337818: 0x0  nop
    ctx->pc = 0x337818u;
    // NOP
    // 0x33781c: 0x0  nop
    ctx->pc = 0x33781cu;
    // NOP
    // 0x337820: 0x0  nop
    ctx->pc = 0x337820u;
    // NOP
    // 0x337824: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x337824u;
    {
        const bool branch_taken_0x337824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337824) {
            ctx->pc = 0x337810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337810;
        }
    }
    ctx->pc = 0x33782Cu;
    // 0x33782c: 0x0  nop
    ctx->pc = 0x33782cu;
    // NOP
label_337830:
    // 0x337830: 0x2670075c  addiu       $s0, $s3, 0x75C
    ctx->pc = 0x337830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1884));
    // 0x337834: 0x3c160045  lui         $s6, 0x45
    ctx->pc = 0x337834u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)69 << 16));
    // 0x337838: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x337838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33783c: 0x26c45480  addiu       $a0, $s6, 0x5480
    ctx->pc = 0x33783cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 21632));
    // 0x337840: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x337840u;
    SET_GPR_U32(ctx, 31, 0x337848u);
    ctx->pc = 0x337844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337840u;
    // 0x337844: 0x240508d0  addiu       $a1, $zero, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x337840u, 0x337848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337848u;
label_337848:
    // 0x337848: 0x3c08003e  lui         $t0, 0x3E
    ctx->pc = 0x337848u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62 << 16));
    // 0x33784c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33784cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x337850: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x337850u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    // 0x337854: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x337854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x337858: 0x8e450758  lw          $a1, 0x758($s2)
    ctx->pc = 0x337858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1880)));
    // 0x33785c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x33785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x337860: 0x8e8731ac  lw          $a3, 0x31AC($s4)
    ctx->pc = 0x337860u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12716)));
    // 0x337864: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x337864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x337868: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x337868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33786c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x33786cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337870: 0xc0cc85e  jal         func_332178
    ctx->pc = 0x337870u;
    SET_GPR_U32(ctx, 31, 0x337878u);
    ctx->pc = 0x337874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337870u;
    // 0x337874: 0xad020760  sw          $v0, 0x760($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 1888), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332178u, 0x337870u, 0x337878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337878u;
label_337878:
    // 0x337878: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x337878u;
    {
        const bool branch_taken_0x337878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337878u;
        // 0x33787c: 0xae0231a8  sw          $v0, 0x31A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337878) {
            ctx->pc = 0x3378B0u;
            goto label_3378b0;
        }
    }
    ctx->pc = 0x337880u;
    // 0x337880: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x337880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x337884: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x337884u;
    SET_GPR_U32(ctx, 31, 0x33788Cu);
    ctx->pc = 0x337888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337884u;
    // 0x337888: 0x24845600  addiu       $a0, $a0, 0x5600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x337884u, 0x33788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33788Cu;
label_33788c:
    // 0x33788c: 0x0  nop
    ctx->pc = 0x33788cu;
    // NOP
label_337890:
    // 0x337890: 0x0  nop
    ctx->pc = 0x337890u;
    // NOP
    // 0x337894: 0x0  nop
    ctx->pc = 0x337894u;
    // NOP
    // 0x337898: 0x0  nop
    ctx->pc = 0x337898u;
    // NOP
    // 0x33789c: 0x0  nop
    ctx->pc = 0x33789cu;
    // NOP
    // 0x3378a0: 0x0  nop
    ctx->pc = 0x3378a0u;
    // NOP
    // 0x3378a4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x3378A4u;
    {
        const bool branch_taken_0x3378a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3378a4) {
            ctx->pc = 0x337890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337890;
        }
    }
    ctx->pc = 0x3378ACu;
    // 0x3378ac: 0x0  nop
    ctx->pc = 0x3378acu;
    // NOP
label_3378b0:
    // 0x3378b0: 0x261031a8  addiu       $s0, $s0, 0x31A8
    ctx->pc = 0x3378b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12712));
    // 0x3378b4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x3378b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x3378b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3378b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3378bc: 0x24a573a0  addiu       $a1, $a1, 0x73A0
    ctx->pc = 0x3378bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29600));
    // 0x3378c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3378c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3378c4: 0xc0cc8de  jal         func_332378
    ctx->pc = 0x3378C4u;
    SET_GPR_U32(ctx, 31, 0x3378CCu);
    ctx->pc = 0x3378C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3378C4u;
    // 0x3378c8: 0x3c11003e  lui         $s1, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)62 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332378u, 0x3378C4u, 0x3378CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3378CCu;
label_3378cc:
    // 0x3378cc: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x3378ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x3378d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3378d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3378d4: 0x24a57400  addiu       $a1, $a1, 0x7400
    ctx->pc = 0x3378d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29696));
    // 0x3378d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3378d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3378dc: 0xc0cc8e2  jal         func_332388
    ctx->pc = 0x3378DCu;
    SET_GPR_U32(ctx, 31, 0x3378E4u);
    ctx->pc = 0x3378E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3378DCu;
    // 0x3378e0: 0x26340724  addiu       $s4, $s1, 0x724 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1828));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332388u, 0x3378DCu, 0x3378E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3378E4u;
label_3378e4:
    // 0x3378e4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3378e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3378e8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3378E8u;
    {
        const bool branch_taken_0x3378e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3378ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3378E8u;
        // 0x3378ec: 0x3c13003e  lui         $s3, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3378e8) {
            ctx->pc = 0x337970u;
            goto label_337970;
        }
    }
    ctx->pc = 0x3378F0u;
    // 0x3378f0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3378f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3378f4: 0x3c15003e  lui         $s5, 0x3E
    ctx->pc = 0x3378f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)62 << 16));
    // 0x3378f8: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x3378f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x3378fc: 0x26b00720  addiu       $s0, $s5, 0x720
    ctx->pc = 0x3378fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 1824));
    // 0x337900: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x337900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337904: 0x31280  sll         $v0, $v1, 10
    ctx->pc = 0x337904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x337908: 0xae63072c  sw          $v1, 0x72C($s3)
    ctx->pc = 0x337908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1836), GPR_U32(ctx, 3));
    // 0x33790c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x33790cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x337910: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x337910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x337914: 0xc0ed65a  jal         func_3B5968
    ctx->pc = 0x337914u;
    SET_GPR_U32(ctx, 31, 0x33791Cu);
    ctx->pc = 0x337918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337914u;
    // 0x337918: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5968u, 0x337914u, 0x33791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33791Cu;
label_33791c:
    // 0x33791c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33791Cu;
    {
        const bool branch_taken_0x33791c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33791Cu;
        // 0x337920: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33791c) {
            ctx->pc = 0x337958u;
            goto label_337958;
        }
    }
    ctx->pc = 0x337924u;
    // 0x337924: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x337924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x337928: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x337928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33792c: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x33792Cu;
    SET_GPR_U32(ctx, 31, 0x337934u);
    ctx->pc = 0x337930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33792Cu;
    // 0x337930: 0x24845628  addiu       $a0, $a0, 0x5628 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x33792Cu, 0x337934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337934u;
label_337934:
    // 0x337934: 0x0  nop
    ctx->pc = 0x337934u;
    // NOP
label_337938:
    // 0x337938: 0x0  nop
    ctx->pc = 0x337938u;
    // NOP
    // 0x33793c: 0x0  nop
    ctx->pc = 0x33793cu;
    // NOP
    // 0x337940: 0x0  nop
    ctx->pc = 0x337940u;
    // NOP
    // 0x337944: 0x0  nop
    ctx->pc = 0x337944u;
    // NOP
    // 0x337948: 0x0  nop
    ctx->pc = 0x337948u;
    // NOP
    // 0x33794c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x33794Cu;
    {
        const bool branch_taken_0x33794c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33794c) {
            ctx->pc = 0x337938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337938;
        }
    }
    ctx->pc = 0x337954u;
    // 0x337954: 0x0  nop
    ctx->pc = 0x337954u;
    // NOP
label_337958:
    // 0x337958: 0x8e450720  lw          $a1, 0x720($s2)
    ctx->pc = 0x337958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1824)));
    // 0x33795c: 0x26c45480  addiu       $a0, $s6, 0x5480
    ctx->pc = 0x33795cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 21632));
    // 0x337960: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x337960u;
    SET_GPR_U32(ctx, 31, 0x337968u);
    ctx->pc = 0x337964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337960u;
    // 0x337964: 0x8e260724  lw          $a2, 0x724($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1828)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x337960u, 0x337968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337968u;
label_337968:
    // 0x337968: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x337968u;
    {
        const bool branch_taken_0x337968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337968u;
        // 0x33796c: 0x8e220724  lw          $v0, 0x724($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337968) {
            ctx->pc = 0x337978u;
            goto label_337978;
        }
    }
    ctx->pc = 0x337970u;
label_337970:
    // 0x337970: 0x3c15003e  lui         $s5, 0x3E
    ctx->pc = 0x337970u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)62 << 16));
    // 0x337974: 0x8e220724  lw          $v0, 0x724($s1)
    ctx->pc = 0x337974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1828)));
label_337978:
    // 0x337978: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x337978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x33797c: 0x8e65072c  lw          $a1, 0x72C($s3)
    ctx->pc = 0x33797cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1836)));
    // 0x337980: 0x3c09003e  lui         $t1, 0x3E
    ctx->pc = 0x337980u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)62 << 16));
    // 0x337984: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x337984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x337988: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x337988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x33798c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33798cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x337990: 0x8ea30720  lw          $v1, 0x720($s5)
    ctx->pc = 0x337990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1824)));
    // 0x337994: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x337994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x337998: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x337998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33799c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x33799cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3379a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3379a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3379a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3379a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3379a8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3379a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3379ac: 0xad220728  sw          $v0, 0x728($t1)
    ctx->pc = 0x3379acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1832), GPR_U32(ctx, 2));
    // 0x3379b0: 0xc0cc99c  jal         func_332670
    ctx->pc = 0x3379B0u;
    SET_GPR_U32(ctx, 31, 0x3379B8u);
    ctx->pc = 0x3379B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3379B0u;
    // 0x3379b4: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332670u, 0x3379B0u, 0x3379B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3379B8u;
label_3379b8:
    // 0x3379b8: 0x26e30754  addiu       $v1, $s7, 0x754
    ctx->pc = 0x3379b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1876));
label_3379bc:
    // 0x3379bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3379bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3379c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3379c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3379c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3379c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3379c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3379c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3379cc:
    // 0x3379cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3379ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3379d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3379d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3379d4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3379d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3379d8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3379d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3379dc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3379dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3379e0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3379e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3379e4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3379e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3379e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3379e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3379ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3379ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3379F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3379ECu;
        // 0x3379f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3379ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3379F4u;
    // 0x3379f4: 0x0  nop
    ctx->pc = 0x3379f4u;
    // NOP
    // 0x3379f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3379f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3379fc: 0x0  nop
    ctx->pc = 0x3379fcu;
    // NOP
    ctx->pc = 0x337a00u;
}
