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

// Function: _IO_switch_to_backup_area
// Address: 0x38c2b8 - 0x38c2f0
void ps2__IO_switch_to_backup_area_0x38c2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_switch_to_backup_area_0x38c2b8");
#endif

    ctx->pc = 0x38c2b8u;

    // 0x38c2b8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x38c2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38c2bc: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x38c2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x38c2c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38c2c4: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x38c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x38c2c8: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x38c2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38c2cc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x38c2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x38c2d0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x38c2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x38c2d4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x38c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x38c2d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x38c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x38c2dc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x38c2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x38c2e0: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x38c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x38c2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x38C2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2E4u;
        // 0x38c2e8: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C2ECu;
    // 0x38c2ec: 0x0  nop
    ctx->pc = 0x38c2ecu;
    // NOP
    ctx->pc = 0x38c2f0u;
}
