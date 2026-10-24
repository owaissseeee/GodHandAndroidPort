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

// Function: func_0012A3C0
// Address: 0x12a3c0 - 0x12a578
void func_0012A3C0_0x12a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012A3C0_0x12a3c0");
#endif

    switch (ctx->pc) {
        case 0x12a430u: goto label_12a430;
        case 0x12a438u: goto label_12a438;
        case 0x12a44cu: goto label_12a44c;
        case 0x12a464u: goto label_12a464;
        case 0x12a46cu: goto label_12a46c;
        case 0x12a484u: goto label_12a484;
        case 0x12a528u: goto label_12a528;
        default: break;
    }

    ctx->pc = 0x12a3c0u;

    // 0x12a3c0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x12a3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x12a3c4: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x12a3c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x12a3c8: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x12a3c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x12a3cc: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x12a3ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x12a3d0: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x12a3d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x12a3d4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x12a3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x12a3d8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x12a3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x12a3dc: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x12a3dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12a3e0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x12a3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x12a3e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12a3e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a3e8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x12a3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x12a3ec: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x12a3ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12a3f0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x12a3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x12a3f4: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x12a3f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12a3f8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x12a3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x12a3fc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12a3fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a400: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x12a400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x12a404: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x12a404u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x12a408: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12a408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x12a40c: 0x3c01c200  lui         $at, 0xC200
    ctx->pc = 0x12a40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49664 << 16));
    // 0x12a410: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x12a410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x12a414: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x12a414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x12a418: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x12a418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x12a41c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x12a41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x12a420: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x12a420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12a424: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12a424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12a428: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12a428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12a42c: 0x26c464f0  addiu       $a0, $s6, 0x64F0
    ctx->pc = 0x12a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 25840));
label_12a430:
    // 0x12a430: 0xc0a5232  jal         func_2948C8
    ctx->pc = 0x12A430u;
    SET_GPR_U32(ctx, 31, 0x12A438u);
    ctx->pc = 0x12A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A430u;
    // 0x12a434: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2948C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2948C8u, 0x12A430u, 0x12A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A438u;
label_12a438:
    // 0x12a438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12a438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a43c: 0x5200003c  beql        $s0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x12A43Cu;
    {
        const bool branch_taken_0x12a43c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a43c) {
            ctx->pc = 0x12A440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A43Cu;
            // 0x12a440: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A530u;
            goto label_12a530;
        }
    }
    ctx->pc = 0x12A444u;
    // 0x12a444: 0xc06e190  jal         func_1B8640
    ctx->pc = 0x12A444u;
    SET_GPR_U32(ctx, 31, 0x12A44Cu);
    ctx->pc = 0x12A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A444u;
    // 0x12a448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8640u, 0x12A444u, 0x12A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A44Cu;
label_12a44c:
    // 0x12a44c: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x12A44Cu;
    {
        const bool branch_taken_0x12a44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a44c) {
            ctx->pc = 0x12A450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A44Cu;
            // 0x12a450: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A530u;
            goto label_12a530;
        }
    }
    ctx->pc = 0x12A454u;
    // 0x12a454: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x12a454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12a458: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12a458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a45c: 0xc051d5a  jal         func_147568
    ctx->pc = 0x12A45Cu;
    SET_GPR_U32(ctx, 31, 0x12A464u);
    ctx->pc = 0x12A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A45Cu;
    // 0x12a460: 0x26a50080  addiu       $a1, $s5, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x12A45Cu, 0x12A464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A464u;
label_12a464:
    // 0x12a464: 0xc06e1c8  jal         func_1B8720
    ctx->pc = 0x12A464u;
    SET_GPR_U32(ctx, 31, 0x12A46Cu);
    ctx->pc = 0x12A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A464u;
    // 0x12a468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8720u, 0x12A464u, 0x12A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A46Cu;
label_12a46c:
    // 0x12a46c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12a46cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12a470: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x12a470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12a474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a478: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12a478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a47c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x12A47Cu;
    SET_GPR_U32(ctx, 31, 0x12A484u);
    ctx->pc = 0x12A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A47Cu;
    // 0x12a480: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x12A47Cu, 0x12A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A484u;
