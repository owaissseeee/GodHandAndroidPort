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

// Function: func_001CE6C8
// Address: 0x1ce6c8 - 0x1ce870
void func_001CE6C8_0x1ce6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CE6C8_0x1ce6c8");
#endif

    switch (ctx->pc) {
        case 0x1ce6e8u: goto label_1ce6e8;
        case 0x1ce748u: goto label_1ce748;
        case 0x1ce75cu: goto label_1ce75c;
        case 0x1ce784u: goto label_1ce784;
        default: break;
    }

    ctx->pc = 0x1ce6c8u;

    // 0x1ce6c8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ce6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1ce6cc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1ce6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1ce6d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ce6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6d4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1ce6d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1ce6d8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1ce6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1ce6dc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ce6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ce6e0: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CE6E0u;
    SET_GPR_U32(ctx, 31, 0x1CE6E8u);
    ctx->pc = 0x1CE6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6E0u;
    // 0x1ce6e4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CE6E0u, 0x1CE6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE6E8u;
label_1ce6e8:
    // 0x1ce6e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1ce6e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1ce6ec: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1ce6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ce6f0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1ce6f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1ce6f4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE6F4u;
    {
        const bool branch_taken_0x1ce6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6F4u;
        // 0x1ce6f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce6f4) {
            ctx->pc = 0x1CE70Cu;
            goto label_1ce70c;
        }
    }
    ctx->pc = 0x1CE6FCu;
    // 0x1ce6fc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE6FCu;
    {
        const bool branch_taken_0x1ce6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce6fc) {
            ctx->pc = 0x1CE724u;
            goto label_1ce724;
        }
    }
    ctx->pc = 0x1CE704u;
    // 0x1ce704: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1CE704u;
    {
        const bool branch_taken_0x1ce704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE704u;
        // 0x1ce708: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce704) {
            ctx->pc = 0x1CE860u;
            goto label_1ce860;
        }
    }
    ctx->pc = 0x1CE70Cu;
label_1ce70c:
    // 0x1ce70c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1ce70cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1ce710: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1ce710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1ce714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce718: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ce718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ce71c: 0xe6000660  swc1        $f0, 0x660($s0)
    ctx->pc = 0x1ce71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1632), bits); }
    // 0x1ce720: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1ce720u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1ce724:
    // 0x1ce724: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x1ce724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x1ce728: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1ce728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1ce72c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce730: 0xc6010100  lwc1        $f1, 0x100($s0)
    ctx->pc = 0x1ce730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce734: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1ce734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ce738: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ce738u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ce73c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1ce73cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1ce740: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1CE740u;
    SET_GPR_U32(ctx, 31, 0x1CE748u);
    ctx->pc = 0x1CE744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE740u;
    // 0x1ce744: 0xe6010100  swc1        $f1, 0x100($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1CE740u, 0x1CE748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE748u;
label_1ce748:
    // 0x1ce748: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1ce748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1ce74c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ce74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce750: 0x26050100  addiu       $a1, $s0, 0x100
    ctx->pc = 0x1ce750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1ce754: 0xc051dca  jal         func_147728
    ctx->pc = 0x1CE754u;
    SET_GPR_U32(ctx, 31, 0x1CE75Cu);
    ctx->pc = 0x1CE758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE754u;
    // 0x1ce758: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1CE754u, 0x1CE75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE75Cu;
label_1ce75c:
    // 0x1ce75c: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x1ce75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x1ce760: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ce760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ce764: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce768: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ce768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ce76c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ce76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce770: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1ce770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1ce774: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1ce774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1ce778: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ce778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce77c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1CE77Cu;
    SET_GPR_U32(ctx, 31, 0x1CE784u);
    ctx->pc = 0x1CE780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE77Cu;
    // 0x1ce780: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1CE77Cu, 0x1CE784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE784u;
label_1ce784:
    // 0x1ce784: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1ce784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ce788: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1ce788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ce78c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ce78cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce790: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1ce790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce794: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1ce794u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ce798: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1ce798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1ce79c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1ce79cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1ce7a0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1ce7a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ce7a4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1ce7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce7a8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1ce7a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ce7ac: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1ce7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce7b0: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1ce7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1ce7b4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ce7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce7b8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ce7b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ce7bc: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1ce7bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ce7c0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1ce7c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ce7c4: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ce7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce7c8: 0x26020640  addiu       $v0, $s0, 0x640
    ctx->pc = 0x1ce7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    // 0x1ce7cc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ce7ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce7d0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1ce7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce7d4: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1ce7d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ce7d8: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1ce7d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1ce7dc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1ce7dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1ce7e0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1ce7e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ce7e4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1ce7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce7e8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1ce7e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ce7ec: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1ce7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce7f0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1ce7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1ce7f4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ce7f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce7f8: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1ce7f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ce7fc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1ce7fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ce800: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ce800u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce804: 0xc6000660  lwc1        $f0, 0x660($s0)
    ctx->pc = 0x1ce804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce808: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1ce808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ce80c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1ce80cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1ce810: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1ce810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce814: 0x0  nop
    ctx->pc = 0x1ce814u;
    // NOP
    // 0x1ce818: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1CE818u;
    {
        const bool branch_taken_0x1ce818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE818u;
        // 0x1ce81c: 0xe6000660  swc1        $f0, 0x660($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1632), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce818) {
            ctx->pc = 0x1CE85Cu;
            goto label_1ce85c;
        }
    }
    ctx->pc = 0x1CE820u;
    // 0x1ce820: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1ce820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1ce824: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ce824u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ce828: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce82c: 0xc601024c  lwc1        $f1, 0x24C($s0)
    ctx->pc = 0x1ce82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce830: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1ce830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ce834: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ce834u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ce838: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1ce838u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce83c: 0x0  nop
    ctx->pc = 0x1ce83cu;
    // NOP
    // 0x1ce840: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE840u;
    {
        const bool branch_taken_0x1ce840 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE840u;
        // 0x1ce844: 0xe601024c  swc1        $f1, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce840) {
            ctx->pc = 0x1CE85Cu;
            goto label_1ce85c;
        }
    }
    ctx->pc = 0x1CE848u;
    // 0x1ce848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce84c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1ce84cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce850: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1ce850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ce854: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1ce854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce858: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1ce858u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1ce85c:
    // 0x1ce85c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1ce85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ce860:
    // 0x1ce860: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ce860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ce864: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1ce864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce868: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE868u;
        // 0x1ce86c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE870u;
}
