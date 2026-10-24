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

// Function: func_002C0B38
// Address: 0x2c0b38 - 0x2c0c28
void func_002C0B38_0x2c0b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C0B38_0x2c0b38");
#endif

    switch (ctx->pc) {
        case 0x2c0b50u: goto label_2c0b50;
        default: break;
    }

    ctx->pc = 0x2c0b38u;

    // 0x2c0b38: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2c0b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0b3c: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x2c0b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0b40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c0b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0b44: 0x0  nop
    ctx->pc = 0x2c0b44u;
    // NOP
    // 0x2c0b48: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0B48u;
    {
        const bool branch_taken_0x2c0b48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0b48) {
            ctx->pc = 0x2C0B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0B48u;
            // 0x2c0b4c: 0xc4800024  lwc1        $f0, 0x24($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0B58u;
            goto label_2c0b58;
        }
    }
    ctx->pc = 0x2C0B50u;
label_2c0b50:
    // 0x2c0b50: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B50u;
        // 0x2c0b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0B58u;
label_2c0b58:
    // 0x2c0b58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c0b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0b5c: 0x0  nop
    ctx->pc = 0x2c0b5cu;
    // NOP
    // 0x2c0b60: 0x4501fffb  bc1t        . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C0B60u;
    {
        const bool branch_taken_0x2c0b60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0b60) {
            ctx->pc = 0x2C0B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0b50;
        }
    }
    ctx->pc = 0x2C0B68u;
    // 0x2c0b68: 0xc4890000  lwc1        $f9, 0x0($a0)
    ctx->pc = 0x2c0b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c0b6c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2c0b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0b70: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x2c0b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c0b74: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2c0b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c0b78: 0x46090101  sub.s       $f4, $f0, $f9
    ctx->pc = 0x2c0b78u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x2c0b7c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2c0b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0b80: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x2c0b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c0b84: 0x46061941  sub.s       $f5, $f3, $f6
    ctx->pc = 0x2c0b84u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2c0b88: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2c0b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0b8c: 0x46090a01  sub.s       $f8, $f1, $f9
    ctx->pc = 0x2c0b8cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x2c0b90: 0x460611c1  sub.s       $f7, $f2, $f6
    ctx->pc = 0x2c0b90u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x2c0b94: 0xc483001c  lwc1        $f3, 0x1C($a0)
    ctx->pc = 0x2c0b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c0b98: 0x46090281  sub.s       $f10, $f0, $f9
    ctx->pc = 0x2c0b98u;
    ctx->f[10] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x2c0b9c: 0x46054042  mul.s       $f1, $f8, $f5
    ctx->pc = 0x2c0b9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x2c0ba0: 0x46043802  mul.s       $f0, $f7, $f4
    ctx->pc = 0x2c0ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x2c0ba4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c0ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0ba8: 0x0  nop
    ctx->pc = 0x2c0ba8u;
    // NOP
    // 0x2c0bac: 0x4501ffe8  bc1t        . + 4 + (-0x18 << 2)
    ctx->pc = 0x2C0BACu;
    {
        const bool branch_taken_0x2c0bac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0BACu;
        // 0x2c0bb0: 0x460618c1  sub.s       $f3, $f3, $f6 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0bac) {
            ctx->pc = 0x2C0B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0b50;
        }
    }
    ctx->pc = 0x2C0BB4u;
    // 0x2c0bb4: 0x46055042  mul.s       $f1, $f10, $f5
    ctx->pc = 0x2c0bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x2c0bb8: 0x46041802  mul.s       $f0, $f3, $f4
    ctx->pc = 0x2c0bb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2c0bbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c0bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0bc0: 0x0  nop
    ctx->pc = 0x2c0bc0u;
    // NOP
    // 0x2c0bc4: 0x4501ffe2  bc1t        . + 4 + (-0x1E << 2)
    ctx->pc = 0x2C0BC4u;
    {
        const bool branch_taken_0x2c0bc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0bc4) {
            ctx->pc = 0x2C0B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0b50;
        }
    }
    ctx->pc = 0x2C0BCCu;
    // 0x2c0bcc: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x2c0bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0bd0: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2c0bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0bd4: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x2c0bd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x2c0bd8: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x2c0bd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x2c0bdc: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x2c0bdcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2c0be0: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x2c0be0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x2c0be4: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2c0be4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2c0be8: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x2c0be8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x2c0bec: 0x46005281  sub.s       $f10, $f10, $f0
    ctx->pc = 0x2c0becu;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
    // 0x2c0bf0: 0x46054082  mul.s       $f2, $f8, $f5
    ctx->pc = 0x2c0bf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x2c0bf4: 0x46043802  mul.s       $f0, $f7, $f4
    ctx->pc = 0x2c0bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x2c0bf8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2c0bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0bfc: 0x0  nop
    ctx->pc = 0x2c0bfcu;
    // NOP
    // 0x2c0c00: 0x4501ffd3  bc1t        . + 4 + (-0x2D << 2)
    ctx->pc = 0x2C0C00u;
    {
        const bool branch_taken_0x2c0c00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C00u;
        // 0x2c0c04: 0x460118c1  sub.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c00) {
            ctx->pc = 0x2C0B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0b50;
        }
    }
    ctx->pc = 0x2C0C08u;
    // 0x2c0c08: 0x46055042  mul.s       $f1, $f10, $f5
    ctx->pc = 0x2c0c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x2c0c0c: 0x46041802  mul.s       $f0, $f3, $f4
    ctx->pc = 0x2c0c0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2c0c10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c0c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0c14: 0x0  nop
    ctx->pc = 0x2c0c14u;
    // NOP
    // 0x2c0c18: 0x4501ffcd  bc1t        . + 4 + (-0x33 << 2)
    ctx->pc = 0x2C0C18u;
    {
        const bool branch_taken_0x2c0c18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C0C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C18u;
        // 0x2c0c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c18) {
            ctx->pc = 0x2C0B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0b50;
        }
    }
    ctx->pc = 0x2C0C20u;
    // 0x2c0c20: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0C28u;
}
