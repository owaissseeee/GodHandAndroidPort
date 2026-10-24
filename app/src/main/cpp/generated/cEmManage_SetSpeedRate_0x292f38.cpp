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

// Function: cEmManage_SetSpeedRate
// Address: 0x292f38 - 0x292f50
void cEmManage_SetSpeedRate_0x292f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_SetSpeedRate_0x292f38");
#endif

    ctx->pc = 0x292f38u;

    // 0x292f38: 0xe48c0548  swc1        $f12, 0x548($a0)
    ctx->pc = 0x292f38u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1352), bits); }
    // 0x292f3c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x292f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x292f40: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x292f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x292f44: 0xe46c1dc0  swc1        $f12, 0x1DC0($v1)
    ctx->pc = 0x292f44u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x741DC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x741DC0u, _value); } while (0); }
    // 0x292f48: 0x3e00008  jr          $ra
    ctx->pc = 0x292F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F48u;
        // 0x292f4c: 0xe44c4c48  swc1        $f12, 0x4C48($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 19528), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292F50u;
}
