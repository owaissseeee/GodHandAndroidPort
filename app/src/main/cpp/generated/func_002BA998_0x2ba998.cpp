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

// Function: func_002BA998
// Address: 0x2ba998 - 0x2baa30
void func_002BA998_0x2ba998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA998_0x2ba998");
#endif

    switch (ctx->pc) {
        case 0x2ba9c0u: goto label_2ba9c0;
        case 0x2ba9c8u: goto label_2ba9c8;
        case 0x2ba9f0u: goto label_2ba9f0;
        default: break;
    }

    ctx->pc = 0x2ba998u;

    // 0x2ba998: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ba998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ba99c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ba99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2ba9a0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2ba9a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ba9a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ba9a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba9a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ba9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ba9ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ba9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ba9b0: 0x26500110  addiu       $s0, $s2, 0x110
    ctx->pc = 0x2ba9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    // 0x2ba9b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ba9b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ba9b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba9bc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2ba9bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2ba9c0:
    // 0x2ba9c0: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2BA9C0u;
    SET_GPR_U32(ctx, 31, 0x2BA9C8u);
    ctx->pc = 0x2BA9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA9C0u;
    // 0x2ba9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2BA9C0u, 0x2BA9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA9C8u;
label_2ba9c8:
    // 0x2ba9c8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ba9c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ba9cc: 0x0  nop
    ctx->pc = 0x2ba9ccu;
    // NOP
    // 0x2ba9d0: 0x0  nop
    ctx->pc = 0x2ba9d0u;
    // NOP
    // 0x2ba9d4: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2ba9d4u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x2ba9d8: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2ba9d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba9dc: 0x0  nop
    ctx->pc = 0x2ba9dcu;
    // NOP
    // 0x2ba9e0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA9E0u;
    {
        const bool branch_taken_0x2ba9e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba9e0) {
            ctx->pc = 0x2BA9F0u;
            goto label_2ba9f0;
        }
    }
    ctx->pc = 0x2BA9E8u;
    // 0x2ba9e8: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x2BA9E8u;
    SET_GPR_U32(ctx, 31, 0x2BA9F0u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x2BA9E8u, 0x2BA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA9F0u;
label_2ba9f0:
    // 0x2ba9f0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2ba9f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ba9f4: 0x0  nop
    ctx->pc = 0x2ba9f4u;
    // NOP
    // 0x2ba9f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BA9F8u;
    {
        const bool branch_taken_0x2ba9f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ba9f8) {
            ctx->pc = 0x2BA9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA9F8u;
            // 0x2ba9fc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAA00u;
            goto label_2baa00;
        }
    }
    ctx->pc = 0x2BAA00u;
label_2baa00:
    // 0x2baa00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2baa00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2baa04: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x2baa04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2baa08: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2BAA08u;
    {
        const bool branch_taken_0x2baa08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA08u;
        // 0x2baa0c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa08) {
            ctx->pc = 0x2BA9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba9c0;
        }
    }
    ctx->pc = 0x2BAA10u;
    // 0x2baa10: 0xe65400e4  swc1        $f20, 0xE4($s2)
    ctx->pc = 0x2baa10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x2baa14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2baa14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2baa18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2baa18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2baa1c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2baa1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2baa20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2baa20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2baa24: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2baa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2baa28: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA28u;
        // 0x2baa2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAA30u;
}
