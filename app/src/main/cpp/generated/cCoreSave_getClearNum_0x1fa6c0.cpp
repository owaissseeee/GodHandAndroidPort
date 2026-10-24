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

// Function: cCoreSave_getClearNum
// Address: 0x1fa6c0 - 0x1fa6f8
void cCoreSave_getClearNum_0x1fa6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getClearNum_0x1fa6c0");
#endif

    ctx->pc = 0x1fa6c0u;

    // 0x1fa6c0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1fa6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa6c4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA6C4u;
    {
        const bool branch_taken_0x1fa6c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA6C4u;
        // 0x1fa6c8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa6c4) {
            ctx->pc = 0x1FA6D4u;
            goto label_1fa6d4;
        }
    }
    ctx->pc = 0x1FA6CCu;
    // 0x1fa6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA6CCu;
        // 0x1fa6d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA6D4u;
label_1fa6d4:
    // 0x1fa6d4: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x1fa6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x1fa6d8: 0x8c437a3c  lw          $v1, 0x7A3C($v0)
    ctx->pc = 0x1fa6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31292)));
    // 0x1fa6dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1fa6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1fa6e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA6E0u;
    {
        const bool branch_taken_0x1fa6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA6E0u;
        // 0x1fa6e4: 0x94a20010  lhu         $v0, 0x10($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa6e0) {
            ctx->pc = 0x1FA6F0u;
            goto label_1fa6f0;
        }
    }
    ctx->pc = 0x1FA6E8u;
    // 0x1fa6e8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FA6E8u;
    {
        const bool branch_taken_0x1fa6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa6e8) {
            ctx->pc = 0x1FA6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA6E8u;
            // 0x1fa6ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA6F0u;
            goto label_1fa6f0;
        }
    }
    ctx->pc = 0x1FA6F0u;
label_1fa6f0:
    // 0x1fa6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA6F8u;
}
