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

// Function: func_00195620
// Address: 0x195620 - 0x195850
void func_00195620_0x195620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00195620_0x195620");
#endif

    switch (ctx->pc) {
        case 0x19564cu: goto label_19564c;
        case 0x195660u: goto label_195660;
        case 0x19568cu: goto label_19568c;
        case 0x19569cu: goto label_19569c;
        case 0x1956acu: goto label_1956ac;
        case 0x1956bcu: goto label_1956bc;
        case 0x1956f0u: goto label_1956f0;
        case 0x1957a0u: goto label_1957a0;
        case 0x195808u: goto label_195808;
        case 0x195818u: goto label_195818;
        default: break;
    }

    ctx->pc = 0x195620u;

    // 0x195620: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x195620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x195624: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x195624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x195628: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x195628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x19562c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19562cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195630: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x195630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x195634: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x195634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x195638: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x195638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x19563c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19563Cu;
    {
        const bool branch_taken_0x19563c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19563c) {
            ctx->pc = 0x195640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19563Cu;
            // 0x195640: 0x8e240604  lw          $a0, 0x604($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195650u;
            goto label_195650;
        }
    }
    ctx->pc = 0x195644u;
    // 0x195644: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x195644u;
    SET_GPR_U32(ctx, 31, 0x19564Cu);
    ctx->pc = 0x195648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195644u;
    // 0x195648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x195644u, 0x19564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19564Cu;
label_19564c:
    // 0x19564c: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x19564cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
label_195650:
    // 0x195650: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x195650u;
    {
        const bool branch_taken_0x195650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x195650) {
            ctx->pc = 0x195654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195650u;
            // 0x195654: 0x8e240614  lw          $a0, 0x614($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195664u;
            goto label_195664;
        }
    }
    ctx->pc = 0x195658u;
    // 0x195658: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x195658u;
    SET_GPR_U32(ctx, 31, 0x195660u);
    ctx->pc = 0x19565Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195658u;
    // 0x19565c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x195658u, 0x195660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195660u;
label_195660:
    // 0x195660: 0x8e240614  lw          $a0, 0x614($s1)
    ctx->pc = 0x195660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1556)));
label_195664:
    // 0x195664: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x195664u;
    {
        const bool branch_taken_0x195664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x195668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195664u;
        // 0x195668: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195664) {
            ctx->pc = 0x195678u;
            goto label_195678;
        }
    }
    ctx->pc = 0x19566Cu;
    // 0x19566c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x19566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x195670: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x195670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x195674: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x195674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_195678:
    // 0x195678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19567c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19567cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195680: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195684: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x195684u;
    SET_GPR_U32(ctx, 31, 0x19568Cu);
    ctx->pc = 0x195688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195684u;
    // 0x195688: 0x263005c0  addiu       $s0, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x195684u, 0x19568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19568Cu;
label_19568c:
    // 0x19568c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19568cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195690: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x195690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x195694: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x195694u;
    SET_GPR_U32(ctx, 31, 0x19569Cu);
    ctx->pc = 0x195698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195694u;
    // 0x195698: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x195694u, 0x19569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19569Cu;
label_19569c:
    // 0x19569c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19569cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1956a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1956a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1956a4: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1956A4u;
    SET_GPR_U32(ctx, 31, 0x1956ACu);
    ctx->pc = 0x1956A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1956A4u;
    // 0x1956a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1956A4u, 0x1956ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1956ACu;
label_1956ac:
    // 0x1956ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1956acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1956b0: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1956b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1956b4: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1956B4u;
    SET_GPR_U32(ctx, 31, 0x1956BCu);
    ctx->pc = 0x1956B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1956B4u;
    // 0x1956b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1956B4u, 0x1956BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1956BCu;
label_1956bc:
    // 0x1956bc: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1956bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1956c0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1956c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1956c4: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x1956c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1956c8: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1956c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1956cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1956ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1956d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1956d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1956d4: 0x10850030  beq         $a0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1956D4u;
    {
        const bool branch_taken_0x1956d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1956D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956D4u;
        // 0x1956d8: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956d4) {
            ctx->pc = 0x195798u;
            goto label_195798;
        }
    }
    ctx->pc = 0x1956DCu;
    // 0x1956dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1956dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1956e0: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x1956e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1956e4: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x1956e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1956e8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1956e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1956ec: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1956ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1956f0:
    // 0x1956f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1956f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1956f4: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1956f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1956f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1956F8u;
    {
        const bool branch_taken_0x1956f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1956FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956F8u;
        // 0x1956fc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956f8) {
            ctx->pc = 0x195708u;
            goto label_195708;
        }
    }
    ctx->pc = 0x195700u;
    // 0x195700: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x195700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x195704: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195708:
    // 0x195708: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x195708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19570c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19570Cu;
    {
        const bool branch_taken_0x19570c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19570Cu;
        // 0x195710: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19570c) {
            ctx->pc = 0x195724u;
            goto label_195724;
        }
    }
    ctx->pc = 0x195714u;
    // 0x195714: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x195714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x195718: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19571c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19571Cu;
    {
        const bool branch_taken_0x19571c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19571Cu;
        // 0x195720: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19571c) {
            ctx->pc = 0x195728u;
            goto label_195728;
        }
    }
    ctx->pc = 0x195724u;
