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

// Function: Obj0000_Set_Fields_1668_1660_1670_1678_1680_10A408
// Address: 0x10a408 - 0x10a420
void Obj0000_Set_Fields_1668_1660_1670_1678_1680_10A408_0x10a408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Fields_1668_1660_1670_1678_1680_10A408_0x10a408");
#endif

    ctx->pc = 0x10a408u;

    // 0x10a408: 0xa4891680  sh          $t1, 0x1680($a0)
    ctx->pc = 0x10a408u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5760), (uint16_t)GPR_U32(ctx, 9));
    // 0x10a40c: 0xac851668  sw          $a1, 0x1668($a0)
    ctx->pc = 0x10a40cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5736), GPR_U32(ctx, 5));
    // 0x10a410: 0xac861660  sw          $a2, 0x1660($a0)
    ctx->pc = 0x10a410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5728), GPR_U32(ctx, 6));
    // 0x10a414: 0xac871670  sw          $a3, 0x1670($a0)
    ctx->pc = 0x10a414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5744), GPR_U32(ctx, 7));
    // 0x10a418: 0x3e00008  jr          $ra
    ctx->pc = 0x10A418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A418u;
        // 0x10a41c: 0xac881678  sw          $t0, 0x1678($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5752), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A420u;
}
