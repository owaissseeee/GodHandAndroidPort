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

// Function: CustomIDWork_SetMoveOffsetPosYSin
// Address: 0x2d6838 - 0x2d6870
void CustomIDWork_SetMoveOffsetPosYSin_0x2d6838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetMoveOffsetPosYSin_0x2d6838");
#endif

    ctx->pc = 0x2d6838u;

    // 0x2d6838: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d6838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d683c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D683Cu;
    {
        const bool branch_taken_0x2d683c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D683Cu;
        // 0x2d6840: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d683c) {
            ctx->pc = 0x2D6864u;
            goto label_2d6864;
        }
    }
    ctx->pc = 0x2D6844u;
    // 0x2d6844: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d6844u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6848: 0x0  nop
    ctx->pc = 0x2d6848u;
    // NOP
    // 0x2d684c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d684cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d6850: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2d6850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2d6854: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x2d6854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x2d6858: 0xa4860044  sh          $a2, 0x44($a0)
    ctx->pc = 0x2d6858u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 6));
    // 0x2d685c: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x2d685cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2d6860: 0xa4800046  sh          $zero, 0x46($a0)
    ctx->pc = 0x2d6860u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 0));
label_2d6864:
    // 0x2d6864: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D686Cu;
    // 0x2d686c: 0x0  nop
    ctx->pc = 0x2d686cu;
    // NOP
    ctx->pc = 0x2d6870u;
}
