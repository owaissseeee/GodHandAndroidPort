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

// Function: func_00156D70
// Address: 0x156d70 - 0x157178
void func_00156D70_0x156d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00156D70_0x156d70");
#endif

    switch (ctx->pc) {
        case 0x156e44u: goto label_156e44;
        case 0x156e6cu: goto label_156e6c;
        case 0x156e78u: goto label_156e78;
        case 0x156e9cu: goto label_156e9c;
        case 0x156ea8u: goto label_156ea8;
        case 0x156ed0u: goto label_156ed0;
        case 0x156ef0u: goto label_156ef0;
        case 0x156f14u: goto label_156f14;
        case 0x156f20u: goto label_156f20;
        case 0x156f44u: goto label_156f44;
        case 0x156f50u: goto label_156f50;
        case 0x156f78u: goto label_156f78;
        case 0x156fa4u: goto label_156fa4;
        case 0x156fbcu: goto label_156fbc;
        case 0x156fd4u: goto label_156fd4;
        case 0x156fecu: goto label_156fec;
        case 0x157004u: goto label_157004;
        case 0x15701cu: goto label_15701c;
        case 0x157028u: goto label_157028;
        case 0x157038u: goto label_157038;
        case 0x15704cu: goto label_15704c;
        case 0x157058u: goto label_157058;
        default: break;
    }

    ctx->pc = 0x156d70u;

    // 0x156d70: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x156d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x156d74: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x156d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x156d78: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x156d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x156d7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x156d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d80: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x156d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x156d84: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x156d84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d88: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x156d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x156d8c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x156d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x156d90: 0xe7b701d8  swc1        $f23, 0x1D8($sp)
    ctx->pc = 0x156d90u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x156d94: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x156d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x156d98: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x156d98u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x156d9c: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x156d9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x156da0: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x156da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x156da4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x156da4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156da8: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x156da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x156dac: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x156dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x156db0: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x156db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x156db4: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x156db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
    // 0x156db8: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x156db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x156dbc: 0xe7b601d0  swc1        $f22, 0x1D0($sp)
    ctx->pc = 0x156dbcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x156dc0: 0xe7b501c8  swc1        $f21, 0x1C8($sp)
    ctx->pc = 0x156dc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x156dc4: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x156dc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x156dc8: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x156dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x156dcc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x156dccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156dd0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x156dd0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156dd4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x156dd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x156dd8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x156dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156ddc: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x156ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x156de0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x156de0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x156de4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x156de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156de8: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x156de8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x156dec: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x156decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156df0: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x156df0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156df4: 0x4408b800  mfc1        $t0, $f23
    ctx->pc = 0x156df4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x156df8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x156df8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x156dfc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x156dfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x156e00: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x156e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156e04: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x156e04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x156e08: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x156e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156e0c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x156e0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x156e10: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x156e10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156e14: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x156e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156e18: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x156e18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156e1c: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x156e1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x156e20: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x156e20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x156e24: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x156e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156e28: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x156e28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x156e2c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x156e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156e30: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x156e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x156e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e38: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x156e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x156e3c: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x156E3Cu;
    SET_GPR_U32(ctx, 31, 0x156E44u);
    ctx->pc = 0x156E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156E3Cu;
    // 0x156e40: 0x26160010  addiu       $s6, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x156E3Cu, 0x156E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E44u;
label_156e44:
    // 0x156e44: 0x26170020  addiu       $s7, $s0, 0x20
    ctx->pc = 0x156e44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x156e48: 0x0  nop
    ctx->pc = 0x156e48u;
    // NOP
    // 0x156e4c: 0x0  nop
    ctx->pc = 0x156e4cu;
    // NOP
    // 0x156e50: 0x46000544  c1          0x544
    ctx->pc = 0x156e50u;
    ctx->f[21] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x156e54: 0x4615a832  c.eq.s      $f21, $f21
    ctx->pc = 0x156e54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156e58: 0x0  nop
    ctx->pc = 0x156e58u;
    // NOP
    // 0x156e5c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x156E5Cu;
    {
        const bool branch_taken_0x156e5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x156E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156E5Cu;
        // 0x156e60: 0x267e0010  addiu       $fp, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156e5c) {
            ctx->pc = 0x156E70u;
            goto label_156e70;
        }
    }
    ctx->pc = 0x156E64u;
    // 0x156e64: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x156E64u;
    SET_GPR_U32(ctx, 31, 0x156E6Cu);
    ctx->pc = 0x156E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156E64u;
    // 0x156e68: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x156E64u, 0x156E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E6Cu;
