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

// Function: func_0034DB20
// Address: 0x34db20 - 0x34db50
void func_0034DB20_0x34db20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034DB20_0x34db20");
#endif

    ctx->pc = 0x34db20u;

    // 0x34db20: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x34db20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x34db24: 0x248400d4  addiu       $a0, $a0, 0xD4
    ctx->pc = 0x34db24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 212));
    // 0x34db28: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34DB28u;
    {
        const bool branch_taken_0x34db28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DB28u;
        // 0x34db2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34db28) {
            ctx->pc = 0x34DB3Cu;
            goto label_34db3c;
        }
    }
    ctx->pc = 0x34DB30u;
    // 0x34db30: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x34db30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x34db34: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34DB34u;
    {
        const bool branch_taken_0x34db34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34db34) {
            ctx->pc = 0x34DB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34DB34u;
            // 0x34db38: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34DB3Cu;
            goto label_34db3c;
        }
    }
    ctx->pc = 0x34DB3Cu;
label_34db3c:
    // 0x34db3c: 0x3e00008  jr          $ra
    ctx->pc = 0x34DB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DB44u;
    // 0x34db44: 0x0  nop
    ctx->pc = 0x34db44u;
    // NOP
    // 0x34db48: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x34db48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x34db4c: 0x0  nop
    ctx->pc = 0x34db4cu;
    // NOP
    ctx->pc = 0x34db50u;
}
