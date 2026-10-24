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

// Function: func_002D50C0
// Address: 0x2d50c0 - 0x2d50e8
void func_002D50C0_0x2d50c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D50C0_0x2d50c0");
#endif

    ctx->pc = 0x2d50c0u;

    // 0x2d50c0: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2d50c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2d50c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d50c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d50c8: 0x2463d1c8  addiu       $v1, $v1, -0x2E38
    ctx->pc = 0x2d50c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955464));
    // 0x2d50cc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2d50ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2d50d0: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x2d50d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x2d50d4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2d50d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2d50d8: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x2d50d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d50dc: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x2d50dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d50e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D50E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D50E0u;
        // 0x2d50e4: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D50E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D50E8u;
}
