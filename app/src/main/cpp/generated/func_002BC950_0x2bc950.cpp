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

// Function: func_002BC950
// Address: 0x2bc950 - 0x2bcb80
void func_002BC950_0x2bc950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BC950_0x2bc950");
#endif

    switch (ctx->pc) {
        case 0x2bc994u: goto label_2bc994;
        case 0x2bc9a8u: goto label_2bc9a8;
        case 0x2bc9fcu: goto label_2bc9fc;
        case 0x2bca7cu: goto label_2bca7c;
        case 0x2bcb20u: goto label_2bcb20;
        case 0x2bcb40u: goto label_2bcb40;
        default: break;
    }

    ctx->pc = 0x2bc950u;

    // 0x2bc950: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2bc950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2bc954: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2bc954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2bc958: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2bc958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2bc95c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bc95cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc960: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2bc960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2bc964: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2bc964u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc968: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2bc968u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2bc96c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2bc96cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc970: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2bc970u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2bc974: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2bc974u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2bc978: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2bc978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2bc97c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2bc97cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2bc980: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2bc980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2bc984: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bc984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2bc988: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bc988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc98c: 0xc0aee1a  jal         func_2BB868
    ctx->pc = 0x2BC98Cu;
    SET_GPR_U32(ctx, 31, 0x2BC994u);
    ctx->pc = 0x2BC990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC98Cu;
    // 0x2bc990: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB868u, 0x2BC98Cu, 0x2BC994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC994u;
label_2bc994:
    // 0x2bc994: 0x10500019  beq         $v0, $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BC994u;
    {
        const bool branch_taken_0x2bc994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2BC998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC994u;
        // 0x2bc998: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc994) {
            ctx->pc = 0x2BC9FCu;
            goto label_2bc9fc;
        }
    }
    ctx->pc = 0x2BC99Cu;
    // 0x2bc99c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bc99cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bc9a0: 0xc0aee1a  jal         func_2BB868
    ctx->pc = 0x2BC9A0u;
    SET_GPR_U32(ctx, 31, 0x2BC9A8u);
    ctx->pc = 0x2BC9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC9A0u;
    // 0x2bc9a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB868u, 0x2BC9A0u, 0x2BC9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC9A8u;
label_2bc9a8:
    // 0x2bc9a8: 0x1050006b  beq         $v0, $s0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2BC9A8u;
    {
        const bool branch_taken_0x2bc9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2BC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9A8u;
        // 0x2bc9ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc9a8) {
            ctx->pc = 0x2BCB58u;
            goto label_2bcb58;
        }
    }
    ctx->pc = 0x2BC9B0u;
    // 0x2bc9b0: 0x0  nop
    ctx->pc = 0x2bc9b0u;
    // NOP
    // 0x2bc9b4: 0x0  nop
    ctx->pc = 0x2bc9b4u;
    // NOP
    // 0x2bc9b8: 0x4614a843  div.s       $f1, $f21, $f20
    ctx->pc = 0x2bc9b8u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[20]);
    // 0x2bc9bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bc9bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc9c0: 0x0  nop
    ctx->pc = 0x2bc9c0u;
    // NOP
    // 0x2bc9c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bc9c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc9c8: 0x0  nop
    ctx->pc = 0x2bc9c8u;
    // NOP
    // 0x2bc9cc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC9CCu;
    {
        const bool branch_taken_0x2bc9cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9CCu;
        // 0x2bc9d0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc9cc) {
            ctx->pc = 0x2BC9DCu;
            goto label_2bc9dc;
        }
    }
    ctx->pc = 0x2BC9D4u;
    // 0x2bc9d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bc9d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bc9d8: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x2bc9d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_2bc9dc:
    // 0x2bc9dc: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x2bc9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2bc9e0: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BC9E0u;
    {
        const bool branch_taken_0x2bc9e0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9E0u;
        // 0x2bc9e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc9e0) {
            ctx->pc = 0x2BCA04u;
            goto label_2bca04;
        }
    }
    ctx->pc = 0x2BC9E8u;
    // 0x2bc9e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2bc9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bc9ec: 0x0  nop
    ctx->pc = 0x2bc9ecu;
    // NOP
    // 0x2bc9f0: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2bc9f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2bc9f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2BC9F4u;
    {
        const bool branch_taken_0x2bc9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc9f4) {
            ctx->pc = 0x2BCA1Cu;
            goto label_2bca1c;
        }
    }
    ctx->pc = 0x2BC9FCu;
label_2bc9fc:
    // 0x2bc9fc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2BC9FCu;
    {
        const bool branch_taken_0x2bc9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9FCu;
        // 0x2bca00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc9fc) {
            ctx->pc = 0x2BCB58u;
            goto label_2bcb58;
        }
    }
    ctx->pc = 0x2BCA04u;
