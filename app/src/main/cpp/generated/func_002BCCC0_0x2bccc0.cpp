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

// Function: func_002BCCC0
// Address: 0x2bccc0 - 0x2bcd58
void func_002BCCC0_0x2bccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BCCC0_0x2bccc0");
#endif

    switch (ctx->pc) {
        case 0x2bccf0u: goto label_2bccf0;
        case 0x2bcd18u: goto label_2bcd18;
        case 0x2bcd34u: goto label_2bcd34;
        default: break;
    }

    ctx->pc = 0x2bccc0u;

    // 0x2bccc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bccc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2bccc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2bccc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bcccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bccccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bccd0: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2bccd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2bccd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bccd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bccd8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2bccd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bccdc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2bccdcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2bcce0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2bcce0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2bcce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bcce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bcce8: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2BCCE8u;
    SET_GPR_U32(ctx, 31, 0x2BCCF0u);
    ctx->pc = 0x2BCCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCCE8u;
    // 0x2bccec: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2BCCE8u, 0x2BCCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCCF0u;
label_2bccf0:
    // 0x2bccf0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bccf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2bccf4: 0x0  nop
    ctx->pc = 0x2bccf4u;
    // NOP
    // 0x2bccf8: 0x0  nop
    ctx->pc = 0x2bccf8u;
    // NOP
    // 0x2bccfc: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2bccfcu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x2bcd00: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2bcd00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcd04: 0x0  nop
    ctx->pc = 0x2bcd04u;
    // NOP
    // 0x2bcd08: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BCD08u;
    {
        const bool branch_taken_0x2bcd08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bcd08) {
            ctx->pc = 0x2BCD18u;
            goto label_2bcd18;
        }
    }
    ctx->pc = 0x2BCD10u;
    // 0x2bcd10: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x2BCD10u;
    SET_GPR_U32(ctx, 31, 0x2BCD18u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x2BCD10u, 0x2BCD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD18u;
label_2bcd18:
    // 0x2bcd18: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2bcd18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2bcd1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bcd20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bcd24: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2bcd24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2bcd28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bcd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd2c: 0xc0aef6e  jal         func_2BBDB8
    ctx->pc = 0x2BCD2Cu;
    SET_GPR_U32(ctx, 31, 0x2BCD34u);
    ctx->pc = 0x2BCD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCD2Cu;
    // 0x2bcd30: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBDB8u, 0x2BCD2Cu, 0x2BCD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD34u;
label_2bcd34:
    // 0x2bcd34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2bcd34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bcd38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bcd38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bcd3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bcd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcd40: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2bcd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bcd44: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2bcd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bcd48: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCD48u;
        // 0x2bcd4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCD50u;
    // 0x2bcd50: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2bcd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bcd54: 0x0  nop
    ctx->pc = 0x2bcd54u;
    // NOP
    ctx->pc = 0x2bcd58u;
}
