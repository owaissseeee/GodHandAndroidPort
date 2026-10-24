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

// Function: func_002777A8
// Address: 0x2777a8 - 0x277858
void func_002777A8_0x2777a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002777A8_0x2777a8");
#endif

    switch (ctx->pc) {
        case 0x2777a8u: goto label_2777a8;
        case 0x2777acu: goto label_2777ac;
        case 0x2777b0u: goto label_2777b0;
        case 0x2777b4u: goto label_2777b4;
        case 0x2777b8u: goto label_2777b8;
        case 0x2777bcu: goto label_2777bc;
        case 0x2777c0u: goto label_2777c0;
        case 0x2777c4u: goto label_2777c4;
        case 0x2777c8u: goto label_2777c8;
        case 0x2777ccu: goto label_2777cc;
        case 0x2777d0u: goto label_2777d0;
        case 0x2777d4u: goto label_2777d4;
        case 0x2777d8u: goto label_2777d8;
        case 0x2777dcu: goto label_2777dc;
        case 0x2777e0u: goto label_2777e0;
        case 0x2777e4u: goto label_2777e4;
        case 0x2777e8u: goto label_2777e8;
        case 0x2777ecu: goto label_2777ec;
        case 0x2777f0u: goto label_2777f0;
        case 0x2777f4u: goto label_2777f4;
        case 0x2777f8u: goto label_2777f8;
        case 0x2777fcu: goto label_2777fc;
        case 0x277800u: goto label_277800;
        case 0x277804u: goto label_277804;
        case 0x277808u: goto label_277808;
        case 0x27780cu: goto label_27780c;
        case 0x277810u: goto label_277810;
        case 0x277814u: goto label_277814;
        case 0x277818u: goto label_277818;
        case 0x27781cu: goto label_27781c;
        case 0x277820u: goto label_277820;
        case 0x277824u: goto label_277824;
        case 0x277828u: goto label_277828;
        case 0x27782cu: goto label_27782c;
        case 0x277830u: goto label_277830;
        case 0x277834u: goto label_277834;
        case 0x277838u: goto label_277838;
        case 0x27783cu: goto label_27783c;
        case 0x277840u: goto label_277840;
        case 0x277844u: goto label_277844;
        case 0x277848u: goto label_277848;
        case 0x27784cu: goto label_27784c;
        case 0x277850u: goto label_277850;
        case 0x277854u: goto label_277854;
        default: break;
    }

    ctx->pc = 0x2777a8u;

label_2777a8:
    // 0x2777a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2777a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2777ac:
    // 0x2777ac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2777acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2777b0:
    // 0x2777b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2777b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2777b4:
    // 0x2777b4: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x2777b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_2777b8:
    // 0x2777b8: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2777b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2777bc:
    // 0x2777bc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2777c0:
    if (ctx->pc == 0x2777C0u) {
        ctx->pc = 0x2777C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777BCu;
        // 0x2777c0: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2777C4u;
        goto label_2777c4;
    }
    ctx->pc = 0x2777BCu;
    {
        const bool branch_taken_0x2777bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2777bc) {
            ctx->pc = 0x2777C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2777BCu;
            // 0x2777c0: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2777C4u;
            goto label_2777c4;
        }
    }
    ctx->pc = 0x2777C4u;
label_2777c4:
    // 0x2777c4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2777c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2777c8:
    // 0x2777c8: 0x90c302f5  lbu         $v1, 0x2F5($a2)
    ctx->pc = 0x2777c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_2777cc:
    // 0x2777cc: 0x2447fad8  addiu       $a3, $v0, -0x528
    ctx->pc = 0x2777ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965976));
