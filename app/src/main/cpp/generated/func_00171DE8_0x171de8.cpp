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

// Function: func_00171DE8
// Address: 0x171de8 - 0x1721d0
void func_00171DE8_0x171de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00171DE8_0x171de8");
#endif

    switch (ctx->pc) {
        case 0x171e10u: goto label_171e10;
        case 0x171e90u: goto label_171e90;
        case 0x171ec4u: goto label_171ec4;
        case 0x171f80u: goto label_171f80;
        case 0x171ff4u: goto label_171ff4;
        case 0x172048u: goto label_172048;
        case 0x17205cu: goto label_17205c;
        case 0x17206cu: goto label_17206c;
        case 0x17207cu: goto label_17207c;
        case 0x17208cu: goto label_17208c;
        case 0x172094u: goto label_172094;
        case 0x1720b0u: goto label_1720b0;
        case 0x1720c8u: goto label_1720c8;
        default: break;
    }

    ctx->pc = 0x171de8u;

    // 0x171de8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x171de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x171dec: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x171decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x171df0: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x171df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x171df4: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x171df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x171df8: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x171df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x171dfc: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x171dfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x171e00: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x171e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x171e04: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x171e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x171e08: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x171E08u;
    SET_GPR_U32(ctx, 31, 0x171E10u);
    ctx->pc = 0x171E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171E08u;
    // 0x171e0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x171E08u, 0x171E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E10u;
label_171e10:
    // 0x171e10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x171e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x171e14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x171e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x171e18: 0x3c014006  lui         $at, 0x4006
    ctx->pc = 0x171e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16390 << 16));
    // 0x171e1c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x171e1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x171e20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x171e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171e24: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x171e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x171e28: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x171e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x171e2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x171e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171e30: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x171e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x171e34: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x171e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x171e38: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x171e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x171e3c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x171e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x171e40: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x171e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x171e44: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x171e44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x171e48: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x171e48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171e4c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x171e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x171e50: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x171e50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171e54: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x171e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x171e58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x171e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171e5c: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x171e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x171e60: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x171e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x171e64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x171e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171e68: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x171e68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x171e6c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x171e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x171e70: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x171e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x171e74: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x171e74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x171e78: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x171e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x171e7c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x171e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x171e80: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x171e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x171e84: 0xae000604  sw          $zero, 0x604($s0)
    ctx->pc = 0x171e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 0));
    // 0x171e88: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x171E88u;
    SET_GPR_U32(ctx, 31, 0x171E90u);
    ctx->pc = 0x171E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171E88u;
    // 0x171e8c: 0xe4f4000c  swc1        $f20, 0xC($a3) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x171E88u, 0x171E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E90u;
label_171e90:
    // 0x171e90: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x171e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x171e94: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x171E94u;
    {
        const bool branch_taken_0x171e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E94u;
        // 0x171e98: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e94) {
            ctx->pc = 0x171ED4u;
            goto label_171ed4;
        }
    }
    ctx->pc = 0x171E9Cu;
    // 0x171e9c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x171e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x171ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x171ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ea4: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x171ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x171ea8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x171ea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171eac: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x171eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x171eb0: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x171eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x171eb4: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x171eb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x171eb8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x171eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ebc: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x171EBCu;
    SET_GPR_U32(ctx, 31, 0x171EC4u);
    ctx->pc = 0x171EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171EBCu;
    // 0x171ec0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x171EBCu, 0x171EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171EC4u;
