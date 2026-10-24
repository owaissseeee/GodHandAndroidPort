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

// Function: cCoreSave_getGold
// Address: 0x1fa710 - 0x1fa750
void cCoreSave_getGold_0x1fa710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getGold_0x1fa710");
#endif

    ctx->pc = 0x1fa710u;

    // 0x1fa710: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1fa710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa714: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1fa714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fa718: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA718u;
    {
        const bool branch_taken_0x1fa718 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA718u;
        // 0x1fa71c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa718) {
            ctx->pc = 0x1FA728u;
            goto label_1fa728;
        }
    }
    ctx->pc = 0x1FA720u;
    // 0x1fa720: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA720u;
        // 0x1fa724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA728u;
label_1fa728:
    // 0x1fa728: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x1fa728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x1fa72c: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x1fa72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31284)));
    // 0x1fa730: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1fa730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1fa734: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA734u;
    {
        const bool branch_taken_0x1fa734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA734u;
        // 0x1fa738: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa734) {
            ctx->pc = 0x1FA744u;
            goto label_1fa744;
        }
    }
    ctx->pc = 0x1FA73Cu;
    // 0x1fa73c: 0x3442423f  ori         $v0, $v0, 0x423F
    ctx->pc = 0x1fa73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
    // 0x1fa740: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x1fa740u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
label_1fa744:
    // 0x1fa744: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1fa744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fa748: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA748u;
        // 0x1fa74c: 0x8c620020  lw          $v0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA750u;
}
