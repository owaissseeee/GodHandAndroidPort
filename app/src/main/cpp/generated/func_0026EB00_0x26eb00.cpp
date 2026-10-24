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

// Function: func_0026EB00
// Address: 0x26eb00 - 0x26eb20
void func_0026EB00_0x26eb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026EB00_0x26eb00");
#endif

    ctx->pc = 0x26eb00u;

    // 0x26eb00: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x26eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x26eb04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26eb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26eb08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26eb08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eb0c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x26eb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x26eb10: 0xac80024c  sw          $zero, 0x24C($a0)
    ctx->pc = 0x26eb10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 588), GPR_U32(ctx, 0));
    // 0x26eb14: 0xe4801704  swc1        $f0, 0x1704($a0)
    ctx->pc = 0x26eb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5892), bits); }
    // 0x26eb18: 0x3e00008  jr          $ra
    ctx->pc = 0x26EB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB18u;
        // 0x26eb1c: 0xac820250  sw          $v0, 0x250($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EB20u;
}
