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

// Function: func_0037D680
// Address: 0x37d680 - 0x37d728
void func_0037D680_0x37d680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D680_0x37d680");
#endif

    switch (ctx->pc) {
        case 0x37d6c4u: goto label_37d6c4;
        case 0x37d6f4u: goto label_37d6f4;
        default: break;
    }

    ctx->pc = 0x37d680u;

    // 0x37d680: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37d680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37d684: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x37d684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d688: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37d688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d68c: 0x2442a790  addiu       $v0, $v0, -0x5870
    ctx->pc = 0x37d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
    // 0x37d690: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x37d690u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x76A7A4u));
    // 0x37d694: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D694u;
    {
        const bool branch_taken_0x37d694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d694) {
            ctx->pc = 0x37D698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D694u;
            // 0x37d698: 0x90a30005  lbu         $v1, 0x5($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D6A8u;
            goto label_37d6a8;
        }
    }
    ctx->pc = 0x37D69Cu;
    // 0x37d69c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x37d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x37d6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x37D6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D6A0u;
        // 0x37d6a4: 0xa4a20044  sh          $v0, 0x44($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 68), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D6A8u;
label_37d6a8:
    // 0x37d6a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d6ac: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x37D6ACu;
    {
        const bool branch_taken_0x37d6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D6ACu;
        // 0x37d6b0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d6ac) {
            ctx->pc = 0x37D714u;
            goto label_37d714;
        }
    }
    ctx->pc = 0x37D6B4u;
    // 0x37d6b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37D6B4u;
    {
        const bool branch_taken_0x37d6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D6B4u;
        // 0x37d6b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d6b4) {
            ctx->pc = 0x37D6CCu;
            goto label_37d6cc;
        }
    }
    ctx->pc = 0x37D6BCu;
    // 0x37d6bc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37D6BCu;
    {
        const bool branch_taken_0x37d6bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D6BCu;
        // 0x37d6c0: 0x2482a790  addiu       $v0, $a0, -0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d6bc) {
            ctx->pc = 0x37D6E0u;
            goto label_37d6e0;
        }
    }
    ctx->pc = 0x37D6C4u;
label_37d6c4:
    // 0x37d6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x37D6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D6CCu;
label_37d6cc:
    // 0x37d6cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x37d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37d6d0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x37D6D0u;
    {
        const bool branch_taken_0x37d6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D6D0u;
        // 0x37d6d4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d6d0) {
            ctx->pc = 0x37D704u;
            goto label_37d704;
        }
    }
    ctx->pc = 0x37D6D8u;
    // 0x37d6d8: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x37D6D8u;
    {
        const bool branch_taken_0x37d6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37D6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D6D8u;
        // 0x37d6dc: 0x2482a790  addiu       $v0, $a0, -0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d6d8) {
            ctx->pc = 0x37D6C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d6c4;
        }
    }
    ctx->pc = 0x37D6E0u;
label_37d6e0:
    // 0x37d6e0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x37d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x37d6e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d6e8: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D6E8u;
    {
        const bool branch_taken_0x37d6e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x37d6e8) {
            ctx->pc = 0x37D6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D6E8u;
            // 0x37d6ec: 0x94a20042  lhu         $v0, 0x42($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 66)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D6FCu;
            goto label_37d6fc;
        }
    }
    ctx->pc = 0x37D6F0u;
    // 0x37d6f0: 0x94a20040  lhu         $v0, 0x40($a1)
    ctx->pc = 0x37d6f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
label_37d6f4:
    // 0x37d6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x37D6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D6F4u;
        // 0x37d6f8: 0xa4a20044  sh          $v0, 0x44($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 68), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D6FCu;
label_37d6fc:
    // 0x37d6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x37D6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D6FCu;
        // 0x37d700: 0xa4a20044  sh          $v0, 0x44($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 68), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D704u;
label_37d704:
    // 0x37d704: 0x94a20024  lhu         $v0, 0x24($a1)
    ctx->pc = 0x37d704u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x37d708: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x37d708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x37d70c: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x37D70Cu;
    {
        const bool branch_taken_0x37d70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37d70c) {
            ctx->pc = 0x37D710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D70Cu;
            // 0x37d710: 0x94a20040  lhu         $v0, 0x40($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D6F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d6f4;
        }
    }
    ctx->pc = 0x37D714u;
label_37d714:
    // 0x37d714: 0x94a2002c  lhu         $v0, 0x2C($a1)
    ctx->pc = 0x37d714u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x37d718: 0xa4a20044  sh          $v0, 0x44($a1)
    ctx->pc = 0x37d718u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x37d71c: 0x3e00008  jr          $ra
    ctx->pc = 0x37D71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D724u;
    // 0x37d724: 0x0  nop
    ctx->pc = 0x37d724u;
    // NOP
    ctx->pc = 0x37d728u;
}
