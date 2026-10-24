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

// Function: func_001F8550
// Address: 0x1f8550 - 0x1f85d0
void func_001F8550_0x1f8550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F8550_0x1f8550");
#endif

    ctx->pc = 0x1f8550u;

    // 0x1f8550: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1f8550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8554: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1f8554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8558: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1f8558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f855c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f855cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8560: 0x0  nop
    ctx->pc = 0x1f8560u;
    // NOP
    // 0x1f8564: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F8564u;
    {
        const bool branch_taken_0x1f8564 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8564u;
        // 0x1f8568: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8564) {
            ctx->pc = 0x1F85C0u;
            goto label_1f85c0;
        }
    }
    ctx->pc = 0x1F856Cu;
    // 0x1f856c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1f856cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8570: 0x0  nop
    ctx->pc = 0x1f8570u;
    // NOP
    // 0x1f8574: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1F8574u;
    {
        const bool branch_taken_0x1f8574 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8574u;
        // 0x1f8578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8574) {
            ctx->pc = 0x1F85C8u;
            goto label_1f85c8;
        }
    }
    ctx->pc = 0x1F857Cu;
    // 0x1f857c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1f857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8580: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1f8580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8584: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x1f8584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8588: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x1f8588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f858c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1f858cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1f8590: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1f8590u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1f8594: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1f8594u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1f8598: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1f8598u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1f859c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f859cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f85a0: 0x0  nop
    ctx->pc = 0x1f85a0u;
    // NOP
    // 0x1f85a4: 0x0  nop
    ctx->pc = 0x1f85a4u;
    // NOP
    // 0x1f85a8: 0x46000004  c1          0x4
    ctx->pc = 0x1f85a8u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x1f85ac: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1f85acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f85b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f85b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f85b4: 0x0  nop
    ctx->pc = 0x1f85b4u;
    // NOP
    // 0x1f85b8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F85B8u;
    {
        const bool branch_taken_0x1f85b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F85BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85B8u;
        // 0x1f85bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f85b8) {
            ctx->pc = 0x1F85C8u;
            goto label_1f85c8;
        }
    }
    ctx->pc = 0x1F85C0u;
label_1f85c0:
    // 0x1f85c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F85C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F85C0u;
        // 0x1f85c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F85C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F85C8u;
label_1f85c8:
    // 0x1f85c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F85C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F85C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F85D0u;
}
