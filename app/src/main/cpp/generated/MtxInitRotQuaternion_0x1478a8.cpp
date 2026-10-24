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

// Function: MtxInitRotQuaternion
// Address: 0x1478a8 - 0x147988
void MtxInitRotQuaternion_0x1478a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MtxInitRotQuaternion_0x1478a8");
#endif

    ctx->pc = 0x1478a8u;

    // 0x1478a8: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x1478a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1478ac: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1478acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1478b0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1478b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1478b4: 0x46042302  mul.s       $f12, $f4, $f4
    ctx->pc = 0x1478b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1478b8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1478b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1478bc: 0x46010a02  mul.s       $f8, $f1, $f1
    ctx->pc = 0x1478bcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1478c0: 0x46000a82  mul.s       $f10, $f1, $f0
    ctx->pc = 0x1478c0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1478c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1478c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1478c8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1478c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1478cc: 0x460022c2  mul.s       $f11, $f4, $f0
    ctx->pc = 0x1478ccu;
    ctx->f[11] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1478d0: 0x460220c2  mul.s       $f3, $f4, $f2
    ctx->pc = 0x1478d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1478d4: 0xe485003c  swc1        $f5, 0x3C($a0)
    ctx->pc = 0x1478d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x1478d8: 0x460211c2  mul.s       $f7, $f2, $f2
    ctx->pc = 0x1478d8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1478dc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1478dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1478e0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1478e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1478e4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1478e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x1478e8: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x1478e8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x1478ec: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1478ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1478f0: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x1478f0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x1478f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1478f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1478f8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1478f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x1478fc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1478fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x147900: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x147900u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x147904: 0x460b5ac0  add.s       $f11, $f11, $f11
    ctx->pc = 0x147904u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[11]);
    // 0x147908: 0x460a5280  add.s       $f10, $f10, $f10
    ctx->pc = 0x147908u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[10]);
    // 0x14790c: 0x46082a41  sub.s       $f9, $f5, $f8
    ctx->pc = 0x14790cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x147910: 0x460c2901  sub.s       $f4, $f5, $f12
    ctx->pc = 0x147910u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[12]);
    // 0x147914: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x147914u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x147918: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x147918u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14791c: 0x460a1981  sub.s       $f6, $f3, $f10
    ctx->pc = 0x14791cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[10]);
    // 0x147920: 0x460b1381  sub.s       $f14, $f2, $f11
    ctx->pc = 0x147920u;
    ctx->f[14] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
    // 0x147924: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x147924u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x147928: 0xe48d0020  swc1        $f13, 0x20($a0)
    ctx->pc = 0x147928u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x14792c: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x14792cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x147930: 0xe4860010  swc1        $f6, 0x10($a0)
    ctx->pc = 0x147930u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x147934: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x147934u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x147938: 0xe48e0024  swc1        $f14, 0x24($a0)
    ctx->pc = 0x147938u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x14793c: 0x460c4a41  sub.s       $f9, $f9, $f12
    ctx->pc = 0x14793cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[12]);
    // 0x147940: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x147940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x147944: 0x460a18c0  add.s       $f3, $f3, $f10
    ctx->pc = 0x147944u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[10]);
    // 0x147948: 0xe4840028  swc1        $f4, 0x28($a0)
    ctx->pc = 0x147948u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x14794c: 0x460b1080  add.s       $f2, $f2, $f11
    ctx->pc = 0x14794cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[11]);
    // 0x147950: 0xe4850000  swc1        $f5, 0x0($a0)
    ctx->pc = 0x147950u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x147954: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x147954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147958: 0xe4890014  swc1        $f9, 0x14($a0)
    ctx->pc = 0x147958u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x14795c: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x14795cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x147960: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x147960u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x147964: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x147964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x147968: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x147968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x14796c: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x14796cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x147970: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x147970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x147974: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x147974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x147978: 0x3e00008  jr          $ra
    ctx->pc = 0x147978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147978u;
        // 0x14797c: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147980u;
    // 0x147980: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x147980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x147984: 0x0  nop
    ctx->pc = 0x147984u;
    // NOP
    ctx->pc = 0x147988u;
}
