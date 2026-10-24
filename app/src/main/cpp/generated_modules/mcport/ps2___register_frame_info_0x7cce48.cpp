#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __register_frame_info
// Address: 0x7cce48 - 0x7cce70
void ps2___register_frame_info_0x7cce48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___register_frame_info_0x7cce48");
#endif

    ctx->pc = 0x7cce48u;

    // 0x7cce48: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cce48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cce4c: 0x8c431958  lw          $v1, 0x1958($v0)
    ctx->pc = 0x7cce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7D1958u));
    // 0x7cce50: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x7cce50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x7cce54: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x7cce54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x7cce58: 0xac451958  sw          $a1, 0x1958($v0)
    ctx->pc = 0x7cce58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7D1958u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D1958u, _value); } while (0);
    // 0x7cce5c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x7cce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x7cce60: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x7cce60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x7cce64: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x7cce64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x7cce68: 0x3e00008  jr          $ra
    ctx->pc = 0x7CCE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CCE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCE68u;
        // 0x7cce6c: 0xaca00010  sw          $zero, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CCE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CCE70u;
}
} // namespace gh_mcport