label_171ec4:
    // 0x171ec4: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x171ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x171ec8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x171ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171ecc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x171eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x171ed0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x171ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_171ed4:
    // 0x171ed4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x171ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171ed8: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x171ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x171edc: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x171edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x171ee0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x171ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171ee4: 0xa6020d98  sh          $v0, 0xD98($s0)
    ctx->pc = 0x171ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3480), (uint16_t)GPR_U32(ctx, 2));
    // 0x171ee8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x171ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x171eec: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x171eecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x171ef0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x171ef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x171ef4: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x171ef4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x171ef8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x171ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x171efc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x171efcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x171f00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x171f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171f04: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x171f04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171f08: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x171f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x171f0c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x171f0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x171f10: 0x4bc52100  vaddx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x171f10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x171f14: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x171f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x171f18: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x171f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171f1c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x171f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x171f20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x171f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x171f24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x171f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171f28: 0x24450e30  addiu       $a1, $v0, 0xE30
    ctx->pc = 0x171f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3632));
    // 0x171f2c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x171f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x171f30: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x171f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x171f34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x171f34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x171f38: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x171f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x171f3c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x171f3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x171f40: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x171f40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171f44: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x171f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x171f48: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x171f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x171f4c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x171f4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x171f50: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x171f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x171f54: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x171f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x171f58: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x171F58u;
    {
        const bool branch_taken_0x171f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F58u;
        // 0x171f5c: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f58) {
            ctx->pc = 0x171FD4u;
            goto label_171fd4;
        }
    }
    ctx->pc = 0x171F60u;
    // 0x171f60: 0x24a90060  addiu       $t1, $a1, 0x60
    ctx->pc = 0x171f60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x171f64: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x171f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x171f68: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x171f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x171f6c: 0x27ab0070  addiu       $t3, $sp, 0x70
    ctx->pc = 0x171f6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x171f70: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x171f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x171f74: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x171f74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x171f78: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x171f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x171f7c: 0x27ac00b0  addiu       $t4, $sp, 0xB0
    ctx->pc = 0x171f7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_171f80:
    // 0x171f80: 0x68ad0007  ldl         $t5, 0x7($a1)
    ctx->pc = 0x171f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x171f84: 0x6cad0000  ldr         $t5, 0x0($a1)
    ctx->pc = 0x171f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x171f88: 0x68ae000f  ldl         $t6, 0xF($a1)
    ctx->pc = 0x171f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x171f8c: 0x6cae0008  ldr         $t6, 0x8($a1)
    ctx->pc = 0x171f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x171f90: 0x68af0017  ldl         $t7, 0x17($a1)
    ctx->pc = 0x171f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x171f94: 0x6caf0010  ldr         $t7, 0x10($a1)
    ctx->pc = 0x171f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x171f98: 0x68b4001f  ldl         $s4, 0x1F($a1)
    ctx->pc = 0x171f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x171f9c: 0x6cb40018  ldr         $s4, 0x18($a1)
    ctx->pc = 0x171f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x171fa0: 0xb06d0007  sdl         $t5, 0x7($v1)
    ctx->pc = 0x171fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x171fa4: 0xb46d0000  sdr         $t5, 0x0($v1)
    ctx->pc = 0x171fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x171fa8: 0xb06e000f  sdl         $t6, 0xF($v1)
    ctx->pc = 0x171fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x171fac: 0xb46e0008  sdr         $t6, 0x8($v1)
    ctx->pc = 0x171facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x171fb0: 0xb06f0017  sdl         $t7, 0x17($v1)
    ctx->pc = 0x171fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x171fb4: 0xb46f0010  sdr         $t7, 0x10($v1)
    ctx->pc = 0x171fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x171fb8: 0xb074001f  sdl         $s4, 0x1F($v1)
    ctx->pc = 0x171fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x171fbc: 0xb4740018  sdr         $s4, 0x18($v1)
    ctx->pc = 0x171fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x171fc0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x171fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x171fc4: 0x14a9ffee  bne         $a1, $t1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x171FC4u;
    {
        const bool branch_taken_0x171fc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        ctx->pc = 0x171FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171FC4u;
        // 0x171fc8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171fc4) {
            ctx->pc = 0x171F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171f80;
        }
    }
    ctx->pc = 0x171FCCu;
    // 0x171fcc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x171FCCu;
    {
        const bool branch_taken_0x171fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171FCCu;
        // 0x171fd0: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171fcc) {
            ctx->pc = 0x172024u;
            goto label_172024;
        }
    }
    ctx->pc = 0x171FD4u;
