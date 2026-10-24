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

// Function: Obj0000_Set_D_00747A80_Field_70_2BF780
// Address: 0x2bf780 - 0x2bf790
void Obj0000_Set_D_00747A80_Field_70_2BF780_0x2bf780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_00747A80_Field_70_2BF780_0x2bf780");
#endif

    ctx->pc = 0x2bf780u;

    // 0x2bf780: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2bf780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2bf784: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2bf784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2bf788: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF788u;
        // 0x2bf78c: 0xac437a80  sw          $v1, 0x7A80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 31360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF790u;
}
