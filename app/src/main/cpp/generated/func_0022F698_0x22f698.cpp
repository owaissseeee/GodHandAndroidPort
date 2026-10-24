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

// Function: func_0022F698
// Address: 0x22f698 - 0x22fae0
void func_0022F698_0x22f698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022F698_0x22f698");
#endif

    switch (ctx->pc) {
        case 0x22f6c0u: goto label_22f6c0;
        case 0x22f744u: goto label_22f744;
        case 0x22f7f4u: goto label_22f7f4;
        case 0x22f85cu: goto label_22f85c;
        case 0x22f8b0u: goto label_22f8b0;
        case 0x22f8bcu: goto label_22f8bc;
        case 0x22f944u: goto label_22f944;
        case 0x22f94cu: goto label_22f94c;
        case 0x22f980u: goto label_22f980;
        case 0x22f9a4u: goto label_22f9a4;
        case 0x22f9acu: goto label_22f9ac;
        case 0x22f9d4u: goto label_22f9d4;
        case 0x22f9e0u: goto label_22f9e0;
        case 0x22fa14u: goto label_22fa14;
        case 0x22fa24u: goto label_22fa24;
        case 0x22fa54u: goto label_22fa54;
        case 0x22fa7cu: goto label_22fa7c;
        case 0x22fa84u: goto label_22fa84;
        case 0x22fa90u: goto label_22fa90;
        case 0x22fa9cu: goto label_22fa9c;
        default: break;
    }

    ctx->pc = 0x22f698u;

    // 0x22f698: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x22f698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x22f69c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f6a0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x22f6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x22f6a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f6a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22f6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22f6ac: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x22f6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x22f6b0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x22f6b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x22f6b4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x22f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x22f6b8: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x22F6B8u;
    SET_GPR_U32(ctx, 31, 0x22F6C0u);
    ctx->pc = 0x22F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6B8u;
    // 0x22f6bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x22F6B8u, 0x22F6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6C0u;
label_22f6c0:
    // 0x22f6c0: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x22f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x22f6c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f6c8: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x22f6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x22f6cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f6d0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x22f6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x22f6d4: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x22f6d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22f6d8: 0xe6001724  swc1        $f0, 0x1724($s0)
    ctx->pc = 0x22f6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5924), bits); }
    // 0x22f6dc: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x22F6DCu;
    {
        const bool branch_taken_0x22f6dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6DCu;
        // 0x22f6e0: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6dc) {
            ctx->pc = 0x22F7BCu;
            goto label_22f7bc;
        }
    }
    ctx->pc = 0x22F6E4u;
    // 0x22f6e4: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x22f6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f6e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F6E8u;
    {
        const bool branch_taken_0x22f6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f6e8) {
            ctx->pc = 0x22F6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F6E8u;
            // 0x22f6ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F700u;
            goto label_22f700;
        }
    }
    ctx->pc = 0x22F6F0u;
    // 0x22f6f0: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x22F6F0u;
    {
        const bool branch_taken_0x22f6f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f6f0) {
            ctx->pc = 0x22F6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F6F0u;
            // 0x22f6f4: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F718u;
            goto label_22f718;
        }
    }
    ctx->pc = 0x22F6F8u;
    // 0x22f6f8: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x22F6F8u;
    {
        const bool branch_taken_0x22f6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6F8u;
        // 0x22f6fc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6f8) {
            ctx->pc = 0x22FAD0u;
            goto label_22fad0;
        }
    }
    ctx->pc = 0x22F700u;
label_22f700:
    // 0x22f700: 0x108200b9  beq         $a0, $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x22F700u;
    {
        const bool branch_taken_0x22f700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F700u;
        // 0x22f704: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f700) {
            ctx->pc = 0x22F9E8u;
            goto label_22f9e8;
        }
    }
    ctx->pc = 0x22F708u;
    // 0x22f708: 0x108200d0  beq         $a0, $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x22F708u;
    {
        const bool branch_taken_0x22f708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x22f708) {
            ctx->pc = 0x22FA4Cu;
            goto label_22fa4c;
        }
    }
    ctx->pc = 0x22F710u;
    // 0x22f710: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x22F710u;
    {
        const bool branch_taken_0x22f710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F710u;
        // 0x22f714: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f710) {
            ctx->pc = 0x22FAD0u;
            goto label_22fad0;
        }
    }
    ctx->pc = 0x22F718u;
