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

// Function: func_002F1AA0
// Address: 0x2f1aa0 - 0x2f1ac0
void func_002F1AA0_0x2f1aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F1AA0_0x2f1aa0");
#endif

    ctx->pc = 0x2f1aa0u;

    // 0x2f1aa0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f1aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f1aa4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1AA4u;
    {
        const bool branch_taken_0x2f1aa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f1aa4) {
            ctx->pc = 0x2F1AB8u;
            goto label_2f1ab8;
        }
    }
    ctx->pc = 0x2F1AACu;
    // 0x2f1aac: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F1AACu;
    {
        const bool branch_taken_0x2f1aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1AACu;
        // 0x2f1ab0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1aac) {
            ctx->pc = 0x2F1AB8u;
            goto label_2f1ab8;
        }
    }
    ctx->pc = 0x2F1AB4u;
    // 0x2f1ab4: 0xf840b660  sqc2        $vf0, -0x49A0($v0)
    ctx->pc = 0x2f1ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294948448), _mm_castps_si128(ctx->vu0_vf[0]));
label_2f1ab8:
    // 0x2f1ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1AC0u;
}
