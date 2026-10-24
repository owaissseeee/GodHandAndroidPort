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

// Function: func_00333E68
// Address: 0x333e68 - 0x333e88
void func_00333E68_0x333e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00333E68_0x333e68");
#endif

    ctx->pc = 0x333e68u;

    // 0x333e68: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x333e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x333e6c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x333e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x333e70: 0x24429dd0  addiu       $v0, $v0, -0x6230
    ctx->pc = 0x333e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942160));
    // 0x333e74: 0xac679dd4  sw          $a3, -0x622C($v1)
    ctx->pc = 0x333e74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3D9DD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D9DD4u, _value); } while (0);
    // 0x333e78: 0xa0460002  sb          $a2, 0x2($v0)
    ctx->pc = 0x333e78u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3D9DD2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3D9DD2u, _value); } while (0);
    // 0x333e7c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x333e7cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3D9DD0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3D9DD0u, _value); } while (0);
    // 0x333e80: 0x3e00008  jr          $ra
    ctx->pc = 0x333E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E80u;
        // 0x333e84: 0xa0450001  sb          $a1, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333E88u;
}
