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

// Function: RoundFloat
// Address: 0x157498 - 0x1574f0
void RoundFloat_0x157498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RoundFloat_0x157498");
#endif

    ctx->pc = 0x157498u;

    // 0x157498: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x157498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15749c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x15749cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1574a0: 0x0  nop
    ctx->pc = 0x1574a0u;
    // NOP
    // 0x1574a4: 0x460d2043  div.s       $f1, $f4, $f13
    ctx->pc = 0x1574a4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[13]);
    // 0x1574a8: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x1574a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1574ac: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1574acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1574b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1574b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1574b4: 0x46006081  sub.s       $f2, $f12, $f0
    ctx->pc = 0x1574b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1574b8: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1574b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1574bc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1574bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1574c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1574c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1574c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1574c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1574c8: 0x0  nop
    ctx->pc = 0x1574c8u;
    // NOP
    // 0x1574cc: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1574ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1574d0: 0x0  nop
    ctx->pc = 0x1574d0u;
    // NOP
    // 0x1574d4: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1574D4u;
    {
        const bool branch_taken_0x1574d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1574d4) {
            ctx->pc = 0x1574D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1574D4u;
            // 0x1574d8: 0x46041800  add.s       $f0, $f3, $f4 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1574E4u;
            goto label_1574e4;
        }
    }
    ctx->pc = 0x1574DCu;
    // 0x1574dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1574DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1574E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574DCu;
        // 0x1574e0: 0x460d1802  mul.s       $f0, $f3, $f13 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1574DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1574E4u;
label_1574e4:
    // 0x1574e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1574E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1574E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574E4u;
        // 0x1574e8: 0x460d0002  mul.s       $f0, $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1574E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1574ECu;
    // 0x1574ec: 0x0  nop
    ctx->pc = 0x1574ecu;
    // NOP
    ctx->pc = 0x1574f0u;
}
