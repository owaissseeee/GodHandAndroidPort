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

// Function: func_00338338
// Address: 0x338338 - 0x338378
void func_00338338_0x338338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338338_0x338338");
#endif

    ctx->pc = 0x338338u;

    // 0x338338: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x338338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x33833c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33833cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338340: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x338340u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x338344: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x338344u;
    {
        const bool branch_taken_0x338344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x338344) {
            ctx->pc = 0x338348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338344u;
            // 0x338348: 0xa0850050  sb          $a1, 0x50($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33835Cu;
            goto label_33835c;
        }
    }
    ctx->pc = 0x33834Cu;
    // 0x33834c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x33834cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x338350: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x338350u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x338354: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x338354u;
    {
        const bool branch_taken_0x338354 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x338354) {
            ctx->pc = 0x338358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338354u;
            // 0x338358: 0xa0850050  sb          $a1, 0x50($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33835Cu;
            goto label_33835c;
        }
    }
    ctx->pc = 0x33835Cu;
label_33835c:
    // 0x33835c: 0x3e00008  jr          $ra
    ctx->pc = 0x33835Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33835Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338364u;
    // 0x338364: 0x0  nop
    ctx->pc = 0x338364u;
    // NOP
    // 0x338368: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x338368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33836c: 0x0  nop
    ctx->pc = 0x33836cu;
    // NOP
    // 0x338370: 0x0  nop
    ctx->pc = 0x338370u;
    // NOP
    // 0x338374: 0x0  nop
    ctx->pc = 0x338374u;
    // NOP
    ctx->pc = 0x338378u;
}