label_156e6c:
    // 0x156e6c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x156e6cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_156e70:
    // 0x156e70: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x156E70u;
    SET_GPR_U32(ctx, 31, 0x156E78u);
    ctx->pc = 0x156E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156E70u;
    // 0x156e74: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x156E70u, 0x156E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E78u;
label_156e78:
    // 0x156e78: 0x0  nop
    ctx->pc = 0x156e78u;
    // NOP
    // 0x156e7c: 0x0  nop
    ctx->pc = 0x156e7cu;
    // NOP
    // 0x156e80: 0x46000504  c1          0x504
    ctx->pc = 0x156e80u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x156e84: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x156e84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156e88: 0x0  nop
    ctx->pc = 0x156e88u;
    // NOP
    // 0x156e8c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x156E8Cu;
    {
        const bool branch_taken_0x156e8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x156e8c) {
            ctx->pc = 0x156EA0u;
            goto label_156ea0;
        }
    }
    ctx->pc = 0x156E94u;
    // 0x156e94: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x156E94u;
    SET_GPR_U32(ctx, 31, 0x156E9Cu);
    ctx->pc = 0x156E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156E94u;
    // 0x156e98: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x156E94u, 0x156E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E9Cu;
label_156e9c:
    // 0x156e9c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x156e9cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_156ea0:
    // 0x156ea0: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x156EA0u;
    SET_GPR_U32(ctx, 31, 0x156EA8u);
    ctx->pc = 0x156EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156EA0u;
    // 0x156ea4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x156EA0u, 0x156EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156EA8u;
label_156ea8:
    // 0x156ea8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x156ea8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x156eac: 0x0  nop
    ctx->pc = 0x156eacu;
    // NOP
    // 0x156eb0: 0x0  nop
    ctx->pc = 0x156eb0u;
    // NOP
    // 0x156eb4: 0x460c0004  c1          0xC0004
    ctx->pc = 0x156eb4u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x156eb8: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x156eb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156ebc: 0x0  nop
    ctx->pc = 0x156ebcu;
    // NOP
    // 0x156ec0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x156EC0u;
    {
        const bool branch_taken_0x156ec0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x156ec0) {
            ctx->pc = 0x156ED0u;
            goto label_156ed0;
        }
    }
    ctx->pc = 0x156EC8u;
    // 0x156ec8: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x156EC8u;
    SET_GPR_U32(ctx, 31, 0x156ED0u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x156EC8u, 0x156ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156ED0u;
label_156ed0:
    // 0x156ed0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x156ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x156ed4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x156ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x156ed8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x156ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156edc: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x156edcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x156ee0: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x156ee0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x156ee4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x156ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x156ee8: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x156EE8u;
    SET_GPR_U32(ctx, 31, 0x156EF0u);
    ctx->pc = 0x156EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156EE8u;
    // 0x156eec: 0xe696000c  swc1        $f22, 0xC($s4) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x156EE8u, 0x156EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156EF0u;
label_156ef0:
    // 0x156ef0: 0x0  nop
    ctx->pc = 0x156ef0u;
    // NOP
    // 0x156ef4: 0x0  nop
    ctx->pc = 0x156ef4u;
    // NOP
    // 0x156ef8: 0x46000544  c1          0x544
    ctx->pc = 0x156ef8u;
    ctx->f[21] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x156efc: 0x4615a832  c.eq.s      $f21, $f21
    ctx->pc = 0x156efcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156f00: 0x0  nop
    ctx->pc = 0x156f00u;
    // NOP
    // 0x156f04: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x156F04u;
    {
        const bool branch_taken_0x156f04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x156f04) {
            ctx->pc = 0x156F18u;
            goto label_156f18;
        }
    }
    ctx->pc = 0x156F0Cu;
    // 0x156f0c: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x156F0Cu;
    SET_GPR_U32(ctx, 31, 0x156F14u);
    ctx->pc = 0x156F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F0Cu;
    // 0x156f10: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x156F0Cu, 0x156F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F14u;
