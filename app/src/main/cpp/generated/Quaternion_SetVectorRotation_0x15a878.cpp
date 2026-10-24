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

// Function: Quaternion_SetVectorRotation
// Address: 0x15a878 - 0x15a9a0
void Quaternion_SetVectorRotation_0x15a878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Quaternion_SetVectorRotation_0x15a878");
#endif

    switch (ctx->pc) {
        case 0x15a948u: goto label_15a948;
        default: break;
    }

    ctx->pc = 0x15a878u;

    // 0x15a878: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15a878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15a87c: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x15a87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x15a880: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15a880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15a884: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x15a884u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15a888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15a888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a88c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15a88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15a890: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x15a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a894: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x15a894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a898: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x15a898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15a89c: 0x46061102  mul.s       $f4, $f2, $f6
    ctx->pc = 0x15a89cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x15a8a0: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x15a8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15a8a4: 0x46060a82  mul.s       $f10, $f1, $f6
    ctx->pc = 0x15a8a4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x15a8a8: 0x460509c2  mul.s       $f7, $f1, $f5
    ctx->pc = 0x15a8a8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x15a8ac: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x15a8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a8b0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x15a8b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x15a8b4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x15a8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x15a8b8: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x15a8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x15a8bc: 0x46030242  mul.s       $f9, $f0, $f3
    ctx->pc = 0x15a8bcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x15a8c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15a8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15a8c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15a8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15a8c8: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x15a8c8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x15a8cc: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x15a8ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x15a8d0: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x15a8d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x15a8d4: 0x46050202  mul.s       $f8, $f0, $f5
    ctx->pc = 0x15a8d4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x15a8d8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x15a8d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15a8dc: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x15a8dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x15a8e0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x15a8e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x15a8e4: 0x46092100  add.s       $f4, $f4, $f9
    ctx->pc = 0x15a8e4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[9]);
    // 0x15a8e8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x15a8e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x15a8ec: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x15a8ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x15a8f0: 0x460a1081  sub.s       $f2, $f2, $f10
    ctx->pc = 0x15a8f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[10]);
    // 0x15a8f4: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x15a8f4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
    // 0x15a8f8: 0x460b2034  c.lt.s      $f4, $f11
    ctx->pc = 0x15a8f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a8fc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x15a8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15a900: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x15a900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15a904: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15A904u;
    {
        const bool branch_taken_0x15a904 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A904u;
        // 0x15a908: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a904) {
            ctx->pc = 0x15A910u;
            goto label_15a910;
        }
    }
    ctx->pc = 0x15A90Cu;
    // 0x15a90c: 0x460058c6  mov.s       $f3, $f11
    ctx->pc = 0x15a90cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[11]);
label_15a910:
    // 0x15a910: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x15a910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a914: 0x0  nop
    ctx->pc = 0x15a914u;
    // NOP
    // 0x15a918: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15A918u;
    {
        const bool branch_taken_0x15a918 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A918u;
        // 0x15a91c: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a918) {
            ctx->pc = 0x15A924u;
            goto label_15a924;
        }
    }
    ctx->pc = 0x15A920u;
    // 0x15a920: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x15a920u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_15a924:
    // 0x15a924: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x15a924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x15a928: 0x46000300  add.s       $f12, $f0, $f0
    ctx->pc = 0x15a928u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x15a92c: 0x460c0144  c1          0xC0144
    ctx->pc = 0x15a92cu;
    ctx->f[5] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x15a930: 0x46052832  c.eq.s      $f5, $f5
    ctx->pc = 0x15a930u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a934: 0x0  nop
    ctx->pc = 0x15a934u;
    // NOP
    // 0x15a938: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15A938u;
    {
        const bool branch_taken_0x15a938 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a938) {
            ctx->pc = 0x15A94Cu;
            goto label_15a94c;
        }
    }
    ctx->pc = 0x15A940u;
    // 0x15a940: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x15A940u;
    SET_GPR_U32(ctx, 31, 0x15A948u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x15A940u, 0x15A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A948u;
label_15a948:
    // 0x15a948: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x15a948u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
label_15a94c:
    // 0x15a94c: 0x0  nop
    ctx->pc = 0x15a94cu;
    // NOP
    // 0x15a950: 0x0  nop
    ctx->pc = 0x15a950u;
    // NOP
    // 0x15a954: 0x4605a083  div.s       $f2, $f20, $f5
    ctx->pc = 0x15a954u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[5]);
    // 0x15a958: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x15a958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15a95c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x15a95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15a960: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x15a960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a964: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15a964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15a968: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15a968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a96c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15a96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a970: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x15a970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x15a974: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x15a974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15a978: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15a978u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15a97c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x15a97cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x15a980: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x15a980u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x15a984: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x15a984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x15a988: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x15a988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x15a98c: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x15a98cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x15a990: 0xe6040004  swc1        $f4, 0x4($s0)
    ctx->pc = 0x15a990u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15a994: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15a994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a998: 0x3e00008  jr          $ra
    ctx->pc = 0x15A998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A998u;
        // 0x15a99c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A9A0u;
}
