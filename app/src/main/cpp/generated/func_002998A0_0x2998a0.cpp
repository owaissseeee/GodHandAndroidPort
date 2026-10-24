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

// Function: func_002998A0
// Address: 0x2998a0 - 0x2998d8
void func_002998A0_0x2998a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002998A0_0x2998a0");
#endif

    ctx->pc = 0x2998a0u;

    // 0x2998a0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2998a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2998a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2998a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2998a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2998a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2998ac: 0xe46d0004  swc1        $f13, 0x4($v1)
    ctx->pc = 0x2998acu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2998b0: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x2998b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2998b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2998b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2998b8: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x2998b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x2998bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2998bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2998c0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2998c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2998c4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2998c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2998c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2998c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2998cc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2998ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2998d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2998D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2998D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998D0u;
        // 0x2998d4: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2998D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2998D8u;
}
