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

// Function: func_002ADF50
// Address: 0x2adf50 - 0x2ae1c8
void func_002ADF50_0x2adf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002ADF50_0x2adf50");
#endif

    switch (ctx->pc) {
        case 0x2adfa0u: goto label_2adfa0;
        case 0x2adfdcu: goto label_2adfdc;
        case 0x2adffcu: goto label_2adffc;
        case 0x2ae020u: goto label_2ae020;
        case 0x2ae034u: goto label_2ae034;
        default: break;
    }

    ctx->pc = 0x2adf50u;

    // 0x2adf50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2adf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2adf54: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2adf54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2adf58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2adf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2adf5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2adf5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf60: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2adf60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2adf64: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2adf64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf68: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2adf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2adf6c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2adf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2adf70: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2adf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2adf74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2adf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2adf78: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2adf78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2adf7c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2adf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2adf80: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x2adf80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2adf84: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2ADF84u;
    {
        const bool branch_taken_0x2adf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF84u;
        // 0x2adf88: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adf84) {
            ctx->pc = 0x2AE1A0u;
            goto label_2ae1a0;
        }
    }
    ctx->pc = 0x2ADF8Cu;
    // 0x2adf8c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2adf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2adf90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2adf90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf94: 0x18400082  blez        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x2ADF94u;
    {
        const bool branch_taken_0x2adf94 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2ADF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF94u;
        // 0x2adf98: 0x8e110014  lw          $s1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adf94) {
            ctx->pc = 0x2AE1A0u;
            goto label_2ae1a0;
        }
    }
    ctx->pc = 0x2ADF9Cu;
    // 0x2adf9c: 0x0  nop
    ctx->pc = 0x2adf9cu;
    // NOP
label_2adfa0:
    // 0x2adfa0: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x2adfa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2adfa4: 0x5040007a  beql        $v0, $zero, . + 4 + (0x7A << 2)
    ctx->pc = 0x2ADFA4u;
    {
        const bool branch_taken_0x2adfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adfa4) {
            ctx->pc = 0x2ADFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADFA4u;
            // 0x2adfa8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE190u;
            goto label_2ae190;
        }
    }
    ctx->pc = 0x2ADFACu;
    // 0x2adfac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2adfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2adfb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2adfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2adfb4: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x2adfb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2adfb8: 0x50400075  beql        $v0, $zero, . + 4 + (0x75 << 2)
    ctx->pc = 0x2ADFB8u;
    {
        const bool branch_taken_0x2adfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adfb8) {
            ctx->pc = 0x2ADFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADFB8u;
            // 0x2adfbc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE190u;
            goto label_2ae190;
        }
    }
    ctx->pc = 0x2ADFC0u;
    // 0x2adfc0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2adfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2adfc4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2adfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2adfc8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2adfc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adfcc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2adfccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2adfd0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2adfd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2adfd4: 0xc04ddfa  jal         func_1377E8
    ctx->pc = 0x2ADFD4u;
    SET_GPR_U32(ctx, 31, 0x2ADFDCu);
    ctx->pc = 0x2ADFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADFD4u;
    // 0x2adfd8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1377E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377E8u, 0x2ADFD4u, 0x2ADFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADFDCu;
label_2adfdc:
    // 0x2adfdc: 0x5040006c  beql        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x2ADFDCu;
    {
        const bool branch_taken_0x2adfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adfdc) {
            ctx->pc = 0x2ADFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADFDCu;
            // 0x2adfe0: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE190u;
            goto label_2ae190;
        }
    }
    ctx->pc = 0x2ADFE4u;
    // 0x2adfe4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2adfe4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2adfe8: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x2adfe8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2adfec: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2adfecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2adff0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2adff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2adff4: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2ADFF4u;
    SET_GPR_U32(ctx, 31, 0x2ADFFCu);
    ctx->pc = 0x2ADFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADFF4u;
    // 0x2adff8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2ADFF4u, 0x2ADFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADFFCu;
label_2adffc:
    // 0x2adffc: 0x0  nop
    ctx->pc = 0x2adffcu;
    // NOP
    // 0x2ae000: 0x0  nop
    ctx->pc = 0x2ae000u;
    // NOP
    // 0x2ae004: 0x46000504  c1          0x504
    ctx->pc = 0x2ae004u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2ae008: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x2ae008u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ae00c: 0x0  nop
    ctx->pc = 0x2ae00cu;
    // NOP
    // 0x2ae010: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE010u;
    {
        const bool branch_taken_0x2ae010 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AE014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE010u;
        // 0x2ae014: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae010) {
            ctx->pc = 0x2AE028u;
            goto label_2ae028;
        }
    }
    ctx->pc = 0x2AE018u;
    // 0x2ae018: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x2AE018u;
    SET_GPR_U32(ctx, 31, 0x2AE020u);
    ctx->pc = 0x2AE01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE018u;
    // 0x2ae01c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x2AE018u, 0x2AE020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE020u;
label_2ae020:
    // 0x2ae020: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ae020u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2ae024: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2ae024u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2ae028:
    // 0x2ae028: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2ae028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ae02c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2AE02Cu;
    SET_GPR_U32(ctx, 31, 0x2AE034u);
    ctx->pc = 0x2AE030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE02Cu;
    // 0x2ae030: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2AE02Cu, 0x2AE034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE034u;
