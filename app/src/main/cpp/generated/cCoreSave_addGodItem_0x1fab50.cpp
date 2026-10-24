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

// Function: cCoreSave_addGodItem
// Address: 0x1fab50 - 0x1fabb0
void cCoreSave_addGodItem_0x1fab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addGodItem_0x1fab50");
#endif

    switch (ctx->pc) {
        case 0x1fab68u: goto label_1fab68;
        default: break;
    }

    ctx->pc = 0x1fab50u;

    // 0x1fab50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fab50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fab54: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1fab54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fab58: 0x90620156  lbu         $v0, 0x156($v1)
    ctx->pc = 0x1fab58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 342)));
    // 0x1fab5c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FAB5Cu;
    {
        const bool branch_taken_0x1fab5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB5Cu;
        // 0x1fab60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab5c) {
            ctx->pc = 0x1FABA4u;
            goto label_1faba4;
        }
    }
    ctx->pc = 0x1FAB64u;
    // 0x1fab64: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1fab64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fab68:
    // 0x1fab68: 0x24e200a8  addiu       $v0, $a3, 0xA8
    ctx->pc = 0x1fab68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 168));
    // 0x1fab6c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fab70: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1fab70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fab74: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAB74u;
    {
        const bool branch_taken_0x1fab74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB74u;
        // 0x1fab78: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab74) {
            ctx->pc = 0x1FAB88u;
            goto label_1fab88;
        }
    }
    ctx->pc = 0x1FAB7Cu;
    // 0x1fab7c: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x1fab7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1fab80: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAB80u;
        // 0x1fab84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAB88u;
label_1fab88:
    // 0x1fab88: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x1fab88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1fab8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FAB8Cu;
    {
        const bool branch_taken_0x1fab8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fab8c) {
            ctx->pc = 0x1FABA4u;
            goto label_1faba4;
        }
    }
    ctx->pc = 0x1FAB94u;
    // 0x1fab94: 0x90e20156  lbu         $v0, 0x156($a3)
    ctx->pc = 0x1fab94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 342)));
    // 0x1fab98: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1fab98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fab9c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FAB9Cu;
    {
        const bool branch_taken_0x1fab9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fab9c) {
            ctx->pc = 0x1FABA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAB9Cu;
            // 0x1faba0: 0x8c870000  lw          $a3, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fab68;
        }
    }
    ctx->pc = 0x1FABA4u;
label_1faba4:
    // 0x1faba4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FABA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FABA4u;
        // 0x1faba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FABA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FABACu;
    // 0x1fabac: 0x0  nop
    ctx->pc = 0x1fabacu;
    // NOP
    ctx->pc = 0x1fabb0u;
}
