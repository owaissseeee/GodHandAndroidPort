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

// Function: func_0012A108
// Address: 0x12a108 - 0x12a2e0
void func_0012A108_0x12a108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012A108_0x12a108");
#endif

    switch (ctx->pc) {
        case 0x12a1a0u: goto label_12a1a0;
        case 0x12a1a8u: goto label_12a1a8;
        case 0x12a1bcu: goto label_12a1bc;
        case 0x12a1d4u: goto label_12a1d4;
        case 0x12a1dcu: goto label_12a1dc;
        case 0x12a1f4u: goto label_12a1f4;
        case 0x12a28cu: goto label_12a28c;
        default: break;
    }

    ctx->pc = 0x12a108u;

    // 0x12a108: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x12a108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x12a10c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x12a10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x12a110: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x12a110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x12a114: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12a114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a118: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x12a118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x12a11c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x12a11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x12a120: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x12a120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x12a124: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x12a124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x12a128: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x12a128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x12a12c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12a12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x12a130: 0xe7b90118  swc1        $f25, 0x118($sp)
    ctx->pc = 0x12a130u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x12a134: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x12a134u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x12a138: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x12a138u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x12a13c: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x12a13cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x12a140: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x12a140u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x12a144: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x12a144u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x12a148: 0x8e8206a0  lw          $v0, 0x6A0($s4)
    ctx->pc = 0x12a148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1696)));
    // 0x12a14c: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x12A14Cu;
    {
        const bool branch_taken_0x12a14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A14Cu;
        // 0x12a150: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a14c) {
            ctx->pc = 0x12A2A4u;
            goto label_12a2a4;
        }
    }
    ctx->pc = 0x12A154u;
    // 0x12a154: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12a154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x12a158: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x12a158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x12a15c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12a15cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a160: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12a160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12a164: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x12a164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x12a168: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x12a168u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x12a16c: 0x3c01bf4c  lui         $at, 0xBF4C
    ctx->pc = 0x12a16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48972 << 16));
    // 0x12a170: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12a170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12a174: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x12a174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x12a178: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x12a178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12a17c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x12a17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x12a180: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x12a180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x12a184: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x12a184u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12a188: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x12a188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x12a18c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x12a18cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12a190: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x12a190u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12a194: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12a194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12a198: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12a198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12a19c: 0x26c464f0  addiu       $a0, $s6, 0x64F0
    ctx->pc = 0x12a19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 25840));
label_12a1a0:
    // 0x12a1a0: 0xc0a5232  jal         func_2948C8
    ctx->pc = 0x12A1A0u;
    SET_GPR_U32(ctx, 31, 0x12A1A8u);
    ctx->pc = 0x12A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A1A0u;
    // 0x12a1a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2948C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2948C8u, 0x12A1A0u, 0x12A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A1A8u;
label_12a1a8:
    // 0x12a1a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12a1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1ac: 0x52000039  beql        $s0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x12A1ACu;
    {
        const bool branch_taken_0x12a1ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a1ac) {
            ctx->pc = 0x12A1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A1ACu;
            // 0x12a1b0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A294u;
            goto label_12a294;
        }
    }
    ctx->pc = 0x12A1B4u;
    // 0x12a1b4: 0xc06e190  jal         func_1B8640
    ctx->pc = 0x12A1B4u;
    SET_GPR_U32(ctx, 31, 0x12A1BCu);
    ctx->pc = 0x12A1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A1B4u;
    // 0x12a1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8640u, 0x12A1B4u, 0x12A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A1BCu;
label_12a1bc:
    // 0x12a1bc: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x12A1BCu;
    {
        const bool branch_taken_0x12a1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a1bc) {
            ctx->pc = 0x12A1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A1BCu;
            // 0x12a1c0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A294u;
            goto label_12a294;
        }
    }
    ctx->pc = 0x12A1C4u;
    // 0x12a1c4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x12a1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12a1c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12a1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1cc: 0xc051d5a  jal         func_147568
    ctx->pc = 0x12A1CCu;
    SET_GPR_U32(ctx, 31, 0x12A1D4u);
    ctx->pc = 0x12A1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A1CCu;
    // 0x12a1d0: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x12A1CCu, 0x12A1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A1D4u;
label_12a1d4:
    // 0x12a1d4: 0xc06e1c8  jal         func_1B8720
    ctx->pc = 0x12A1D4u;
    SET_GPR_U32(ctx, 31, 0x12A1DCu);
    ctx->pc = 0x12A1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A1D4u;
    // 0x12a1d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8720u, 0x12A1D4u, 0x12A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A1DCu;
label_12a1dc:
    // 0x12a1dc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x12a1dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12a1e0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x12a1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a1e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12a1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12a1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1ec: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x12A1ECu;
    SET_GPR_U32(ctx, 31, 0x12A1F4u);
    ctx->pc = 0x12A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A1ECu;
    // 0x12a1f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x12A1ECu, 0x12A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A1F4u;
