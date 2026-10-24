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

// Function: cEm00_setR302Switch
// Address: 0x2751c8 - 0x2751f0
void cEm00_setR302Switch_0x2751c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_setR302Switch_0x2751c8");
#endif

    ctx->pc = 0x2751c8u;

    // 0x2751c8: 0x8c820564  lw          $v0, 0x564($a0)
    ctx->pc = 0x2751c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x2751cc: 0x38420252  xori        $v0, $v0, 0x252
    ctx->pc = 0x2751ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)594);
    // 0x2751d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2751D0u;
    {
        const bool branch_taken_0x2751d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2751D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751D0u;
        // 0x2751d4: 0x2402008f  addiu       $v0, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2751d0) {
            ctx->pc = 0x2751E8u;
            goto label_2751e8;
        }
    }
    ctx->pc = 0x2751D8u;
    // 0x2751d8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x2751d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2751dc: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x2751dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2751e0: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x2751e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2751e4: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x2751e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_2751e8:
    // 0x2751e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2751E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2751E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2751F0u;
}
