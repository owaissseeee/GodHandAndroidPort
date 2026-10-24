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

// Function: func_00338378
// Address: 0x338378 - 0x3383b0
void func_00338378_0x338378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338378_0x338378");
#endif

    ctx->pc = 0x338378u;

    // 0x338378: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x338378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x33837c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33837cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338380: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x338380u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x338384: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x338384u;
    {
        const bool branch_taken_0x338384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x338384) {
            ctx->pc = 0x338388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338384u;
            // 0x338388: 0xa085005b  sb          $a1, 0x5B($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33839Cu;
            goto label_33839c;
        }
    }
    ctx->pc = 0x33838Cu;
    // 0x33838c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x33838cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x338390: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x338390u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x338394: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x338394u;
    {
        const bool branch_taken_0x338394 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x338394) {
            ctx->pc = 0x338398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338394u;
            // 0x338398: 0xa085005b  sb          $a1, 0x5B($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 91), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33839Cu;
            goto label_33839c;
        }
    }
    ctx->pc = 0x33839Cu;
label_33839c:
    // 0x33839c: 0x3e00008  jr          $ra
    ctx->pc = 0x33839Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33839Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3383A4u;
    // 0x3383a4: 0x0  nop
    ctx->pc = 0x3383a4u;
    // NOP
    // 0x3383a8: 0x0  nop
    ctx->pc = 0x3383a8u;
    // NOP
    // 0x3383ac: 0x0  nop
    ctx->pc = 0x3383acu;
    // NOP
    ctx->pc = 0x3383b0u;
}
