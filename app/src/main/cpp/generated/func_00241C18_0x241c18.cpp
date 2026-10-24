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

// Function: func_00241C18
// Address: 0x241c18 - 0x241eb0
void func_00241C18_0x241c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00241C18_0x241c18");
#endif

    switch (ctx->pc) {
        case 0x241c60u: goto label_241c60;
        case 0x241c8cu: goto label_241c8c;
        case 0x241d78u: goto label_241d78;
        case 0x241dccu: goto label_241dcc;
        case 0x241de0u: goto label_241de0;
        case 0x241decu: goto label_241dec;
        case 0x241e90u: goto label_241e90;
        case 0x241e9cu: goto label_241e9c;
        default: break;
    }

    ctx->pc = 0x241c18u;

    // 0x241c18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x241c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x241c1c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x241c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x241c20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241c24: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x241c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x241c28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x241c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x241c2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x241c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241c30: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x241c30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x241c34: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x241c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x241c38: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x241c38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x241c3c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x241C3Cu;
    {
        const bool branch_taken_0x241c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x241C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C3Cu;
        // 0x241c40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c3c) {
            ctx->pc = 0x241C54u;
            goto label_241c54;
        }
    }
    ctx->pc = 0x241C44u;
    // 0x241c44: 0x50620051  beql        $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x241C44u;
    {
        const bool branch_taken_0x241c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x241c44) {
            ctx->pc = 0x241C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241C44u;
            // 0x241c48: 0x8e0316d0  lw          $v1, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241D8Cu;
            goto label_241d8c;
        }
    }
    ctx->pc = 0x241C4Cu;
    // 0x241c4c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x241C4Cu;
    {
        const bool branch_taken_0x241c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241C4Cu;
        // 0x241c50: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c4c) {
            ctx->pc = 0x241EA0u;
            goto label_241ea0;
        }
    }
    ctx->pc = 0x241C54u;
label_241c54:
    // 0x241c54: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x241c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x241c58: 0xc09d91a  jal         func_276468
    ctx->pc = 0x241C58u;
    SET_GPR_U32(ctx, 31, 0x241C60u);
    ctx->pc = 0x241C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241C58u;
    // 0x241c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x241C58u, 0x241C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C60u;
label_241c60:
    // 0x241c60: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x241c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x241c64: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x241c64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x241c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241c6c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x241c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x241c70: 0x8c65111c  lw          $a1, 0x111C($v1)
    ctx->pc = 0x241c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4380)));
    // 0x241c74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x241c74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x241c78: 0x8c661120  lw          $a2, 0x1120($v1)
    ctx->pc = 0x241c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4384)));
    // 0x241c7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x241c7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241c80: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x241c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x241c84: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x241C84u;
    SET_GPR_U32(ctx, 31, 0x241C8Cu);
    ctx->pc = 0x241C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241C84u;
    // 0x241c88: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x241C84u, 0x241C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241C8Cu;
label_241c8c:
    // 0x241c8c: 0x3c013ffa  lui         $at, 0x3FFA
    ctx->pc = 0x241c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16378 << 16));
    // 0x241c90: 0x34211cac  ori         $at, $at, 0x1CAC
    ctx->pc = 0x241c90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7340);
    // 0x241c94: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x241c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x241c98: 0x260306d0  addiu       $v1, $s0, 0x6D0
    ctx->pc = 0x241c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x241c9c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x241c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x241ca0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241ca4: 0x3c01c16d  lui         $at, 0xC16D
    ctx->pc = 0x241ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49517 << 16));
    // 0x241ca8: 0x3421f3b6  ori         $at, $at, 0xF3B6
    ctx->pc = 0x241ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62390);
    // 0x241cac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x241cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x241cb0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x241cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x241cb4: 0xe60206d0  swc1        $f2, 0x6D0($s0)
    ctx->pc = 0x241cb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1744), bits); }
    // 0x241cb8: 0xe60006d4  swc1        $f0, 0x6D4($s0)
    ctx->pc = 0x241cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1748), bits); }
    // 0x241cbc: 0xe60106d8  swc1        $f1, 0x6D8($s0)
    ctx->pc = 0x241cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1752), bits); }
    // 0x241cc0: 0xe61406e0  swc1        $f20, 0x6E0($s0)
    ctx->pc = 0x241cc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1760), bits); }
    // 0x241cc4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x241cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x241cc8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x241cc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241ccc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x241cccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241cd0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x241cd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x241cd4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x241cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x241cd8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x241cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x241cdc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x241cdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241ce0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x241ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x241ce4: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x241ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x241ce8: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x241CE8u;
    {
        const bool branch_taken_0x241ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x241CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241CE8u;
        // 0x241cec: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ce8) {
            ctx->pc = 0x241D04u;
            goto label_241d04;
        }
    }
    ctx->pc = 0x241CF0u;
    // 0x241cf0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x241cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241cf4: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x241cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x241cf8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x241cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x241cfc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x241cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241d00: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x241d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_241d04:
    // 0x241d04: 0x3c0141b0  lui         $at, 0x41B0
    ctx->pc = 0x241d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16816 << 16));
    // 0x241d08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241d0c: 0xe6140584  swc1        $f20, 0x584($s0)
    ctx->pc = 0x241d0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1412), bits); }
    // 0x241d10: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x241d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x241d14: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x241d14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241d18: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x241d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x241d1c: 0x3c013d3a  lui         $at, 0x3D3A
    ctx->pc = 0x241d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15674 << 16));
    // 0x241d20: 0x34212e8c  ori         $at, $at, 0x2E8C
    ctx->pc = 0x241d20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11916);
    // 0x241d24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x241d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241d28: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x241d28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241d2c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x241d2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x241d30: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x241d30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x241d34: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x241d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x241d38: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x241d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x241d3c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x241d3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241d40: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x241d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x241d44: 0x26020590  addiu       $v0, $s0, 0x590
    ctx->pc = 0x241d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x241d48: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x241D48u;
    {
        const bool branch_taken_0x241d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x241D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241D48u;
        // 0x241d4c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d48) {
            ctx->pc = 0x241D64u;
            goto label_241d64;
        }
    }
    ctx->pc = 0x241D50u;
    // 0x241d50: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x241d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241d54: 0xe6000590  swc1        $f0, 0x590($s0)
    ctx->pc = 0x241d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1424), bits); }
    // 0x241d58: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x241d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x241d5c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x241d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241d60: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x241d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_241d64:
    // 0x241d64: 0xc60c0580  lwc1        $f12, 0x580($s0)
    ctx->pc = 0x241d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x241d68: 0xc60d0588  lwc1        $f13, 0x588($s0)
    ctx->pc = 0x241d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x241d6c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x241d6cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x241d70: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x241D70u;
    SET_GPR_U32(ctx, 31, 0x241D78u);
    ctx->pc = 0x241D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241D70u;
    // 0x241d74: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x241D70u, 0x241D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241D78u;
