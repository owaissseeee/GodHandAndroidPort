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

// Function: ClearActiveSlot_147188
// Address: 0x147188 - 0x1471a8
void ClearActiveSlot_147188_0x147188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearActiveSlot_147188_0x147188");
#endif

    ctx->pc = 0x147188u;

    // 0x147188: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x147188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x14718c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14718Cu;
    {
        const bool branch_taken_0x14718c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14718Cu;
        // 0x147190: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14718c) {
            ctx->pc = 0x1471A0u;
            goto label_1471a0;
        }
    }
    ctx->pc = 0x147194u;
    // 0x147194: 0xa08000b8  sb          $zero, 0xB8($a0)
    ctx->pc = 0x147194u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 184), (uint8_t)GPR_U32(ctx, 0));
    // 0x147198: 0xa48200ac  sh          $v0, 0xAC($a0)
    ctx->pc = 0x147198u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 172), (uint16_t)GPR_U32(ctx, 2));
    // 0x14719c: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x14719cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
label_1471a0:
    // 0x1471a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1471A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1471A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1471A8u;
}
