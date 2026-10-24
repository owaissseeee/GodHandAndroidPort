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

// Function: func_00188798
// Address: 0x188798 - 0x1889c8
void func_00188798_0x188798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00188798_0x188798");
#endif

    switch (ctx->pc) {
        case 0x1887c4u: goto label_1887c4;
        case 0x1887d0u: goto label_1887d0;
        case 0x1887ecu: goto label_1887ec;
        case 0x18880cu: goto label_18880c;
        case 0x188824u: goto label_188824;
        case 0x188868u: goto label_188868;
        case 0x188918u: goto label_188918;
        case 0x188980u: goto label_188980;
        case 0x188990u: goto label_188990;
        default: break;
    }

    ctx->pc = 0x188798u;

    // 0x188798: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x188798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18879c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18879cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1887a0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1887a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1887a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1887a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1887a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1887ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1887acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1887b0: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x1887b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x1887b4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1887B4u;
    {
        const bool branch_taken_0x1887b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1887b4) {
            ctx->pc = 0x1887B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1887B4u;
            // 0x1887b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1887C8u;
            goto label_1887c8;
        }
    }
    ctx->pc = 0x1887BCu;
    // 0x1887bc: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1887BCu;
    SET_GPR_U32(ctx, 31, 0x1887C4u);
    ctx->pc = 0x1887C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1887BCu;
    // 0x1887c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1887BCu, 0x1887C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1887C4u;
label_1887c4:
    // 0x1887c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1887c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1887c8:
    // 0x1887c8: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x1887C8u;
    SET_GPR_U32(ctx, 31, 0x1887D0u);
    ctx->pc = 0x1887CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1887C8u;
    // 0x1887cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x1887C8u, 0x1887D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1887D0u;
label_1887d0:
    // 0x1887d0: 0x263005c0  addiu       $s0, $s1, 0x5C0
    ctx->pc = 0x1887d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x1887d4: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x1887d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1887d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1887d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1887dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887e0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1887e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1887e4: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x1887E4u;
    SET_GPR_U32(ctx, 31, 0x1887ECu);
    ctx->pc = 0x1887E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1887E4u;
    // 0x1887e8: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x1887E4u, 0x1887ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1887ECu;
label_1887ec:
    // 0x1887ec: 0x8c460380  lw          $a2, 0x380($v0)
    ctx->pc = 0x1887ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1887f0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1887f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1887f4: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x1887f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1887f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1887f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887fc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1887fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x188800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x188800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188804: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x188804u;
    SET_GPR_U32(ctx, 31, 0x18880Cu);
    ctx->pc = 0x188808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188804u;
    // 0x188808: 0xac460380  sw          $a2, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x188804u, 0x18880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18880Cu;
label_18880c:
    // 0x18880c: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x18880cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x188810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x188810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188814: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x188814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188818: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x188818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x18881c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18881Cu;
    SET_GPR_U32(ctx, 31, 0x188824u);
    ctx->pc = 0x188820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18881Cu;
    // 0x188820: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18881Cu, 0x188824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188824u;
label_188824:
    // 0x188824: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x188824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x188828: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x188828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x18882c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x18882cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x188830: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x188830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188834: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x188834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x188838: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x188838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    // 0x18883c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x18883cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x188840: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x188840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x188844: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x188844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x188848: 0x10650031  beq         $v1, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x188848u;
    {
        const bool branch_taken_0x188848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x18884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188848u;
        // 0x18884c: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188848) {
            ctx->pc = 0x188910u;
            goto label_188910;
        }
    }
    ctx->pc = 0x188850u;
    // 0x188850: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x188850u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188854: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x188854u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x188858: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x188858u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x18885c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18885cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188860: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x188860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x188864: 0x0  nop
    ctx->pc = 0x188864u;
    // NOP
label_188868:
    // 0x188868: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x188868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18886c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x18886cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x188870: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188870u;
    {
        const bool branch_taken_0x188870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188870u;
        // 0x188874: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188870) {
            ctx->pc = 0x188880u;
            goto label_188880;
        }
    }
    ctx->pc = 0x188878u;
    // 0x188878: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x188878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18887c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18887cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_188880:
    // 0x188880: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x188880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x188884: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x188884u;
    {
        const bool branch_taken_0x188884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188884u;
        // 0x188888: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188884) {
            ctx->pc = 0x18889Cu;
            goto label_18889c;
        }
    }
    ctx->pc = 0x18888Cu;
    // 0x18888c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x18888cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x188890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x188890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188894: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x188894u;
    {
        const bool branch_taken_0x188894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188894u;
        // 0x188898: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188894) {
            ctx->pc = 0x1888A0u;
            goto label_1888a0;
        }
    }
    ctx->pc = 0x18889Cu;