label_156f14:
    // 0x156f14: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x156f14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_156f18:
    // 0x156f18: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x156F18u;
    SET_GPR_U32(ctx, 31, 0x156F20u);
    ctx->pc = 0x156F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F18u;
    // 0x156f1c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x156F18u, 0x156F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F20u;
label_156f20:
    // 0x156f20: 0x0  nop
    ctx->pc = 0x156f20u;
    // NOP
    // 0x156f24: 0x0  nop
    ctx->pc = 0x156f24u;
    // NOP
    // 0x156f28: 0x46000504  c1          0x504
    ctx->pc = 0x156f28u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x156f2c: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x156f2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156f30: 0x0  nop
    ctx->pc = 0x156f30u;
    // NOP
    // 0x156f34: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x156F34u;
    {
        const bool branch_taken_0x156f34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x156f34) {
            ctx->pc = 0x156F48u;
            goto label_156f48;
        }
    }
    ctx->pc = 0x156F3Cu;
    // 0x156f3c: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x156F3Cu;
    SET_GPR_U32(ctx, 31, 0x156F44u);
    ctx->pc = 0x156F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F3Cu;
    // 0x156f40: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x156F3Cu, 0x156F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F44u;
label_156f44:
    // 0x156f44: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x156f44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_156f48:
    // 0x156f48: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x156F48u;
    SET_GPR_U32(ctx, 31, 0x156F50u);
    ctx->pc = 0x156F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F48u;
    // 0x156f4c: 0x8fa40110  lw          $a0, 0x110($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x156F48u, 0x156F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F50u;
label_156f50:
    // 0x156f50: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x156f50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x156f54: 0x0  nop
    ctx->pc = 0x156f54u;
    // NOP
    // 0x156f58: 0x0  nop
    ctx->pc = 0x156f58u;
    // NOP
    // 0x156f5c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x156f5cu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x156f60: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x156f60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156f64: 0x0  nop
    ctx->pc = 0x156f64u;
    // NOP
    // 0x156f68: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x156F68u;
    {
        const bool branch_taken_0x156f68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x156f68) {
            ctx->pc = 0x156F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156F68u;
            // 0x156f6c: 0xe7b50020  swc1        $f21, 0x20($sp) (Delay Slot)
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x156F7Cu;
            goto label_156f7c;
        }
    }
    ctx->pc = 0x156F70u;
    // 0x156f70: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x156F70u;
    SET_GPR_U32(ctx, 31, 0x156F78u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x156F70u, 0x156F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F78u;
label_156f78:
    // 0x156f78: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x156f78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_156f7c:
    // 0x156f7c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x156f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x156f80: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x156f80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x156f84: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x156f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x156f88: 0xe6b6000c  swc1        $f22, 0xC($s5)
    ctx->pc = 0x156f88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x156f8c: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x156f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x156f90: 0x0  nop
    ctx->pc = 0x156f90u;
    // NOP
    // 0x156f94: 0x0  nop
    ctx->pc = 0x156f94u;
    // NOP
    // 0x156f98: 0x460cb303  div.s       $f12, $f22, $f12
    ctx->pc = 0x156f98u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[12]);
    // 0x156f9c: 0xc0c2ae8  jal         func_30ABA0
    ctx->pc = 0x156F9Cu;
    SET_GPR_U32(ctx, 31, 0x156FA4u);
    ctx->pc = 0x156FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F9Cu;
    // 0x156fa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABA0u, 0x156F9Cu, 0x156FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FA4u;
