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

// Function: func_003386E0
// Address: 0x3386e0 - 0x338710
void func_003386E0_0x3386e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003386E0_0x3386e0");
#endif

    ctx->pc = 0x3386e0u;

    // 0x3386e0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3386e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3386e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3386e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3386e8: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x3386e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x3386ec: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3386ECu;
    {
        const bool branch_taken_0x3386ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x3386ec) {
            ctx->pc = 0x3386F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3386ECu;
            // 0x3386f0: 0xa0850052  sb          $a1, 0x52($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338704u;
            goto label_338704;
        }
    }
    ctx->pc = 0x3386F4u;
    // 0x3386f4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3386f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3386f8: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x3386f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x3386fc: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x3386FCu;
    {
        const bool branch_taken_0x3386fc = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3386fc) {
            ctx->pc = 0x338700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3386FCu;
            // 0x338700: 0xa0850052  sb          $a1, 0x52($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338704u;
            goto label_338704;
        }
    }
    ctx->pc = 0x338704u;
label_338704:
    // 0x338704: 0x3e00008  jr          $ra
    ctx->pc = 0x338704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33870Cu;
    // 0x33870c: 0x0  nop
    ctx->pc = 0x33870cu;
    // NOP
    ctx->pc = 0x338710u;
}
