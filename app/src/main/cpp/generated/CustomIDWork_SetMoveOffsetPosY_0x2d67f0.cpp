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

// Function: CustomIDWork_SetMoveOffsetPosY
// Address: 0x2d67f0 - 0x2d6838
void CustomIDWork_SetMoveOffsetPosY_0x2d67f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetMoveOffsetPosY_0x2d67f0");
#endif

    ctx->pc = 0x2d67f0u;

    // 0x2d67f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d67f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D67F4u;
    {
        const bool branch_taken_0x2d67f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D67F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D67F4u;
        // 0x2d67f8: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d67f4) {
            ctx->pc = 0x2D682Cu;
            goto label_2d682c;
        }
    }
    ctx->pc = 0x2D67FCu;
    // 0x2d67fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d67fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6800: 0x0  nop
    ctx->pc = 0x2d6800u;
    // NOP
    // 0x2d6804: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d6804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d6808: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2d6808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d680c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2d680cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6810: 0x0  nop
    ctx->pc = 0x2d6810u;
    // NOP
    // 0x2d6814: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d6814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d6818: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x2d6818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x2d681c: 0xa4870044  sh          $a3, 0x44($a0)
    ctx->pc = 0x2d681cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 7));
    // 0x2d6820: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x2d6820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2d6824: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x2d6824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x2d6828: 0xa4800046  sh          $zero, 0x46($a0)
    ctx->pc = 0x2d6828u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 0));
label_2d682c:
    // 0x2d682c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D682Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D682Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6834u;
    // 0x2d6834: 0x0  nop
    ctx->pc = 0x2d6834u;
    // NOP
    ctx->pc = 0x2d6838u;
}