label_22f718:
    // 0x22f718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f71c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x22f71cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f720: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22f720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22f724: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22f724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f728: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f728u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f72c: 0x8c45215c  lw          $a1, 0x215C($v0)
    ctx->pc = 0x22f72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8540)));
    // 0x22f730: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f734: 0x8c462160  lw          $a2, 0x2160($v0)
    ctx->pc = 0x22f734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8544)));
    // 0x22f738: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22f738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22f73c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22F73Cu;
    SET_GPR_U32(ctx, 31, 0x22F744u);
    ctx->pc = 0x22F740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F73Cu;
    // 0x22f740: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22F73Cu, 0x22F744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F744u;
label_22f744:
    // 0x22f744: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x22f744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x22f748: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x22f748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x22f74c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x22f74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22f750: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22f750u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f754: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x22f754u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22f758: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22f758u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22f75c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22f75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22f760: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x22f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22f764: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22f764u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f768: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22f768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22f76c: 0x26020590  addiu       $v0, $s0, 0x590
    ctx->pc = 0x22f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x22f770: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F770u;
    {
        const bool branch_taken_0x22f770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x22F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F770u;
        // 0x22f774: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f770) {
            ctx->pc = 0x22F78Cu;
            goto label_22f78c;
        }
    }
    ctx->pc = 0x22F778u;
    // 0x22f778: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x22f778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f77c: 0xe6000590  swc1        $f0, 0x590($s0)
    ctx->pc = 0x22f77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1424), bits); }
    // 0x22f780: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x22f780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x22f784: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x22f784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f788: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x22f788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_22f78c:
    // 0x22f78c: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x22f78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x22f790: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x22f790u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x22f794: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f798: 0xda040590  lqc2        $vf4, 0x590($s0)
    ctx->pc = 0x22f798u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x22f79c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22f79cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22f7a0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22f7a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22f7a4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22f7a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22f7a8: 0xfa040590  sqc2        $vf4, 0x590($s0)
    ctx->pc = 0x22f7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1424), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22f7ac: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22f7acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22f7b0: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x22f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x22f7b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22f7b8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22f7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22f7bc:
    // 0x22f7bc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22f7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22f7c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f7c4: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x22f7c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x22f7c8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22f7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x22f7cc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x22F7CCu;
    {
        const bool branch_taken_0x22f7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7CCu;
        // 0x22f7d0: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7cc) {
            ctx->pc = 0x22F844u;
            goto label_22f844;
        }
    }
    ctx->pc = 0x22F7D4u;
    // 0x22f7d4: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22f7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f7d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f7dc: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22f7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22f7e0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22f7e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22f7e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22f7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f7e8: 0x26050580  addiu       $a1, $s0, 0x580
    ctx->pc = 0x22f7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x22f7ec: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22F7ECu;
    SET_GPR_U32(ctx, 31, 0x22F7F4u);
    ctx->pc = 0x22F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7ECu;
    // 0x22f7f0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22F7ECu, 0x22F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7F4u;
label_22f7f4:
    // 0x22f7f4: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22f7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f7f8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x22f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22f7fc: 0x26020590  addiu       $v0, $s0, 0x590
    ctx->pc = 0x22f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x22f800: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22f800u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f804: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22f804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22f808: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22f808u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f80c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x22f80cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x22f810: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x22f810u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x22f814: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x22f814u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22f818: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22f818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22f81c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x22f81cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f820: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22f820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22f824: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x22f824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x22f828: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22f828u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f82c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x22f82cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f830: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22f830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22f834: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22f834u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22f838: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f83c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x22F83Cu;
    {
        const bool branch_taken_0x22f83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F83Cu;
        // 0x22f840: 0xae0305f0  sw          $v1, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f83c) {
            ctx->pc = 0x22F9A4u;
            goto label_22f9a4;
        }
    }
    ctx->pc = 0x22F844u;