label_12a484:
    // 0x12a484: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x12a484u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12a488: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x12a488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a48c: 0x13b40006  beq         $sp, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A48Cu;
    {
        const bool branch_taken_0x12a48c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 20));
        ctx->pc = 0x12A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A48Cu;
        // 0x12a490: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a48c) {
            ctx->pc = 0x12A4A8u;
            goto label_12a4a8;
        }
    }
    ctx->pc = 0x12A494u;
    // 0x12a494: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x12a494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a498: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x12a498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12a49c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12a49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12a4a0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x12a4a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12a4a4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x12a4a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12a4a8:
    // 0x12a4a8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x12a4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a4ac: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x12a4acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a4b0: 0x0  nop
    ctx->pc = 0x12a4b0u;
    // NOP
    // 0x12a4b4: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
    ctx->pc = 0x12A4B4u;
    {
        const bool branch_taken_0x12a4b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a4b4) {
            ctx->pc = 0x12A4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A4B4u;
            // 0x12a4b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A530u;
            goto label_12a530;
        }
    }
    ctx->pc = 0x12A4BCu;
    // 0x12a4bc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x12a4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x12a4c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a4c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12a4c4: 0x0  nop
    ctx->pc = 0x12a4c4u;
    // NOP
    // 0x12a4c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a4c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a4cc: 0x0  nop
    ctx->pc = 0x12a4ccu;
    // NOP
    // 0x12a4d0: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x12A4D0u;
    {
        const bool branch_taken_0x12a4d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a4d0) {
            ctx->pc = 0x12A4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A4D0u;
            // 0x12a4d4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A530u;
            goto label_12a530;
        }
    }
    ctx->pc = 0x12A4D8u;
    // 0x12a4d8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x12a4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a4dc: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x12a4dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a4e0: 0x0  nop
    ctx->pc = 0x12a4e0u;
    // NOP
    // 0x12a4e4: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x12A4E4u;
    {
        const bool branch_taken_0x12a4e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a4e4) {
            ctx->pc = 0x12A4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A4E4u;
            // 0x12a4e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A530u;
            goto label_12a530;
        }
    }
    ctx->pc = 0x12A4ECu;
    // 0x12a4ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a4ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a4f0: 0x0  nop
    ctx->pc = 0x12a4f0u;
    // NOP
    // 0x12a4f4: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x12A4F4u;
    {
        const bool branch_taken_0x12a4f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A4F4u;
        // 0x12a4f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4f4) {
            ctx->pc = 0x12A530u;
            goto label_12a530;
        }
    }
    ctx->pc = 0x12A4FCu;
    // 0x12a4fc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x12a4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a500: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x12a500u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a504: 0x0  nop
    ctx->pc = 0x12a504u;
    // NOP
    // 0x12a508: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x12A508u;
    {
        const bool branch_taken_0x12a508 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a508) {
            ctx->pc = 0x12A530u;
            goto label_12a530;
        }
    }
    ctx->pc = 0x12A510u;
    // 0x12a510: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12a510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a514: 0x0  nop
    ctx->pc = 0x12a514u;
    // NOP
    // 0x12a518: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x12A518u;
    {
        const bool branch_taken_0x12a518 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A518u;
        // 0x12a51c: 0x2e420002  sltiu       $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a518) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x12A520u;
    // 0x12a520: 0xc06e146  jal         func_1B8518
    ctx->pc = 0x12A520u;
    SET_GPR_U32(ctx, 31, 0x12A528u);
    ctx->pc = 0x12A524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A520u;
    // 0x12a524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8518u, 0x12A520u, 0x12A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A528u;
label_12a528:
    // 0x12a528: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12A528u;
    {
        const bool branch_taken_0x12a528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A528u;
        // 0x12a52c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a528) {
            ctx->pc = 0x12A540u;
            goto label_12a540;
        }
    }
    ctx->pc = 0x12A530u;
label_12a530:
    // 0x12a530: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x12a530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_12a534:
    // 0x12a534: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x12A534u;
    {
        const bool branch_taken_0x12a534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A534u;
        // 0x12a538: 0x26c464f0  addiu       $a0, $s6, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a534) {
            ctx->pc = 0x12A430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a430;
        }
    }
    ctx->pc = 0x12A53Cu;
    // 0x12a53c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x12a53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_12a540:
    // 0x12a540: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x12a540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12a544: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x12a544u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12a548: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x12a548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12a54c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x12a54cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12a550: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x12a550u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12a554: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x12a554u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12a558: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12a558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12a55c: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x12a55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x12a560: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x12a560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12a564: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x12a564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12a568: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x12a568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12a56c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A56Cu;
        // 0x12a570: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A574u;
    // 0x12a574: 0x0  nop
    ctx->pc = 0x12a574u;
    // NOP
    ctx->pc = 0x12a578u;
}
