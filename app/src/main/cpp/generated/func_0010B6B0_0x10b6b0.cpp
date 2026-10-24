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

// Function: func_0010B6B0
// Address: 0x10b6b0 - 0x10b760
void func_0010B6B0_0x10b6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010B6B0_0x10b6b0");
#endif

    switch (ctx->pc) {
        case 0x10b6b0u: goto label_10b6b0;
        case 0x10b6b4u: goto label_10b6b4;
        case 0x10b6b8u: goto label_10b6b8;
        case 0x10b6bcu: goto label_10b6bc;
        case 0x10b6c0u: goto label_10b6c0;
        case 0x10b6c4u: goto label_10b6c4;
        case 0x10b6c8u: goto label_10b6c8;
        case 0x10b6ccu: goto label_10b6cc;
        case 0x10b6d0u: goto label_10b6d0;
        case 0x10b6d4u: goto label_10b6d4;
        case 0x10b6d8u: goto label_10b6d8;
        case 0x10b6dcu: goto label_10b6dc;
        case 0x10b6e0u: goto label_10b6e0;
        case 0x10b6e4u: goto label_10b6e4;
        case 0x10b6e8u: goto label_10b6e8;
        case 0x10b6ecu: goto label_10b6ec;
        case 0x10b6f0u: goto label_10b6f0;
        case 0x10b6f4u: goto label_10b6f4;
        case 0x10b6f8u: goto label_10b6f8;
        case 0x10b6fcu: goto label_10b6fc;
        case 0x10b700u: goto label_10b700;
        case 0x10b704u: goto label_10b704;
        case 0x10b708u: goto label_10b708;
        case 0x10b70cu: goto label_10b70c;
        case 0x10b710u: goto label_10b710;
        case 0x10b714u: goto label_10b714;
        case 0x10b718u: goto label_10b718;
        case 0x10b71cu: goto label_10b71c;
        case 0x10b720u: goto label_10b720;
        case 0x10b724u: goto label_10b724;
        case 0x10b728u: goto label_10b728;
        case 0x10b72cu: goto label_10b72c;
        case 0x10b730u: goto label_10b730;
        case 0x10b734u: goto label_10b734;
        case 0x10b738u: goto label_10b738;
        case 0x10b73cu: goto label_10b73c;
        case 0x10b740u: goto label_10b740;
        case 0x10b744u: goto label_10b744;
        case 0x10b748u: goto label_10b748;
        case 0x10b74cu: goto label_10b74c;
        case 0x10b750u: goto label_10b750;
        case 0x10b754u: goto label_10b754;
        case 0x10b758u: goto label_10b758;
        case 0x10b75cu: goto label_10b75c;
        default: break;
    }

    ctx->pc = 0x10b6b0u;

label_10b6b0:
    // 0x10b6b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10b6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10b6b4:
    // 0x10b6b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x10b6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10b6b8:
    // 0x10b6b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10b6bc:
    // 0x10b6bc: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x10b6bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_10b6c0:
    // 0x10b6c0: 0x2c420047  sltiu       $v0, $v0, 0x47
    ctx->pc = 0x10b6c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)71) ? 1 : 0);
label_10b6c4:
    // 0x10b6c4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_10b6c8:
    if (ctx->pc == 0x10B6C8u) {
        ctx->pc = 0x10B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6C4u;
        // 0x10b6c8: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B6CCu;
        goto label_10b6cc;
    }
    ctx->pc = 0x10B6C4u;
    {
        const bool branch_taken_0x10b6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b6c4) {
            ctx->pc = 0x10B6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B6C4u;
            // 0x10b6c8: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B6CCu;
            goto label_10b6cc;
        }
    }
    ctx->pc = 0x10B6CCu;
label_10b6cc:
    // 0x10b6cc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x10b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_10b6d0:
    // 0x10b6d0: 0x90c302f5  lbu         $v1, 0x2F5($a2)
    ctx->pc = 0x10b6d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_10b6d4:
    // 0x10b6d4: 0x2447d0f0  addiu       $a3, $v0, -0x2F10
    ctx->pc = 0x10b6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955248));
