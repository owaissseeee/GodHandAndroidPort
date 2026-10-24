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

// Function: ClearFields00And30_1EE768
// Address: 0x1ee768 - 0x1ee780
void ClearFields00And30_1EE768_0x1ee768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearFields00And30_1EE768_0x1ee768");
#endif

    ctx->pc = 0x1ee768u;

    // 0x1ee768: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ee768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee76c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1ee76cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1ee770: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE770u;
        // 0x1ee774: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE778u;
    // 0x1ee778: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ee778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ee77c: 0x0  nop
    ctx->pc = 0x1ee77cu;
    // NOP
    ctx->pc = 0x1ee780u;
}
