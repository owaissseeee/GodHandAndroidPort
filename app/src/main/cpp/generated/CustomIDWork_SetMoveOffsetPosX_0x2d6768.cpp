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

// Function: CustomIDWork_SetMoveOffsetPosX
// Address: 0x2d6768 - 0x2d67b0
void CustomIDWork_SetMoveOffsetPosX_0x2d6768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetMoveOffsetPosX_0x2d6768");
#endif

    ctx->pc = 0x2d6768u;

    // 0x2d6768: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d6768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d676c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D676Cu;
    {
        const bool branch_taken_0x2d676c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D676Cu;
        // 0x2d6770: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d676c) {
            ctx->pc = 0x2D67A4u;
            goto label_2d67a4;
        }
    }
    ctx->pc = 0x2D6774u;
    // 0x2d6774: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d6774u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6778: 0x0  nop
    ctx->pc = 0x2d6778u;
    // NOP
    // 0x2d677c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d677cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d6780: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d6780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d6784: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2d6784u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6788: 0x0  nop
    ctx->pc = 0x2d6788u;
    // NOP
    // 0x2d678c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d678cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d6790: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x2d6790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x2d6794: 0xa4870044  sh          $a3, 0x44($a0)
    ctx->pc = 0x2d6794u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 7));
    // 0x2d6798: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x2d6798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x2d679c: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x2d679cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x2d67a0: 0xa4800046  sh          $zero, 0x46($a0)
    ctx->pc = 0x2d67a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 0));
label_2d67a4:
    // 0x2d67a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D67A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D67A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D67ACu;
    // 0x2d67ac: 0x0  nop
    ctx->pc = 0x2d67acu;
    // NOP
    ctx->pc = 0x2d67b0u;
}
