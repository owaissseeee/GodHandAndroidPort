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

// Function: func_002C0CB0
// Address: 0x2c0cb0 - 0x2c0d18
void func_002C0CB0_0x2c0cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C0CB0_0x2c0cb0");
#endif

    ctx->pc = 0x2c0cb0u;

    // 0x2c0cb0: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x2c0cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c0cb4: 0xc4840020  lwc1        $f4, 0x20($a0)
    ctx->pc = 0x2c0cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c0cb8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2c0cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0cbc: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2c0cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c0cc0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2c0cc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c0cc4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2c0cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0cc8: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2c0cc8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2c0ccc: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2c0cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c0cd0: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2c0cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c0cd4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c0cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c0cd8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c0cd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c0cdc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c0cdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c0ce0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c0ce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c0ce4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c0ce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c0ce8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0ce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c0cec: 0x0  nop
    ctx->pc = 0x2c0cecu;
    // NOP
    // 0x2c0cf0: 0x0  nop
    ctx->pc = 0x2c0cf0u;
    // NOP
    // 0x2c0cf4: 0x46000004  c1          0x4
    ctx->pc = 0x2c0cf4u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2c0cf8: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2c0cf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0cfc: 0x0  nop
    ctx->pc = 0x2c0cfcu;
    // NOP
    // 0x2c0d00: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C0D00u;
    {
        const bool branch_taken_0x2c0d00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0D00u;
        // 0x2c0d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0d00) {
            ctx->pc = 0x2C0D0Cu;
            goto label_2c0d0c;
        }
    }
    ctx->pc = 0x2C0D08u;
    // 0x2c0d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c0d0c:
    // 0x2c0d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0D14u;
    // 0x2c0d14: 0x0  nop
    ctx->pc = 0x2c0d14u;
    // NOP
    ctx->pc = 0x2c0d18u;
}
