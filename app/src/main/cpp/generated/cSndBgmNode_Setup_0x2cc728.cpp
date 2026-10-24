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

// Function: cSndBgmNode_Setup
// Address: 0x2cc728 - 0x2cc830
void cSndBgmNode_Setup_0x2cc728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_Setup_0x2cc728");
#endif

    switch (ctx->pc) {
        case 0x2cc760u: goto label_2cc760;
        case 0x2cc7c4u: goto label_2cc7c4;
        case 0x2cc7d4u: goto label_2cc7d4;
        case 0x2cc804u: goto label_2cc804;
        case 0x2cc80cu: goto label_2cc80c;
        default: break;
    }

    ctx->pc = 0x2cc728u;

    // 0x2cc728: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cc728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cc72c: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x2cc72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x2cc730: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2cc730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2cc734: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cc734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cc738: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2cc738u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2cc73c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cc73cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc740: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2cc740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2cc744: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2cc744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2cc748: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2cc748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc74c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc750: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2cc750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc754: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x2cc754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x2cc758: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x2CC758u;
    SET_GPR_U32(ctx, 31, 0x2CC760u);
    ctx->pc = 0x2CC75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC758u;
    // 0x2cc75c: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x2CC758u, 0x2CC760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC760u;
label_2cc760:
    // 0x2cc760: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x2cc760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
    // 0x2cc764: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2cc764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2cc768: 0xae420090  sw          $v0, 0x90($s2)
    ctx->pc = 0x2cc768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    // 0x2cc76c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2cc76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2cc770: 0xae440094  sw          $a0, 0x94($s2)
    ctx->pc = 0x2cc770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 4));
    // 0x2cc774: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x2cc774u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2cc778: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2cc778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2cc77c: 0xae510098  sw          $s1, 0x98($s2)
    ctx->pc = 0x2cc77cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 17));
    // 0x2cc780: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2CC780u;
    {
        const bool branch_taken_0x2cc780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC780u;
        // 0x2cc784: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc780) {
            ctx->pc = 0x2CC7FCu;
            goto label_2cc7fc;
        }
    }
    ctx->pc = 0x2CC788u;
    // 0x2cc788: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2cc788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2cc78c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cc78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cc790: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2cc790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x2cc794: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cc794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cc798: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cc798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cc79c: 0x800008  jr          $a0
    ctx->pc = 0x2CC79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CC7A4u: goto label_2cc7a4;
            case 0x2CC7B4u: goto label_2cc7b4;
            case 0x2CC7DCu: goto label_2cc7dc;
            case 0x2CC7F0u: goto label_2cc7f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC79Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CC7A4u;
label_2cc7a4:
    // 0x2cc7a4: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x2cc7a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2cc7a8: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x2cc7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x2cc7ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CC7ACu;
    {
        const bool branch_taken_0x2cc7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7ACu;
        // 0x2cc7b0: 0xae4200ac  sw          $v0, 0xAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7ac) {
            ctx->pc = 0x2CC7CCu;
            goto label_2cc7cc;
        }
    }
    ctx->pc = 0x2CC7B4u;
label_2cc7b4:
    // 0x2cc7b4: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x2cc7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x2cc7b8: 0x9665000c  lhu         $a1, 0xC($s3)
    ctx->pc = 0x2cc7b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2cc7bc: 0xc0b4166  jal         func_2D0598
    ctx->pc = 0x2CC7BCu;
    SET_GPR_U32(ctx, 31, 0x2CC7C4u);
    ctx->pc = 0x2CC7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC7BCu;
    // 0x2cc7c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0598u, 0x2CC7BCu, 0x2CC7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC7C4u;
label_2cc7c4:
    // 0x2cc7c4: 0xae4200a8  sw          $v0, 0xA8($s2)
    ctx->pc = 0x2cc7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 2));
    // 0x2cc7c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cc7cc:
    // 0x2cc7cc: 0xc0b415e  jal         func_2D0578
    ctx->pc = 0x2CC7CCu;
    SET_GPR_U32(ctx, 31, 0x2CC7D4u);
    ctx->pc = 0x2CC7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC7CCu;
    // 0x2cc7d0: 0x9665000e  lhu         $a1, 0xE($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0578u, 0x2CC7CCu, 0x2CC7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC7D4u;
label_2cc7d4:
    // 0x2cc7d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CC7D4u;
    {
        const bool branch_taken_0x2cc7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7D4u;
        // 0x2cc7d8: 0xae4200a4  sw          $v0, 0xA4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7d4) {
            ctx->pc = 0x2CC7FCu;
            goto label_2cc7fc;
        }
    }
    ctx->pc = 0x2CC7DCu;
label_2cc7dc:
    // 0x2cc7dc: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x2cc7dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2cc7e0: 0xa64200a0  sh          $v0, 0xA0($s2)
    ctx->pc = 0x2cc7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 160), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cc7e4: 0x9663000e  lhu         $v1, 0xE($s3)
    ctx->pc = 0x2cc7e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x2cc7e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC7E8u;
    {
        const bool branch_taken_0x2cc7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7E8u;
        // 0x2cc7ec: 0xa64300a2  sh          $v1, 0xA2($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 162), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7e8) {
            ctx->pc = 0x2CC7FCu;
            goto label_2cc7fc;
        }
    }
    ctx->pc = 0x2CC7F0u;
label_2cc7f0:
    // 0x2cc7f0: 0xae400094  sw          $zero, 0x94($s2)
    ctx->pc = 0x2cc7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
    // 0x2cc7f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC7F4u;
    {
        const bool branch_taken_0x2cc7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7F4u;
        // 0x2cc7f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7f4) {
            ctx->pc = 0x2CC810u;
            goto label_2cc810;
        }
    }
    ctx->pc = 0x2CC7FCu;
label_2cc7fc:
    // 0x2cc7fc: 0xc0b318a  jal         func_2CC628
    ctx->pc = 0x2CC7FCu;
    SET_GPR_U32(ctx, 31, 0x2CC804u);
    ctx->pc = 0x2CC800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC7FCu;
    // 0x2cc800: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC628u, 0x2CC7FCu, 0x2CC804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC804u;
label_2cc804:
    // 0x2cc804: 0xc0b3170  jal         func_2CC5C0
    ctx->pc = 0x2CC804u;
    SET_GPR_U32(ctx, 31, 0x2CC80Cu);
    ctx->pc = 0x2CC808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC804u;
    // 0x2cc808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC5C0u, 0x2CC804u, 0x2CC80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC80Cu;
label_2cc80c:
    // 0x2cc80c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cc80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cc810:
    // 0x2cc810: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2cc810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cc814: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2cc814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc818: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cc818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc81c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2cc81cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc824: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC824u;
        // 0x2cc828: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC82Cu;
    // 0x2cc82c: 0x0  nop
    ctx->pc = 0x2cc82cu;
    // NOP
    ctx->pc = 0x2cc830u;
}