label_171fd4:
    // 0x171fd4: 0x24a90060  addiu       $t1, $a1, 0x60
    ctx->pc = 0x171fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x171fd8: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x171fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x171fdc: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x171fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x171fe0: 0x27ab0070  addiu       $t3, $sp, 0x70
    ctx->pc = 0x171fe0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x171fe4: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x171fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x171fe8: 0x27a80090  addiu       $t0, $sp, 0x90
    ctx->pc = 0x171fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x171fec: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x171fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x171ff0: 0x27ac00b0  addiu       $t4, $sp, 0xB0
    ctx->pc = 0x171ff0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_171ff4:
    // 0x171ff4: 0xdcad0000  ld          $t5, 0x0($a1)
    ctx->pc = 0x171ff4u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x171ff8: 0xdcae0008  ld          $t6, 0x8($a1)
    ctx->pc = 0x171ff8u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x171ffc: 0xdcaf0010  ld          $t7, 0x10($a1)
    ctx->pc = 0x171ffcu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x172000: 0xdcb40018  ld          $s4, 0x18($a1)
    ctx->pc = 0x172000u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x172004: 0xfc6d0000  sd          $t5, 0x0($v1)
    ctx->pc = 0x172004u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 13));
    // 0x172008: 0xfc6e0008  sd          $t6, 0x8($v1)
    ctx->pc = 0x172008u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 14));
    // 0x17200c: 0xfc6f0010  sd          $t7, 0x10($v1)
    ctx->pc = 0x17200cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 15));
    // 0x172010: 0xfc740018  sd          $s4, 0x18($v1)
    ctx->pc = 0x172010u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 20));
    // 0x172014: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x172014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x172018: 0x14a9fff6  bne         $a1, $t1, . + 4 + (-0xA << 2)
    ctx->pc = 0x172018u;
    {
        const bool branch_taken_0x172018 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        ctx->pc = 0x17201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172018u;
        // 0x17201c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172018) {
            ctx->pc = 0x171FF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171ff4;
        }
    }
    ctx->pc = 0x172020u;
    // 0x172020: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x172020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_172024:
    // 0x172024: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x172024u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172028: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x172028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x17202c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x17202cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172030: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x172030u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172034: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x172034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x172038: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x172038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
    // 0x17203c: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x17203cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x172040: 0xc04bab6  jal         func_12EAD8
    ctx->pc = 0x172040u;
    SET_GPR_U32(ctx, 31, 0x172048u);
    ctx->pc = 0x172044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172040u;
    // 0x172044: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EAD8u, 0x172040u, 0x172048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172048u;
label_172048:
    // 0x172048: 0xae020da8  sw          $v0, 0xDA8($s0)
    ctx->pc = 0x172048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
    // 0x17204c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17204cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172054: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x172054u;
    SET_GPR_U32(ctx, 31, 0x17205Cu);
    ctx->pc = 0x172058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172054u;
    // 0x172058: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x172054u, 0x17205Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17205Cu;
label_17205c:
    // 0x17205c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17205cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172060: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x172060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172064: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x172064u;
    SET_GPR_U32(ctx, 31, 0x17206Cu);
    ctx->pc = 0x172068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172064u;
    // 0x172068: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x172064u, 0x17206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17206Cu;
label_17206c:
    // 0x17206c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17206cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172070: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x172070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x172074: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x172074u;
    SET_GPR_U32(ctx, 31, 0x17207Cu);
    ctx->pc = 0x172078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172074u;
    // 0x172078: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x172074u, 0x17207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17207Cu;
label_17207c:
    // 0x17207c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17207cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172080: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x172080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x172084: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x172084u;
    SET_GPR_U32(ctx, 31, 0x17208Cu);
    ctx->pc = 0x172088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172084u;
    // 0x172088: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x172084u, 0x17208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17208Cu;
label_17208c:
    // 0x17208c: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x17208Cu;
    SET_GPR_U32(ctx, 31, 0x172094u);
    ctx->pc = 0x172090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17208Cu;
    // 0x172090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x17208Cu, 0x172094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172094u;
label_172094:
    // 0x172094: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x172094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x172098: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x172098u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17209c: 0x24490fa8  addiu       $t1, $v0, 0xFA8
    ctx->pc = 0x17209cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4008));
    // 0x1720a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1720a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1720a4: 0x252b0001  addiu       $t3, $t1, 0x1
    ctx->pc = 0x1720a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1720a8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1720a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1720ac: 0x0  nop
    ctx->pc = 0x1720acu;
    // NOP
label_1720b0:
    // 0x1720b0: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x1720b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1720b4: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1720b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1720b8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1720b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1720bc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1720BCu;
    {
        const bool branch_taken_0x1720bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1720C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720BCu;
        // 0x1720c0: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1720bc) {
            ctx->pc = 0x172154u;
            goto label_172154;
        }
    }
    ctx->pc = 0x1720C4u;
    // 0x1720c4: 0x0  nop
    ctx->pc = 0x1720c4u;
    // NOP
