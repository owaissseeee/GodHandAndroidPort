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

// Function: Obj0000_Set_D_003EC454_D_003EC458_340438
// Address: 0x340438 - 0x340450
void Obj0000_Set_D_003EC454_D_003EC458_340438_0x340438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_003EC454_D_003EC458_340438_0x340438");
#endif

    ctx->pc = 0x340438u;

    // 0x340438: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x340438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34043c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34043cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x340440: 0xac44c454  sw          $a0, -0x3BAC($v0)
    ctx->pc = 0x340440u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3EC454u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EC454u, _value); } while (0);
    // 0x340444: 0x3e00008  jr          $ra
    ctx->pc = 0x340444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340444u;
        // 0x340448: 0xac65c458  sw          $a1, -0x3BA8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952024), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34044Cu;
    // 0x34044c: 0x0  nop
    ctx->pc = 0x34044cu;
    // NOP
    ctx->pc = 0x340450u;
}