label_18889c:
    // 0x18889c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1888a0:
    // 0x1888a0: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1888a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1888a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1888a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1888a8: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1888a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1888ac: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1888acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1888b0: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1888b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1888b4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1888b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1888b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1888B8u;
    {
        const bool branch_taken_0x1888b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1888BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888B8u;
        // 0x1888bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888b8) {
            ctx->pc = 0x1888C8u;
            goto label_1888c8;
        }
    }
    ctx->pc = 0x1888C0u;
    // 0x1888c0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1888c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1888c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1888c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1888c8:
    // 0x1888c8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1888c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1888cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1888CCu;
    {
        const bool branch_taken_0x1888cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1888D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888CCu;
        // 0x1888d0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888cc) {
            ctx->pc = 0x1888E4u;
            goto label_1888e4;
        }
    }
    ctx->pc = 0x1888D4u;
    // 0x1888d4: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1888d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1888d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1888d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1888dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1888DCu;
    {
        const bool branch_taken_0x1888dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1888E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888DCu;
        // 0x1888e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888dc) {
            ctx->pc = 0x1888E8u;
            goto label_1888e8;
        }
    }
    ctx->pc = 0x1888E4u;
label_1888e4:
    // 0x1888e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1888e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1888e8:
    // 0x1888e8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1888e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1888ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1888ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1888f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1888f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1888f4: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x1888f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1888f8: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1888f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1888fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1888FCu;
    {
        const bool branch_taken_0x1888fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888FCu;
        // 0x188900: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888fc) {
            ctx->pc = 0x188910u;
            goto label_188910;
        }
    }
    ctx->pc = 0x188904u;
    // 0x188904: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x188904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x188908: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x188908u;
    {
        const bool branch_taken_0x188908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x188908) {
            ctx->pc = 0x18890Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188908u;
            // 0x18890c: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188868;
        }
    }
    ctx->pc = 0x188910u;
label_188910:
    // 0x188910: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x188910u;
    SET_GPR_U32(ctx, 31, 0x188918u);
    ctx->pc = 0x188914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188910u;
    // 0x188914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x188910u, 0x188918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188918u;
label_188918:
    // 0x188918: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x188918u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18891c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18891cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x188920: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x188920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x188924: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x188924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188928: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x188928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x18892c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18892cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x188930: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x188930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x188934: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x188934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x188938: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x188938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x18893c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18893cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x188940: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x188940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188944: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x188944u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188948: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x188948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x18894c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18894cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x188950: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x188950u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x188954: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x188954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x188958: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x188958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18895c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18895cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188960: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x188960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x188964: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x188964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x188968: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x188968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18896c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18896cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x188970: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x188970u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x188974: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x188974u;
    {
        const bool branch_taken_0x188974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188974u;
        // 0x188978: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x188974) {
            ctx->pc = 0x1889ACu;
            goto label_1889ac;
        }
    }
    ctx->pc = 0x18897Cu;
    // 0x18897c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18897cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_188980:
    // 0x188980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x188980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188984: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x188984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x188988: 0xc062152  jal         func_188548
    ctx->pc = 0x188988u;
    SET_GPR_U32(ctx, 31, 0x188990u);
    ctx->pc = 0x18898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188988u;
    // 0x18898c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188548u, 0x188988u, 0x188990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188990u;
label_188990:
    // 0x188990: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x188990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x188994: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x188994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x188998: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x188998u;
    {
        const bool branch_taken_0x188998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188998) {
            ctx->pc = 0x18899Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188998u;
            // 0x18899c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1889B0u;
            goto label_1889b0;
        }
    }
    ctx->pc = 0x1889A0u;
    // 0x1889a0: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1889a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1889a4: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1889A4u;
    {
        const bool branch_taken_0x1889a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1889A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889A4u;
        // 0x1889a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889a4) {
            ctx->pc = 0x188980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188980;
        }
    }
    ctx->pc = 0x1889ACu;
label_1889ac:
    // 0x1889ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1889acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1889b0:
    // 0x1889b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1889b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1889b4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1889b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1889b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1889b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1889bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1889BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1889C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889BCu;
        // 0x1889c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1889BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1889C4u;
    // 0x1889c4: 0x0  nop
    ctx->pc = 0x1889c4u;
    // NOP
    ctx->pc = 0x1889c8u;
}