label_1720c8:
    // 0x1720c8: 0xca102a  slt         $v0, $a2, $t2
    ctx->pc = 0x1720c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1720cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1720CCu;
    {
        const bool branch_taken_0x1720cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1720D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720CCu;
        // 0x1720d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1720cc) {
            ctx->pc = 0x1720DCu;
            goto label_1720dc;
        }
    }
    ctx->pc = 0x1720D4u;
    // 0x1720d4: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1720d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1720d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1720d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1720dc:
    // 0x1720dc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1720dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1720e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1720E0u;
    {
        const bool branch_taken_0x1720e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1720E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720E0u;
        // 0x1720e4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1720e0) {
            ctx->pc = 0x1720F8u;
            goto label_1720f8;
        }
    }
    ctx->pc = 0x1720E8u;
    // 0x1720e8: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x1720e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1720ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1720ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1720f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1720F0u;
    {
        const bool branch_taken_0x1720f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1720F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720F0u;
        // 0x1720f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1720f0) {
            ctx->pc = 0x1720FCu;
            goto label_1720fc;
        }
    }
    ctx->pc = 0x1720F8u;
label_1720f8:
    // 0x1720f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1720f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1720fc:
    // 0x1720fc: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1720fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x172100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172104: 0xca182a  slt         $v1, $a2, $t2
    ctx->pc = 0x172104u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x172108: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x172108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x17210c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x17210cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x172110: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x172110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x172114: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x172114u;
    {
        const bool branch_taken_0x172114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172114u;
        // 0x172118: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172114) {
            ctx->pc = 0x172124u;
            goto label_172124;
        }
    }
    ctx->pc = 0x17211Cu;
    // 0x17211c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x17211cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x172120: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172124:
    // 0x172124: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x172124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x172128: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172128u;
    {
        const bool branch_taken_0x172128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172128u;
        // 0x17212c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172128) {
            ctx->pc = 0x172140u;
            goto label_172140;
        }
    }
    ctx->pc = 0x172130u;
    // 0x172130: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x172130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x172134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172138: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x172138u;
    {
        const bool branch_taken_0x172138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172138u;
        // 0x17213c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172138) {
            ctx->pc = 0x172144u;
            goto label_172144;
        }
    }
    ctx->pc = 0x172140u;
label_172140:
    // 0x172140: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x172140u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172144:
    // 0x172144: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x172144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x172148: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x172148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17214c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x17214cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x172150: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x172150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
label_172154:
    // 0x172154: 0xe92021  addu        $a0, $a3, $t1
    ctx->pc = 0x172154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x172158: 0xeb2821  addu        $a1, $a3, $t3
    ctx->pc = 0x172158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x17215c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x17215cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x172160: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x172160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x172164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172168: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x172168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17216c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17216Cu;
    {
        const bool branch_taken_0x17216c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17216c) {
            ctx->pc = 0x172170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17216Cu;
            // 0x172170: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172188u;
            goto label_172188;
        }
    }
    ctx->pc = 0x172174u;
    // 0x172174: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x172174u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x172178: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x172178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17217c: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x17217Cu;
    {
        const bool branch_taken_0x17217c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17217c) {
            ctx->pc = 0x172180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17217Cu;
            // 0x172180: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1720C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1720c8;
        }
    }
    ctx->pc = 0x172184u;
    // 0x172184: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x172184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_172188:
    // 0x172188: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x172188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17218c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x17218Cu;
    {
        const bool branch_taken_0x17218c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17218Cu;
        // 0x172190: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17218c) {
            ctx->pc = 0x1720B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1720b0;
        }
    }
    ctx->pc = 0x172194u;
    // 0x172194: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x172194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x172198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17219c: 0xa2000d9b  sb          $zero, 0xD9B($s0)
    ctx->pc = 0x17219cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3483), (uint8_t)GPR_U32(ctx, 0));
    // 0x1721a0: 0x34630580  ori         $v1, $v1, 0x580
    ctx->pc = 0x1721a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1408);
    // 0x1721a4: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1721a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1721a8: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x1721a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x1721ac: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1721acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1721b0: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1721b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1721b4: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1721b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1721b8: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1721b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1721bc: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1721bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1721c0: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1721c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1721c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1721C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1721C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721C4u;
        // 0x1721c8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1721C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1721CCu;
    // 0x1721cc: 0x0  nop
    ctx->pc = 0x1721ccu;
    // NOP
    ctx->pc = 0x1721d0u;
}
