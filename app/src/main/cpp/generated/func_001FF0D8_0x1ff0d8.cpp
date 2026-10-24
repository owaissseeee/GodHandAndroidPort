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

// Function: func_001FF0D8
// Address: 0x1ff0d8 - 0x1ff110
void func_001FF0D8_0x1ff0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FF0D8_0x1ff0d8");
#endif

    ctx->pc = 0x1ff0d8u;

    // 0x1ff0d8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ff0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff0dc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF0DCu;
    {
        const bool branch_taken_0x1ff0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff0dc) {
            ctx->pc = 0x1FF0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF0DCu;
            // 0x1ff0e0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF0ECu;
            goto label_1ff0ec;
        }
    }
    ctx->pc = 0x1FF0E4u;
    // 0x1ff0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0E4u;
        // 0x1ff0e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF0ECu;
label_1ff0ec:
    // 0x1ff0ec: 0x210ba  dsrl        $v0, $v0, 2
    ctx->pc = 0x1ff0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 2);
    // 0x1ff0f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ff0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ff0f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF0F4u;
    {
        const bool branch_taken_0x1ff0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff0f4) {
            ctx->pc = 0x1FF108u;
            goto label_1ff108;
        }
    }
    ctx->pc = 0x1FF0FCu;
    // 0x1ff0fc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1ff0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ff100: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF100u;
        // 0x1ff104: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF108u;
label_1ff108:
    // 0x1ff108: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF108u;
        // 0x1ff10c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF110u;
}
