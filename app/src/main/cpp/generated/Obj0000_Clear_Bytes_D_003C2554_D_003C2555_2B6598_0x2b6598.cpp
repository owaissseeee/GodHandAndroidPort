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

// Function: Obj0000_Clear_Bytes_D_003C2554_D_003C2555_2B6598
// Address: 0x2b6598 - 0x2b65b0
void Obj0000_Clear_Bytes_D_003C2554_D_003C2555_2B6598_0x2b6598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Clear_Bytes_D_003C2554_D_003C2555_2B6598_0x2b6598");
#endif

    ctx->pc = 0x2b6598u;

    // 0x2b6598: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b6598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b659c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2b659cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2b65a0: 0xa0402555  sb          $zero, 0x2555($v0)
    ctx->pc = 0x2b65a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3C2555u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3C2555u, _value); } while (0);
    // 0x2b65a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B65A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B65A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65A4u;
        // 0x2b65a8: 0xa0602554  sb          $zero, 0x2554($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9556), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B65A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B65ACu;
    // 0x2b65ac: 0x0  nop
    ctx->pc = 0x2b65acu;
    // NOP
    ctx->pc = 0x2b65b0u;
}
