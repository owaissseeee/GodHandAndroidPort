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

// Function: func_001F8810
// Address: 0x1f8810 - 0x1f88a8
void func_001F8810_0x1f8810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F8810_0x1f8810");
#endif

    ctx->pc = 0x1f8810u;

    // 0x1f8810: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1f8810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8814: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1f8814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8818: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x1f8818u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x1f881c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1f881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8820: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1f8820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8824: 0x0  nop
    ctx->pc = 0x1f8824u;
    // NOP
    // 0x1f8828: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1F8828u;
    {
        const bool branch_taken_0x1f8828 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8828u;
        // 0x1f882c: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8828) {
            ctx->pc = 0x1F888Cu;
            goto label_1f888c;
        }
    }
    ctx->pc = 0x1F8830u;
    // 0x1f8830: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1f8830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8834: 0x0  nop
    ctx->pc = 0x1f8834u;
    // NOP
    // 0x1f8838: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F8838u;
    {
        const bool branch_taken_0x1f8838 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8838u;
        // 0x1f883c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8838) {
            ctx->pc = 0x1F8894u;
            goto label_1f8894;
        }
    }
    ctx->pc = 0x1F8840u;
    // 0x1f8840: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x1f8840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f8844: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x1f8844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f8848: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x1f8848u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x1f884c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1f884cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8850: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x1f8850u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x1f8854: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1f8854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8858: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1f8858u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1f885c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1f885cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1f8860: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1f8860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1f8864: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1f8864u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1f8868: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f8868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f886c: 0x0  nop
    ctx->pc = 0x1f886cu;
    // NOP
    // 0x1f8870: 0x0  nop
    ctx->pc = 0x1f8870u;
    // NOP
    // 0x1f8874: 0x46000004  c1          0x4
    ctx->pc = 0x1f8874u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x1f8878: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1f8878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f887c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f887cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8880: 0x0  nop
    ctx->pc = 0x1f8880u;
    // NOP
    // 0x1f8884: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8884u;
    {
        const bool branch_taken_0x1f8884 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F8888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8884u;
        // 0x1f8888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8884) {
            ctx->pc = 0x1F8894u;
            goto label_1f8894;
        }
    }
    ctx->pc = 0x1F888Cu;
label_1f888c:
    // 0x1f888c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F888Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F888Cu;
        // 0x1f8890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F888Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8894u;
label_1f8894:
    // 0x1f8894: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F889Cu;
    // 0x1f889c: 0x0  nop
    ctx->pc = 0x1f889cu;
    // NOP
    // 0x1f88a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f88a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f88a4: 0x0  nop
    ctx->pc = 0x1f88a4u;
    // NOP
    ctx->pc = 0x1f88a8u;
}