label_2ae034:
    // 0x2ae034: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2ae034u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2ae038: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ae038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ae03c: 0x0  nop
    ctx->pc = 0x2ae03cu;
    // NOP
    // 0x2ae040: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2ae040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ae044: 0x0  nop
    ctx->pc = 0x2ae044u;
    // NOP
    // 0x2ae048: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2AE048u;
    {
        const bool branch_taken_0x2ae048 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE048u;
        // 0x2ae04c: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae048) {
            ctx->pc = 0x2AE08Cu;
            goto label_2ae08c;
        }
    }
    ctx->pc = 0x2AE050u;
    // 0x2ae050: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ae050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ae054: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ae054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ae058: 0x0  nop
    ctx->pc = 0x2ae058u;
    // NOP
    // 0x2ae05c: 0x0  nop
    ctx->pc = 0x2ae05cu;
    // NOP
    // 0x2ae060: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2ae060u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x2ae064: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2ae064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ae068: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2ae068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ae06c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2ae06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae070: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2ae070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2ae074: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2ae074u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2ae078: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2ae078u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2ae07c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2ae07cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2ae080: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2ae080u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2ae084: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2ae084u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ae088: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2ae088u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2ae08c:
    // 0x2ae08c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2ae08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ae090: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ae090u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ae094: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ae094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ae098: 0x13b20006  beq         $sp, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE098u;
    {
        const bool branch_taken_0x2ae098 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x2AE09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE098u;
        // 0x2ae09c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae098) {
            ctx->pc = 0x2AE0B4u;
            goto label_2ae0b4;
        }
    }
    ctx->pc = 0x2AE0A0u;
    // 0x2ae0a0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2ae0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae0a4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2ae0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ae0a8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2ae0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ae0ac: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2ae0acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ae0b0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2ae0b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2ae0b4:
    // 0x2ae0b4: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x2ae0b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x2ae0b8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2ae0b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae0bc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ae0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ae0c0: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ae0c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae0c4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2ae0c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2ae0c8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2ae0c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ae0cc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2ae0ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ae0d0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ae0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ae0d4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ae0d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ae0d8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ae0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ae0dc: 0x13b20006  beq         $sp, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE0DCu;
    {
        const bool branch_taken_0x2ae0dc = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x2AE0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0DCu;
        // 0x2ae0e0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae0dc) {
            ctx->pc = 0x2AE0F8u;
            goto label_2ae0f8;
        }
    }
    ctx->pc = 0x2AE0E4u;
    // 0x2ae0e4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2ae0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae0e8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2ae0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ae0ec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2ae0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ae0f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2ae0f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ae0f4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2ae0f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2ae0f8:
    // 0x2ae0f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ae0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae0fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ae0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ae100: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2ae100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2ae104: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ae104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ae108: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x2ae108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x2ae10c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2ae10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae110: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ae110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2ae114: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ae114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ae118: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2ae118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2ae11c: 0x107d0006  beq         $v1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE11Cu;
    {
        const bool branch_taken_0x2ae11c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x2AE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE11Cu;
        // 0x2ae120: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae11c) {
            ctx->pc = 0x2AE138u;
            goto label_2ae138;
        }
    }
    ctx->pc = 0x2AE124u;
    // 0x2ae124: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2ae124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae128: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2ae128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2ae12c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2ae12cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2ae130: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ae130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae134: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2ae134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2ae138:
    // 0x2ae138: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ae138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae13c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ae13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ae140: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2ae140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2ae144: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2ae144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2ae148: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2ae148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ae14c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2ae14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ae150: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x2ae150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x2ae154: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2ae154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae158: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ae158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2ae15c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2ae15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ae160: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2ae160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2ae164: 0x107d0006  beq         $v1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE164u;
    {
        const bool branch_taken_0x2ae164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x2AE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE164u;
        // 0x2ae168: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae164) {
            ctx->pc = 0x2AE180u;
            goto label_2ae180;
        }
    }
    ctx->pc = 0x2AE16Cu;
    // 0x2ae16c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2ae16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae170: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2ae170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2ae174: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2ae174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2ae178: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ae178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae17c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2ae17cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2ae180:
    // 0x2ae180: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ae180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ae184: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ae184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ae188: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2ae188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2ae18c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ae18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ae190:
    // 0x2ae190: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ae190u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ae194: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2ae194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ae198: 0x1440ff81  bnez        $v0, . + 4 + (-0x7F << 2)
    ctx->pc = 0x2AE198u;
    {
        const bool branch_taken_0x2ae198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE198u;
        // 0x2ae19c: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae198) {
            ctx->pc = 0x2ADFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2adfa0;
        }
    }
    ctx->pc = 0x2AE1A0u;
label_2ae1a0:
    // 0x2ae1a0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2ae1a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ae1a4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2ae1a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ae1a8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2ae1a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ae1ac: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2ae1acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ae1b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ae1b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae1b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ae1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae1b8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2ae1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ae1bc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2ae1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ae1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1C0u;
        // 0x2ae1c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE1C8u;
}
