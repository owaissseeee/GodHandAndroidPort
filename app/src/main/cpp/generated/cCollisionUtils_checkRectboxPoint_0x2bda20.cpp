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

// Function: cCollisionUtils_checkRectboxPoint
// Address: 0x2bda20 - 0x2bdb78
void cCollisionUtils_checkRectboxPoint_0x2bda20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCollisionUtils_checkRectboxPoint_0x2bda20");
#endif

    switch (ctx->pc) {
        case 0x2bda60u: goto label_2bda60;
        case 0x2bdb64u: goto label_2bdb64;
        default: break;
    }

    ctx->pc = 0x2bda20u;

    // 0x2bda20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2bda20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2bda24: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2bda24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bda28: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2bda28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bda2c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2bda2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2bda30: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2bda30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bda34: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2bda34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bda38: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2bda38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bda3c: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x2bda3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bda40: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x2bda40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bda44: 0x27ac0030  addiu       $t4, $sp, 0x30
    ctx->pc = 0x2bda44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bda48: 0x27ad0040  addiu       $t5, $sp, 0x40
    ctx->pc = 0x2bda48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bda4c: 0x27ae0050  addiu       $t6, $sp, 0x50
    ctx->pc = 0x2bda4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bda50: 0x27af0060  addiu       $t7, $sp, 0x60
    ctx->pc = 0x2bda50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bda54: 0x27b80070  addiu       $t8, $sp, 0x70
    ctx->pc = 0x2bda54u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bda58: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bda58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bda5c: 0x0  nop
    ctx->pc = 0x2bda5cu;
    // NOP
label_2bda60:
    // 0x2bda60: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2bda60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bda64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bda64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bda68: 0x0  nop
    ctx->pc = 0x2bda68u;
    // NOP
    // 0x2bda6c: 0x0  nop
    ctx->pc = 0x2bda6cu;
    // NOP
    // 0x2bda70: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BDA70u;
    {
        const bool branch_taken_0x2bda70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2BDA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDA70u;
        // 0x2bda74: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bda70) {
            ctx->pc = 0x2BDA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bda60;
        }
    }
    ctx->pc = 0x2BDA78u;
    // 0x2bda78: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x2bda78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2bda7c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bda7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bda80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bda80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bda84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bda84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bda88: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bda88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bda8c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2bda8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2bda90: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2bda90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2bda94: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2bda94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bda98: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bda98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bda9c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2bda9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdaa0: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x2bdaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdaa4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2bdaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdaa8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bdaa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdaac: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2bdaacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bdab0: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2bdab0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x2bdab4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2bdab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2bdab8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bdab8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bdabc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bdabcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2bdac0: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x2bdac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bdac4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2bdac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2bdac8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2bdac8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bdacc: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x2bdaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x2bdad0: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x2bdad0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x2bdad4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bdad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdad8: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bdad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdadc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bdadcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bdae0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2bdae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bdae4: 0xe5410008  swc1        $f1, 0x8($t2)
    ctx->pc = 0x2bdae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x2bdae8: 0xe54c0004  swc1        $f12, 0x4($t2)
    ctx->pc = 0x2bdae8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x2bdaec: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bdaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdaf0: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bdaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdaf4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bdaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bdaf8: 0xe5810008  swc1        $f1, 0x8($t4)
    ctx->pc = 0x2bdaf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
    // 0x2bdafc: 0xe58c0004  swc1        $f12, 0x4($t4)
    ctx->pc = 0x2bdafcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x2bdb00: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bdb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdb04: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bdb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdb08: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bdb08u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bdb0c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bdb0cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bdb10: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bdb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bdb14: 0xe5a10008  swc1        $f1, 0x8($t5)
    ctx->pc = 0x2bdb14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x2bdb18: 0xe5a30004  swc1        $f3, 0x4($t5)
    ctx->pc = 0x2bdb18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x2bdb1c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bdb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdb20: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bdb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdb24: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bdb24u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bdb28: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2bdb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bdb2c: 0xe5c30004  swc1        $f3, 0x4($t6)
    ctx->pc = 0x2bdb2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x2bdb30: 0xe5c10008  swc1        $f1, 0x8($t6)
    ctx->pc = 0x2bdb30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x2bdb34: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bdb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdb38: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bdb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdb3c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bdb3cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bdb40: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2bdb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bdb44: 0xe5e30004  swc1        $f3, 0x4($t7)
    ctx->pc = 0x2bdb44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x2bdb48: 0xe5e10008  swc1        $f1, 0x8($t7)
    ctx->pc = 0x2bdb48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x2bdb4c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bdb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdb50: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bdb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdb54: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2bdb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2bdb58: 0xe7010008  swc1        $f1, 0x8($t8)
    ctx->pc = 0x2bdb58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 8), bits); }
    // 0x2bdb5c: 0xc0aedd8  jal         func_2BB760
    ctx->pc = 0x2BDB5Cu;
    SET_GPR_U32(ctx, 31, 0x2BDB64u);
    ctx->pc = 0x2BDB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDB5Cu;
    // 0x2bdb60: 0xe7030004  swc1        $f3, 0x4($t8) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB760u, 0x2BDB5Cu, 0x2BDB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDB64u;
label_2bdb64:
    // 0x2bdb64: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2bdb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bdb68: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB68u;
        // 0x2bdb6c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDB70u;
    // 0x2bdb70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bdb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bdb74: 0x0  nop
    ctx->pc = 0x2bdb74u;
    // NOP
    ctx->pc = 0x2bdb78u;
}
