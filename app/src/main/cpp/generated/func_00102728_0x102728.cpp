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

// Function: func_00102728
// Address: 0x102728 - 0x1027d8
void func_00102728_0x102728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00102728_0x102728");
#endif

    switch (ctx->pc) {
        case 0x102728u: goto label_102728;
        case 0x10272cu: goto label_10272c;
        case 0x102730u: goto label_102730;
        case 0x102734u: goto label_102734;
        case 0x102738u: goto label_102738;
        case 0x10273cu: goto label_10273c;
        case 0x102740u: goto label_102740;
        case 0x102744u: goto label_102744;
        case 0x102748u: goto label_102748;
        case 0x10274cu: goto label_10274c;
        case 0x102750u: goto label_102750;
        case 0x102754u: goto label_102754;
        case 0x102758u: goto label_102758;
        case 0x10275cu: goto label_10275c;
        case 0x102760u: goto label_102760;
        case 0x102764u: goto label_102764;
        case 0x102768u: goto label_102768;
        case 0x10276cu: goto label_10276c;
        case 0x102770u: goto label_102770;
        case 0x102774u: goto label_102774;
        case 0x102778u: goto label_102778;
        case 0x10277cu: goto label_10277c;
        case 0x102780u: goto label_102780;
        case 0x102784u: goto label_102784;
        case 0x102788u: goto label_102788;
        case 0x10278cu: goto label_10278c;
        case 0x102790u: goto label_102790;
        case 0x102794u: goto label_102794;
        case 0x102798u: goto label_102798;
        case 0x10279cu: goto label_10279c;
        case 0x1027a0u: goto label_1027a0;
        case 0x1027a4u: goto label_1027a4;
        case 0x1027a8u: goto label_1027a8;
        case 0x1027acu: goto label_1027ac;
        case 0x1027b0u: goto label_1027b0;
        case 0x1027b4u: goto label_1027b4;
        case 0x1027b8u: goto label_1027b8;
        case 0x1027bcu: goto label_1027bc;
        case 0x1027c0u: goto label_1027c0;
        case 0x1027c4u: goto label_1027c4;
        case 0x1027c8u: goto label_1027c8;
        case 0x1027ccu: goto label_1027cc;
        case 0x1027d0u: goto label_1027d0;
        case 0x1027d4u: goto label_1027d4;
        default: break;
    }

    ctx->pc = 0x102728u;

label_102728:
    // 0x102728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x102728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10272c:
    // 0x10272c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x10272cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_102730:
    // 0x102730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_102734:
    // 0x102734: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x102734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_102738:
    // 0x102738: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x102738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_10273c:
    // 0x10273c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_102740:
    if (ctx->pc == 0x102740u) {
        ctx->pc = 0x102740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10273Cu;
        // 0x102740: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102744u;
        goto label_102744;
    }
    ctx->pc = 0x10273Cu;
    {
        const bool branch_taken_0x10273c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10273c) {
            ctx->pc = 0x102740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10273Cu;
            // 0x102740: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102744u;
            goto label_102744;
        }
    }
    ctx->pc = 0x102744u;
label_102744:
    // 0x102744: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x102744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_102748:
    // 0x102748: 0x90c302f5  lbu         $v1, 0x2F5($a2)
    ctx->pc = 0x102748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_10274c:
    // 0x10274c: 0x2447c770  addiu       $a3, $v0, -0x3890
    ctx->pc = 0x10274cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952816));
label_102750:
    // 0x102750: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x102750u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102754:
    // 0x102754: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x102754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_102758:
    // 0x102758: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x102758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_10275c:
    // 0x10275c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x10275cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_102760:
    // 0x102760: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_102764:
    if (ctx->pc == 0x102764u) {
        ctx->pc = 0x102764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102760u;
        // 0x102764: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x102768u;
        goto label_102768;
    }
    ctx->pc = 0x102760u;
    {
        const bool branch_taken_0x102760 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x102764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102760u;
        // 0x102764: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102760) {
            ctx->pc = 0x10278Cu;
            goto label_10278c;
        }
    }
    ctx->pc = 0x102768u;
