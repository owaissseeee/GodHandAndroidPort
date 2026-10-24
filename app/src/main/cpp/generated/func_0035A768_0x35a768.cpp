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

// Function: func_0035A768
// Address: 0x35a768 - 0x35a7a0
void func_0035A768_0x35a768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035A768_0x35a768");
#endif

    ctx->pc = 0x35a768u;

    // 0x35a768: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x35a768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a76c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x35a76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35a770: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x35a770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x35a774: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a778: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35A778u;
    {
        const bool branch_taken_0x35a778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x35A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A778u;
        // 0x35a77c: 0x24a60950  addiu       $a2, $a1, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a778) {
            ctx->pc = 0x35A794u;
            goto label_35a794;
        }
    }
    ctx->pc = 0x35A780u;
    // 0x35a780: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x35a780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x35a784: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35A784u;
    {
        const bool branch_taken_0x35a784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a784) {
            ctx->pc = 0x35A794u;
            goto label_35a794;
        }
    }
    ctx->pc = 0x35A78Cu;
    // 0x35a78c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x35a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x35a790: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x35a790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_35a794:
    // 0x35a794: 0x3e00008  jr          $ra
    ctx->pc = 0x35A794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A79Cu;
    // 0x35a79c: 0x0  nop
    ctx->pc = 0x35a79cu;
    // NOP
    ctx->pc = 0x35a7a0u;
}
