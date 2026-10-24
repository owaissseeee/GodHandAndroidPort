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

// Function: func_0022E6A0
// Address: 0x22e6a0 - 0x22e9e8
void func_0022E6A0_0x22e6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022E6A0_0x22e6a0");
#endif

    switch (ctx->pc) {
        case 0x22e6c8u: goto label_22e6c8;
        case 0x22e72cu: goto label_22e72c;
        case 0x22e7dcu: goto label_22e7dc;
        case 0x22e844u: goto label_22e844;
        case 0x22e898u: goto label_22e898;
        case 0x22e8a4u: goto label_22e8a4;
        case 0x22e92cu: goto label_22e92c;
        case 0x22e934u: goto label_22e934;
        case 0x22e968u: goto label_22e968;
        case 0x22e98cu: goto label_22e98c;
        case 0x22e994u: goto label_22e994;
        case 0x22e9c4u: goto label_22e9c4;
        case 0x22e9d0u: goto label_22e9d0;
        default: break;
    }

    ctx->pc = 0x22e6a0u;

    // 0x22e6a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x22e6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x22e6a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e6a8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x22e6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x22e6ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22e6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e6b0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22e6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22e6b4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x22e6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x22e6b8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x22e6b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x22e6bc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x22e6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x22e6c0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x22E6C0u;
    SET_GPR_U32(ctx, 31, 0x22E6C8u);
    ctx->pc = 0x22E6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E6C0u;
    // 0x22e6c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x22E6C0u, 0x22E6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E6C8u;
label_22e6c8:
    // 0x22e6c8: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x22e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x22e6cc: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x22e6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x22e6d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e6d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e6d4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x22e6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x22e6d8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x22e6d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22e6dc: 0xe6001724  swc1        $f0, 0x1724($s0)
    ctx->pc = 0x22e6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5924), bits); }
    // 0x22e6e0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E6E0u;
    {
        const bool branch_taken_0x22e6e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6E0u;
        // 0x22e6e4: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6e0) {
            ctx->pc = 0x22E6FCu;
            goto label_22e6fc;
        }
    }
    ctx->pc = 0x22E6E8u;
    // 0x22e6e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e6ec: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x22E6ECu;
    {
        const bool branch_taken_0x22e6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22e6ec) {
            ctx->pc = 0x22E7A4u;
            goto label_22e7a4;
        }
    }
    ctx->pc = 0x22E6F4u;
    // 0x22e6f4: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x22E6F4u;
    {
        const bool branch_taken_0x22e6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E6F4u;
        // 0x22e6f8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6f4) {
            ctx->pc = 0x22E9D4u;
            goto label_22e9d4;
        }
    }
    ctx->pc = 0x22E6FCu;
label_22e6fc:
    // 0x22e6fc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x22e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22e700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e704: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x22e704u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e708: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22e708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22e70c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22e70cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e710: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22e710u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e714: 0x8c45215c  lw          $a1, 0x215C($v0)
    ctx->pc = 0x22e714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8540)));
    // 0x22e718: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22e718u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e71c: 0x8c462160  lw          $a2, 0x2160($v0)
    ctx->pc = 0x22e71cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8544)));
    // 0x22e720: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22e720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22e724: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22E724u;
    SET_GPR_U32(ctx, 31, 0x22E72Cu);
    ctx->pc = 0x22E728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E724u;
    // 0x22e728: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22E724u, 0x22E72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E72Cu;
label_22e72c:
    // 0x22e72c: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x22e72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x22e730: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x22e730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x22e734: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x22e734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22e738: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22e738u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e73c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x22e73cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22e740: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22e740u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22e744: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22e744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e748: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x22e748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22e74c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22e74cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e750: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22e750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e754: 0x26020590  addiu       $v0, $s0, 0x590
    ctx->pc = 0x22e754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x22e758: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E758u;
    {
        const bool branch_taken_0x22e758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x22E75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E758u;
        // 0x22e75c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e758) {
            ctx->pc = 0x22E774u;
            goto label_22e774;
        }
    }
    ctx->pc = 0x22E760u;
    // 0x22e760: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x22e760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e764: 0xe6000590  swc1        $f0, 0x590($s0)
    ctx->pc = 0x22e764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1424), bits); }
    // 0x22e768: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x22e768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x22e76c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x22e76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e770: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x22e770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_22e774:
    // 0x22e774: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x22e774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x22e778: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x22e778u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x22e77c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e780: 0xda040590  lqc2        $vf4, 0x590($s0)
    ctx->pc = 0x22e780u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x22e784: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22e784u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22e788: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22e788u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22e78c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22e78cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22e790: 0xfa040590  sqc2        $vf4, 0x590($s0)
    ctx->pc = 0x22e790u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1424), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e794: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22e794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22e798: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x22e798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x22e79c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22e7a0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22e7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22e7a4:
    // 0x22e7a4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22e7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22e7a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e7ac: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x22e7acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x22e7b0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22e7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x22e7b4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x22E7B4u;
    {
        const bool branch_taken_0x22e7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E7B4u;
        // 0x22e7b8: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7b4) {
            ctx->pc = 0x22E82Cu;
            goto label_22e82c;
        }
    }
    ctx->pc = 0x22E7BCu;
    // 0x22e7bc: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22e7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e7c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e7c4: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22e7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22e7c8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22e7c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22e7cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22e7ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e7d0: 0x26050580  addiu       $a1, $s0, 0x580
    ctx->pc = 0x22e7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x22e7d4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22E7D4u;
    SET_GPR_U32(ctx, 31, 0x22E7DCu);
    ctx->pc = 0x22E7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E7D4u;
    // 0x22e7d8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22E7D4u, 0x22E7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E7DCu;
