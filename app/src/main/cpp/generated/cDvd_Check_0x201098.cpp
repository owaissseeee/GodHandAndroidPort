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

// Function: cDvd_Check
// Address: 0x201098 - 0x201108
void cDvd_Check_0x201098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDvd_Check_0x201098");
#endif

    switch (ctx->pc) {
        case 0x2010c4u: goto label_2010c4;
        case 0x2010d8u: goto label_2010d8;
        default: break;
    }

    ctx->pc = 0x201098u;

    // 0x201098: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x201098u;
    {
        const bool branch_taken_0x201098 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x201098) {
            ctx->pc = 0x20109Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201098u;
            // 0x20109c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2010A8u;
            goto label_2010a8;
        }
    }
    ctx->pc = 0x2010A0u;
    // 0x2010a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2010A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2010A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010A0u;
        // 0x2010a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2010A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2010A8u;
label_2010a8:
    // 0x2010a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2010A8u;
    {
        const bool branch_taken_0x2010a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2010ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010A8u;
        // 0x2010ac: 0x24861104  addiu       $a2, $a0, 0x1104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2010a8) {
            ctx->pc = 0x2010CCu;
            goto label_2010cc;
        }
    }
    ctx->pc = 0x2010B0u;
    // 0x2010b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2010b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2010b4: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2010B4u;
    {
        const bool branch_taken_0x2010b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2010B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010B4u;
        // 0x2010b8: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2010b4) {
            ctx->pc = 0x2010D0u;
            goto label_2010d0;
        }
    }
    ctx->pc = 0x2010BCu;
    // 0x2010bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2010BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2010C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010BCu;
        // 0x2010c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2010BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2010C4u;
label_2010c4:
    // 0x2010c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2010C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2010C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010C4u;
        // 0x2010c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2010C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2010CCu;
label_2010cc:
    // 0x2010cc: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x2010ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2010d0:
    // 0x2010d0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2010d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2010d4: 0x0  nop
    ctx->pc = 0x2010d4u;
    // NOP
label_2010d8:
    // 0x2010d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2010d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2010dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2010DCu;
    {
        const bool branch_taken_0x2010dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2010E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010DCu;
        // 0x2010e0: 0x24840088  addiu       $a0, $a0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2010dc) {
            ctx->pc = 0x2010F0u;
            goto label_2010f0;
        }
    }
    ctx->pc = 0x2010E4u;
    // 0x2010e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2010e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2010e8: 0x1045fff6  beq         $v0, $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2010E8u;
    {
        const bool branch_taken_0x2010e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2010e8) {
            ctx->pc = 0x2010C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2010c4;
        }
    }
    ctx->pc = 0x2010F0u;
label_2010f0:
    // 0x2010f0: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2010f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2010f4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2010F4u;
    {
        const bool branch_taken_0x2010f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2010F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010F4u;
        // 0x2010f8: 0x24630088  addiu       $v1, $v1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2010f4) {
            ctx->pc = 0x2010D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2010d8;
        }
    }
    ctx->pc = 0x2010FCu;
    // 0x2010fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2010FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010FCu;
        // 0x201100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2010FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201104u;
    // 0x201104: 0x0  nop
    ctx->pc = 0x201104u;
    // NOP
    ctx->pc = 0x201108u;
}
