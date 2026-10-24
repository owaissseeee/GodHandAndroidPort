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

// Function: func_002BD200
// Address: 0x2bd200 - 0x2bd340
void func_002BD200_0x2bd200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BD200_0x2bd200");
#endif

    switch (ctx->pc) {
        case 0x2bd230u: goto label_2bd230;
        case 0x2bd32cu: goto label_2bd32c;
        default: break;
    }

    ctx->pc = 0x2bd200u;

    // 0x2bd200: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2bd200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2bd204: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2bd204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bd208: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2bd208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2bd20c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2bd20cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd210: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x2bd210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bd214: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x2bd214u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bd218: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x2bd218u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bd21c: 0x27ac0040  addiu       $t4, $sp, 0x40
    ctx->pc = 0x2bd21cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bd220: 0x27ad0050  addiu       $t5, $sp, 0x50
    ctx->pc = 0x2bd220u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bd224: 0x27ae0060  addiu       $t6, $sp, 0x60
    ctx->pc = 0x2bd224u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bd228: 0x27af0070  addiu       $t7, $sp, 0x70
    ctx->pc = 0x2bd228u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bd22c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2bd22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bd230:
    // 0x2bd230: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2bd230u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bd234: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bd234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bd238: 0x0  nop
    ctx->pc = 0x2bd238u;
    // NOP
    // 0x2bd23c: 0x0  nop
    ctx->pc = 0x2bd23cu;
    // NOP
    // 0x2bd240: 0x1467fffb  bne         $v1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BD240u;
    {
        const bool branch_taken_0x2bd240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x2BD244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD240u;
        // 0x2bd244: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd240) {
            ctx->pc = 0x2BD230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd230;
        }
    }
    ctx->pc = 0x2BD248u;
    // 0x2bd248: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2bd248u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bd24c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bd24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd250: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bd250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bd254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bd254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd258: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bd258u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bd25c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2bd25cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2bd260: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2bd260u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2bd264: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2bd264u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bd268: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bd268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd26c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2bd26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd270: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2bd270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd274: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2bd274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bd278: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2bd278u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x2bd27c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2bd27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2bd280: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bd280u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bd284: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2bd284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bd288: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2bd288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2bd28c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bd28cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd290: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2bd290u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bd294: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x2bd294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x2bd298: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x2bd298u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x2bd29c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bd29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd2a0: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bd2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd2a4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bd2a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bd2a8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2bd2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bd2ac: 0xe5410008  swc1        $f1, 0x8($t2)
    ctx->pc = 0x2bd2acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x2bd2b0: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x2bd2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x2bd2b4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bd2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd2b8: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bd2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd2bc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bd2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bd2c0: 0xe5610008  swc1        $f1, 0x8($t3)
    ctx->pc = 0x2bd2c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x2bd2c4: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x2bd2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x2bd2c8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bd2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd2cc: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bd2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd2d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bd2d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bd2d4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bd2d4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bd2d8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bd2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bd2dc: 0xe5810008  swc1        $f1, 0x8($t4)
    ctx->pc = 0x2bd2dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
    // 0x2bd2e0: 0xe5830004  swc1        $f3, 0x4($t4)
    ctx->pc = 0x2bd2e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x2bd2e4: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bd2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd2e8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bd2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd2ec: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bd2ecu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bd2f0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2bd2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bd2f4: 0xe5a30004  swc1        $f3, 0x4($t5)
    ctx->pc = 0x2bd2f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x2bd2f8: 0xe5a10008  swc1        $f1, 0x8($t5)
    ctx->pc = 0x2bd2f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x2bd2fc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bd2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd300: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bd300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd304: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bd304u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bd308: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2bd308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bd30c: 0xe5c30004  swc1        $f3, 0x4($t6)
    ctx->pc = 0x2bd30cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x2bd310: 0xe5c10008  swc1        $f1, 0x8($t6)
    ctx->pc = 0x2bd310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x2bd314: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bd314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd318: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bd318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd31c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2bd31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2bd320: 0xe5e10008  swc1        $f1, 0x8($t7)
    ctx->pc = 0x2bd320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x2bd324: 0xc0af41e  jal         func_2BD078
    ctx->pc = 0x2BD324u;
    SET_GPR_U32(ctx, 31, 0x2BD32Cu);
    ctx->pc = 0x2BD328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD324u;
    // 0x2bd328: 0xe5e30004  swc1        $f3, 0x4($t7) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD078u, 0x2BD324u, 0x2BD32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD32Cu;
label_2bd32c:
    // 0x2bd32c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2bd32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bd330: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD330u;
        // 0x2bd334: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD338u;
    // 0x2bd338: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2bd338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bd33c: 0x0  nop
    ctx->pc = 0x2bd33cu;
    // NOP
    ctx->pc = 0x2bd340u;
}
