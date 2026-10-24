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

// Function: CustomIDWork_SetMoveOffsetPosXSin
// Address: 0x2d67b0 - 0x2d67f0
void CustomIDWork_SetMoveOffsetPosXSin_0x2d67b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetMoveOffsetPosXSin_0x2d67b0");
#endif

    ctx->pc = 0x2d67b0u;

    // 0x2d67b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d67b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d67b4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D67B4u;
    {
        const bool branch_taken_0x2d67b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67B4u;
        // 0x2d67b8: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d67b4) {
            ctx->pc = 0x2D67DCu;
            goto label_2d67dc;
        }
    }
    ctx->pc = 0x2D67BCu;
    // 0x2d67bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d67bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d67c0: 0x0  nop
    ctx->pc = 0x2d67c0u;
    // NOP
    // 0x2d67c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d67c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d67c8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2d67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d67cc: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x2d67ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x2d67d0: 0xa4860044  sh          $a2, 0x44($a0)
    ctx->pc = 0x2d67d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 6));
    // 0x2d67d4: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x2d67d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2d67d8: 0xa4800046  sh          $zero, 0x46($a0)
    ctx->pc = 0x2d67d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 0));
label_2d67dc:
    // 0x2d67dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D67DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D67DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D67E4u;
    // 0x2d67e4: 0x0  nop
    ctx->pc = 0x2d67e4u;
    // NOP
    // 0x2d67e8: 0x0  nop
    ctx->pc = 0x2d67e8u;
    // NOP
    // 0x2d67ec: 0x0  nop
    ctx->pc = 0x2d67ecu;
    // NOP
    ctx->pc = 0x2d67f0u;
}