label_22f844:
    // 0x22f844: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x22f844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x22f848: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x22F848u;
    {
        const bool branch_taken_0x22f848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f848) {
            ctx->pc = 0x22F84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F848u;
            // 0x22f84c: 0xc60005a8  lwc1        $f0, 0x5A8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F988u;
            goto label_22f988;
        }
    }
    ctx->pc = 0x22F850u;
    // 0x22f850: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x22f850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22f854: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22F854u;
    SET_GPR_U32(ctx, 31, 0x22F85Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22F854u, 0x22F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F85Cu;
label_22f85c:
    // 0x22f85c: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x22f85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22f860: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x22f860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22f864: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x22f864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x22f868: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x22f868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x22f86c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x22f86cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22f870: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x22f870u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f874: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22f874u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22f878: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x22f878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22f87c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x22f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22f880: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x22f880u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f884: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x22f884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22f888: 0x13a50006  beq         $sp, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F888u;
    {
        const bool branch_taken_0x22f888 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        ctx->pc = 0x22F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F888u;
        // 0x22f88c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f888) {
            ctx->pc = 0x22F8A4u;
            goto label_22f8a4;
        }
    }
    ctx->pc = 0x22F890u;
    // 0x22f890: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x22f890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f894: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x22f894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22f898: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22f898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22f89c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x22f89cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22f8a0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x22f8a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_22f8a4:
    // 0x22f8a4: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x22f8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22f8a8: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x22F8A8u;
    SET_GPR_U32(ctx, 31, 0x22F8B0u);
    ctx->pc = 0x22F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F8A8u;
    // 0x22f8ac: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x22F8A8u, 0x22F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F8B0u;
label_22f8b0:
    // 0x22f8b0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x22f8b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x22f8b4: 0xc051e62  jal         func_147988
    ctx->pc = 0x22F8B4u;
    SET_GPR_U32(ctx, 31, 0x22F8BCu);
    ctx->pc = 0x22F8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F8B4u;
    // 0x22f8b8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x22F8B4u, 0x22F8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F8BCu;
label_22f8bc:
    // 0x22f8bc: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x22f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x22f8c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x22f8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x22f8c4: 0x2443fd90  addiu       $v1, $v0, -0x270
    ctx->pc = 0x22f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966672));
    // 0x22f8c8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x22f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x22f8cc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x22f8ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22f8d0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22F8D0u;
    {
        const bool branch_taken_0x22f8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8D0u;
        // 0x22f8d4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8d0) {
            ctx->pc = 0x22F934u;
            goto label_22f934;
        }
    }
    ctx->pc = 0x22F8D8u;
    // 0x22f8d8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x22f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x22f8dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22f8e0: 0x24428e70  addiu       $v0, $v0, -0x7190
    ctx->pc = 0x22f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938224));
    // 0x22f8e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22f8e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22f8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f8ec: 0x800008  jr          $a0
    ctx->pc = 0x22F8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22F8F4u: goto label_22f8f4;
            case 0x22F904u: goto label_22f904;
            case 0x22F914u: goto label_22f914;
            case 0x22F924u: goto label_22f924;
            case 0x22F934u: goto label_22f934;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F8ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22F8F4u;
label_22f8f4:
    // 0x22f8f4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x22f8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x22f8f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f8fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22F8FCu;
    {
        const bool branch_taken_0x22f8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8FCu;
        // 0x22f900: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8fc) {
            ctx->pc = 0x22F934u;
            goto label_22f934;
        }
    }
    ctx->pc = 0x22F904u;
label_22f904:
    // 0x22f904: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x22f904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
    // 0x22f908: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f90c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22F90Cu;
    {
        const bool branch_taken_0x22f90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F90Cu;
        // 0x22f910: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f90c) {
            ctx->pc = 0x22F934u;
            goto label_22f934;
        }
    }
    ctx->pc = 0x22F914u;
