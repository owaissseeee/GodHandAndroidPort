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

// Function: func_0015A6A0
// Address: 0x15a6a0 - 0x15a878
void func_0015A6A0_0x15a6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015A6A0_0x15a6a0");
#endif

    switch (ctx->pc) {
        case 0x15a78cu: goto label_15a78c;
        case 0x15a79cu: goto label_15a79c;
        case 0x15a7b4u: goto label_15a7b4;
        case 0x15a7c4u: goto label_15a7c4;
        default: break;
    }

    ctx->pc = 0x15a6a0u;

    // 0x15a6a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15a6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15a6a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15a6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15a6a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15a6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15a6ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15a6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a6b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x15a6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15a6b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x15a6b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a6b8: 0xe7b80060  swc1        $f24, 0x60($sp)
    ctx->pc = 0x15a6b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15a6bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15a6bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a6c0: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x15a6c0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15a6c4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x15a6c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x15a6c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15a6cc: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x15a6ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15a6d0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x15a6d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15a6d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15a6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15a6d8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x15a6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x15a6dc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x15a6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a6e0: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x15a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a6e4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x15a6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a6e8: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x15a6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15a6ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15a6ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15a6f0: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x15a6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15a6f4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x15a6f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x15a6f8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x15a6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a6fc: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x15a6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a700: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x15a700u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x15a704: 0xc625000c  lwc1        $f5, 0xC($s1)
    ctx->pc = 0x15a704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15a708: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x15a708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x15a70c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x15a70cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x15a710: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15a710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a714: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x15a714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x15a718: 0x46020540  add.s       $f21, $f0, $f2
    ctx->pc = 0x15a718u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x15a71c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x15a71cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a720: 0x0  nop
    ctx->pc = 0x15a720u;
    // NOP
    // 0x15a724: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15A724u;
    {
        const bool branch_taken_0x15a724 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A724u;
        // 0x15a728: 0x460065c6  mov.s       $f23, $f12 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a724) {
            ctx->pc = 0x15A734u;
            goto label_15a734;
        }
    }
    ctx->pc = 0x15A72Cu;
    // 0x15a72c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x15a72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x15a730: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x15a730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_15a734:
    // 0x15a734: 0x0  nop
    ctx->pc = 0x15a734u;
    // NOP
    // 0x15a738: 0x4618ad42  mul.s       $f21, $f21, $f24
    ctx->pc = 0x15a738u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
    // 0x15a73c: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x15a73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x15a740: 0x3421ff58  ori         $at, $at, 0xFF58
    ctx->pc = 0x15a740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65368);
    // 0x15a744: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15a744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a748: 0x0  nop
    ctx->pc = 0x15a748u;
    // NOP
    // 0x15a74c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x15a74cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a750: 0x0  nop
    ctx->pc = 0x15a750u;
    // NOP
    // 0x15a754: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x15A754u;
    {
        const bool branch_taken_0x15a754 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A754u;
        // 0x15a758: 0x4600bd86  mov.s       $f22, $f23 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a754) {
            ctx->pc = 0x15A7CCu;
            goto label_15a7cc;
        }
    }
    ctx->pc = 0x15A75Cu;
    // 0x15a75c: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x15a75cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x15a760: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15a760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15a764: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x15a764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x15a768: 0x0  nop
    ctx->pc = 0x15a768u;
    // NOP
    // 0x15a76c: 0x4600b301  sub.s       $f12, $f22, $f0
    ctx->pc = 0x15a76cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x15a770: 0x460c0504  c1          0xC0504
    ctx->pc = 0x15a770u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x15a774: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x15a774u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a778: 0x0  nop
    ctx->pc = 0x15a778u;
    // NOP
    // 0x15a77c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x15A77Cu;
    {
        const bool branch_taken_0x15a77c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A77Cu;
        // 0x15a780: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a77c) {
            ctx->pc = 0x15A794u;
            goto label_15a794;
        }
    }
    ctx->pc = 0x15A784u;
    // 0x15a784: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x15A784u;
    SET_GPR_U32(ctx, 31, 0x15A78Cu);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x15A784u, 0x15A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A78Cu;
