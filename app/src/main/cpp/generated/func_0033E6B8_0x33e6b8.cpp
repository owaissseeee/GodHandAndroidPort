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

// Function: func_0033E6B8
// Address: 0x33e6b8 - 0x33e818
void func_0033E6B8_0x33e6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033E6B8_0x33e6b8");
#endif

    switch (ctx->pc) {
        case 0x33e718u: goto label_33e718;
        case 0x33e750u: goto label_33e750;
        case 0x33e76cu: goto label_33e76c;
        case 0x33e7a8u: goto label_33e7a8;
        default: break;
    }

    ctx->pc = 0x33e6b8u;

    // 0x33e6b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33e6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33e6bc: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x33e6bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33e6c0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x33e6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x33e6c4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x33e6c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x33e6c8: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x33e6c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x33e6cc: 0x0  nop
    ctx->pc = 0x33e6ccu;
    // NOP
    // 0x33e6d0: 0x0  nop
    ctx->pc = 0x33e6d0u;
    // NOP
    // 0x33e6d4: 0x46160504  c1          0x160504
    ctx->pc = 0x33e6d4u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[22]);
    // 0x33e6d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33e6dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33e6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33e6e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33e6e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e6e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33e6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33e6e8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x33e6e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e6ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33e6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33e6f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33e6f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e6f4: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x33e6f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33e6f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33e6f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e6fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33e6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33e700: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x33e700u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x33e704: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x33e704u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e708: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x33E708u;
    {
        const bool branch_taken_0x33e708 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E708u;
        // 0x33e70c: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e708) {
            ctx->pc = 0x33E71Cu;
            goto label_33e71c;
        }
    }
    ctx->pc = 0x33E710u;
    // 0x33e710: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x33E710u;
    SET_GPR_U32(ctx, 31, 0x33E718u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x33E710u, 0x33E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E718u;
label_33e718:
    // 0x33e718: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x33e718u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_33e71c:
    // 0x33e71c: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x33e71cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33e720: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x33e720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x33e724: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x33e724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x33e728: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x33e728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x33e72c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33e72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e730: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x33e730u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e734: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33e734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33e738: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x33e738u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x33e73c: 0x0  nop
    ctx->pc = 0x33e73cu;
    // NOP
    // 0x33e740: 0x0  nop
    ctx->pc = 0x33e740u;
    // NOP
    // 0x33e744: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x33e744u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[1]);
    // 0x33e748: 0xc0e863c  jal         func_3A18F0
    ctx->pc = 0x33E748u;
    SET_GPR_U32(ctx, 31, 0x33E750u);
    ctx->pc = 0x3A18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18F0u, 0x33E748u, 0x33E750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E750u;
label_33e750:
    // 0x33e750: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x33e750u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x33e754: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x33e754u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
    // 0x33e758: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x33e758u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e75c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x33E75Cu;
    {
        const bool branch_taken_0x33e75c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E75Cu;
        // 0x33e760: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e75c) {
            ctx->pc = 0x33E770u;
            goto label_33e770;
        }
    }
    ctx->pc = 0x33E764u;
    // 0x33e764: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x33E764u;
    SET_GPR_U32(ctx, 31, 0x33E76Cu);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x33E764u, 0x33E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E76Cu;
label_33e76c:
    // 0x33e76c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x33e76cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_33e770:
    // 0x33e770: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33e770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33e774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33e774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e778: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x33e778u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33e77c: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x33e77cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x33e780: 0x4614ab00  add.s       $f12, $f21, $f20
    ctx->pc = 0x33e780u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x33e784: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x33e784u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x33e788: 0x0  nop
    ctx->pc = 0x33e788u;
    // NOP
    // 0x33e78c: 0x0  nop
    ctx->pc = 0x33e78cu;
    // NOP
    // 0x33e790: 0x460c0004  c1          0xC0004
    ctx->pc = 0x33e790u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x33e794: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x33e794u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e798: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x33E798u;
    {
        const bool branch_taken_0x33e798 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33e798) {
            ctx->pc = 0x33E79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E798u;
            // 0x33e79c: 0x4600a801  sub.s       $f0, $f21, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E7ACu;
            goto label_33e7ac;
        }
    }
    ctx->pc = 0x33E7A0u;
    // 0x33e7a0: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x33E7A0u;
    SET_GPR_U32(ctx, 31, 0x33E7A8u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x33E7A0u, 0x33E7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E7A8u;
label_33e7a8:
    // 0x33e7a8: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x33e7a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_33e7ac:
    // 0x33e7ac: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x33e7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33e7b0: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x33e7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x33e7b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x33e7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33e7b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e7b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e7bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33e7bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33e7c0: 0x0  nop
    ctx->pc = 0x33e7c0u;
    // NOP
    // 0x33e7c4: 0x0  nop
    ctx->pc = 0x33e7c4u;
    // NOP
    // 0x33e7c8: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x33e7c8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[20]);
    // 0x33e7cc: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x33e7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33e7d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33e7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33e7d4: 0xc7b60038  lwc1        $f22, 0x38($sp)
    ctx->pc = 0x33e7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x33e7d8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x33e7d8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x33e7dc: 0x46000080  add.s       $f2, $f0, $f0
    ctx->pc = 0x33e7dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33e7e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x33e7e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33e7e4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x33e7e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x33e7e8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x33e7e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x33e7ec: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33e7ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x33e7f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x33e7f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x33e7f4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33e7f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x33e7f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x33e7f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33e7fc: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x33e7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x33e800: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33e800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33e804: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x33e804u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x33e808: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33e808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33e80c: 0x3e00008  jr          $ra
    ctx->pc = 0x33E80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E80Cu;
        // 0x33e810: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E814u;
    // 0x33e814: 0x0  nop
    ctx->pc = 0x33e814u;
    // NOP
    ctx->pc = 0x33e818u;
}