label_22e7dc:
    // 0x22e7dc: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22e7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e7e0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x22e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22e7e4: 0x26020590  addiu       $v0, $s0, 0x590
    ctx->pc = 0x22e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x22e7e8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22e7e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e7ec: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22e7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e7f0: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22e7f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e7f4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22e7f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22e7f8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22e7f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22e7fc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22e7fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22e800: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22e800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e804: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22e804u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e808: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22e808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e80c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x22e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x22e810: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22e810u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e814: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x22e814u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e818: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22e818u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22e81c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22e81cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e824: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x22E824u;
    {
        const bool branch_taken_0x22e824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E824u;
        // 0x22e828: 0xae0305f0  sw          $v1, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e824) {
            ctx->pc = 0x22E98Cu;
            goto label_22e98c;
        }
    }
    ctx->pc = 0x22E82Cu;
label_22e82c:
    // 0x22e82c: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x22e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x22e830: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x22E830u;
    {
        const bool branch_taken_0x22e830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e830) {
            ctx->pc = 0x22E834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E830u;
            // 0x22e834: 0xc60005a8  lwc1        $f0, 0x5A8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E970u;
            goto label_22e970;
        }
    }
    ctx->pc = 0x22E838u;
    // 0x22e838: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x22e838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22e83c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22E83Cu;
    SET_GPR_U32(ctx, 31, 0x22E844u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22E83Cu, 0x22E844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E844u;
label_22e844:
    // 0x22e844: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x22e844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22e848: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x22e848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22e84c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x22e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x22e850: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x22e850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22e854: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x22e854u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22e858: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x22e858u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e85c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22e85cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22e860: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22e860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e864: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x22e864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22e868: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22e868u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e86c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22e86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e870: 0x13a50006  beq         $sp, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E870u;
    {
        const bool branch_taken_0x22e870 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        ctx->pc = 0x22E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E870u;
        // 0x22e874: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e870) {
            ctx->pc = 0x22E88Cu;
            goto label_22e88c;
        }
    }
    ctx->pc = 0x22E878u;
    // 0x22e878: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x22e878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22e87c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x22e87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22e880: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22e880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22e884: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x22e884u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22e888: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x22e888u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_22e88c:
    // 0x22e88c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x22e88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22e890: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x22E890u;
    SET_GPR_U32(ctx, 31, 0x22E898u);
    ctx->pc = 0x22E894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E890u;
    // 0x22e894: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x22E890u, 0x22E898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E898u;
label_22e898:
    // 0x22e898: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x22e898u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x22e89c: 0xc051e62  jal         func_147988
    ctx->pc = 0x22E89Cu;
    SET_GPR_U32(ctx, 31, 0x22E8A4u);
    ctx->pc = 0x22E8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E89Cu;
    // 0x22e8a0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x22E89Cu, 0x22E8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E8A4u;
label_22e8a4:
    // 0x22e8a4: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x22e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x22e8a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x22e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x22e8ac: 0x2443fd90  addiu       $v1, $v0, -0x270
    ctx->pc = 0x22e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966672));
    // 0x22e8b0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x22e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x22e8b4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x22e8b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22e8b8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22E8B8u;
    {
        const bool branch_taken_0x22e8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8B8u;
        // 0x22e8bc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8b8) {
            ctx->pc = 0x22E91Cu;
            goto label_22e91c;
        }
    }
    ctx->pc = 0x22E8C0u;
    // 0x22e8c0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x22e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x22e8c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22e8c8: 0x24428dc0  addiu       $v0, $v0, -0x7240
    ctx->pc = 0x22e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938048));
    // 0x22e8cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e8d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e8d4: 0x800008  jr          $a0
    ctx->pc = 0x22E8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E8DCu: goto label_22e8dc;
            case 0x22E8ECu: goto label_22e8ec;
            case 0x22E8FCu: goto label_22e8fc;
            case 0x22E90Cu: goto label_22e90c;
            case 0x22E91Cu: goto label_22e91c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E8D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22E8DCu;
