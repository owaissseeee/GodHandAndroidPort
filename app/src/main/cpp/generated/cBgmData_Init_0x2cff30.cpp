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

// Function: cBgmData_Init
// Address: 0x2cff30 - 0x2cff68
void cBgmData_Init_0x2cff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cBgmData_Init_0x2cff30");
#endif

    ctx->pc = 0x2cff30u;

    // 0x2cff30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cff30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cff34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cff34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cff38: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2cff38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x2cff3c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2cff3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cff40: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x2cff40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cff44: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2cff44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2cff48: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2cff48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2cff4c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2cff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2cff50: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2cff50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2cff54: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF54u;
        // 0x2cff58: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFF5Cu;
    // 0x2cff5c: 0x0  nop
    ctx->pc = 0x2cff5cu;
    // NOP
    // 0x2cff60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2cff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cff64: 0x0  nop
    ctx->pc = 0x2cff64u;
    // NOP
    ctx->pc = 0x2cff68u;
}
