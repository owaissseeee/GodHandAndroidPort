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

// Function: Adjust_theta
// Address: 0x1f7d48 - 0x1f7da0
void Adjust_theta_0x1f7d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Adjust_theta_0x1f7d48");
#endif

    ctx->pc = 0x1f7d48u;

    // 0x1f7d48: 0x3c093ea2  lui         $t1, 0x3EA2
    ctx->pc = 0x1f7d48u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16034 << 16));
    // 0x1f7d4c: 0x3c084049  lui         $t0, 0x4049
    ctx->pc = 0x1f7d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16457 << 16));
    // 0x1f7d50: 0x3529f983  ori         $t1, $t1, 0xF983
    ctx->pc = 0x1f7d50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)63875);
    // 0x1f7d54: 0x35080fdb  ori         $t0, $t0, 0xFDB
    ctx->pc = 0x1f7d54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4059);
    // 0x1f7d58: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x1f7d58u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f7d5c: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1f7d5cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f7d60: 0x460260c2  mul.s       $f3, $f12, $f2
    ctx->pc = 0x1f7d60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x1f7d64: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x1f7d64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1f7d68: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f7d68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x1f7d6c: 0x8402a  slt         $t0, $zero, $t0
    ctx->pc = 0x1f7d6cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1f7d70: 0x44091800  mfc1        $t1, $f3
    ctx->pc = 0x1f7d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1f7d74: 0x240afffe  addiu       $t2, $zero, -0x2
    ctx->pc = 0x1f7d74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1f7d78: 0x1284820  add         $t1, $t1, $t0
    ctx->pc = 0x1f7d78u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x1f7d7c: 0x12a4824  and         $t1, $t1, $t2
    ctx->pc = 0x1f7d7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 10));
    // 0x1f7d80: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x1f7d80u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f7d84: 0x0  nop
    ctx->pc = 0x1f7d84u;
    // NOP
    // 0x1f7d88: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1f7d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1f7d8c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1f7d8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1f7d90: 0x46036301  sub.s       $f12, $f12, $f3
    ctx->pc = 0x1f7d90u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x1f7d94: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D94u;
        // 0x1f7d98: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7D9Cu;
    // 0x1f7d9c: 0x0  nop
    ctx->pc = 0x1f7d9cu;
    // NOP
    ctx->pc = 0x1f7da0u;
}
