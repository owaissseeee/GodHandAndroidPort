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

// Function: func_0035FD20
// Address: 0x35fd20 - 0x35fd58
void func_0035FD20_0x35fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035FD20_0x35fd20");
#endif

    ctx->pc = 0x35fd20u;

    // 0x35fd20: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x35fd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x35fd24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fd28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35fd2c: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35FD2Cu;
    {
        const bool branch_taken_0x35fd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x35fd2c) {
            ctx->pc = 0x35FD30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35FD2Cu;
            // 0x35fd30: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35FD40u;
            goto label_35fd40;
        }
    }
    ctx->pc = 0x35FD34u;
    // 0x35fd34: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x35fd34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x35fd38: 0x3e00008  jr          $ra
    ctx->pc = 0x35FD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD38u;
        // 0x35fd3c: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FD40u;
label_35fd40:
    // 0x35fd40: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35fd44: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x35fd44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x35fd48: 0x3e00008  jr          $ra
    ctx->pc = 0x35FD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD48u;
        // 0x35fd4c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FD50u;
    // 0x35fd50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35fd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35fd54: 0x0  nop
    ctx->pc = 0x35fd54u;
    // NOP
    ctx->pc = 0x35fd58u;
}