label_10b6d8:
    // 0x10b6d8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x10b6d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b6dc:
    // 0x10b6dc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x10b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_10b6e0:
    // 0x10b6e0: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x10b6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_10b6e4:
    // 0x10b6e4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x10b6e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_10b6e8:
    // 0x10b6e8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_10b6ec:
    if (ctx->pc == 0x10B6ECu) {
        ctx->pc = 0x10B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6E8u;
        // 0x10b6ec: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B6F0u;
        goto label_10b6f0;
    }
    ctx->pc = 0x10B6E8u;
    {
        const bool branch_taken_0x10b6e8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x10B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6E8u;
        // 0x10b6ec: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b6e8) {
            ctx->pc = 0x10B714u;
            goto label_10b714;
        }
    }
    ctx->pc = 0x10B6F0u;
label_10b6f0:
    // 0x10b6f0: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x10b6f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_10b6f4:
    // 0x10b6f4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x10b6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_10b6f8:
    // 0x10b6f8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x10b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_10b6fc:
    // 0x10b6fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10b6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10b700:
    // 0x10b700: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10b700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10b704:
    // 0x10b704: 0xdc68fff8  ld          $t0, -0x8($v1)
    ctx->pc = 0x10b704u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_10b708:
    // 0x10b708: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x10b708u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_10b70c:
    // 0x10b70c: 0x10000004  b           . + 4 + (0x4 << 2)
label_10b710:
    if (ctx->pc == 0x10B710u) {
        ctx->pc = 0x10B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B70Cu;
        // 0x10b710: 0x2543d0f0  addiu       $v1, $t2, -0x2F10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B714u;
        goto label_10b714;
    }
    ctx->pc = 0x10B70Cu;
    {
        const bool branch_taken_0x10b70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B70Cu;
        // 0x10b710: 0x2543d0f0  addiu       $v1, $t2, -0x2F10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b70c) {
            ctx->pc = 0x10B720u;
            goto label_10b720;
        }
    }
    ctx->pc = 0x10B714u;
label_10b714:
    // 0x10b714: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x10b714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_10b718:
    // 0x10b718: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x10b718u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_10b71c:
    // 0x10b71c: 0x2543d0f0  addiu       $v1, $t2, -0x2F10
    ctx->pc = 0x10b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955248));
label_10b720:
    // 0x10b720: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x10b720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_10b724:
    // 0x10b724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10b724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10b728:
    // 0x10b728: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_10b72c:
    if (ctx->pc == 0x10B72Cu) {
        ctx->pc = 0x10B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B728u;
        // 0x10b72c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B730u;
        goto label_10b730;
    }
    ctx->pc = 0x10B728u;
    {
        const bool branch_taken_0x10b728 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x10B72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B728u;
        // 0x10b72c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b728) {
            ctx->pc = 0x10B744u;
            goto label_10b744;
        }
    }
    ctx->pc = 0x10B730u;
label_10b730:
    // 0x10b730: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x10b730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_10b734:
    // 0x10b734: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x10b734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_10b738:
    // 0x10b738: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x10b738u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_10b73c:
    // 0x10b73c: 0x10000002  b           . + 4 + (0x2 << 2)
label_10b740:
    if (ctx->pc == 0x10B740u) {
        ctx->pc = 0x10B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B73Cu;
        // 0x10b740: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B744u;
        goto label_10b744;
    }
    ctx->pc = 0x10B73Cu;
    {
        const bool branch_taken_0x10b73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B73Cu;
        // 0x10b740: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b73c) {
            ctx->pc = 0x10B748u;
            goto label_10b748;
        }
    }
    ctx->pc = 0x10B744u;
label_10b744:
    // 0x10b744: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10b744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10b748:
    // 0x10b748: 0xe0f809  jalr        $a3
label_10b74c:
    if (ctx->pc == 0x10B74Cu) {
        ctx->pc = 0x10B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B748u;
        // 0x10b74c: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B750u;
        goto label_10b750;
    }
    ctx->pc = 0x10B748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x10B750u);
        ctx->pc = 0x10B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B748u;
        // 0x10b74c: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B748u, 0x10B750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B750u;
label_10b750:
    // 0x10b750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10b754:
    // 0x10b754: 0x3e00008  jr          $ra
label_10b758:
    if (ctx->pc == 0x10B758u) {
        ctx->pc = 0x10B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B754u;
        // 0x10b758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B75Cu;
        goto label_10b75c;
    }
    ctx->pc = 0x10B754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B754u;
        // 0x10b758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B75Cu;
label_10b75c:
    // 0x10b75c: 0x0  nop
    ctx->pc = 0x10b75cu;
    // NOP
    ctx->pc = 0x10b760u;
}
