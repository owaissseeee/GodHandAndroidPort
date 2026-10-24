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

// Function: Draw_Line_sc
// Address: 0x15f0b8 - 0x15f2a8
void Draw_Line_sc_0x15f0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw_Line_sc_0x15f0b8");
#endif

    switch (ctx->pc) {
        case 0x15f150u: goto label_15f150;
        case 0x15f1b8u: goto label_15f1b8;
        case 0x15f244u: goto label_15f244;
        default: break;
    }

    ctx->pc = 0x15f0b8u;

    // 0x15f0b8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x15f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x15f0bc: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x15f0bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x15f0c0: 0x8c437a2c  lw          $v1, 0x7A2C($v0)
    ctx->pc = 0x15f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x15f0c4: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x15f0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x15f0c8: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x15f0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x15f0cc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x15f0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x15f0d0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x15f0d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f0d4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x15f0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x15f0d8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x15f0d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f0dc: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x15f0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x15f0e0: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x15f0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x15f0e4: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x15f0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x15f0e8: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x15f0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x15f0ec: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x15f0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x15f0f0: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x15f0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x15f0f4: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x15f0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x15f0f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x15f0fc: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x15f0fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x15f100: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x15F100u;
    {
        const bool branch_taken_0x15f100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F100u;
        // 0x15f104: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f100) {
            ctx->pc = 0x15F25Cu;
            goto label_15f25c;
        }
    }
    ctx->pc = 0x15F108u;
    // 0x15f108: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F108u;
    {
        const bool branch_taken_0x15f108 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F108u;
        // 0x15f10c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f108) {
            ctx->pc = 0x15F120u;
            goto label_15f120;
        }
    }
    ctx->pc = 0x15F110u;
    // 0x15f110: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x15f110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15f114: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x15f114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x15f118: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x15f118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15f11c: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x15f11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
label_15f120:
    // 0x15f120: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x15f120u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x15f124: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x15f124u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f128: 0x12a0004c  beqz        $s5, . + 4 + (0x4C << 2)
    ctx->pc = 0x15F128u;
    {
        const bool branch_taken_0x15f128 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F128u;
        // 0x15f12c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f128) {
            ctx->pc = 0x15F25Cu;
            goto label_15f25c;
        }
    }
    ctx->pc = 0x15F130u;
    // 0x15f130: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15f130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15f134: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x15f134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x15f138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15f138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f13c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x15f13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15f140: 0x3c1e0058  lui         $fp, 0x58
    ctx->pc = 0x15f140u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)88 << 16));
    // 0x15f144: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x15f144u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15f148: 0x2493fff0  addiu       $s3, $a0, -0x10
    ctx->pc = 0x15f148u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x15f14c: 0x0  nop
    ctx->pc = 0x15f14cu;
    // NOP
label_15f150:
    // 0x15f150: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x15f150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x15f154: 0xc7c36b80  lwc1        $f3, 0x6B80($fp)
    ctx->pc = 0x15f154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 27520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15f158: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x15f158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x15f15c: 0x8c621180  lw          $v0, 0x1180($v1)
    ctx->pc = 0x15f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x15f160: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15f160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f164: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x15f164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f168: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15f168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f16c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x15f16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x15f170: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x15f170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f174: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f178: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x15f178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x15f17c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15f17cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15f180: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x15f180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x15f184: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x15f184u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15f188: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x15f188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f18c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x15f18cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15f190: 0x0  nop
    ctx->pc = 0x15f190u;
    // NOP
    // 0x15f194: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x15f194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x15f198: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x15f198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x15f19c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x15f19cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x15f1a0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x15f1a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x15f1a4: 0xe7b5005c  swc1        $f21, 0x5C($sp)
    ctx->pc = 0x15f1a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x15f1a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15f1a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f1ac: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x15f1acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x15f1b0: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x15F1B0u;
    SET_GPR_U32(ctx, 31, 0x15F1B8u);
    ctx->pc = 0x15F1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F1B0u;
    // 0x15f1b4: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x15F1B0u, 0x15F1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F1B8u;