label_241d78:
    // 0x241d78: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x241d78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x241d7c: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x241d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x241d80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x241d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x241d84: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x241d84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x241d88: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x241d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_241d8c:
    // 0x241d8c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x241d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x241d90: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x241d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241d94: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x241d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x241d98: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x241d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x241d9c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x241d9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x241da0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x241da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x241da4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x241da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x241da8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x241da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x241dac: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x241dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x241db0: 0x460e0382  mul.s       $f14, $f0, $f14
    ctx->pc = 0x241db0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x241db4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x241db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x241db8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241dbc: 0xc60d0604  lwc1        $f13, 0x604($s0)
    ctx->pc = 0x241dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x241dc0: 0xa2020617  sb          $v0, 0x617($s0)
    ctx->pc = 0x241dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1559), (uint8_t)GPR_U32(ctx, 2));
    // 0x241dc4: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x241DC4u;
    SET_GPR_U32(ctx, 31, 0x241DCCu);
    ctx->pc = 0x241DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241DC4u;
    // 0x241dc8: 0xae0316d0  sw          $v1, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x241DC4u, 0x241DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DCCu;
label_241dcc:
    // 0x241dcc: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x241dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241dd0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x241dd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x241dd4: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x241dd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x241dd8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x241DD8u;
    SET_GPR_U32(ctx, 31, 0x241DE0u);
    ctx->pc = 0x241DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241DD8u;
    // 0x241ddc: 0xe6010104  swc1        $f1, 0x104($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x241DD8u, 0x241DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DE0u;
label_241de0:
    // 0x241de0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x241de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x241de4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x241DE4u;
    SET_GPR_U32(ctx, 31, 0x241DECu);
    ctx->pc = 0x241DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241DE4u;
    // 0x241de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x241DE4u, 0x241DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241DECu;
label_241dec:
    // 0x241dec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x241DECu;
    {
        const bool branch_taken_0x241dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241DECu;
        // 0x241df0: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241dec) {
            ctx->pc = 0x241E04u;
            goto label_241e04;
        }
    }
    ctx->pc = 0x241DF4u;
    // 0x241df4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x241df4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x241df8: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x241df8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x241dfc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x241dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x241e00: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x241e00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_241e04:
    // 0x241e04: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x241e04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x241e08: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x241e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x241e0c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x241E0Cu;
    {
        const bool branch_taken_0x241e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241e0c) {
            ctx->pc = 0x241E7Cu;
            goto label_241e7c;
        }
    }
    ctx->pc = 0x241E14u;
    // 0x241e14: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x241e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x241e18: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x241e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x241e1c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x241e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x241e20: 0x26020590  addiu       $v0, $s0, 0x590
    ctx->pc = 0x241e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x241e24: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x241e24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241e28: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x241e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x241e2c: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x241e2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241e30: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x241e30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x241e34: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x241e34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x241e38: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x241e38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x241e3c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x241e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x241e40: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x241e40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x241e44: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x241e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x241e48: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x241e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x241e4c: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x241E4Cu;
    {
        const bool branch_taken_0x241e4c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x241E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241E4Cu;
        // 0x241e50: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e4c) {
            ctx->pc = 0x241E68u;
            goto label_241e68;
        }
    }
    ctx->pc = 0x241E54u;
    // 0x241e54: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x241e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x241e58: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x241e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x241e5c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x241e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x241e60: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x241e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x241e64: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x241e64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_241e68:
    // 0x241e68: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x241e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x241e6c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x241e6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241e70: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x241e70u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241e74: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x241e74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x241e78: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x241e78u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_241e7c:
    // 0x241e7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x241e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x241e80: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x241e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x241e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241e88: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x241E88u;
    SET_GPR_U32(ctx, 31, 0x241E90u);
    ctx->pc = 0x241E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241E88u;
    // 0x241e8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x241E88u, 0x241E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E90u;
label_241e90:
    // 0x241e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241e94: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x241E94u;
    SET_GPR_U32(ctx, 31, 0x241E9Cu);
    ctx->pc = 0x241E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241E94u;
    // 0x241e98: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x241E94u, 0x241E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241E9Cu;
label_241e9c:
    // 0x241e9c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x241e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_241ea0:
    // 0x241ea0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x241ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241ea4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x241ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x241ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x241EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241EA8u;
        // 0x241eac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x241EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x241EB0u;
}