label_156fa4:
    // 0x156fa4: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x156fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x156fa8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x156fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x156fac: 0x0  nop
    ctx->pc = 0x156facu;
    // NOP
    // 0x156fb0: 0x460cb303  div.s       $f12, $f22, $f12
    ctx->pc = 0x156fb0u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[12]);
    // 0x156fb4: 0xc0c2ae8  jal         func_30ABA0
    ctx->pc = 0x156FB4u;
    SET_GPR_U32(ctx, 31, 0x156FBCu);
    ctx->pc = 0x156FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156FB4u;
    // 0x156fb8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABA0u, 0x156FB4u, 0x156FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FBCu;
label_156fbc:
    // 0x156fbc: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x156fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x156fc0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x156fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x156fc4: 0x0  nop
    ctx->pc = 0x156fc4u;
    // NOP
    // 0x156fc8: 0x460cb303  div.s       $f12, $f22, $f12
    ctx->pc = 0x156fc8u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[12]);
    // 0x156fcc: 0xc0c2ae8  jal         func_30ABA0
    ctx->pc = 0x156FCCu;
    SET_GPR_U32(ctx, 31, 0x156FD4u);
    ctx->pc = 0x156FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156FCCu;
    // 0x156fd0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABA0u, 0x156FCCu, 0x156FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FD4u;
label_156fd4:
    // 0x156fd4: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x156fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x156fd8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x156fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x156fdc: 0x0  nop
    ctx->pc = 0x156fdcu;
    // NOP
    // 0x156fe0: 0x460cb303  div.s       $f12, $f22, $f12
    ctx->pc = 0x156fe0u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[12]);
    // 0x156fe4: 0xc0c2ae8  jal         func_30ABA0
    ctx->pc = 0x156FE4u;
    SET_GPR_U32(ctx, 31, 0x156FECu);
    ctx->pc = 0x156FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156FE4u;
    // 0x156fe8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABA0u, 0x156FE4u, 0x156FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FECu;
label_156fec:
    // 0x156fec: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x156fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x156ff0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x156ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x156ff4: 0x0  nop
    ctx->pc = 0x156ff4u;
    // NOP
    // 0x156ff8: 0x460cb303  div.s       $f12, $f22, $f12
    ctx->pc = 0x156ff8u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[12]);
    // 0x156ffc: 0xc0c2ae8  jal         func_30ABA0
    ctx->pc = 0x156FFCu;
    SET_GPR_U32(ctx, 31, 0x157004u);
    ctx->pc = 0x157000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156FFCu;
    // 0x157000: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABA0u, 0x156FFCu, 0x157004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157004u;
label_157004:
    // 0x157004: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x157004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x157008: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x157008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15700c: 0x0  nop
    ctx->pc = 0x15700cu;
    // NOP
    // 0x157010: 0x460cb303  div.s       $f12, $f22, $f12
    ctx->pc = 0x157010u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[12]);
    // 0x157014: 0xc0c2ae8  jal         func_30ABA0
    ctx->pc = 0x157014u;
    SET_GPR_U32(ctx, 31, 0x15701Cu);
    ctx->pc = 0x157018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157014u;
    // 0x157018: 0x8fa50110  lw          $a1, 0x110($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABA0u, 0x157014u, 0x15701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15701Cu;
label_15701c:
    // 0x15701c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x15701cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x157020: 0xc056864  jal         func_15A190
    ctx->pc = 0x157020u;
    SET_GPR_U32(ctx, 31, 0x157028u);
    ctx->pc = 0x157024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157020u;
    // 0x157024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A190u, 0x157020u, 0x157028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157028u;
label_157028:
    // 0x157028: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x157028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15702c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x15702cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x157030: 0xc056864  jal         func_15A190
    ctx->pc = 0x157030u;
    SET_GPR_U32(ctx, 31, 0x157038u);
    ctx->pc = 0x157034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157030u;
    // 0x157034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A190u, 0x157030u, 0x157038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157038u;
