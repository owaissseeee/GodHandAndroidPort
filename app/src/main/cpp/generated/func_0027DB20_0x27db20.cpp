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

// Function: func_0027DB20
// Address: 0x27db20 - 0x27db50
void func_0027DB20_0x27db20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027DB20_0x27db20");
#endif

    ctx->pc = 0x27db20u;

    // 0x27db20: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DB20u;
    {
        const bool branch_taken_0x27db20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB20u;
        // 0x27db24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db20) {
            ctx->pc = 0x27DB30u;
            goto label_27db30;
        }
    }
    ctx->pc = 0x27DB28u;
    // 0x27db28: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27DB28u;
    {
        const bool branch_taken_0x27db28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB28u;
        // 0x27db2c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db28) {
            ctx->pc = 0x27DB3Cu;
            goto label_27db3c;
        }
    }
    ctx->pc = 0x27DB30u;
label_27db30:
    // 0x27db30: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x27db30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27db34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27DB34u;
    {
        const bool branch_taken_0x27db34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB34u;
        // 0x27db38: 0xa08002f7  sb          $zero, 0x2F7($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db34) {
            ctx->pc = 0x27DB40u;
            goto label_27db40;
        }
    }
    ctx->pc = 0x27DB3Cu;
label_27db3c:
    // 0x27db3c: 0xa08502f7  sb          $a1, 0x2F7($a0)
    ctx->pc = 0x27db3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 5));
label_27db40:
    // 0x27db40: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x27db40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x27db44: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x27db44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27db48: 0x3e00008  jr          $ra
    ctx->pc = 0x27DB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DB48u;
        // 0x27db4c: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27DB50u;
}
