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

// Function: Obj0000_Set_D_003DECFC_D_003DED00_3364F8
// Address: 0x3364f8 - 0x336510
void Obj0000_Set_D_003DECFC_D_003DED00_3364F8_0x3364f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_003DECFC_D_003DED00_3364F8_0x3364f8");
#endif

    ctx->pc = 0x3364f8u;

    // 0x3364f8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3364f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3364fc: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x3364fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x336500: 0xac44ecfc  sw          $a0, -0x1304($v0)
    ctx->pc = 0x336500u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3DECFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3DECFCu, _value); } while (0);
    // 0x336504: 0x3e00008  jr          $ra
    ctx->pc = 0x336504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336504u;
        // 0x336508: 0xac65ed00  sw          $a1, -0x1300($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962432), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33650Cu;
    // 0x33650c: 0x0  nop
    ctx->pc = 0x33650cu;
    // NOP
    ctx->pc = 0x336510u;
}
