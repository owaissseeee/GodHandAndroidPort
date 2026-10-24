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

// Function: func_002BC6C8
// Address: 0x2bc6c8 - 0x2bc950
void func_002BC6C8_0x2bc6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BC6C8_0x2bc6c8");
#endif

    switch (ctx->pc) {
        case 0x2bc730u: goto label_2bc730;
        case 0x2bc750u: goto label_2bc750;
        case 0x2bc7b4u: goto label_2bc7b4;
        case 0x2bc880u: goto label_2bc880;
        case 0x2bc8a8u: goto label_2bc8a8;
        case 0x2bc8c0u: goto label_2bc8c0;
        case 0x2bc910u: goto label_2bc910;
        default: break;
    }

    ctx->pc = 0x2bc6c8u;

    // 0x2bc6c8: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2bc6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x2bc6cc: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x2bc6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x2bc6d0: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x2bc6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x2bc6d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bc6d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc6d8: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x2bc6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x2bc6dc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2bc6dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc6e0: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x2bc6e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x2bc6e4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2bc6e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc6e8: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x2bc6e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2bc6ec: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2bc6ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2bc6f0: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x2bc6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x2bc6f4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2bc6f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2bc6f8: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x2bc6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x2bc6fc: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x2bc6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x2bc700: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x2bc700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x2bc704: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x2bc704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x2bc708: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x2bc708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x2bc70c: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2bc70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2bc710: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2bc710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc714: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2bc714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc718: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2bc718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bc71c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2bc71cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bc720: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2bc720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc724: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bc724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc728: 0xc051f18  jal         func_147C60
    ctx->pc = 0x2BC728u;
    SET_GPR_U32(ctx, 31, 0x2BC730u);
    ctx->pc = 0x2BC72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC728u;
    // 0x2bc72c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x2BC728u, 0x2BC730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC730u;
label_2bc730:
    // 0x2bc730: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x2bc730u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bc734: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x2bc734u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bc738: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2bc738u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bc73c: 0xfa040020  sqc2        $vf4, 0x20($s0)
    ctx->pc = 0x2bc73cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc740: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bc740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc744: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bc744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc748: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BC748u;
    SET_GPR_U32(ctx, 31, 0x2BC750u);
    ctx->pc = 0x2BC74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC748u;
    // 0x2bc74c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BC748u, 0x2BC750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC750u;
label_2bc750:
    // 0x2bc750: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2bc750u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bc754: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2bc754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc758: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2bc758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc75c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2bc75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc760: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2bc760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc764: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2bc764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bc768: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2bc768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bc76c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2bc76cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2bc770: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2bc770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc774: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2bc774u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bc778: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2bc778u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc77c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bc77cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bc780: 0xfa040020  sqc2        $vf4, 0x20($s0)
    ctx->pc = 0x2bc780u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc784: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2bc784u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bc788: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2bc788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc78c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2bc78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc790: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2bc790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc794: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2bc794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc798: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2bc798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bc79c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2bc79cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2bc7a0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2bc7a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2bc7a4: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2bc7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc7a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7ac: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2BC7ACu;
    SET_GPR_U32(ctx, 31, 0x2BC7B4u);
    ctx->pc = 0x2BC7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC7ACu;
    // 0x2bc7b0: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2BC7ACu, 0x2BC7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC7B4u;
