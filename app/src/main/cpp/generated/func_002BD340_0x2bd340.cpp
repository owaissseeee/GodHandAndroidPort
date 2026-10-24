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

// Function: func_002BD340
// Address: 0x2bd340 - 0x2bd3d8
void func_002BD340_0x2bd340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BD340_0x2bd340");
#endif

    switch (ctx->pc) {
        case 0x2bd370u: goto label_2bd370;
        case 0x2bd398u: goto label_2bd398;
        case 0x2bd3b4u: goto label_2bd3b4;
        default: break;
    }

    ctx->pc = 0x2bd340u;

    // 0x2bd340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bd340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2bd344: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2bd344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2bd348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bd348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bd34c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bd34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd350: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2bd350u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2bd354: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bd354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd358: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2bd358u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bd35c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2bd35cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2bd360: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2bd360u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2bd364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bd364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bd368: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2BD368u;
    SET_GPR_U32(ctx, 31, 0x2BD370u);
    ctx->pc = 0x2BD36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD368u;
    // 0x2bd36c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2BD368u, 0x2BD370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD370u;
label_2bd370:
    // 0x2bd370: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bd370u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2bd374: 0x0  nop
    ctx->pc = 0x2bd374u;
    // NOP
    // 0x2bd378: 0x0  nop
    ctx->pc = 0x2bd378u;
    // NOP
    // 0x2bd37c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x2bd37cu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x2bd380: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2bd380u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd384: 0x0  nop
    ctx->pc = 0x2bd384u;
    // NOP
    // 0x2bd388: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BD388u;
    {
        const bool branch_taken_0x2bd388 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd388) {
            ctx->pc = 0x2BD398u;
            goto label_2bd398;
        }
    }
    ctx->pc = 0x2BD390u;
    // 0x2bd390: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x2BD390u;
    SET_GPR_U32(ctx, 31, 0x2BD398u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x2BD390u, 0x2BD398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD398u;
label_2bd398:
    // 0x2bd398: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2bd398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2bd39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bd3a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bd3a4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2bd3a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2bd3a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bd3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd3ac: 0xc0af3ca  jal         func_2BCF28
    ctx->pc = 0x2BD3ACu;
    SET_GPR_U32(ctx, 31, 0x2BD3B4u);
    ctx->pc = 0x2BD3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD3ACu;
    // 0x2bd3b0: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCF28u, 0x2BD3ACu, 0x2BD3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD3B4u;
label_2bd3b4:
    // 0x2bd3b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2bd3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd3b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bd3b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd3bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bd3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd3c0: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2bd3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bd3c4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2bd3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bd3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD3C8u;
        // 0x2bd3cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD3D0u;
    // 0x2bd3d0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2bd3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bd3d4: 0x0  nop
    ctx->pc = 0x2bd3d4u;
    // NOP
    ctx->pc = 0x2bd3d8u;
}
