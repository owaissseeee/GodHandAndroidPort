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

// Function: func_002B6688
// Address: 0x2b6688 - 0x2b6768
void func_002B6688_0x2b6688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B6688_0x2b6688");
#endif

    switch (ctx->pc) {
        case 0x2b66a8u: goto label_2b66a8;
        case 0x2b66b0u: goto label_2b66b0;
        case 0x2b66b8u: goto label_2b66b8;
        case 0x2b66d8u: goto label_2b66d8;
        case 0x2b6708u: goto label_2b6708;
        case 0x2b6738u: goto label_2b6738;
        default: break;
    }

    ctx->pc = 0x2b6688u;

    // 0x2b6688: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x2b6688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x2b668c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B668Cu;
    {
        const bool branch_taken_0x2b668c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B6690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B668Cu;
        // 0x2b6690: 0x2482fd00  addiu       $v0, $a0, -0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b668c) {
            ctx->pc = 0x2B669Cu;
            goto label_2b669c;
        }
    }
    ctx->pc = 0x2B6694u;
    // 0x2b6694: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6694u;
        // 0x2b6698: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B669Cu;
label_2b669c:
    // 0x2b669c: 0x2c420200  sltiu       $v0, $v0, 0x200
    ctx->pc = 0x2b669cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x2b66a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B66A0u;
    {
        const bool branch_taken_0x2b66a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66A0u;
        // 0x2b66a4: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66a0) {
            ctx->pc = 0x2B66C0u;
            goto label_2b66c0;
        }
    }
    ctx->pc = 0x2B66A8u;
label_2b66a8:
    // 0x2b66a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B66A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66A8u;
        // 0x2b66ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B66A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B66B0u;
label_2b66b0:
    // 0x2b66b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B66B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66B0u;
        // 0x2b66b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B66B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B66B8u;
label_2b66b8:
    // 0x2b66b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B66B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66B8u;
        // 0x2b66bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B66B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B66C0u;
label_2b66c0:
    // 0x2b66c0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2b66c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b66c4: 0x8ca2b360  lw          $v0, -0x4CA0($a1)
    ctx->pc = 0x2b66c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294947680)));
    // 0x2b66c8: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B66C8u;
    {
        const bool branch_taken_0x2b66c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66C8u;
        // 0x2b66cc: 0x24a3b360  addiu       $v1, $a1, -0x4CA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66c8) {
            ctx->pc = 0x2B66F0u;
            goto label_2b66f0;
        }
    }
    ctx->pc = 0x2B66D0u;
    // 0x2b66d0: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2b66d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b66d4: 0x0  nop
    ctx->pc = 0x2b66d4u;
    // NOP
label_2b66d8:
    // 0x2b66d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b66d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b66dc: 0x1082fff2  beq         $a0, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2B66DCu;
    {
        const bool branch_taken_0x2b66dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66DCu;
        // 0x2b66e0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66dc) {
            ctx->pc = 0x2B66A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b66a8;
        }
    }
    ctx->pc = 0x2B66E4u;
    // 0x2b66e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b66e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b66e8: 0x1445fffb  bne         $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B66E8u;
    {
        const bool branch_taken_0x2b66e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2b66e8) {
            ctx->pc = 0x2B66D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b66d8;
        }
    }
    ctx->pc = 0x2B66F0u;
label_2b66f0:
    // 0x2b66f0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b66f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b66f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2b66f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b66f8: 0x8ca2b378  lw          $v0, -0x4C88($a1)
    ctx->pc = 0x2b66f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x44B378u));
    // 0x2b66fc: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B66FCu;
    {
        const bool branch_taken_0x2b66fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B6700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66FCu;
        // 0x2b6700: 0x24a3b378  addiu       $v1, $a1, -0x4C88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66fc) {
            ctx->pc = 0x2B6720u;
            goto label_2b6720;
        }
    }
    ctx->pc = 0x2B6704u;
    // 0x2b6704: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2b6704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2b6708:
    // 0x2b6708: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b6708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b670c: 0x1082ffe8  beq         $a0, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2B670Cu;
    {
        const bool branch_taken_0x2b670c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B670Cu;
        // 0x2b6710: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b670c) {
            ctx->pc = 0x2B66B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b66b0;
        }
    }
    ctx->pc = 0x2B6714u;
    // 0x2b6714: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b6714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6718: 0x1445fffb  bne         $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B6718u;
    {
        const bool branch_taken_0x2b6718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2b6718) {
            ctx->pc = 0x2B6708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6708;
        }
    }
    ctx->pc = 0x2B6720u;
label_2b6720:
    // 0x2b6720: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2b6720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2b6724: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2b6724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2b6728: 0x8ca2b410  lw          $v0, -0x4BF0($a1)
    ctx->pc = 0x2b6728u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x44B410u));
    // 0x2b672c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B672Cu;
    {
        const bool branch_taken_0x2b672c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B6730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B672Cu;
        // 0x2b6730: 0x24a3b410  addiu       $v1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b672c) {
            ctx->pc = 0x2B6750u;
            goto label_2b6750;
        }
    }
    ctx->pc = 0x2B6734u;
    // 0x2b6734: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2b6734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2b6738:
    // 0x2b6738: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b6738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b673c: 0x1082ffde  beq         $a0, $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2B673Cu;
    {
        const bool branch_taken_0x2b673c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B673Cu;
        // 0x2b6740: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b673c) {
            ctx->pc = 0x2B66B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b66b8;
        }
    }
    ctx->pc = 0x2B6744u;
    // 0x2b6744: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b6744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6748: 0x1445fffb  bne         $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B6748u;
    {
        const bool branch_taken_0x2b6748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2b6748) {
            ctx->pc = 0x2B6738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6738;
        }
    }
    ctx->pc = 0x2B6750u;
label_2b6750:
    // 0x2b6750: 0x2483fe00  addiu       $v1, $a0, -0x200
    ctx->pc = 0x2b6750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966784));
    // 0x2b6754: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b6754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b6758: 0x2c630100  sltiu       $v1, $v1, 0x100
    ctx->pc = 0x2b6758u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2b675c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B675Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B675Cu;
        // 0x2b6760: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B675Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6764u;
    // 0x2b6764: 0x0  nop
    ctx->pc = 0x2b6764u;
    // NOP
    ctx->pc = 0x2b6768u;
}