label_22f914:
    // 0x22f914: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x22f914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x22f918: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f91c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22F91Cu;
    {
        const bool branch_taken_0x22f91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F91Cu;
        // 0x22f920: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f91c) {
            ctx->pc = 0x22F934u;
            goto label_22f934;
        }
    }
    ctx->pc = 0x22F924u;
label_22f924:
    // 0x22f924: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x22f924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x22f928: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f92c: 0x0  nop
    ctx->pc = 0x22f92cu;
    // NOP
    // 0x22f930: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x22f930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22f934:
    // 0x22f934: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22f934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f938: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x22f938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22f93c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x22F93Cu;
    SET_GPR_U32(ctx, 31, 0x22F944u);
    ctx->pc = 0x22F940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F93Cu;
    // 0x22f940: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x22F93Cu, 0x22F944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F944u;
label_22f944:
    // 0x22f944: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22F944u;
    SET_GPR_U32(ctx, 31, 0x22F94Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22F944u, 0x22F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F94Cu;
label_22f94c:
    // 0x22f94c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x22f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22f950: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22f950u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f954: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x22f954u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22f958: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x22f958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x22f95c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x22f95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x22f960: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22f960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f968: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22f968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22f96c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22f96cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22f970: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22f970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f974: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22f974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f978: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22F978u;
    SET_GPR_U32(ctx, 31, 0x22F980u);
    ctx->pc = 0x22F97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F978u;
    // 0x22f97c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22F978u, 0x22F980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F980u;
label_22f980:
    // 0x22f980: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22F980u;
    {
        const bool branch_taken_0x22f980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f980) {
            ctx->pc = 0x22F9A4u;
            goto label_22f9a4;
        }
    }
    ctx->pc = 0x22F988u;
label_22f988:
    // 0x22f988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f98c: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x22f98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x22f990: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x22f990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x22f994: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22f994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f998: 0x26050580  addiu       $a1, $s0, 0x580
    ctx->pc = 0x22f998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x22f99c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22F99Cu;
    SET_GPR_U32(ctx, 31, 0x22F9A4u);
    ctx->pc = 0x22F9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F99Cu;
    // 0x22f9a0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22F99Cu, 0x22F9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9A4u;
label_22f9a4:
    // 0x22f9a4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22F9A4u;
    SET_GPR_U32(ctx, 31, 0x22F9ACu);
    ctx->pc = 0x22F9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F9A4u;
    // 0x22f9a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22F9A4u, 0x22F9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9ACu;
label_22f9ac:
    // 0x22f9ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F9ACu;
    {
        const bool branch_taken_0x22f9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f9ac) {
            ctx->pc = 0x22F9C0u;
            goto label_22f9c0;
        }
    }
    ctx->pc = 0x22F9B4u;
    // 0x22f9b4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22f9b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22f9b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22f9bc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22f9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22f9c0:
    // 0x22f9c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22f9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22f9c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22f9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22f9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9cc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22F9CCu;
    SET_GPR_U32(ctx, 31, 0x22F9D4u);
    ctx->pc = 0x22F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F9CCu;
    // 0x22f9d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22F9CCu, 0x22F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9D4u;
label_22f9d4:
    // 0x22f9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9d8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22F9D8u;
    SET_GPR_U32(ctx, 31, 0x22F9E0u);
    ctx->pc = 0x22F9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F9D8u;
    // 0x22f9dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22F9D8u, 0x22F9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9E0u;
label_22f9e0:
    // 0x22f9e0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x22F9E0u;
    {
        const bool branch_taken_0x22f9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9E0u;
        // 0x22f9e4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9e0) {
            ctx->pc = 0x22FAD0u;
            goto label_22fad0;
        }
    }
    ctx->pc = 0x22F9E8u;
label_22f9e8:
    // 0x22f9e8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x22f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22f9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22f9f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f9f4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x22f9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f9f8: 0x8c452154  lw          $a1, 0x2154($v0)
    ctx->pc = 0x22f9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8532)));
    // 0x22f9fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f9fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa00: 0x8c462158  lw          $a2, 0x2158($v0)
    ctx->pc = 0x22fa00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8536)));
    // 0x22fa04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22fa04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa08: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22fa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22fa0c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22FA0Cu;
    SET_GPR_U32(ctx, 31, 0x22FA14u);
    ctx->pc = 0x22FA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA0Cu;
    // 0x22fa10: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22FA0Cu, 0x22FA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA14u;
