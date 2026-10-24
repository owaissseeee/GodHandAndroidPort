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

// Function: func_00337BC8
// Address: 0x337bc8 - 0x337c00
void func_00337BC8_0x337bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00337BC8_0x337bc8");
#endif

    ctx->pc = 0x337bc8u;

    // 0x337bc8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337bcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x337bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337bd0: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x337bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x337bd4: 0x54650006  bnel        $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x337BD4u;
    {
        const bool branch_taken_0x337bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x337bd4) {
            ctx->pc = 0x337BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337BD4u;
            // 0x337bd8: 0x90820001  lbu         $v0, 0x1($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337BF0u;
            goto label_337bf0;
        }
    }
    ctx->pc = 0x337BDCu;
    // 0x337bdc: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337be0: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x337be0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x337be4: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337BE4u;
    {
        const bool branch_taken_0x337be4 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x337be4) {
            ctx->pc = 0x337BF4u;
            goto label_337bf4;
        }
    }
    ctx->pc = 0x337BECu;
    // 0x337bec: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x337becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_337bf0:
    // 0x337bf0: 0xa0820056  sb          $v0, 0x56($a0)
    ctx->pc = 0x337bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 2));
label_337bf4:
    // 0x337bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x337BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337BFCu;
    // 0x337bfc: 0x0  nop
    ctx->pc = 0x337bfcu;
    // NOP
    ctx->pc = 0x337c00u;
}