label_15a78c:
    // 0x15a78c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15a78cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x15a790: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x15a790u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_15a794:
    // 0x15a794: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x15A794u;
    SET_GPR_U32(ctx, 31, 0x15A79Cu);
    ctx->pc = 0x15A798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A794u;
    // 0x15a798: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x15A794u, 0x15A79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A79Cu;
label_15a79c:
    // 0x15a79c: 0x0  nop
    ctx->pc = 0x15a79cu;
    // NOP
    // 0x15a7a0: 0x0  nop
    ctx->pc = 0x15a7a0u;
    // NOP
    // 0x15a7a4: 0x4614b543  div.s       $f21, $f22, $f20
    ctx->pc = 0x15a7a4u;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[20]);
    // 0x15a7a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15a7a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x15a7ac: 0xc0e867e  jal         func_3A19F8
    ctx->pc = 0x15A7ACu;
    SET_GPR_U32(ctx, 31, 0x15A7B4u);
    ctx->pc = 0x15A7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A7ACu;
    // 0x15a7b0: 0x4614bb02  mul.s       $f12, $f23, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A19F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A19F8u, 0x15A7ACu, 0x15A7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A7B4u;
label_15a7b4:
    // 0x15a7b4: 0x4617b301  sub.s       $f12, $f22, $f23
    ctx->pc = 0x15a7b4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x15a7b8: 0x46150582  mul.s       $f22, $f0, $f21
    ctx->pc = 0x15a7b8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x15a7bc: 0xc0e867e  jal         func_3A19F8
    ctx->pc = 0x15A7BCu;
    SET_GPR_U32(ctx, 31, 0x15A7C4u);
    ctx->pc = 0x15A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A7BCu;
    // 0x15a7c0: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A19F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A19F8u, 0x15A7BCu, 0x15A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A7C4u;
label_15a7c4:
    // 0x15a7c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15A7C4u;
    {
        const bool branch_taken_0x15a7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7C4u;
        // 0x15a7c8: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7c4) {
            ctx->pc = 0x15A7DCu;
            goto label_15a7dc;
        }
    }
    ctx->pc = 0x15A7CCu;
label_15a7cc:
    // 0x15a7cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15a7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15a7d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15a7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a7d4: 0x0  nop
    ctx->pc = 0x15a7d4u;
    // NOP
    // 0x15a7d8: 0x46160301  sub.s       $f12, $f0, $f22
    ctx->pc = 0x15a7d8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_15a7dc:
    // 0x15a7dc: 0x4618b582  mul.s       $f22, $f22, $f24
    ctx->pc = 0x15a7dcu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[24]);
    // 0x15a7e0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x15a7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a7e4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x15a7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a7e8: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x15a7e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x15a7ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a7f0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x15a7f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x15a7f4: 0xc7b80060  lwc1        $f24, 0x60($sp)
    ctx->pc = 0x15a7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x15a7f8: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x15a7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x15a7fc: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x15a7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15a800: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15a800u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15a804: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x15a804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15a808: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x15a808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x15a80c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x15a80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a810: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x15a810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a814: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x15a814u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x15a818: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x15a818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x15a81c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x15a81cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15a820: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x15a820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x15a824: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x15a824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a828: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x15a828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a82c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x15a82cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x15a830: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x15a830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x15a834: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15a834u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15a838: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x15a838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x15a83c: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x15a83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a840: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x15a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a844: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x15a844u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x15a848: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15a848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a84c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x15a84cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x15a850: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15a850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a854: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x15a854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x15a858: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x15a858u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15a85c: 0xe642000c  swc1        $f2, 0xC($s2)
    ctx->pc = 0x15a85cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x15a860: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x15a860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a864: 0x3e00008  jr          $ra
    ctx->pc = 0x15A864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A864u;
        // 0x15a868: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A86Cu;
    // 0x15a86c: 0x0  nop
    ctx->pc = 0x15a86cu;
    // NOP
    // 0x15a870: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x15a870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15a874: 0x0  nop
    ctx->pc = 0x15a874u;
    // NOP
    ctx->pc = 0x15a878u;
}
