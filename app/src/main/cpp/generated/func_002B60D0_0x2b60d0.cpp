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

// Function: func_002B60D0
// Address: 0x2b60d0 - 0x2b6160
void func_002B60D0_0x2b60d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B60D0_0x2b60d0");
#endif

    switch (ctx->pc) {
        case 0x2b60f0u: goto label_2b60f0;
        case 0x2b6140u: goto label_2b6140;
        default: break;
    }

    ctx->pc = 0x2b60d0u;

    // 0x2b60d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b60d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b60d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b60d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b60d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b60d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b60dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b60dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b60e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b60e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b60e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b60e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b60e8: 0xc0ad908  jal         func_2B6420
    ctx->pc = 0x2B60E8u;
    SET_GPR_U32(ctx, 31, 0x2B60F0u);
    ctx->pc = 0x2B60ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B60E8u;
    // 0x2b60ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6420u, 0x2B60E8u, 0x2B60F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B60F0u;
label_2b60f0:
    // 0x2b60f0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2b60f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2b60f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b60f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b60f8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2b60f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b60fc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b60fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6100: 0x0  nop
    ctx->pc = 0x2b6100u;
    // NOP
    // 0x2b6104: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x2B6104u;
    {
        const bool branch_taken_0x2b6104 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6104) {
            ctx->pc = 0x2B6140u;
            goto label_2b6140;
        }
    }
    ctx->pc = 0x2B610Cu;
    // 0x2b610c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2b610cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6110: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b6110u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6114: 0x0  nop
    ctx->pc = 0x2b6114u;
    // NOP
    // 0x2b6118: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2B6118u;
    {
        const bool branch_taken_0x2b6118 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6118) {
            ctx->pc = 0x2B6140u;
            goto label_2b6140;
        }
    }
    ctx->pc = 0x2B6120u;
    // 0x2b6120: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x2b6120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6124: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b6124u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6128: 0x0  nop
    ctx->pc = 0x2b6128u;
    // NOP
    // 0x2b612c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B612Cu;
    {
        const bool branch_taken_0x2b612c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B612Cu;
        // 0x2b6130: 0x260500b0  addiu       $a1, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b612c) {
            ctx->pc = 0x2B6140u;
            goto label_2b6140;
        }
    }
    ctx->pc = 0x2B6134u;
    // 0x2b6134: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b6134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6138: 0xc051f22  jal         func_147C88
    ctx->pc = 0x2B6138u;
    SET_GPR_U32(ctx, 31, 0x2B6140u);
    ctx->pc = 0x2B613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6138u;
    // 0x2b613c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x2B6138u, 0x2B6140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6140u;
label_2b6140:
    // 0x2b6140: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2b6140u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6144: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2b6144u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2b6148: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b6148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b614c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b614cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6150: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b6150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6158: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6158u;
        // 0x2b615c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6160u;
}