label_2777d0:
    // 0x2777d0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2777d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2777d4:
    // 0x2777d4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2777d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2777d8:
    // 0x2777d8: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x2777d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2777dc:
    // 0x2777dc: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x2777dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_2777e0:
    // 0x2777e0: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_2777e4:
    if (ctx->pc == 0x2777E4u) {
        ctx->pc = 0x2777E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777E0u;
        // 0x2777e4: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2777E8u;
        goto label_2777e8;
    }
    ctx->pc = 0x2777E0u;
    {
        const bool branch_taken_0x2777e0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2777E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777E0u;
        // 0x2777e4: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2777e0) {
            ctx->pc = 0x27780Cu;
            goto label_27780c;
        }
    }
    ctx->pc = 0x2777E8u;
label_2777e8:
    // 0x2777e8: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x2777e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2777ec:
    // 0x2777ec: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2777ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2777f0:
    // 0x2777f0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2777f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2777f4:
    // 0x2777f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2777f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2777f8:
    // 0x2777f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2777f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2777fc:
    // 0x2777fc: 0xdc68fff8  ld          $t0, -0x8($v1)
    ctx->pc = 0x2777fcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_277800:
    // 0x277800: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x277800u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_277804:
    // 0x277804: 0x10000004  b           . + 4 + (0x4 << 2)
label_277808:
    if (ctx->pc == 0x277808u) {
        ctx->pc = 0x277808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277804u;
        // 0x277808: 0x2543fad8  addiu       $v1, $t2, -0x528 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27780Cu;
        goto label_27780c;
    }
    ctx->pc = 0x277804u;
    {
        const bool branch_taken_0x277804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277804u;
        // 0x277808: 0x2543fad8  addiu       $v1, $t2, -0x528 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277804) {
            ctx->pc = 0x277818u;
            goto label_277818;
        }
    }
    ctx->pc = 0x27780Cu;
label_27780c:
    // 0x27780c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x27780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_277810:
    // 0x277810: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x277810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_277814:
    // 0x277814: 0x2543fad8  addiu       $v1, $t2, -0x528
    ctx->pc = 0x277814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965976));
label_277818:
    // 0x277818: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x277818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_27781c:
    // 0x27781c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27781cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_277820:
    // 0x277820: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_277824:
    if (ctx->pc == 0x277824u) {
        ctx->pc = 0x277824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277820u;
        // 0x277824: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277828u;
        goto label_277828;
    }
    ctx->pc = 0x277820u;
    {
        const bool branch_taken_0x277820 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x277824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277820u;
        // 0x277824: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277820) {
            ctx->pc = 0x27783Cu;
            goto label_27783c;
        }
    }
    ctx->pc = 0x277828u;
label_277828:
    // 0x277828: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x277828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_27782c:
    // 0x27782c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27782cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_277830:
    // 0x277830: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x277830u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_277834:
    // 0x277834: 0x10000002  b           . + 4 + (0x2 << 2)
label_277838:
    if (ctx->pc == 0x277838u) {
        ctx->pc = 0x277838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277834u;
        // 0x277838: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27783Cu;
        goto label_27783c;
    }
    ctx->pc = 0x277834u;
    {
        const bool branch_taken_0x277834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277834u;
        // 0x277838: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277834) {
            ctx->pc = 0x277840u;
            goto label_277840;
        }
    }
    ctx->pc = 0x27783Cu;
label_27783c:
    // 0x27783c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x27783cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_277840:
    // 0x277840: 0xe0f809  jalr        $a3
label_277844:
    if (ctx->pc == 0x277844u) {
        ctx->pc = 0x277844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277840u;
        // 0x277844: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277848u;
        goto label_277848;
    }
    ctx->pc = 0x277840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x277848u);
        ctx->pc = 0x277844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277840u;
        // 0x277844: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277840u, 0x277848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277848u;
label_277848:
    // 0x277848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27784c:
    // 0x27784c: 0x3e00008  jr          $ra
label_277850:
    if (ctx->pc == 0x277850u) {
        ctx->pc = 0x277850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27784Cu;
        // 0x277850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277854u;
        goto label_277854;
    }
    ctx->pc = 0x27784Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27784Cu;
        // 0x277850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27784Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277854u;
label_277854:
    // 0x277854: 0x0  nop
    ctx->pc = 0x277854u;
    // NOP
    ctx->pc = 0x277858u;
}
