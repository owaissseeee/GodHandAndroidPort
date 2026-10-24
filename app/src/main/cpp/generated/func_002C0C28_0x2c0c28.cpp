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

// Function: func_002C0C28
// Address: 0x2c0c28 - 0x2c0cb0
void func_002C0C28_0x2c0c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C0C28_0x2c0c28");
#endif

    ctx->pc = 0x2c0c28u;

    // 0x2c0c28: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2c0c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0c2c: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x2c0c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0c30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c0c30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0c34: 0x0  nop
    ctx->pc = 0x2c0c34u;
    // NOP
    // 0x2c0c38: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0C38u;
    {
        const bool branch_taken_0x2c0c38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0c38) {
            ctx->pc = 0x2C0C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0C38u;
            // 0x2c0c3c: 0xc4800024  lwc1        $f0, 0x24($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0C48u;
            goto label_2c0c48;
        }
    }
    ctx->pc = 0x2C0C40u;
    // 0x2c0c40: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C40u;
        // 0x2c0c44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0C48u;
label_2c0c48:
    // 0x2c0c48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c0c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0c4c: 0x0  nop
    ctx->pc = 0x2c0c4cu;
    // NOP
    // 0x2c0c50: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x2C0C50u;
    {
        const bool branch_taken_0x2c0c50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C50u;
        // 0x2c0c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c50) {
            ctx->pc = 0x2C0CA4u;
            goto label_2c0ca4;
        }
    }
    ctx->pc = 0x2C0C58u;
    // 0x2c0c58: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2c0c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0c5c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2c0c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0c60: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2c0c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c0c64: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2c0c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c0c68: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2c0c68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2c0c6c: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2c0c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c0c70: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2c0c70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c0c74: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c0c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c0c78: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c0c78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c0c7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0c7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c0c80: 0x0  nop
    ctx->pc = 0x2c0c80u;
    // NOP
    // 0x2c0c84: 0x0  nop
    ctx->pc = 0x2c0c84u;
    // NOP
    // 0x2c0c88: 0x46000004  c1          0x4
    ctx->pc = 0x2c0c88u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2c0c8c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2c0c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0c90: 0x0  nop
    ctx->pc = 0x2c0c90u;
    // NOP
    // 0x2c0c94: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0C94u;
    {
        const bool branch_taken_0x2c0c94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C94u;
        // 0x2c0c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c94) {
            ctx->pc = 0x2C0CA4u;
            goto label_2c0ca4;
        }
    }
    ctx->pc = 0x2C0C9Cu;
    // 0x2c0c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C9Cu;
        // 0x2c0ca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0CA4u;
label_2c0ca4:
    // 0x2c0ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0CACu;
    // 0x2c0cac: 0x0  nop
    ctx->pc = 0x2c0cacu;
    // NOP
    ctx->pc = 0x2c0cb0u;
}
