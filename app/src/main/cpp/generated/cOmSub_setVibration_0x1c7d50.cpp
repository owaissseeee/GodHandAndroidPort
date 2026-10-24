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

// Function: cOmSub_setVibration
// Address: 0x1c7d50 - 0x1c7d98
void cOmSub_setVibration_0x1c7d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmSub_setVibration_0x1c7d50");
#endif

    ctx->pc = 0x1c7d50u;

    // 0x1c7d50: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x1c7d50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1c7d54: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1c7d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1c7d58: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1c7d58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c7d5c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c7d5cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7d60: 0x0  nop
    ctx->pc = 0x1c7d60u;
    // NOP
    // 0x1c7d64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7d64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7d68: 0xe4800140  swc1        $f0, 0x140($a0)
    ctx->pc = 0x1c7d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 320), bits); }
    // 0x1c7d6c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1c7d6cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7d70: 0x0  nop
    ctx->pc = 0x1c7d70u;
    // NOP
    // 0x1c7d74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c7d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c7d78: 0xe48e0150  swc1        $f14, 0x150($a0)
    ctx->pc = 0x1c7d78u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 336), bits); }
    // 0x1c7d7c: 0xe4810144  swc1        $f1, 0x144($a0)
    ctx->pc = 0x1c7d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 324), bits); }
    // 0x1c7d80: 0xe48c0148  swc1        $f12, 0x148($a0)
    ctx->pc = 0x1c7d80u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 328), bits); }
    // 0x1c7d84: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7D84u;
        // 0x1c7d88: 0xe48d014c  swc1        $f13, 0x14C($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 332), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7D8Cu;
    // 0x1c7d8c: 0x0  nop
    ctx->pc = 0x1c7d8cu;
    // NOP
    // 0x1c7d90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1c7d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c7d94: 0x0  nop
    ctx->pc = 0x1c7d94u;
    // NOP
    ctx->pc = 0x1c7d98u;
}