label_195724:
    // 0x195724: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x195724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195728:
    // 0x195728: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x195728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x19572c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19572cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195730: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x195730u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x195734: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x195734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x195738: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x195738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x19573c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x19573cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x195740: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195740u;
    {
        const bool branch_taken_0x195740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195740u;
        // 0x195744: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195740) {
            ctx->pc = 0x195750u;
            goto label_195750;
        }
    }
    ctx->pc = 0x195748u;
    // 0x195748: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x195748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19574c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19574cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195750:
    // 0x195750: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x195750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x195754: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195754u;
    {
        const bool branch_taken_0x195754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195754u;
        // 0x195758: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195754) {
            ctx->pc = 0x19576Cu;
            goto label_19576c;
        }
    }
    ctx->pc = 0x19575Cu;
    // 0x19575c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x19575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x195760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195764: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195764u;
    {
        const bool branch_taken_0x195764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195764u;
        // 0x195768: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195764) {
            ctx->pc = 0x195770u;
            goto label_195770;
        }
    }
    ctx->pc = 0x19576Cu;
label_19576c:
    // 0x19576c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19576cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195770:
    // 0x195770: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x195770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x195774: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x195774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x195778: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x195778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19577c: 0x28a30009  slti        $v1, $a1, 0x9
    ctx->pc = 0x19577cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x195780: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x195780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x195784: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x195784u;
    {
        const bool branch_taken_0x195784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195784u;
        // 0x195788: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195784) {
            ctx->pc = 0x195798u;
            goto label_195798;
        }
    }
    ctx->pc = 0x19578Cu;
    // 0x19578c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x19578cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x195790: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x195790u;
    {
        const bool branch_taken_0x195790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x195790) {
            ctx->pc = 0x195794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195790u;
            // 0x195794: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1956F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1956f0;
        }
    }
    ctx->pc = 0x195798u;
label_195798:
    // 0x195798: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x195798u;
    SET_GPR_U32(ctx, 31, 0x1957A0u);
    ctx->pc = 0x19579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195798u;
    // 0x19579c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x195798u, 0x1957A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1957A0u;
label_1957a0:
    // 0x1957a0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1957a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1957a4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1957a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1957a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1957a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1957ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1957acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1957b0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1957b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1957b4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1957b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1957b8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1957b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1957bc: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x1957bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1957c0: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1957c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x1957c4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1957c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1957c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1957c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1957cc: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1957ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1957d0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1957d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1957d4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1957d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1957d8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1957d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1957dc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1957dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1957e0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1957e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1957e4: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1957e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1957e8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1957e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1957ec: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1957ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1957f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1957f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1957f4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1957f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1957f8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1957f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1957fc: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1957FCu;
    {
        const bool branch_taken_0x1957fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x195800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957FCu;
        // 0x195800: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1957fc) {
            ctx->pc = 0x195834u;
            goto label_195834;
        }
    }
    ctx->pc = 0x195804u;
    // 0x195804: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x195804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195808:
    // 0x195808: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19580c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x19580cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x195810: 0xc0654fa  jal         func_1953E8
    ctx->pc = 0x195810u;
    SET_GPR_U32(ctx, 31, 0x195818u);
    ctx->pc = 0x195814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195810u;
    // 0x195814: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1953E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953E8u, 0x195810u, 0x195818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195818u;
label_195818:
    // 0x195818: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x195818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19581c: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x19581cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x195820: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x195820u;
    {
        const bool branch_taken_0x195820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195820) {
            ctx->pc = 0x195824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195820u;
            // 0x195824: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x195838u;
            goto label_195838;
        }
    }
    ctx->pc = 0x195828u;
    // 0x195828: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x195828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x19582c: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19582Cu;
    {
        const bool branch_taken_0x19582c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x195830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19582Cu;
        // 0x195830: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19582c) {
            ctx->pc = 0x195808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195808;
        }
    }
    ctx->pc = 0x195834u;
label_195834:
    // 0x195834: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x195834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_195838:
    // 0x195838: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x195838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19583c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x19583cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195840: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x195840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195844: 0x3e00008  jr          $ra
    ctx->pc = 0x195844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195844u;
        // 0x195848: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19584Cu;
    // 0x19584c: 0x0  nop
    ctx->pc = 0x19584cu;
    // NOP
    ctx->pc = 0x195850u;
}
