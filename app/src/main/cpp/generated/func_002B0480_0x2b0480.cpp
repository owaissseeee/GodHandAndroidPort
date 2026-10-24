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

// Function: func_002B0480
// Address: 0x2b0480 - 0x2b04c0
void func_002B0480_0x2b0480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B0480_0x2b0480");
#endif

    ctx->pc = 0x2b0480u;

    // 0x2b0480: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b0480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b0484: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b0484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0488: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x2b0488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b048c: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2b048cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2b0490: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2b0490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2b0494: 0x24c623b0  addiu       $a2, $a2, 0x23B0
    ctx->pc = 0x2b0494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9136));
    // 0x2b0498: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x2b0498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2b049c: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x2b049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2b04a0: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x2b04a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b04a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b04a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b04a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b04ac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b04acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b04b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b04b4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2b04b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2b04b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B04B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04B8u;
        // 0x2b04bc: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B04B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B04C0u;
}