label_22e8dc:
    // 0x22e8dc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x22e8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x22e8e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e8e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e8e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22E8E4u;
    {
        const bool branch_taken_0x22e8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8E4u;
        // 0x22e8e8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8e4) {
            ctx->pc = 0x22E91Cu;
            goto label_22e91c;
        }
    }
    ctx->pc = 0x22E8ECu;
label_22e8ec:
    // 0x22e8ec: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x22e8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
    // 0x22e8f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e8f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e8f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22E8F4u;
    {
        const bool branch_taken_0x22e8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E8F4u;
        // 0x22e8f8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e8f4) {
            ctx->pc = 0x22E91Cu;
            goto label_22e91c;
        }
    }
    ctx->pc = 0x22E8FCu;
label_22e8fc:
    // 0x22e8fc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22e8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22e900: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e904: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22E904u;
    {
        const bool branch_taken_0x22e904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E904u;
        // 0x22e908: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e904) {
            ctx->pc = 0x22E91Cu;
            goto label_22e91c;
        }
    }
    ctx->pc = 0x22E90Cu;
label_22e90c:
    // 0x22e90c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x22e90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x22e910: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22e910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e914: 0x0  nop
    ctx->pc = 0x22e914u;
    // NOP
    // 0x22e918: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22e918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22e91c:
    // 0x22e91c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22e91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e920: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x22e920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22e924: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x22E924u;
    SET_GPR_U32(ctx, 31, 0x22E92Cu);
    ctx->pc = 0x22E928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E924u;
    // 0x22e928: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x22E924u, 0x22E92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E92Cu;
label_22e92c:
    // 0x22e92c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22E92Cu;
    SET_GPR_U32(ctx, 31, 0x22E934u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22E92Cu, 0x22E934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E934u;
label_22e934:
    // 0x22e934: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x22e934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22e938: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22e938u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e93c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x22e93cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e940: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22e940u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22e944: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22e944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22e948: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22e948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e950: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22e950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22e954: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22e954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22e958: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22e958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e95c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22e95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e960: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22E960u;
    SET_GPR_U32(ctx, 31, 0x22E968u);
    ctx->pc = 0x22E964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E960u;
    // 0x22e964: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22E960u, 0x22E968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E968u;
label_22e968:
    // 0x22e968: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22E968u;
    {
        const bool branch_taken_0x22e968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e968) {
            ctx->pc = 0x22E98Cu;
            goto label_22e98c;
        }
    }
    ctx->pc = 0x22E970u;
label_22e970:
    // 0x22e970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e974: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22e974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22e978: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22e978u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22e97c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22e97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e980: 0x26050580  addiu       $a1, $s0, 0x580
    ctx->pc = 0x22e980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x22e984: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22E984u;
    SET_GPR_U32(ctx, 31, 0x22E98Cu);
    ctx->pc = 0x22E988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E984u;
    // 0x22e988: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22E984u, 0x22E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E98Cu;
label_22e98c:
    // 0x22e98c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22E98Cu;
    SET_GPR_U32(ctx, 31, 0x22E994u);
    ctx->pc = 0x22E990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E98Cu;
    // 0x22e990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22E98Cu, 0x22E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E994u;
label_22e994:
    // 0x22e994: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E994u;
    {
        const bool branch_taken_0x22e994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E994u;
        // 0x22e998: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e994) {
            ctx->pc = 0x22E9B0u;
            goto label_22e9b0;
        }
    }
    ctx->pc = 0x22E99Cu;
    // 0x22e99c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e9a0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x22e9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x22e9a4: 0xa20302f7  sb          $v1, 0x2F7($s0)
    ctx->pc = 0x22e9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x22e9a8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x22e9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x22e9ac: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x22e9acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_22e9b0:
    // 0x22e9b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22e9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22e9b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22e9b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22e9b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e9bc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22E9BCu;
    SET_GPR_U32(ctx, 31, 0x22E9C4u);
    ctx->pc = 0x22E9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E9BCu;
    // 0x22e9c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22E9BCu, 0x22E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E9C4u;
label_22e9c4:
    // 0x22e9c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e9c8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22E9C8u;
    SET_GPR_U32(ctx, 31, 0x22E9D0u);
    ctx->pc = 0x22E9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E9C8u;
    // 0x22e9cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22E9C8u, 0x22E9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E9D0u;
label_22e9d0:
    // 0x22e9d0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x22e9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_22e9d4:
    // 0x22e9d4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22e9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22e9d8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x22e9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22e9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x22E9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9DCu;
        // 0x22e9e0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E9E4u;
    // 0x22e9e4: 0x0  nop
    ctx->pc = 0x22e9e4u;
    // NOP
    ctx->pc = 0x22e9e8u;
}
