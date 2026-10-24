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

// Function: func_001D6D20
// Address: 0x1d6d20 - 0x1d6d68
void func_001D6D20_0x1d6d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D6D20_0x1d6d20");
#endif

    ctx->pc = 0x1d6d20u;

    // 0x1d6d20: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6D20u;
    {
        const bool branch_taken_0x1d6d20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D20u;
        // 0x1d6d24: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d20) {
            ctx->pc = 0x1D6D44u;
            goto label_1d6d44;
        }
    }
    ctx->pc = 0x1D6D28u;
    // 0x1d6d28: 0x8c4400e0  lw          $a0, 0xE0($v0)
    ctx->pc = 0x1d6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x1d6d2c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d6d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d6d30: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d6d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d6d34: 0xa083002b  sb          $v1, 0x2B($a0)
    ctx->pc = 0x1d6d34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 43), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d6d38: 0x8c42015c  lw          $v0, 0x15C($v0)
    ctx->pc = 0x1d6d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x1d6d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D3Cu;
        // 0x1d6d40: 0xa045002b  sb          $a1, 0x2B($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6D44u;
label_1d6d44:
    // 0x1d6d44: 0x244300dc  addiu       $v1, $v0, 0xDC
    ctx->pc = 0x1d6d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1d6d48: 0x24450158  addiu       $a1, $v0, 0x158
    ctx->pc = 0x1d6d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 344));
    // 0x1d6d4c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d6d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d6d50: 0x90640078  lbu         $a0, 0x78($v1)
    ctx->pc = 0x1d6d50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x1d6d54: 0xa044002b  sb          $a0, 0x2B($v0)
    ctx->pc = 0x1d6d54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d6d58: 0x90a30078  lbu         $v1, 0x78($a1)
    ctx->pc = 0x1d6d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x1d6d5c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1d6d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d6d60: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D60u;
        // 0x1d6d64: 0xa043002b  sb          $v1, 0x2B($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6D68u;
}
