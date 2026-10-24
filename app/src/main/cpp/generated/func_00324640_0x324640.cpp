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

// Function: func_00324640
// Address: 0x324640 - 0x3247d0
void func_00324640_0x324640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00324640_0x324640");
#endif

    switch (ctx->pc) {
        case 0x32468cu: goto label_32468c;
        case 0x3246e0u: goto label_3246e0;
        case 0x3246f0u: goto label_3246f0;
        case 0x324700u: goto label_324700;
        case 0x324718u: goto label_324718;
        case 0x324738u: goto label_324738;
        case 0x32477cu: goto label_32477c;
        default: break;
    }

    ctx->pc = 0x324640u;

    // 0x324640: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x324640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x324644: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x324644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x324648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x324648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32464c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x32464cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x324650: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x324650u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324654: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x324654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x324658: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x324658u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32465c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x32465cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x324660: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x324660u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324664: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x324664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x324668: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x324668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x32466c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x32466cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x324670: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x324670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x324674: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x324674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x324678: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x324678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x32467c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x32467cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x324680: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x324680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x324684: 0xc0c914c  jal         func_324530
    ctx->pc = 0x324684u;
    SET_GPR_U32(ctx, 31, 0x32468Cu);
    ctx->pc = 0x324688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324684u;
    // 0x324688: 0xafa80008  sw          $t0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324530u, 0x324684u, 0x32468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32468Cu;
label_32468c:
    // 0x32468c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x32468cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324690: 0x7c30009  bgezl       $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x324690u;
    {
        const bool branch_taken_0x324690 = (GPR_S64(ctx, 30) >= 0);
        if (branch_taken_0x324690) {
            ctx->pc = 0x324694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324690u;
            // 0x324694: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3246B8u;
            goto label_3246b8;
        }
    }
    ctx->pc = 0x324698u;
    // 0x324698: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x324698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x32469c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x32469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3246a0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3246a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3246a4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3246a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3246a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3246a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3246ac: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x3246acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x3246b0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3246B0u;
    {
        const bool branch_taken_0x3246b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3246B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246B0u;
        // 0x3246b4: 0xaee30000  sw          $v1, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3246b0) {
            ctx->pc = 0x32479Cu;
            goto label_32479c;
        }
    }
    ctx->pc = 0x3246B8u;
label_3246b8:
    // 0x3246b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3246b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3246bc: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x3246bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
    // 0x3246c0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3246c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3246c4: 0x8e73b308  lw          $s3, -0x4CF8($s3)
    ctx->pc = 0x3246c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947592)));
    // 0x3246c8: 0x8263000f  lb          $v1, 0xF($s3)
    ctx->pc = 0x3246c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
    // 0x3246cc: 0x54640016  bnel        $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3246CCu;
    {
        const bool branch_taken_0x3246cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3246cc) {
            ctx->pc = 0x3246D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3246CCu;
            // 0x3246d0: 0x96720118  lhu         $s2, 0x118($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324728u;
            goto label_324728;
        }
    }
    ctx->pc = 0x3246D4u;
    // 0x3246d4: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x3246d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x3246d8: 0xc0c9216  jal         func_324858
    ctx->pc = 0x3246D8u;
    SET_GPR_U32(ctx, 31, 0x3246E0u);
    ctx->pc = 0x3246DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3246D8u;
    // 0x3246dc: 0x2675011c  addiu       $s5, $s3, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324858u, 0x3246D8u, 0x3246E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3246E0u;
label_3246e0:
    // 0x3246e0: 0x1a800009  blez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x3246E0u;
    {
        const bool branch_taken_0x3246e0 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x3246E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246E0u;
        // 0x3246e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3246e0) {
            ctx->pc = 0x324708u;
            goto label_324708;
        }
    }
    ctx->pc = 0x3246E8u;
    // 0x3246e8: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x3246e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3246ec: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3246ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3246f0:
    // 0x3246f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3246f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3246f4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3246f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3246f8: 0xc0c9216  jal         func_324858
    ctx->pc = 0x3246F8u;
    SET_GPR_U32(ctx, 31, 0x324700u);
    ctx->pc = 0x3246FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3246F8u;
    // 0x3246fc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324858u, 0x3246F8u, 0x324700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324700u;
label_324700:
    // 0x324700: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x324700u;
    {
        const bool branch_taken_0x324700 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x324704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324700u;
        // 0x324704: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324700) {
            ctx->pc = 0x3246F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3246f0;
        }
    }
    ctx->pc = 0x324708u;
label_324708:
    // 0x324708: 0x148080  sll         $s0, $s4, 2
    ctx->pc = 0x324708u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x32470c: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x32470cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x324710: 0xc0c9216  jal         func_324858
    ctx->pc = 0x324710u;
    SET_GPR_U32(ctx, 31, 0x324718u);
    ctx->pc = 0x324714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324710u;
    // 0x324714: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324858u, 0x324710u, 0x324718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324718u;
label_324718:
    // 0x324718: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x324718u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x32471c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32471cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x324720: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x324720u;
    {
        const bool branch_taken_0x324720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324720u;
        // 0x324724: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324720) {
            ctx->pc = 0x32476Cu;
            goto label_32476c;
        }
    }
    ctx->pc = 0x324728u;
label_324728:
    // 0x324728: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x324728u;
    {
        const bool branch_taken_0x324728 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x32472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324728u;
        // 0x32472c: 0x2665011a  addiu       $a1, $s3, 0x11A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324728) {
            ctx->pc = 0x324754u;
            goto label_324754;
        }
    }
    ctx->pc = 0x324730u;
    // 0x324730: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x324730u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324734: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x324734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_324738:
    // 0x324738: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x324738u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32473c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x32473cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x324740: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x324740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x324744: 0x0  nop
    ctx->pc = 0x324744u;
    // NOP
    // 0x324748: 0x0  nop
    ctx->pc = 0x324748u;
    // NOP
    // 0x32474c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32474Cu;
    {
        const bool branch_taken_0x32474c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x324750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32474Cu;
        // 0x324750: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32474c) {
            ctx->pc = 0x324738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324738;
        }
    }
    ctx->pc = 0x324754u;
label_324754:
    // 0x324754: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x324754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x324758: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x324758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32475c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x32475cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x324760: 0x322c0  sll         $a0, $v1, 11
    ctx->pc = 0x324760u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x324764: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x324764u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x324768: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x324768u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
label_32476c:
    // 0x32476c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x32476cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324770: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x324770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x324774: 0xc0e9768  jal         func_3A5DA0
    ctx->pc = 0x324774u;
    SET_GPR_U32(ctx, 31, 0x32477Cu);
    ctx->pc = 0x324778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324774u;
    // 0x324778: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5DA0u, 0x324774u, 0x32477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32477Cu;
label_32477c:
    // 0x32477c: 0x8e640110  lw          $a0, 0x110($s3)
    ctx->pc = 0x32477cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x324780: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x324780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x324784: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x324784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324788: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x324788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x32478c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x32478cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x324790: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x324790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x324794: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x324794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324798: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x324798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_32479c:
    // 0x32479c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x32479cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3247a0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3247a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3247a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3247a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3247a8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3247a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3247ac: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3247acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3247b0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3247b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3247b4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3247b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3247b8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3247b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3247bc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x3247bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3247c0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3247c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3247c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3247C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3247C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3247C4u;
        // 0x3247c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3247C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3247CCu;
    // 0x3247cc: 0x0  nop
    ctx->pc = 0x3247ccu;
    // NOP
    ctx->pc = 0x3247d0u;
}