label_22fa14:
    // 0x22fa14: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x22fa14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x22fa18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22fa18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22fa1c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x22FA1Cu;
    SET_GPR_U32(ctx, 31, 0x22FA24u);
    ctx->pc = 0x22FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA1Cu;
    // 0x22fa20: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x22FA1Cu, 0x22FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA24u;
label_22fa24:
    // 0x22fa24: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x22fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x22fa28: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x22fa28u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x22fa2c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22FA2Cu;
    {
        const bool branch_taken_0x22fa2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fa2c) {
            ctx->pc = 0x22FA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FA2Cu;
            // 0x22fa30: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FA34u;
            goto label_22fa34;
        }
    }
    ctx->pc = 0x22FA34u;
label_22fa34:
    // 0x22fa34: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22fa34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22fa38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22fa3c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22fa3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x22fa40: 0x2010  mfhi        $a0
    ctx->pc = 0x22fa40u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x22fa44: 0x24840078  addiu       $a0, $a0, 0x78
    ctx->pc = 0x22fa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x22fa48: 0xae0405f4  sw          $a0, 0x5F4($s0)
    ctx->pc = 0x22fa48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 4));
label_22fa4c:
    // 0x22fa4c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22FA4Cu;
    SET_GPR_U32(ctx, 31, 0x22FA54u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22FA4Cu, 0x22FA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA54u;
label_22fa54:
    // 0x22fa54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22fa54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22fa58: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22fa58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22fa5c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22fa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22fa60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa64: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x22fa64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x22fa68: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22fa68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22fa6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22fa6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22fa70: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22fa70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22fa74: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22FA74u;
    SET_GPR_U32(ctx, 31, 0x22FA7Cu);
    ctx->pc = 0x22FA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA74u;
    // 0x22fa78: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22FA74u, 0x22FA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA7Cu;
label_22fa7c:
    // 0x22fa7c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22FA7Cu;
    SET_GPR_U32(ctx, 31, 0x22FA84u);
    ctx->pc = 0x22FA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA7Cu;
    // 0x22fa80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22FA7Cu, 0x22FA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA84u;
label_22fa84:
    // 0x22fa84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fa84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa88: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22FA88u;
    SET_GPR_U32(ctx, 31, 0x22FA90u);
    ctx->pc = 0x22FA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA88u;
    // 0x22fa8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22FA88u, 0x22FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA90u;
label_22fa90:
    // 0x22fa90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22fa90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22fa94: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22FA94u;
    SET_GPR_U32(ctx, 31, 0x22FA9Cu);
    ctx->pc = 0x22FA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA94u;
    // 0x22fa98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22FA94u, 0x22FA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA9Cu;
label_22fa9c:
    // 0x22fa9c: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x22fa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22faa0: 0x3c014144  lui         $at, 0x4144
    ctx->pc = 0x22faa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16708 << 16));
    // 0x22faa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22faa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22faa8: 0x0  nop
    ctx->pc = 0x22faa8u;
    // NOP
    // 0x22faac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22faacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22fab0: 0x0  nop
    ctx->pc = 0x22fab0u;
    // NOP
    // 0x22fab4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x22FAB4u;
    {
        const bool branch_taken_0x22fab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAB4u;
        // 0x22fab8: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fab4) {
            ctx->pc = 0x22FACCu;
            goto label_22facc;
        }
    }
    ctx->pc = 0x22FABCu;
    // 0x22fabc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x22fabcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x22fac0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x22fac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x22fac4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x22fac4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x22fac8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x22fac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_22facc:
    // 0x22facc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x22faccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_22fad0:
    // 0x22fad0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22fad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22fad4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x22fad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22fad8: 0x3e00008  jr          $ra
    ctx->pc = 0x22FAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAD8u;
        // 0x22fadc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FAE0u;
}
