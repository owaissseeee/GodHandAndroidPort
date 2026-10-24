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

// Function: _IO_switch_to_main_get_area
// Address: 0x38c280 - 0x38c2b8
void ps2__IO_switch_to_main_get_area_0x38c280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_switch_to_main_get_area_0x38c280");
#endif

    ctx->pc = 0x38c280u;

    // 0x38c280: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x38c280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38c284: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x38c284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x38c288: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x38c288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x38c28c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38c290: 0xac87002c  sw          $a3, 0x2C($a0)
    ctx->pc = 0x38c290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 7));
    // 0x38c294: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x38c294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x38c298: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x38c298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x38c29c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x38c29cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38c2a0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x38c2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x38c2a4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x38c2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x38c2a8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x38c2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x38c2ac: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x38c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x38c2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x38C2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C2B0u;
        // 0x38c2b4: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C2B8u;
}
