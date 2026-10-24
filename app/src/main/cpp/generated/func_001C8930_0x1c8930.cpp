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

// Function: func_001C8930
// Address: 0x1c8930 - 0x1c8ab0
void func_001C8930_0x1c8930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C8930_0x1c8930");
#endif

    switch (ctx->pc) {
        case 0x1c8954u: goto label_1c8954;
        case 0x1c89b8u: goto label_1c89b8;
        case 0x1c89ccu: goto label_1c89cc;
        case 0x1c8a8cu: goto label_1c8a8c;
        case 0x1c8a94u: goto label_1c8a94;
        default: break;
    }

    ctx->pc = 0x1c8930u;

    // 0x1c8930: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c8930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c8934: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1c8934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1c8938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c893c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1c893cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c8940: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1c8940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1c8944: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c8944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1c8948: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c8948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c894c: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1C894Cu;
    SET_GPR_U32(ctx, 31, 0x1C8954u);
    ctx->pc = 0x1C8950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C894Cu;
    // 0x1c8950: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1C894Cu, 0x1C8954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8954u;
label_1c8954:
    // 0x1c8954: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c8954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c8958: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c8958u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c895c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C895Cu;
    {
        const bool branch_taken_0x1c895c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C895Cu;
        // 0x1c8960: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c895c) {
            ctx->pc = 0x1C8970u;
            goto label_1c8970;
        }
    }
    ctx->pc = 0x1C8964u;
    // 0x1c8964: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1c8964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1c8968: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8968u;
    {
        const bool branch_taken_0x1c8968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8968u;
        // 0x1c896c: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8968) {
            ctx->pc = 0x1C8974u;
            goto label_1c8974;
        }
    }
    ctx->pc = 0x1C8970u;
label_1c8970:
    // 0x1c8970: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c8970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8974:
    // 0x1c8974: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1c8974u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1c8978: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8978u;
    {
        const bool branch_taken_0x1c8978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8978u;
        // 0x1c897c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8978) {
            ctx->pc = 0x1C8990u;
            goto label_1c8990;
        }
    }
    ctx->pc = 0x1C8980u;
    // 0x1c8980: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C8980u;
    {
        const bool branch_taken_0x1c8980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8980) {
            ctx->pc = 0x1C89ECu;
            goto label_1c89ec;
        }
    }
    ctx->pc = 0x1C8988u;
    // 0x1c8988: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1C8988u;
    {
        const bool branch_taken_0x1c8988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8988u;
        // 0x1c898c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8988) {
            ctx->pc = 0x1C8A98u;
            goto label_1c8a98;
        }
    }
    ctx->pc = 0x1C8990u;
label_1c8990:
    // 0x1c8990: 0xc60d0610  lwc1        $f13, 0x610($s0)
    ctx->pc = 0x1c8990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c8994: 0xc6000618  lwc1        $f0, 0x618($s0)
    ctx->pc = 0x1c8994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8998: 0x460d6b42  mul.s       $f13, $f13, $f13
    ctx->pc = 0x1c8998u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1c899c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1c899cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1c89a0: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x1c89a0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1c89a4: 0x0  nop
    ctx->pc = 0x1c89a4u;
    // NOP
    // 0x1c89a8: 0x0  nop
    ctx->pc = 0x1c89a8u;
    // NOP
    // 0x1c89ac: 0x460d0344  c1          0xD0344
    ctx->pc = 0x1c89acu;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x1c89b0: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1C89B0u;
    SET_GPR_U32(ctx, 31, 0x1C89B8u);
    ctx->pc = 0x1C89B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89B0u;
    // 0x1c89b4: 0xc60c0614  lwc1        $f12, 0x614($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1C89B0u, 0x1C89B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C89B8u;
