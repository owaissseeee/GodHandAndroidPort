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

// Function: func_0031CF78
// Address: 0x31cf78 - 0x31cfe0
void func_0031CF78_0x31cf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031CF78_0x31cf78");
#endif

    ctx->pc = 0x31cf78u;

    // 0x31cf78: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x31cf78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x31cf7c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x31cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x31cf80: 0x8c837b14  lw          $v1, 0x7B14($a0)
    ctx->pc = 0x31cf80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747B14u));
    // 0x31cf84: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x31cf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x31cf88: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x31cf88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31cf8c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31CF8Cu;
    {
        const bool branch_taken_0x31cf8c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x31CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF8Cu;
        // 0x31cf90: 0xac827b14  sw          $v0, 0x7B14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 31508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf8c) {
            ctx->pc = 0x31CFA8u;
            goto label_31cfa8;
        }
    }
    ctx->pc = 0x31CF94u;
    // 0x31cf94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31cf94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31cf98: 0x0  nop
    ctx->pc = 0x31cf98u;
    // NOP
    // 0x31cf9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31cf9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31cfa0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31CFA0u;
    {
        const bool branch_taken_0x31cfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cfa0) {
            ctx->pc = 0x31CFC4u;
            goto label_31cfc4;
        }
    }
    ctx->pc = 0x31CFA8u;
label_31cfa8:
    // 0x31cfa8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x31cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x31cfac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31cfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31cfb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31cfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31cfb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31cfb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31cfb8: 0x0  nop
    ctx->pc = 0x31cfb8u;
    // NOP
    // 0x31cfbc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31cfbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31cfc0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x31cfc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_31cfc4:
    // 0x31cfc4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x31cfc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x31cfc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31cfc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cfcc: 0x0  nop
    ctx->pc = 0x31cfccu;
    // NOP
    // 0x31cfd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31cfd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31cfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x31CFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CFD4u;
        // 0x31cfd8: 0x46000000  add.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CFDCu;
    // 0x31cfdc: 0x0  nop
    ctx->pc = 0x31cfdcu;
    // NOP
    ctx->pc = 0x31cfe0u;
}