label_2bc7b4:
    // 0x2bc7b4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2bc7b4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2bc7b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bc7b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc7bc: 0x0  nop
    ctx->pc = 0x2bc7bcu;
    // NOP
    // 0x2bc7c0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2bc7c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc7c4: 0x0  nop
    ctx->pc = 0x2bc7c4u;
    // NOP
    // 0x2bc7c8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2BC7C8u;
    {
        const bool branch_taken_0x2bc7c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7C8u;
        // 0x2bc7cc: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc7c8) {
            ctx->pc = 0x2BC810u;
            goto label_2bc810;
        }
    }
    ctx->pc = 0x2BC7D0u;
    // 0x2bc7d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc7d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2bc7d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bc7d8: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x2bc7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc7dc: 0x0  nop
    ctx->pc = 0x2bc7dcu;
    // NOP
    // 0x2bc7e0: 0x0  nop
    ctx->pc = 0x2bc7e0u;
    // NOP
    // 0x2bc7e4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2bc7e4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x2bc7e8: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x2bc7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bc7ec: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x2bc7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc7f0: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x2bc7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc7f4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2bc7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2bc7f8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2bc7f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2bc7fc: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2bc7fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2bc800: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2bc800u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2bc804: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2bc804u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bc808: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x2bc808u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bc80c: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x2bc80cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2bc810:
    // 0x2bc810: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2bc810u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bc814: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2bc814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc818: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2bc818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc81c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2bc81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc820: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2bc820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc824: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2bc824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bc828: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2bc828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2bc82c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2bc82cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2bc830: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bc830u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc834: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x2bc834u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2bc838: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2bc838u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2bc83c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2bc83cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bc840: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bc840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc844: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2bc844u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc848: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x2bc848u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2bc84c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bc84cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bc850: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2bc850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc854: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bc854u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc858: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x2bc858u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2bc85c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bc85cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bc860: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bc860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc864: 0x4614a000  add.s       $f0, $f20, $f20
    ctx->pc = 0x2bc864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x2bc868: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2bc868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bc86c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2bc86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bc870: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bc870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bc874: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2bc874u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc878: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2bc878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bc87c: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x2bc87cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_2bc880:
    // 0x2bc880: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2bc880u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc884: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bc884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bc888: 0x0  nop
    ctx->pc = 0x2bc888u;
    // NOP
    // 0x2bc88c: 0x0  nop
    ctx->pc = 0x2bc88cu;
    // NOP
    // 0x2bc890: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BC890u;
    {
        const bool branch_taken_0x2bc890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2BC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC890u;
        // 0x2bc894: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc890) {
            ctx->pc = 0x2BC880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc880;
        }
    }
    ctx->pc = 0x2BC898u;
    // 0x2bc898: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bc898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc89c: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x2bc89cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bc8a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8a4: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2bc8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2bc8a8:
    // 0x2bc8a8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bc8a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bc8ac: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2bc8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc8b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bc8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8b4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2bc8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8b8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BC8B8u;
    SET_GPR_U32(ctx, 31, 0x2BC8C0u);
    ctx->pc = 0x2BC8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC8B8u;
    // 0x2bc8bc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BC8B8u, 0x2BC8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC8C0u;
label_2bc8c0:
    // 0x2bc8c0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2bc8c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bc8c4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bc8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc8c8: 0x12140006  beq         $s0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC8C8u;
    {
        const bool branch_taken_0x2bc8c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x2BC8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8C8u;
        // 0x2bc8cc: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8c8) {
            ctx->pc = 0x2BC8E4u;
            goto label_2bc8e4;
        }
    }
    ctx->pc = 0x2BC8D0u;
    // 0x2bc8d0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2bc8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2bc8d4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2bc8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc8d8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2bc8d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2bc8dc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2bc8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc8e0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2bc8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2bc8e4:
    // 0x2bc8e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2bc8e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2bc8e8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2bc8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2bc8ec: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x2bc8ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2bc8f0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2BC8F0u;
    {
        const bool branch_taken_0x2bc8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8F0u;
        // 0x2bc8f4: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8f0) {
            ctx->pc = 0x2BC8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc8a8;
        }
    }
    ctx->pc = 0x2BC8F8u;
    // 0x2bc8f8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2bc8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bc8fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bc900: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2bc900u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2bc904: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2bc904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc908: 0xc0af254  jal         func_2BC950
    ctx->pc = 0x2BC908u;
    SET_GPR_U32(ctx, 31, 0x2BC910u);
    ctx->pc = 0x2BC90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC908u;
    // 0x2bc90c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC950u, 0x2BC908u, 0x2BC910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC910u;
label_2bc910:
    // 0x2bc910: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x2bc910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2bc914: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x2bc914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2bc918: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x2bc918u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2bc91c: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x2bc91cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2bc920: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x2bc920u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2bc924: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x2bc924u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bc928: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x2bc928u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bc92c: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x2bc92cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bc930: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x2bc930u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bc934: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2bc934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bc938: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x2bc938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bc93c: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x2bc93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bc940: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC940u;
        // 0x2bc944: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC948u;
    // 0x2bc948: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2bc948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bc94c: 0x0  nop
    ctx->pc = 0x2bc94cu;
    // NOP
    ctx->pc = 0x2bc950u;
}
