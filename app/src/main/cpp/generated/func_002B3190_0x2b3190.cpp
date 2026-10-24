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

// Function: func_002B3190
// Address: 0x2b3190 - 0x2b31f8
void func_002B3190_0x2b3190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B3190_0x2b3190");
#endif

    ctx->pc = 0x2b3190u;

    // 0x2b3190: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2b3190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b3194: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2b3194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x2b3198: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b3198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b319c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b319cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b31a0: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x2b31a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x2b31a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b31a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b31a8: 0x632818  mult        $a1, $v1, $v1
    ctx->pc = 0x2b31a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b31ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b31acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b31b0: 0x0  nop
    ctx->pc = 0x2b31b0u;
    // NOP
    // 0x2b31b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b31b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b31b8: 0x38620006  xori        $v0, $v1, 0x6
    ctx->pc = 0x2b31b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
    // 0x2b31bc: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2b31bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2b31c0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2b31c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2b31c4: 0x0  nop
    ctx->pc = 0x2b31c4u;
    // NOP
    // 0x2b31c8: 0x0  nop
    ctx->pc = 0x2b31c8u;
    // NOP
    // 0x2b31cc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2b31ccu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x2b31d0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2b31d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b31d4: 0x0  nop
    ctx->pc = 0x2b31d4u;
    // NOP
    // 0x2b31d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b31d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b31dc: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2b31dcu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2b31e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b31e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2b31e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b31e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b31e8: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x2b31e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x2b31ec: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x2b31ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x2b31f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B31F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B31F0u;
        // 0x2b31f4: 0xe4800098  swc1        $f0, 0x98($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B31F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B31F8u;
}
