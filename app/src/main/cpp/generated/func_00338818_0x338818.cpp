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

// Function: func_00338818
// Address: 0x338818 - 0x338848
void func_00338818_0x338818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338818_0x338818");
#endif

    ctx->pc = 0x338818u;

    // 0x338818: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x338818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x33881c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33881cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338820: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x338820u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x338824: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x338824u;
    {
        const bool branch_taken_0x338824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x338824) {
            ctx->pc = 0x338828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338824u;
            // 0x338828: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33883Cu;
            goto label_33883c;
        }
    }
    ctx->pc = 0x33882Cu;
    // 0x33882c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x33882cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x338830: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x338830u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x338834: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x338834u;
    {
        const bool branch_taken_0x338834 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x338834) {
            ctx->pc = 0x338838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338834u;
            // 0x338838: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33883Cu;
            goto label_33883c;
        }
    }
    ctx->pc = 0x33883Cu;
label_33883c:
    // 0x33883c: 0x3e00008  jr          $ra
    ctx->pc = 0x33883Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33883Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338844u;
    // 0x338844: 0x0  nop
    ctx->pc = 0x338844u;
    // NOP
    ctx->pc = 0x338848u;
}
