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

// Function: func_002B2F38
// Address: 0x2b2f38 - 0x2b2f68
void func_002B2F38_0x2b2f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2F38_0x2b2f38");
#endif

    ctx->pc = 0x2b2f38u;

    // 0x2b2f38: 0x8c85008c  lw          $a1, 0x8C($a0)
    ctx->pc = 0x2b2f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2b2f3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b2f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2f40: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2b2f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2b2f44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b2f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b2f48: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x2b2f48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2b2f4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b2f4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2f50: 0x0  nop
    ctx->pc = 0x2b2f50u;
    // NOP
    // 0x2b2f54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b2f54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b2f58: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b2f58u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2b2f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F5Cu;
        // 0x2b2f60: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2F64u;
    // 0x2b2f64: 0x0  nop
    ctx->pc = 0x2b2f64u;
    // NOP
    ctx->pc = 0x2b2f68u;
}
