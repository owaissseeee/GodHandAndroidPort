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

// Function: func_003597D0
// Address: 0x3597d0 - 0x359800
void func_003597D0_0x3597d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003597D0_0x3597d0");
#endif

    ctx->pc = 0x3597d0u;

    // 0x3597d0: 0x8c8336b0  lw          $v1, 0x36B0($a0)
    ctx->pc = 0x3597d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14000)));
    // 0x3597d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3597D4u;
    {
        const bool branch_taken_0x3597d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3597d4) {
            ctx->pc = 0x3597F4u;
            goto label_3597f4;
        }
    }
    ctx->pc = 0x3597DCu;
    // 0x3597dc: 0x8c620db8  lw          $v0, 0xDB8($v1)
    ctx->pc = 0x3597dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3512)));
    // 0x3597e0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3597E0u;
    {
        const bool branch_taken_0x3597e0 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3597e0) {
            ctx->pc = 0x3597E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3597E0u;
            // 0x3597e4: 0xac650db8  sw          $a1, 0xDB8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 3512), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3597E8u;
            goto label_3597e8;
        }
    }
    ctx->pc = 0x3597E8u;
label_3597e8:
    // 0x3597e8: 0x8c620dbc  lw          $v0, 0xDBC($v1)
    ctx->pc = 0x3597e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3516)));
    // 0x3597ec: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3597ECu;
    {
        const bool branch_taken_0x3597ec = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3597ec) {
            ctx->pc = 0x3597F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3597ECu;
            // 0x3597f0: 0xac660dbc  sw          $a2, 0xDBC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 3516), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3597F4u;
            goto label_3597f4;
        }
    }
    ctx->pc = 0x3597F4u;
label_3597f4:
    // 0x3597f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3597F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3597F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3597FCu;
    // 0x3597fc: 0x0  nop
    ctx->pc = 0x3597fcu;
    // NOP
    ctx->pc = 0x359800u;
}
