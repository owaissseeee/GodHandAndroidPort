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

// Function: func_002BCF28
// Address: 0x2bcf28 - 0x2bd078
void func_002BCF28_0x2bcf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BCF28_0x2bcf28");
#endif

    switch (ctx->pc) {
        case 0x2bcf88u: goto label_2bcf88;
        case 0x2bcfacu: goto label_2bcfac;
        case 0x2bcfdcu: goto label_2bcfdc;
        case 0x2bcffcu: goto label_2bcffc;
        case 0x2bd040u: goto label_2bd040;
        default: break;
    }

    ctx->pc = 0x2bcf28u;

    // 0x2bcf28: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2bcf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2bcf2c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2bcf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2bcf30: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2bcf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2bcf34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bcf34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf38: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x2bcf38u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2bcf3c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2bcf3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf40: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x2bcf40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2bcf44: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x2bcf44u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x2bcf48: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2bcf48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2bcf4c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2bcf4cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2bcf50: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2bcf50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2bcf54: 0x46007d46  mov.s       $f21, $f15
    ctx->pc = 0x2bcf54u;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
    // 0x2bcf58: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2bcf58u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2bcf5c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2bcf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2bcf60: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2bcf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2bcf64: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2bcf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2bcf68: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2bcf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2bcf6c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2bcf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bcf70: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2bcf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bcf74: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2bcf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bcf78: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2bcf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bcf7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bcf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf80: 0xc051f18  jal         func_147C60
    ctx->pc = 0x2BCF80u;
    SET_GPR_U32(ctx, 31, 0x2BCF88u);
    ctx->pc = 0x2BCF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF80u;
    // 0x2bcf84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x2BCF80u, 0x2BCF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF88u;
label_2bcf88:
    // 0x2bcf88: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2bcf88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bcf8c: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x2bcf8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bcf90: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2bcf90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bcf94: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2bcf94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bcf98: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2bcf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bcf9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bcf9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcfa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcfa4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BCFA4u;
    SET_GPR_U32(ctx, 31, 0x2BCFACu);
    ctx->pc = 0x2BCFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCFA4u;
    // 0x2bcfa8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BCFA4u, 0x2BCFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCFACu;
label_2bcfac:
    // 0x2bcfac: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bcfacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bcfb0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2bcfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bcfb4: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x2bcfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcfb8: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2bcfb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bcfbc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2bcfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcfc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bcfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcfc4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2bcfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcfc8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bcfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcfcc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2bcfccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bcfd0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2bcfd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bcfd4: 0xc051f18  jal         func_147C60
    ctx->pc = 0x2BCFD4u;
    SET_GPR_U32(ctx, 31, 0x2BCFDCu);
    ctx->pc = 0x2BCFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCFD4u;
    // 0x2bcfd8: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x2BCFD4u, 0x2BCFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCFDCu;
label_2bcfdc:
    // 0x2bcfdc: 0xe7b50034  swc1        $f21, 0x34($sp)
    ctx->pc = 0x2bcfdcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bcfe0: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2bcfe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bcfe4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2bcfe4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bcfe8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2bcfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bcfec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bcfecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcff4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BCFF4u;
    SET_GPR_U32(ctx, 31, 0x2BCFFCu);
    ctx->pc = 0x2BCFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCFF4u;
    // 0x2bcff8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BCFF4u, 0x2BCFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCFFCu;
label_2bcffc:
    // 0x2bcffc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bcffcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bd000: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2bd000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd004: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2bd004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd008: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bd008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd00c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2bd00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd010: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2bd010u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2bd014: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2bd014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd018: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2bd018u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2bd01c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2bd01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd020: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2bd020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd024: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x2bd024u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x2bd028: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x2bd028u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x2bd02c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bd02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bd030: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bd030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd034: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2bd034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bd038: 0xc0af03e  jal         func_2BC0F8
    ctx->pc = 0x2BD038u;
    SET_GPR_U32(ctx, 31, 0x2BD040u);
    ctx->pc = 0x2BD03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD038u;
    // 0x2bd03c: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F8u, 0x2BD038u, 0x2BD040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD040u;
label_2bd040:
    // 0x2bd040: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2bd040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2bd044: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2bd044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bd048: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2bd048u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bd04c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2bd04cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bd050: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2bd050u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bd054: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2bd054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bd058: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x2bd058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2bd05c: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x2bd05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2bd060: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2bd060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bd064: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2bd064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bd068: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD068u;
        // 0x2bd06c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD070u;
    // 0x2bd070: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2bd070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bd074: 0x0  nop
    ctx->pc = 0x2bd074u;
    // NOP
    ctx->pc = 0x2bd078u;
}
