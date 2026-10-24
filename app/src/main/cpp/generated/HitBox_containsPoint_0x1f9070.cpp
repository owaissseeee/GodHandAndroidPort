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

// Function: HitBox_containsPoint
// Address: 0x1f9070 - 0x1f91d0
void HitBox_containsPoint_0x1f9070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HitBox_containsPoint_0x1f9070");
#endif

    switch (ctx->pc) {
        case 0x1f90e0u: goto label_1f90e0;
        default: break;
    }

    ctx->pc = 0x1f9070u;

    // 0x1f9070: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f9070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f9074: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f9074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9078: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f9078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f907c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1f907cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1f9080: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1f9080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1f9084: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1f9084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f9088: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1f9088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1f908c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f908cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9090: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x1f9090u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1f9094: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f9094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9098: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x1f9098u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f909c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1f909cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1f90a0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1f90a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f90a4: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x1f90a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x1f90a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f90a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f90ac: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1f90acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1f90b0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1f90b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f90b4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1f90b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f90b8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1f90b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f90bc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f90bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f90c0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1f90c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f90c4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1f90c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f90c8: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1f90c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f90cc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1f90ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f90d0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1f90d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f90d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f90d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f90d8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1F90D8u;
    SET_GPR_U32(ctx, 31, 0x1F90E0u);
    ctx->pc = 0x1F90DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F90D8u;
    // 0x1f90dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1F90D8u, 0x1F90E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F90E0u;
label_1f90e0:
    // 0x1f90e0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1f90e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f90e4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1f90e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f90e8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1f90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f90ec: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F90ECu;
    {
        const bool branch_taken_0x1f90ec = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F90ECu;
        // 0x1f90f0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f90ec) {
            ctx->pc = 0x1F9108u;
            goto label_1f9108;
        }
    }
    ctx->pc = 0x1F90F4u;
    // 0x1f90f4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1f90f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f90f8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1f90f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f90fc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f90fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f9100: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1f9100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f9104: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1f9104u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1f9108:
    // 0x1f9108: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1f9108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f910c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x1f910cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f9110: 0x46140340  add.s       $f13, $f0, $f20
    ctx->pc = 0x1f9110u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1f9114: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1f9114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f9118: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x1f9118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f911c: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1f911cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9120: 0x460d2040  add.s       $f1, $f4, $f13
    ctx->pc = 0x1f9120u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[13]);
    // 0x1f9124: 0x46160300  add.s       $f12, $f0, $f22
    ctx->pc = 0x1f9124u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x1f9128: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x1f9128u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f912c: 0x0  nop
    ctx->pc = 0x1f912cu;
    // NOP
    // 0x1f9130: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x1F9130u;
    {
        const bool branch_taken_0x1f9130 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9130u;
        // 0x1f9134: 0x46151080  add.s       $f2, $f2, $f21 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9130) {
            ctx->pc = 0x1F91A4u;
            goto label_1f91a4;
        }
    }
    ctx->pc = 0x1F9138u;
    // 0x1f9138: 0x460d2001  sub.s       $f0, $f4, $f13
    ctx->pc = 0x1f9138u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[13]);
    // 0x1f913c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1f913cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9140: 0x0  nop
    ctx->pc = 0x1f9140u;
    // NOP
    // 0x1f9144: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x1F9144u;
    {
        const bool branch_taken_0x1f9144 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9144u;
        // 0x1f9148: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9144) {
            ctx->pc = 0x1F91A4u;
            goto label_1f91a4;
        }
    }
    ctx->pc = 0x1F914Cu;
    // 0x1f914c: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x1f914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f9150: 0x460c0800  add.s       $f0, $f1, $f12
    ctx->pc = 0x1f9150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x1f9154: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1f9154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9158: 0x0  nop
    ctx->pc = 0x1f9158u;
    // NOP
    // 0x1f915c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1F915Cu;
    {
        const bool branch_taken_0x1f915c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F9160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F915Cu;
        // 0x1f9160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f915c) {
            ctx->pc = 0x1F91A8u;
            goto label_1f91a8;
        }
    }
    ctx->pc = 0x1F9164u;
    // 0x1f9164: 0x460c0801  sub.s       $f0, $f1, $f12
    ctx->pc = 0x1f9164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x1f9168: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1f9168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f916c: 0x0  nop
    ctx->pc = 0x1f916cu;
    // NOP
    // 0x1f9170: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1F9170u;
    {
        const bool branch_taken_0x1f9170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F9174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9170u;
        // 0x1f9174: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9170) {
            ctx->pc = 0x1F91A8u;
            goto label_1f91a8;
        }
    }
    ctx->pc = 0x1F9178u;
    // 0x1f9178: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x1f9178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f917c: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x1f917cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1f9180: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1f9180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9184: 0x0  nop
    ctx->pc = 0x1f9184u;
    // NOP
    // 0x1f9188: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9188u;
    {
        const bool branch_taken_0x1f9188 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9188u;
        // 0x1f918c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9188) {
            ctx->pc = 0x1F91ACu;
            goto label_1f91ac;
        }
    }
    ctx->pc = 0x1F9190u;
    // 0x1f9190: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x1f9190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1f9194: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1f9194u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9198: 0x0  nop
    ctx->pc = 0x1f9198u;
    // NOP
    // 0x1f919c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F919Cu;
    {
        const bool branch_taken_0x1f919c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F919Cu;
        // 0x1f91a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f919c) {
            ctx->pc = 0x1F91ACu;
            goto label_1f91ac;
        }
    }
    ctx->pc = 0x1F91A4u;
label_1f91a4:
    // 0x1f91a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f91a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f91a8:
    // 0x1f91a8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1f91a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f91ac:
    // 0x1f91ac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1f91acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f91b0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1f91b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f91b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f91b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f91b8: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x1f91b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f91bc: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x1f91bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f91c0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1f91c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f91c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F91C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F91C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F91C4u;
        // 0x1f91c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F91C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F91CCu;
    // 0x1f91cc: 0x0  nop
    ctx->pc = 0x1f91ccu;
    // NOP
    ctx->pc = 0x1f91d0u;
}
