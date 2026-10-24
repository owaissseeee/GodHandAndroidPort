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

// Function: PushGlobalD8478History_331C78
// Address: 0x331c78 - 0x331c98
void PushGlobalD8478History_331C78_0x331c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PushGlobalD8478History_331C78_0x331c78");
#endif

    ctx->pc = 0x331c78u;

    // 0x331c78: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x331c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x331c7c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x331c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x331c80: 0x2463847c  addiu       $v1, $v1, -0x7B84
    ctx->pc = 0x331c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935676));
    // 0x331c84: 0x24428478  addiu       $v0, $v0, -0x7B88
    ctx->pc = 0x331c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935672));
    // 0x331c88: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x331c88u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3D847Cu));
    // 0x331c8c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x331c8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3D8478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D8478u, _value); } while (0);
    // 0x331c90: 0x3e00008  jr          $ra
    ctx->pc = 0x331C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331C90u;
        // 0x331c94: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331C98u;
}
