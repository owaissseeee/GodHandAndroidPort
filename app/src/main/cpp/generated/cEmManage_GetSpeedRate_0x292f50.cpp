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

// Function: cEmManage_GetSpeedRate
// Address: 0x292f50 - 0x292f68
void cEmManage_GetSpeedRate_0x292f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_GetSpeedRate_0x292f50");
#endif

    ctx->pc = 0x292f50u;

    // 0x292f50: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x292f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x292f54: 0xc4810548  lwc1        $f1, 0x548($a0)
    ctx->pc = 0x292f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292f58: 0xc4407a14  lwc1        $f0, 0x7A14($v0)
    ctx->pc = 0x292f58u;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x292f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x292F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F5Cu;
        // 0x292f60: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292F64u;
    // 0x292f64: 0x0  nop
    ctx->pc = 0x292f64u;
    // NOP
    ctx->pc = 0x292f68u;
}
