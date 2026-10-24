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

// Function: func_002A98A8
// Address: 0x2a98a8 - 0x2a98d8
void func_002A98A8_0x2a98a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A98A8_0x2a98a8");
#endif

    ctx->pc = 0x2a98a8u;

    // 0x2a98a8: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2a98a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2a98ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a98acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a98b0: 0x2463aef8  addiu       $v1, $v1, -0x5108
    ctx->pc = 0x2a98b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946552));
    // 0x2a98b4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a98b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a98b8: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x2a98b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x2a98bc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a98bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a98c0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2a98c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2a98c4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2a98c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2a98c8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2a98c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2a98cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A98CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A98D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98CCu;
        // 0x2a98d0: 0xa0800010  sb          $zero, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A98CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A98D4u;
    // 0x2a98d4: 0x0  nop
    ctx->pc = 0x2a98d4u;
    // NOP
    ctx->pc = 0x2a98d8u;
}