label_102768:
    // 0x102768: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x102768u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_10276c:
    // 0x10276c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x10276cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_102770:
    // 0x102770: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x102770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_102774:
    // 0x102774: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x102774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_102778:
    // 0x102778: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x102778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10277c:
    // 0x10277c: 0xdc68fff8  ld          $t0, -0x8($v1)
    ctx->pc = 0x10277cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_102780:
    // 0x102780: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x102780u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_102784:
    // 0x102784: 0x10000004  b           . + 4 + (0x4 << 2)
label_102788:
    if (ctx->pc == 0x102788u) {
        ctx->pc = 0x102788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102784u;
        // 0x102788: 0x2543c770  addiu       $v1, $t2, -0x3890 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10278Cu;
        goto label_10278c;
    }
    ctx->pc = 0x102784u;
    {
        const bool branch_taken_0x102784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102784u;
        // 0x102788: 0x2543c770  addiu       $v1, $t2, -0x3890 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102784) {
            ctx->pc = 0x102798u;
            goto label_102798;
        }
    }
    ctx->pc = 0x10278Cu;
label_10278c:
    // 0x10278c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x10278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_102790:
    // 0x102790: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x102790u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_102794:
    // 0x102794: 0x2543c770  addiu       $v1, $t2, -0x3890
    ctx->pc = 0x102794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952816));
label_102798:
    // 0x102798: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x102798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_10279c:
    // 0x10279c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1027a0:
    // 0x1027a0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1027a4:
    if (ctx->pc == 0x1027A4u) {
        ctx->pc = 0x1027A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027A0u;
        // 0x1027a4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1027A8u;
        goto label_1027a8;
    }
    ctx->pc = 0x1027A0u;
    {
        const bool branch_taken_0x1027a0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1027A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027A0u;
        // 0x1027a4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027a0) {
            ctx->pc = 0x1027BCu;
            goto label_1027bc;
        }
    }
    ctx->pc = 0x1027A8u;
label_1027a8:
    // 0x1027a8: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x1027a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_1027ac:
    // 0x1027ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1027acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1027b0:
    // 0x1027b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1027b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1027b4:
    // 0x1027b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1027b8:
    if (ctx->pc == 0x1027B8u) {
        ctx->pc = 0x1027B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027B4u;
        // 0x1027b8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1027BCu;
        goto label_1027bc;
    }
    ctx->pc = 0x1027B4u;
    {
        const bool branch_taken_0x1027b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1027B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027B4u;
        // 0x1027b8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1027b4) {
            ctx->pc = 0x1027C0u;
            goto label_1027c0;
        }
    }
    ctx->pc = 0x1027BCu;
label_1027bc:
    // 0x1027bc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1027bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1027c0:
    // 0x1027c0: 0xe0f809  jalr        $a3
label_1027c4:
    if (ctx->pc == 0x1027C4u) {
        ctx->pc = 0x1027C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027C0u;
        // 0x1027c4: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1027C8u;
        goto label_1027c8;
    }
    ctx->pc = 0x1027C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1027C8u);
        ctx->pc = 0x1027C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027C0u;
        // 0x1027c4: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1027C0u, 0x1027C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1027C8u;
label_1027c8:
    // 0x1027c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1027c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1027cc:
    // 0x1027cc: 0x3e00008  jr          $ra
label_1027d0:
    if (ctx->pc == 0x1027D0u) {
        ctx->pc = 0x1027D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027CCu;
        // 0x1027d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1027D4u;
        goto label_1027d4;
    }
    ctx->pc = 0x1027CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1027D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1027CCu;
        // 0x1027d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1027CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1027D4u;
label_1027d4:
    // 0x1027d4: 0x0  nop
    ctx->pc = 0x1027d4u;
    // NOP
    ctx->pc = 0x1027d8u;
}
