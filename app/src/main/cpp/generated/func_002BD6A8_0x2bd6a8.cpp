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

// Function: func_002BD6A8
// Address: 0x2bd6a8 - 0x2bd7e8
void func_002BD6A8_0x2bd6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BD6A8_0x2bd6a8");
#endif

    switch (ctx->pc) {
        case 0x2bd6d8u: goto label_2bd6d8;
        case 0x2bd7d4u: goto label_2bd7d4;
        default: break;
    }

    ctx->pc = 0x2bd6a8u;

    // 0x2bd6a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2bd6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2bd6ac: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2bd6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bd6b0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2bd6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2bd6b4: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2bd6b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd6b8: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x2bd6b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bd6bc: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x2bd6bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bd6c0: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x2bd6c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bd6c4: 0x27ac0040  addiu       $t4, $sp, 0x40
    ctx->pc = 0x2bd6c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bd6c8: 0x27ad0050  addiu       $t5, $sp, 0x50
    ctx->pc = 0x2bd6c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bd6cc: 0x27ae0060  addiu       $t6, $sp, 0x60
    ctx->pc = 0x2bd6ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bd6d0: 0x27af0070  addiu       $t7, $sp, 0x70
    ctx->pc = 0x2bd6d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bd6d4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2bd6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bd6d8:
    // 0x2bd6d8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2bd6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bd6dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bd6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bd6e0: 0x0  nop
    ctx->pc = 0x2bd6e0u;
    // NOP
    // 0x2bd6e4: 0x0  nop
    ctx->pc = 0x2bd6e4u;
    // NOP
    // 0x2bd6e8: 0x1468fffb  bne         $v1, $t0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BD6E8u;
    {
        const bool branch_taken_0x2bd6e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x2BD6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD6E8u;
        // 0x2bd6ec: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd6e8) {
            ctx->pc = 0x2BD6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd6d8;
        }
    }
    ctx->pc = 0x2BD6F0u;
    // 0x2bd6f0: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x2bd6f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2bd6f4: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bd6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd6f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bd6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bd6fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd700: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bd700u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bd704: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2bd704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2bd708: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2bd708u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2bd70c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2bd70cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bd710: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bd710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd714: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2bd714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd718: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2bd718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd71c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2bd71cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bd720: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2bd720u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x2bd724: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2bd724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2bd728: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bd728u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bd72c: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x2bd72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bd730: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2bd730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2bd734: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2bd734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd738: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2bd738u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bd73c: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x2bd73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x2bd740: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x2bd740u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x2bd744: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bd744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd748: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bd748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd74c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bd74cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bd750: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2bd750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bd754: 0xe5410008  swc1        $f1, 0x8($t2)
    ctx->pc = 0x2bd754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x2bd758: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x2bd758u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x2bd75c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bd75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd760: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bd760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd764: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bd764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bd768: 0xe5610008  swc1        $f1, 0x8($t3)
    ctx->pc = 0x2bd768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x2bd76c: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x2bd76cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x2bd770: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bd770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd774: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bd774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd778: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bd778u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bd77c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bd77cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bd780: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bd780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bd784: 0xe5810008  swc1        $f1, 0x8($t4)
    ctx->pc = 0x2bd784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
    // 0x2bd788: 0xe5830004  swc1        $f3, 0x4($t4)
    ctx->pc = 0x2bd788u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x2bd78c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bd78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd790: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bd790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd794: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bd794u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bd798: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2bd798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bd79c: 0xe5a30004  swc1        $f3, 0x4($t5)
    ctx->pc = 0x2bd79cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x2bd7a0: 0xe5a10008  swc1        $f1, 0x8($t5)
    ctx->pc = 0x2bd7a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x2bd7a4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bd7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd7a8: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bd7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd7ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bd7acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bd7b0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2bd7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bd7b4: 0xe5c30004  swc1        $f3, 0x4($t6)
    ctx->pc = 0x2bd7b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x2bd7b8: 0xe5c10008  swc1        $f1, 0x8($t6)
    ctx->pc = 0x2bd7b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x2bd7bc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bd7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd7c0: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bd7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd7c4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2bd7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2bd7c8: 0xe5e10008  swc1        $f1, 0x8($t7)
    ctx->pc = 0x2bd7c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x2bd7cc: 0xc0af52c  jal         func_2BD4B0
    ctx->pc = 0x2BD7CCu;
    SET_GPR_U32(ctx, 31, 0x2BD7D4u);
    ctx->pc = 0x2BD7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD7CCu;
    // 0x2bd7d0: 0xe5e30004  swc1        $f3, 0x4($t7) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD4B0u, 0x2BD7CCu, 0x2BD7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD7D4u;
label_2bd7d4:
    // 0x2bd7d4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2bd7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bd7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD7D8u;
        // 0x2bd7dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD7E0u;
    // 0x2bd7e0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2bd7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bd7e4: 0x0  nop
    ctx->pc = 0x2bd7e4u;
    // NOP
    ctx->pc = 0x2bd7e8u;
}
