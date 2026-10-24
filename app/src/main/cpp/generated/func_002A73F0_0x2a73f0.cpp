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

// Function: func_002A73F0
// Address: 0x2a73f0 - 0x2a7448
void func_002A73F0_0x2a73f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A73F0_0x2a73f0");
#endif

    ctx->pc = 0x2a73f0u;

    // 0x2a73f0: 0x24830520  addiu       $v1, $a0, 0x520
    ctx->pc = 0x2a73f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1312));
    // 0x2a73f4: 0xac800520  sw          $zero, 0x520($a0)
    ctx->pc = 0x2a73f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1312), GPR_U32(ctx, 0));
    // 0x2a73f8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2a73f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2a73fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a7400: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a7400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2a7404: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x2a7404u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x2a7408: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a740c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a740cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7410: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a7410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7414: 0x8c830254  lw          $v1, 0x254($a0)
    ctx->pc = 0x2a7414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 596)));
    // 0x2a7418: 0xa4820570  sh          $v0, 0x570($a0)
    ctx->pc = 0x2a7418u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1392), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a741c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2a741cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a7420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7424: 0xac850574  sw          $a1, 0x574($a0)
    ctx->pc = 0x2a7424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1396), GPR_U32(ctx, 5));
    // 0x2a7428: 0xe48003a8  swc1        $f0, 0x3A8($a0)
    ctx->pc = 0x2a7428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 936), bits); }
    // 0x2a742c: 0xac830254  sw          $v1, 0x254($a0)
    ctx->pc = 0x2a742cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 3));
    // 0x2a7430: 0xe48005a8  swc1        $f0, 0x5A8($a0)
    ctx->pc = 0x2a7430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1448), bits); }
    // 0x2a7434: 0xac8005a0  sw          $zero, 0x5A0($a0)
    ctx->pc = 0x2a7434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1440), GPR_U32(ctx, 0));
    // 0x2a7438: 0xa4800548  sh          $zero, 0x548($a0)
    ctx->pc = 0x2a7438u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1352), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a743c: 0xa480054a  sh          $zero, 0x54A($a0)
    ctx->pc = 0x2a743cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a7440: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7440u;
        // 0x2a7444: 0xac80054c  sw          $zero, 0x54C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7448u;
}