label_2bca04:
    // 0x2bca04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bca04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bca08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bca08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bca0c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2bca0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2bca10: 0x0  nop
    ctx->pc = 0x2bca10u;
    // NOP
    // 0x2bca14: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2bca14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2bca18: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x2bca18u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_2bca1c:
    // 0x2bca1c: 0x0  nop
    ctx->pc = 0x2bca1cu;
    // NOP
    // 0x2bca20: 0x0  nop
    ctx->pc = 0x2bca20u;
    // NOP
    // 0x2bca24: 0x460dad43  div.s       $f21, $f21, $f13
    ctx->pc = 0x2bca24u;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[13]);
    // 0x2bca28: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2bca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bca2c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2bca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bca30: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2bca30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bca34: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2bca34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bca38: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2bca38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bca3c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bca3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bca40: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bca40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bca44: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2bca44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bca48: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bca48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bca4c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bca4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bca50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bca50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca54: 0x13b30006  beq         $sp, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BCA54u;
    {
        const bool branch_taken_0x2bca54 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 19));
        ctx->pc = 0x2BCA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA54u;
        // 0x2bca58: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca54) {
            ctx->pc = 0x2BCA70u;
            goto label_2bca70;
        }
    }
    ctx->pc = 0x2BCA5Cu;
    // 0x2bca5c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2bca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bca60: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2bca60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bca64: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2bca64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bca68: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2bca68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bca6c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2bca6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2bca70:
    // 0x2bca70: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2bca70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bca74: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2BCA74u;
    SET_GPR_U32(ctx, 31, 0x2BCA7Cu);
    ctx->pc = 0x2BCA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA74u;
    // 0x2bca78: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2BCA74u, 0x2BCA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA7Cu;
label_2bca7c:
    // 0x2bca7c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2bca7cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2bca80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bca80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bca84: 0x0  nop
    ctx->pc = 0x2bca84u;
    // NOP
    // 0x2bca88: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2bca88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bca8c: 0x0  nop
    ctx->pc = 0x2bca8cu;
    // NOP
    // 0x2bca90: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2BCA90u;
    {
        const bool branch_taken_0x2bca90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BCA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA90u;
        // 0x2bca94: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca90) {
            ctx->pc = 0x2BCAD4u;
            goto label_2bcad4;
        }
    }
    ctx->pc = 0x2BCA98u;
    // 0x2bca98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bca98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bca9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bca9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bcaa0: 0x0  nop
    ctx->pc = 0x2bcaa0u;
    // NOP
    // 0x2bcaa4: 0x0  nop
    ctx->pc = 0x2bcaa4u;
    // NOP
    // 0x2bcaa8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2bcaa8u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x2bcaac: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2bcaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bcab0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2bcab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcab4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2bcab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcab8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2bcab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2bcabc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2bcabcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2bcac0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2bcac0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2bcac4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2bcac4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2bcac8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2bcac8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2bcacc: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2bcaccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bcad0: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2bcad0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2bcad4:
    // 0x2bcad4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bcad4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bcad8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bcad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bcadc: 0x13b30006  beq         $sp, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BCADCu;
    {
        const bool branch_taken_0x2bcadc = (GPR_U64(ctx, 29) == GPR_U64(ctx, 19));
        ctx->pc = 0x2BCAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCADCu;
        // 0x2bcae0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcadc) {
            ctx->pc = 0x2BCAF8u;
            goto label_2bcaf8;
        }
    }
    ctx->pc = 0x2BCAE4u;
    // 0x2bcae4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2bcae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcae8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2bcae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcaec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2bcaecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bcaf0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2bcaf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2bcaf4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2bcaf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2bcaf8:
    // 0x2bcaf8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2bcaf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcafc: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x2bcafcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2bcb00: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2bcb00u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2bcb04: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2bcb04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bcb08: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2bcb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bcb0c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2bcb0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bcb10: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bcb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bcb14: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x2BCB14u;
    {
        const bool branch_taken_0x2bcb14 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB14u;
        // 0x2bcb18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb14) {
            ctx->pc = 0x2BCB54u;
            goto label_2bcb54;
        }
    }
    ctx->pc = 0x2BCB1Cu;
    // 0x2bcb1c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2bcb1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bcb20:
    // 0x2bcb20: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bcb20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bcb24: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2bcb24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcb28: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bcb28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bcb2c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bcb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bcb30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bcb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bcb34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bcb38: 0xc0aee1a  jal         func_2BB868
    ctx->pc = 0x2BCB38u;
    SET_GPR_U32(ctx, 31, 0x2BCB40u);
    ctx->pc = 0x2BCB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB38u;
    // 0x2bcb3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB868u, 0x2BCB38u, 0x2BCB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB40u;
label_2bcb40:
    // 0x2bcb40: 0x1051ffae  beq         $v0, $s1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x2BCB40u;
    {
        const bool branch_taken_0x2bcb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2BCB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB40u;
        // 0x2bcb44: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb40) {
            ctx->pc = 0x2BC9FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc9fc;
        }
    }
    ctx->pc = 0x2BCB48u;
    // 0x2bcb48: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x2bcb48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2bcb4c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2BCB4Cu;
    {
        const bool branch_taken_0x2bcb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bcb4c) {
            ctx->pc = 0x2BCB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bcb20;
        }
    }
    ctx->pc = 0x2BCB54u;
label_2bcb54:
    // 0x2bcb54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bcb54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bcb58:
    // 0x2bcb58: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2bcb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bcb5c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2bcb5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bcb60: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2bcb60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bcb64: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2bcb64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bcb68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bcb68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bcb6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bcb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bcb70: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2bcb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bcb74: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2bcb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bcb78: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB78u;
        // 0x2bcb7c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCB80u;
}
