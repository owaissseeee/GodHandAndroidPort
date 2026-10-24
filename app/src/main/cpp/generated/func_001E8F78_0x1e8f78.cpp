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

// Function: func_001E8F78
// Address: 0x1e8f78 - 0x1e9028
void func_001E8F78_0x1e8f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E8F78_0x1e8f78");
#endif

    switch (ctx->pc) {
        case 0x1e8fd0u: goto label_1e8fd0;
        case 0x1e9014u: goto label_1e9014;
        default: break;
    }

    ctx->pc = 0x1e8f78u;

    // 0x1e8f78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e8f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e8f7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e8f80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e8f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e8f84: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1e8f84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e8f88: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1E8F88u;
    {
        const bool branch_taken_0x1e8f88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8F88u;
        // 0x1e8f8c: 0x26020340  addiu       $v0, $s0, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8f88) {
            ctx->pc = 0x1E9014u;
            goto label_1e9014;
        }
    }
    ctx->pc = 0x1E8F90u;
    // 0x1e8f90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e8f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8f94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e8f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8f98: 0xe48c00b8  swc1        $f12, 0xB8($a0)
    ctx->pc = 0x1e8f98u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
    // 0x1e8f9c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1e8f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e8fa0: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x1e8fa0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e8fa4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e8fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e8fa8: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8FA8u;
    {
        const bool branch_taken_0x1e8fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1E8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FA8u;
        // 0x1e8fac: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8fa8) {
            ctx->pc = 0x1E8FC4u;
            goto label_1e8fc4;
        }
    }
    ctx->pc = 0x1E8FB0u;
    // 0x1e8fb0: 0xe60c0340  swc1        $f12, 0x340($s0)
    ctx->pc = 0x1e8fb0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 832), bits); }
    // 0x1e8fb4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1e8fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8fb8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1e8fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e8fbc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1e8fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8fc0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1e8fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1e8fc4:
    // 0x1e8fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8fc8: 0xc0c682e  jal         func_31A0B8
    ctx->pc = 0x1E8FC8u;
    SET_GPR_U32(ctx, 31, 0x1E8FD0u);
    ctx->pc = 0x1E8FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8FC8u;
    // 0x1e8fcc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A0B8u, 0x1E8FC8u, 0x1E8FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8FD0u;
label_1e8fd0:
    // 0x1e8fd0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e8fd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8fd4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e8fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8fd8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e8fd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8fdc: 0x0  nop
    ctx->pc = 0x1e8fdcu;
    // NOP
    // 0x1e8fe0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1E8FE0u;
    {
        const bool branch_taken_0x1e8fe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FE0u;
        // 0x1e8fe4: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8fe0) {
            ctx->pc = 0x1E9008u;
            goto label_1e9008;
        }
    }
    ctx->pc = 0x1E8FE8u;
    // 0x1e8fe8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e8fe8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8fec: 0x0  nop
    ctx->pc = 0x1e8fecu;
    // NOP
    // 0x1e8ff0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E8FF0u;
    {
        const bool branch_taken_0x1e8ff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8FF0u;
        // 0x1e8ff4: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ff0) {
            ctx->pc = 0x1E9008u;
            goto label_1e9008;
        }
    }
    ctx->pc = 0x1E8FF8u;
    // 0x1e8ff8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e8ff8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8ffc: 0x0  nop
    ctx->pc = 0x1e8ffcu;
    // NOP
    // 0x1e9000: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9000u;
    {
        const bool branch_taken_0x1e9000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e9000) {
            ctx->pc = 0x1E9004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9000u;
            // 0x1e9004: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9018u;
            goto label_1e9018;
        }
    }
    ctx->pc = 0x1E9008u;
label_1e9008:
    // 0x1e9008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e900c: 0xc0c6822  jal         func_31A088
    ctx->pc = 0x1E900Cu;
    SET_GPR_U32(ctx, 31, 0x1E9014u);
    ctx->pc = 0x1E9010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E900Cu;
    // 0x1e9010: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A088u, 0x1E900Cu, 0x1E9014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9014u;
label_1e9014:
    // 0x1e9014: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e9014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9018:
    // 0x1e9018: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e901c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E901Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E901Cu;
        // 0x1e9020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E901Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9024u;
    // 0x1e9024: 0x0  nop
    ctx->pc = 0x1e9024u;
    // NOP
    ctx->pc = 0x1e9028u;
}