label_1c89b8:
    // 0x1c89b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c89b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c89bc: 0xc60c0610  lwc1        $f12, 0x610($s0)
    ctx->pc = 0x1c89bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c89c0: 0xc60d0618  lwc1        $f13, 0x618($s0)
    ctx->pc = 0x1c89c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c89c4: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1C89C4u;
    SET_GPR_U32(ctx, 31, 0x1C89CCu);
    ctx->pc = 0x1C89C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C89C4u;
    // 0x1c89c8: 0xe6000100  swc1        $f0, 0x100($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1C89C4u, 0x1C89CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C89CCu;
label_1c89cc:
    // 0x1c89cc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1c89ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1c89d0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1c89d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1c89d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c89d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c89d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c89dc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1c89dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x1c89e0: 0xe6010620  swc1        $f1, 0x620($s0)
    ctx->pc = 0x1c89e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
    // 0x1c89e4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1c89e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c89e8: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1c89e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
label_1c89ec:
    // 0x1c89ec: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C89ECu;
    {
        const bool branch_taken_0x1c89ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C89ECu;
        // 0x1c89f0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c89ec) {
            ctx->pc = 0x1C8A10u;
            goto label_1c8a10;
        }
    }
    ctx->pc = 0x1C89F4u;
    // 0x1c89f4: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x1c89f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
    // 0x1c89f8: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x1c89f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x1c89fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c89fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8a00: 0xc6210100  lwc1        $f1, 0x100($s1)
    ctx->pc = 0x1c8a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8a04: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c8a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c8a08: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c8a08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c8a0c: 0xe6210100  swc1        $f1, 0x100($s1)
    ctx->pc = 0x1c8a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
label_1c8a10:
    // 0x1c8a10: 0x26020610  addiu       $v0, $s0, 0x610
    ctx->pc = 0x1c8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1c8a14: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c8a14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8a18: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c8a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c8a1c: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c8a1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8a20: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1c8a20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1c8a24: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c8a24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1c8a28: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c8a28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c8a2c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1c8a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c8a30: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c8a30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8a34: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c8a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c8a38: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1c8a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c8a3c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c8a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c8a40: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c8a40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8a44: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1c8a44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8a48: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c8a48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c8a4c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c8a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c8a50: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x1c8a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x1c8a54: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1c8a54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1c8a58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8a5c: 0xc6000620  lwc1        $f0, 0x620($s0)
    ctx->pc = 0x1c8a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8a60: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1c8a60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1c8a64: 0xc6020614  lwc1        $f2, 0x614($s0)
    ctx->pc = 0x1c8a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8a68: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c8a68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c8a6c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1c8a6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c8a70: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1c8a70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1c8a74: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1c8a74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8a78: 0xe6000620  swc1        $f0, 0x620($s0)
    ctx->pc = 0x1c8a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
    // 0x1c8a7c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8A7Cu;
    {
        const bool branch_taken_0x1c8a7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8A7Cu;
        // 0x1c8a80: 0xe6020614  swc1        $f2, 0x614($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8a7c) {
            ctx->pc = 0x1C8A94u;
            goto label_1c8a94;
        }
    }
    ctx->pc = 0x1C8A84u;
    // 0x1c8a84: 0xc072376  jal         func_1C8DD8
    ctx->pc = 0x1C8A84u;
    SET_GPR_U32(ctx, 31, 0x1C8A8Cu);
    ctx->pc = 0x1C8A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A84u;
    // 0x1c8a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DD8u, 0x1C8A84u, 0x1C8A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A8Cu;
label_1c8a8c:
    // 0x1c8a8c: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x1C8A8Cu;
    SET_GPR_U32(ctx, 31, 0x1C8A94u);
    ctx->pc = 0x1C8A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8A8Cu;
    // 0x1c8a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x1C8A8Cu, 0x1C8A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A94u;
label_1c8a94:
    // 0x1c8a94: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1c8a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c8a98:
    // 0x1c8a98: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c8a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c8a9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c8a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8aa0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1c8aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c8aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8AA4u;
        // 0x1c8aa8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8AACu;
    // 0x1c8aac: 0x0  nop
    ctx->pc = 0x1c8aacu;
    // NOP
    ctx->pc = 0x1c8ab0u;
}
