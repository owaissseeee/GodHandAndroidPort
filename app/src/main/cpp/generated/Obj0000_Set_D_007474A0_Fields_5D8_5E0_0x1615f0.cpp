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

// Function: Obj0000_Set_D_007474A0_Fields_5D8_5E0
// Address: 0x1615f0 - 0x161610
void Obj0000_Set_D_007474A0_Fields_5D8_5E0_0x1615f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_D_007474A0_Fields_5D8_5E0_0x1615f0");
#endif

    ctx->pc = 0x1615f0u;

    // 0x1615f0: 0x8c850068  lw          $a1, 0x68($a0)
    ctx->pc = 0x1615f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1615f4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1615f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1615f8: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1615f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1615fc: 0xac4505d8  sw          $a1, 0x5D8($v0)
    ctx->pc = 0x1615fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x747A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A78u, _value); } while (0);
    // 0x161600: 0x8c83006c  lw          $v1, 0x6C($a0)
    ctx->pc = 0x161600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x161604: 0x3e00008  jr          $ra
    ctx->pc = 0x161604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161604u;
        // 0x161608: 0xac4305e0  sw          $v1, 0x5E0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1504), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16160Cu;
    // 0x16160c: 0x0  nop
    ctx->pc = 0x16160cu;
    // NOP
    ctx->pc = 0x161610u;
}
