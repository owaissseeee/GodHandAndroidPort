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

// Function: func_0015EEE0
// Address: 0x15eee0 - 0x15ef10
void func_0015EEE0_0x15eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015EEE0_0x15eee0");
#endif

    ctx->pc = 0x15eee0u;

    // 0x15eee0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15eee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15eee4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15eee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15eee8: 0xfc800020  sd          $zero, 0x20($a0)
    ctx->pc = 0x15eee8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 0));
    // 0x15eeec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15eeecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15eef0: 0xfc800080  sd          $zero, 0x80($a0)
    ctx->pc = 0x15eef0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 128), GPR_U64(ctx, 0));
    // 0x15eef4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x15eef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eef8: 0xfc800060  sd          $zero, 0x60($a0)
    ctx->pc = 0x15eef8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 0));
    // 0x15eefc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15eefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15ef00: 0xfc800040  sd          $zero, 0x40($a0)
    ctx->pc = 0x15ef00u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 0));
    // 0x15ef04: 0x3e00008  jr          $ra
    ctx->pc = 0x15EF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF04u;
        // 0x15ef08: 0xfc820000  sd          $v0, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EF0Cu;
    // 0x15ef0c: 0x0  nop
    ctx->pc = 0x15ef0cu;
    // NOP
    ctx->pc = 0x15ef10u;
}
