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

// Function: _IO_init
// Address: 0x38cc40 - 0x38cc88
void ps2__IO_init_0x38cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_init_0x38cc40");
#endif

    ctx->pc = 0x38cc40u;

    // 0x38cc40: 0x3c02fbad  lui         $v0, 0xFBAD
    ctx->pc = 0x38cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64429 << 16));
    // 0x38cc44: 0xa4800048  sh          $zero, 0x48($a0)
    ctx->pc = 0x38cc44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x38cc48: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x38cc48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x38cc4c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x38cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x38cc50: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x38cc50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x38cc54: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x38cc54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x38cc58: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x38cc58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x38cc5c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x38cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x38cc60: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x38cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x38cc64: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x38cc64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x38cc68: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x38cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x38cc6c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x38cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x38cc70: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x38cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x38cc74: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x38cc74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x38cc78: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x38cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x38cc7c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x38cc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x38cc80: 0x3e00008  jr          $ra
    ctx->pc = 0x38CC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC80u;
        // 0x38cc84: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CC88u;
}
