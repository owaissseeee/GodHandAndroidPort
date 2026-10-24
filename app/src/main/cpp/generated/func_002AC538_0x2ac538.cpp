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

// Function: func_002AC538
// Address: 0x2ac538 - 0x2ac5b0
void func_002AC538_0x2ac538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AC538_0x2ac538");
#endif

    switch (ctx->pc) {
        case 0x2ac544u: goto label_2ac544;
        case 0x2ac580u: goto label_2ac580;
        default: break;
    }

    ctx->pc = 0x2ac538u;

    // 0x2ac538: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2ac538u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2ac53c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC53Cu;
    {
        const bool branch_taken_0x2ac53c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC53Cu;
        // 0x2ac540: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac53c) {
            ctx->pc = 0x2AC54Cu;
            goto label_2ac54c;
        }
    }
    ctx->pc = 0x2AC544u;
label_2ac544:
    // 0x2ac544: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC544u;
        // 0x2ac548: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC54Cu;
label_2ac54c:
    // 0x2ac54c: 0x84e20008  lh          $v0, 0x8($a3)
    ctx->pc = 0x2ac54cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2ac550: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2ac550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ac554: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AC554u;
    {
        const bool branch_taken_0x2ac554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC554u;
        // 0x2ac558: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac554) {
            ctx->pc = 0x2AC544u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac544;
        }
    }
    ctx->pc = 0x2AC55Cu;
    // 0x2ac55c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2ac55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2ac560: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AC560u;
    {
        const bool branch_taken_0x2ac560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac560) {
            ctx->pc = 0x2AC5A8u;
            goto label_2ac5a8;
        }
    }
    ctx->pc = 0x2AC568u;
    // 0x2ac568: 0x84e20014  lh          $v0, 0x14($a3)
    ctx->pc = 0x2ac568u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2ac56c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2ac56cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ac570: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AC570u;
    {
        const bool branch_taken_0x2ac570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC570u;
        // 0x2ac574: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac570) {
            ctx->pc = 0x2AC580u;
            goto label_2ac580;
        }
    }
    ctx->pc = 0x2AC578u;
    // 0x2ac578: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2AC578u;
    {
        const bool branch_taken_0x2ac578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC578u;
        // 0x2ac57c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac578) {
            ctx->pc = 0x2AC5A8u;
            goto label_2ac5a8;
        }
    }
    ctx->pc = 0x2AC580u;
label_2ac580:
    // 0x2ac580: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2ac580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2ac584: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AC584u;
    {
        const bool branch_taken_0x2ac584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC584u;
        // 0x2ac588: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac584) {
            ctx->pc = 0x2AC5A8u;
            goto label_2ac5a8;
        }
    }
    ctx->pc = 0x2AC58Cu;
    // 0x2ac58c: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x2ac58cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2ac590: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x2ac590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ac594: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x2ac594u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ac598: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x2ac598u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ac59c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2AC59Cu;
    {
        const bool branch_taken_0x2ac59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac59c) {
            ctx->pc = 0x2AC5A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC59Cu;
            // 0x2ac5a0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ac580;
        }
    }
    ctx->pc = 0x2AC5A4u;
    // 0x2ac5a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2ac5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2ac5a8:
    // 0x2ac5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC5A8u;
        // 0x2ac5ac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC5B0u;
}