label_12a1f4:
    // 0x12a1f4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x12a1f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12a1f8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x12a1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12a1fc: 0x13b50006  beq         $sp, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A1FCu;
    {
        const bool branch_taken_0x12a1fc = (GPR_U64(ctx, 29) == GPR_U64(ctx, 21));
        ctx->pc = 0x12A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A1FCu;
        // 0x12a200: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a1fc) {
            ctx->pc = 0x12A218u;
            goto label_12a218;
        }
    }
    ctx->pc = 0x12A204u;
    // 0x12a204: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x12a204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a208: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x12a208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12a20c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12a20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12a210: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x12a210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12a214: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x12a214u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_12a218:
    // 0x12a218: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x12a218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a21c: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x12a21cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a220: 0x0  nop
    ctx->pc = 0x12a220u;
    // NOP
    // 0x12a224: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
    ctx->pc = 0x12A224u;
    {
        const bool branch_taken_0x12a224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a224) {
            ctx->pc = 0x12A228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A224u;
            // 0x12a228: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A294u;
            goto label_12a294;
        }
    }
    ctx->pc = 0x12A22Cu;
    // 0x12a22c: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x12a22cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a230: 0x0  nop
    ctx->pc = 0x12a230u;
    // NOP
    // 0x12a234: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x12A234u;
    {
        const bool branch_taken_0x12a234 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a234) {
            ctx->pc = 0x12A238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A234u;
            // 0x12a238: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A294u;
            goto label_12a294;
        }
    }
    ctx->pc = 0x12A23Cu;
    // 0x12a23c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x12a23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a240: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x12a240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a244: 0x0  nop
    ctx->pc = 0x12a244u;
    // NOP
    // 0x12a248: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x12A248u;
    {
        const bool branch_taken_0x12a248 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a248) {
            ctx->pc = 0x12A24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A248u;
            // 0x12a24c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A294u;
            goto label_12a294;
        }
    }
    ctx->pc = 0x12A250u;
    // 0x12a250: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x12a250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a254: 0x0  nop
    ctx->pc = 0x12a254u;
    // NOP
    // 0x12a258: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x12A258u;
    {
        const bool branch_taken_0x12a258 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A258u;
        // 0x12a25c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a258) {
            ctx->pc = 0x12A294u;
            goto label_12a294;
        }
    }
    ctx->pc = 0x12A260u;
    // 0x12a260: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x12a260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a264: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x12a264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a268: 0x0  nop
    ctx->pc = 0x12a268u;
    // NOP
    // 0x12a26c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x12A26Cu;
    {
        const bool branch_taken_0x12a26c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a26c) {
            ctx->pc = 0x12A294u;
            goto label_12a294;
        }
    }
    ctx->pc = 0x12A274u;
    // 0x12a274: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12a274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a278: 0x0  nop
    ctx->pc = 0x12a278u;
    // NOP
    // 0x12a27c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x12A27Cu;
    {
        const bool branch_taken_0x12a27c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A27Cu;
        // 0x12a280: 0x2e420002  sltiu       $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a27c) {
            ctx->pc = 0x12A298u;
            goto label_12a298;
        }
    }
    ctx->pc = 0x12A284u;
    // 0x12a284: 0xc0b6ec2  jal         func_2DBB08
    ctx->pc = 0x12A284u;
    SET_GPR_U32(ctx, 31, 0x12A28Cu);
    ctx->pc = 0x2DBB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBB08u, 0x12A284u, 0x12A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A28Cu;
label_12a28c:
    // 0x12a28c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12A28Cu;
    {
        const bool branch_taken_0x12a28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A28Cu;
        // 0x12a290: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a28c) {
            ctx->pc = 0x12A2A4u;
            goto label_12a2a4;
        }
    }
    ctx->pc = 0x12A294u;
label_12a294:
    // 0x12a294: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x12a294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_12a298:
    // 0x12a298: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x12A298u;
    {
        const bool branch_taken_0x12a298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A298u;
        // 0x12a29c: 0x26c464f0  addiu       $a0, $s6, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a298) {
            ctx->pc = 0x12A1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a1a0;
        }
    }
    ctx->pc = 0x12A2A0u;
    // 0x12a2a0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x12a2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_12a2a4:
    // 0x12a2a4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x12a2a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12a2a8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x12a2a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12a2ac: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x12a2acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12a2b0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x12a2b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12a2b4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x12a2b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12a2b8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x12a2b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12a2bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12a2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12a2c0: 0xc7b90118  lwc1        $f25, 0x118($sp)
    ctx->pc = 0x12a2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x12a2c4: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x12a2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x12a2c8: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x12a2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x12a2cc: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x12a2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12a2d0: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x12a2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12a2d4: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x12a2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12a2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x12A2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2D8u;
        // 0x12a2dc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A2E0u;
}
