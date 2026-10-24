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

// Function: Obj0000_Set_D_003DA394_335348
// Address: 0x335348 - 0x335360
void Obj0000_Set_D_003DA394_335348_0x335348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_003DA394_335348_0x335348");
#endif

    ctx->pc = 0x335348u;

    // 0x335348: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x335348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x33534c: 0x3e00008  jr          $ra
    ctx->pc = 0x33534Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33534Cu;
        // 0x335350: 0xac44a394  sw          $a0, -0x5C6C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943636), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33534Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335354u;
    // 0x335354: 0x0  nop
    ctx->pc = 0x335354u;
    // NOP
    // 0x335358: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x335358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x33535c: 0x0  nop
    ctx->pc = 0x33535cu;
    // NOP
    ctx->pc = 0x335360u;
}