label_157038:
    // 0x157038: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x157038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15703c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15703cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157040: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157044: 0xc0569a8  jal         func_15A6A0
    ctx->pc = 0x157044u;
    SET_GPR_U32(ctx, 31, 0x15704Cu);
    ctx->pc = 0x157048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157044u;
    // 0x157048: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A6A0u, 0x157044u, 0x15704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15704Cu;
label_15704c:
    // 0x15704c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15704cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157050: 0xc051e2a  jal         func_1478A8
    ctx->pc = 0x157050u;
    SET_GPR_U32(ctx, 31, 0x157058u);
    ctx->pc = 0x157054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157050u;
    // 0x157054: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1478A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1478A8u, 0x157050u, 0x157058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157058u;
label_157058:
    // 0x157058: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x157058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x15705c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x15705cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x157060: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x157060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x157064: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x157064u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x157068: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x157068u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15706c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x15706cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157070: 0xf8640020  sqc2        $vf4, 0x20($v1)
    ctx->pc = 0x157070u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157074: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x157074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x157078: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x157078u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15707c: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x15707cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157080: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x157080u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157084: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x157084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157088: 0xdba40100  lqc2        $vf4, 0x100($sp)
    ctx->pc = 0x157088u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15708c: 0x4408b800  mfc1        $t0, $f23
    ctx->pc = 0x15708cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x157090: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x157090u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x157094: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x157094u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157098: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x157098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15709c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x15709cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1570a0: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x1570a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1570a4: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1570a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1570a8: 0xf8640020  sqc2        $vf4, 0x20($v1)
    ctx->pc = 0x1570a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1570ac: 0xdba40100  lqc2        $vf4, 0x100($sp)
    ctx->pc = 0x1570acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1570b0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1570b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1570b4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1570b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1570b8: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x1570b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1570bc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1570bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1570c0: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1570c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1570c4: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1570c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1570c8: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x1570c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1570cc: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x1570ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1570d0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1570d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1570d4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1570d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1570d8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1570d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1570dc: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1570dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1570e0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1570e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1570e4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1570e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1570e8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1570e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1570ec: 0xfa440000  sqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1570ecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1570f0: 0xda440010  lqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1570f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1570f4: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1570f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1570f8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1570f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1570fc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1570fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157100: 0xfa440010  sqc2        $vf4, 0x10($s2)
    ctx->pc = 0x157100u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157104: 0xda440020  lqc2        $vf4, 0x20($s2)
    ctx->pc = 0x157104u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x157108: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x157108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x15710c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x15710cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x157110: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x157110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x157114: 0xfa440020  sqc2        $vf4, 0x20($s2)
    ctx->pc = 0x157114u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157118: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x157118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x15711c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x15711Cu;
    {
        const bool branch_taken_0x15711c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x157120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15711Cu;
        // 0x157120: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15711c) {
            ctx->pc = 0x157138u;
            goto label_157138;
        }
    }
    ctx->pc = 0x157124u;
    // 0x157124: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x157124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157128: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x157128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x15712c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x15712cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x157130: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x157130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157134: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x157134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_157138:
    // 0x157138: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x157138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x15713c: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x15713cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x157140: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x157140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x157144: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x157144u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x157148: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x157148u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x15714c: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x15714cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x157150: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x157150u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x157154: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x157154u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x157158: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x157158u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x15715c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x15715cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x157160: 0xc7b701d8  lwc1        $f23, 0x1D8($sp)
    ctx->pc = 0x157160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x157164: 0xc7b601d0  lwc1        $f22, 0x1D0($sp)
    ctx->pc = 0x157164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x157168: 0xc7b501c8  lwc1        $f21, 0x1C8($sp)
    ctx->pc = 0x157168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15716c: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x15716cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x157170: 0x3e00008  jr          $ra
    ctx->pc = 0x157170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157170u;
        // 0x157174: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157178u;
}
