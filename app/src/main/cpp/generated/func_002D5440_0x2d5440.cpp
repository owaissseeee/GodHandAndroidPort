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

// Function: func_002D5440
// Address: 0x2d5440 - 0x2d5470
void func_002D5440_0x2d5440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D5440_0x2d5440");
#endif

    ctx->pc = 0x2d5440u;

    // 0x2d5440: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d5440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d5444: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5444u;
    {
        const bool branch_taken_0x2d5444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5444u;
        // 0x2d5448: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5444) {
            ctx->pc = 0x2D5468u;
            goto label_2d5468;
        }
    }
    ctx->pc = 0x2D544Cu;
    // 0x2d544c: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D544Cu;
    {
        const bool branch_taken_0x2d544c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D544Cu;
        // 0x2d5450: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d544c) {
            ctx->pc = 0x2D5468u;
            goto label_2d5468;
        }
    }
    ctx->pc = 0x2D5454u;
    // 0x2d5454: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2d5454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5458: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x2d5458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d545c: 0x90630050  lbu         $v1, 0x50($v1)
    ctx->pc = 0x2d545cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2d5460: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d5460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d5464: 0xa0430050  sb          $v1, 0x50($v0)
    ctx->pc = 0x2d5464u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 80), (uint8_t)GPR_U32(ctx, 3));
label_2d5468:
    // 0x2d5468: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5470u;
}