label_15f1b8:
    // 0x15f1b8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x15f1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f1bc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x15f1bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f1c0: 0x0  nop
    ctx->pc = 0x15f1c0u;
    // NOP
    // 0x15f1c4: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x15F1C4u;
    {
        const bool branch_taken_0x15f1c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f1c4) {
            ctx->pc = 0x15F1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F1C4u;
            // 0x15f1c8: 0x24120080  addiu       $s2, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F210u;
            goto label_15f210;
        }
    }
    ctx->pc = 0x15F1CCu;
    // 0x15f1cc: 0x3c01457f  lui         $at, 0x457F
    ctx->pc = 0x15f1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17791 << 16));
    // 0x15f1d0: 0x3421fe66  ori         $at, $at, 0xFE66
    ctx->pc = 0x15f1d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65126);
    // 0x15f1d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15f1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f1d8: 0x0  nop
    ctx->pc = 0x15f1d8u;
    // NOP
    // 0x15f1dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15f1dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f1e0: 0x0  nop
    ctx->pc = 0x15f1e0u;
    // NOP
    // 0x15f1e4: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x15F1E4u;
    {
        const bool branch_taken_0x15f1e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f1e4) {
            ctx->pc = 0x15F1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F1E4u;
            // 0x15f1e8: 0x24120080  addiu       $s2, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F210u;
            goto label_15f210;
        }
    }
    ctx->pc = 0x15F1ECu;
    // 0x15f1ec: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x15f1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f1f0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x15f1f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f1f4: 0x0  nop
    ctx->pc = 0x15f1f4u;
    // NOP
    // 0x15f1f8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x15F1F8u;
    {
        const bool branch_taken_0x15f1f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f1f8) {
            ctx->pc = 0x15F1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F1F8u;
            // 0x15f1fc: 0x24120080  addiu       $s2, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F210u;
            goto label_15f210;
        }
    }
    ctx->pc = 0x15F200u;
    // 0x15f200: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15f200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f204: 0x0  nop
    ctx->pc = 0x15f204u;
    // NOP
    // 0x15f208: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15F208u;
    {
        const bool branch_taken_0x15f208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15f208) {
            ctx->pc = 0x15F20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F208u;
            // 0x15f20c: 0x24120080  addiu       $s2, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F210u;
            goto label_15f210;
        }
    }
    ctx->pc = 0x15F210u;
label_15f210:
    // 0x15f210: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x15F210u;
    {
        const bool branch_taken_0x15f210 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f210) {
            ctx->pc = 0x15F214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F210u;
            // 0x15f214: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F248u;
            goto label_15f248;
        }
    }
    ctx->pc = 0x15F218u;
    // 0x15f218: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x15F218u;
    {
        const bool branch_taken_0x15f218 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f218) {
            ctx->pc = 0x15F21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F218u;
            // 0x15f21c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F248u;
            goto label_15f248;
        }
    }
    ctx->pc = 0x15F220u;
    // 0x15f220: 0x56c00009  bnel        $s6, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x15F220u;
    {
        const bool branch_taken_0x15f220 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f220) {
            ctx->pc = 0x15F224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F220u;
            // 0x15f224: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F248u;
            goto label_15f248;
        }
    }
    ctx->pc = 0x15F228u;
    // 0x15f228: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15f228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f22c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x15f22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f230: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15f230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f234: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x15f234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15f238: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x15f238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f23c: 0xc056c4e  jal         func_15B138
    ctx->pc = 0x15F23Cu;
    SET_GPR_U32(ctx, 31, 0x15F244u);
    ctx->pc = 0x15F240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F23Cu;
    // 0x15f240: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B138u, 0x15F23Cu, 0x15F244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F244u;
label_15f244:
    // 0x15f244: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15f244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15f248:
    // 0x15f248: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x15f248u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f24c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x15f24cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x15f250: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x15f250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x15f254: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x15F254u;
    {
        const bool branch_taken_0x15f254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F254u;
        // 0x15f258: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f254) {
            ctx->pc = 0x15F150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f150;
        }
    }
    ctx->pc = 0x15F25Cu;
label_15f25c:
    // 0x15f25c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x15f25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15f260: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x15f260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15f264: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x15f264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15f268: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x15f268u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15f26c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x15f26cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15f270: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x15f270u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15f274: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x15f274u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15f278: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x15f278u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15f27c: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x15f27cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15f280: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15f280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15f284: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x15f284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15f288: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x15f288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15f28c: 0x3e00008  jr          $ra
    ctx->pc = 0x15F28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F28Cu;
        // 0x15f290: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F294u;
    // 0x15f294: 0x0  nop
    ctx->pc = 0x15f294u;
    // NOP
    // 0x15f298: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15f298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15f29c: 0x0  nop
    ctx->pc = 0x15f29cu;
    // NOP
    // 0x15f2a0: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x15f2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x15f2a4: 0x0  nop
    ctx->pc = 0x15f2a4u;
    // NOP
    ctx->pc = 0x15f2a8u;
}
