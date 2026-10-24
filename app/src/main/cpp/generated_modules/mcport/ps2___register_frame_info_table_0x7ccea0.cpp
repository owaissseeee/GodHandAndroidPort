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
// Function: __register_frame_info_table
// Address: 0x7ccea0 - 0x7ccec8
void ps2___register_frame_info_table_0x7ccea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___register_frame_info_table_0x7ccea0");
#endif

    ctx->pc = 0x7ccea0u;

    // 0x7ccea0: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7ccea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7ccea4: 0x8c621958  lw          $v0, 0x1958($v1)
    ctx->pc = 0x7ccea4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D1958u));
    // 0x7ccea8: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x7ccea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x7cceac: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x7cceacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x7cceb0: 0xac651958  sw          $a1, 0x1958($v1)
    ctx->pc = 0x7cceb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7D1958u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D1958u, _value); } while (0);
    // 0x7cceb4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x7cceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x7cceb8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x7cceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x7ccebc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x7ccebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x7ccec0: 0x3e00008  jr          $ra
    ctx->pc = 0x7CCEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CCEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCEC0u;
        // 0x7ccec4: 0xaca00010  sw          $zero, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CCEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CCEC8u;
}
} // namespace gh_mcport
