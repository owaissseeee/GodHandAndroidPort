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

// Function: func_00304F80
// Address: 0x304f80 - 0x305148
void func_00304F80_0x304f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00304F80_0x304f80");
#endif

    switch (ctx->pc) {
        case 0x304fb0u: goto label_304fb0;
        case 0x304fc4u: goto label_304fc4;
        case 0x304fdcu: goto label_304fdc;
        case 0x305000u: goto label_305000;
        case 0x305010u: goto label_305010;
        case 0x305040u: goto label_305040;
        case 0x305058u: goto label_305058;
        default: break;
    }

    ctx->pc = 0x304f80u;

    // 0x304f80: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x304f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x304f84: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x304f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x304f88: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x304f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x304f8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x304f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304f90: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x304f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x304f94: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x304f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x304f98: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x304f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x304f9c: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x304f9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x304fa0: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x304fa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x304fa4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x304fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x304fa8: 0xc0c038c  jal         func_300E30
    ctx->pc = 0x304FA8u;
    SET_GPR_U32(ctx, 31, 0x304FB0u);
    ctx->pc = 0x304FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304FA8u;
    // 0x304fac: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300E30u, 0x304FA8u, 0x304FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304FB0u;
label_304fb0:
    // 0x304fb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x304fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x304fb4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x304fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x304fb8: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x304fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x304fbc: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x304FBCu;
    SET_GPR_U32(ctx, 31, 0x304FC4u);
    ctx->pc = 0x304FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304FBCu;
    // 0x304fc0: 0xc4540248  lwc1        $f20, 0x248($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x304FBCu, 0x304FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304FC4u;
label_304fc4:
    // 0x304fc4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x304fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x304fc8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x304fc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x304fcc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x304fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x304fd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x304fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304fd4: 0xc051e62  jal         func_147988
    ctx->pc = 0x304FD4u;
    SET_GPR_U32(ctx, 31, 0x304FDCu);
    ctx->pc = 0x304FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304FD4u;
    // 0x304fd8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x304FD4u, 0x304FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304FDCu;
label_304fdc:
    // 0x304fdc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x304fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304fe0: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x304fe0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x304fe4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x304fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x304fe8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x304fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304fec: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x304fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x304ff0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x304ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304ff8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x304FF8u;
    SET_GPR_U32(ctx, 31, 0x305000u);
    ctx->pc = 0x304FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304FF8u;
    // 0x304ffc: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x304FF8u, 0x305000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305000u;
label_305000:
    // 0x305000: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x305000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x305004: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x305004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305008: 0xc0ad8c4  jal         func_2B6310
    ctx->pc = 0x305008u;
    SET_GPR_U32(ctx, 31, 0x305010u);
    ctx->pc = 0x30500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305008u;
    // 0x30500c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6310u, 0x305008u, 0x305010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305010u;
label_305010:
    // 0x305010: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x305010u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x305014: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x305014u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x305018: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x305018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x30501c: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x30501cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x305020: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x305020u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x305024: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x305024u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x305028: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x305028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x30502c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x30502cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x305030: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x305030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x305034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x305034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305038: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x305038u;
    SET_GPR_U32(ctx, 31, 0x305040u);
    ctx->pc = 0x30503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305038u;
    // 0x30503c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x305038u, 0x305040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305040u;
label_305040:
    // 0x305040: 0x8e620100  lw          $v0, 0x100($s3)
    ctx->pc = 0x305040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x305044: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x305044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305048: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x305048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x30504c: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x30504cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x305050: 0xc04078a  jal         func_101E28
    ctx->pc = 0x305050u;
    SET_GPR_U32(ctx, 31, 0x305058u);
    ctx->pc = 0x305054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305050u;
    // 0x305054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x305050u, 0x305058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305058u;
label_305058:
    // 0x305058: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x305058u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x30505c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30505cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x305060: 0x0  nop
    ctx->pc = 0x305060u;
    // NOP
    // 0x305064: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x305064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x305068: 0x0  nop
    ctx->pc = 0x305068u;
    // NOP
    // 0x30506c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x30506Cu;
    {
        const bool branch_taken_0x30506c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x305070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30506Cu;
        // 0x305070: 0xc7a30040  lwc1        $f3, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30506c) {
            ctx->pc = 0x3050A8u;
            goto label_3050a8;
        }
    }
    ctx->pc = 0x305074u;
    // 0x305074: 0x0  nop
    ctx->pc = 0x305074u;
    // NOP
    // 0x305078: 0x0  nop
    ctx->pc = 0x305078u;
    // NOP
    // 0x30507c: 0x4602a883  div.s       $f2, $f21, $f2
    ctx->pc = 0x30507cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[2]);
    // 0x305080: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x305080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x305084: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x305084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x305088: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x305088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30508c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x30508cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x305090: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x305090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x305094: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x305094u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x305098: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x305098u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x30509c: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x30509cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3050a0: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x3050a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3050a4: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x3050a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3050a8:
    // 0x3050a8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x3050a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3050ac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x3050acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3050b0: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x3050b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3050b4: 0x8e630100  lw          $v1, 0x100($s3)
    ctx->pc = 0x3050b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x3050b8: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x3050b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3050bc: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x3050bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3050c0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x3050c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3050c4: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x3050c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3050c8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x3050c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3050cc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x3050ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x3050d0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x3050d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3050d4: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x3050d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3050d8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x3050d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3050dc: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x3050dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3050e0: 0xc460024c  lwc1        $f0, 0x24C($v1)
    ctx->pc = 0x3050e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3050e4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x3050e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3050e8: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x3050e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3050ec: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x3050ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3050f0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x3050f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3050f4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x3050f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x3050f8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x3050f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3050fc: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x3050fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x305100: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x305100u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x305104: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x305104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x305108: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x305108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30510c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x30510cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x305110: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x305110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305114: 0xe6210124  swc1        $f1, 0x124($s1)
    ctx->pc = 0x305114u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x305118: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x305118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x30511c: 0xe6220128  swc1        $f2, 0x128($s1)
    ctx->pc = 0x30511cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x305120: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x305120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x305124: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x305124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x305128: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x305128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30512c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x30512cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x305130: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x305130u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x305134: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x305134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x305138: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x305138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30513c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x30513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x305140: 0x3e00008  jr          $ra
    ctx->pc = 0x305140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305140u;
        // 0x305144: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305148u;
}
