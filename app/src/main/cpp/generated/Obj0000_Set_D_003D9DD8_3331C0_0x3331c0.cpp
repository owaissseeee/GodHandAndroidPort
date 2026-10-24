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

// Function: Obj0000_Set_D_003D9DD8_3331C0
// Address: 0x3331c0 - 0x3331e0
void Obj0000_Set_D_003D9DD8_3331C0_0x3331c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_003D9DD8_3331C0_0x3331c0");
#endif

    ctx->pc = 0x3331c0u;

    // 0x3331c0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3331c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3331c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3331C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3331C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3331C4u;
        // 0x3331c8: 0xac449dd8  sw          $a0, -0x6228($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294942168), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3331C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3331CCu;
    // 0x3331cc: 0x0  nop
    ctx->pc = 0x3331ccu;
    // NOP
    // 0x3331d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3331d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3331d4: 0x0  nop
    ctx->pc = 0x3331d4u;
    // NOP
    // 0x3331d8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3331d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3331dc: 0x0  nop
    ctx->pc = 0x3331dcu;
    // NOP
    ctx->pc = 0x3331e0u;
}
