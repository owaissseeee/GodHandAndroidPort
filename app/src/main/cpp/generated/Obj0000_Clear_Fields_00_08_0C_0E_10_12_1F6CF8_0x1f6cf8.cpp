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

// Function: Obj0000_Clear_Fields_00_08_0C_0E_10_12_1F6CF8
// Address: 0x1f6cf8 - 0x1f6d18
void Obj0000_Clear_Fields_00_08_0C_0E_10_12_1F6CF8_0x1f6cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Clear_Fields_00_08_0C_0E_10_12_1F6CF8_0x1f6cf8");
#endif

    ctx->pc = 0x1f6cf8u;

    // 0x1f6cf8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f6cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f6cfc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1f6cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1f6d00: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x1f6d00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6d04: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x1f6d04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6d08: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x1f6d08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D0Cu;
        // 0x1f6d10: 0xa4800012  sh          $zero, 0x12($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6D14u;
    // 0x1f6d14: 0x0  nop
    ctx->pc = 0x1f6d14u;
    // NOP
    ctx->pc = 0x1f6d18u;
}
