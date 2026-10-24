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

// Function: func_002C23F8
// Address: 0x2c23f8 - 0x2c2418
void func_002C23F8_0x2c23f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C23F8_0x2c23f8");
#endif

    ctx->pc = 0x2c23f8u;

    // 0x2c23f8: 0x2483007c  addiu       $v1, $a0, 0x7C
    ctx->pc = 0x2c23f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
    // 0x2c23fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2c23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2c2400: 0x2442ea60  addiu       $v0, $v0, -0x15A0
    ctx->pc = 0x2c2400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    // 0x2c2404: 0x2484005c  addiu       $a0, $a0, 0x5C
    ctx->pc = 0x2c2404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 92));
    // 0x2c2408: 0xac43006c  sw          $v1, 0x6C($v0)
    ctx->pc = 0x2c2408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5FEACCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FEACCu, _value); } while (0);
    // 0x2c240c: 0xac440068  sw          $a0, 0x68($v0)
    ctx->pc = 0x2c240cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5FEAC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FEAC8u, _value); } while (0);
    // 0x2c2410: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2410u;
        // 0x2c2414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2418u;
}
