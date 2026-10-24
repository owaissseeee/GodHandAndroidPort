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

// Function: func_00271148
// Address: 0x271148 - 0x271298
void func_00271148_0x271148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00271148_0x271148");
#endif

    switch (ctx->pc) {
        case 0x271168u: goto label_271168;
        case 0x271198u: goto label_271198;
        case 0x2711a0u: goto label_2711a0;
        case 0x2711bcu: goto label_2711bc;
        case 0x271268u: goto label_271268;
        case 0x271278u: goto label_271278;
        default: break;
    }

    ctx->pc = 0x271148u;

    // 0x271148: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x271148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27114c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x27114cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x271150: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x271150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x271154: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x271154u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x271158: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x271158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x27115c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27115cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x271160: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x271160u;
    SET_GPR_U32(ctx, 31, 0x271168u);
    ctx->pc = 0x271164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271160u;
    // 0x271164: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x271160u, 0x271168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271168u;
label_271168:
    // 0x271168: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x271168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27116c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27116cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271170: 0xc620054c  lwc1        $f0, 0x54C($s1)
    ctx->pc = 0x271170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271174: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x271174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271178: 0x0  nop
    ctx->pc = 0x271178u;
    // NOP
    // 0x27117c: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x27117Cu;
    {
        const bool branch_taken_0x27117c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x271180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27117Cu;
        // 0x271180: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27117c) {
            ctx->pc = 0x27127Cu;
            goto label_27127c;
        }
    }
    ctx->pc = 0x271184u;
    // 0x271184: 0x8e2206a0  lw          $v0, 0x6A0($s1)
    ctx->pc = 0x271184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
    // 0x271188: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x271188u;
    {
        const bool branch_taken_0x271188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271188) {
            ctx->pc = 0x27118Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271188u;
            // 0x27118c: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271280u;
            goto label_271280;
        }
    }
    ctx->pc = 0x271190u;
    // 0x271190: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x271190u;
    SET_GPR_U32(ctx, 31, 0x271198u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x271190u, 0x271198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271198u;
label_271198:
    // 0x271198: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x271198u;
    SET_GPR_U32(ctx, 31, 0x2711A0u);
    ctx->pc = 0x27119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271198u;
    // 0x27119c: 0x8c5000f0  lw          $s0, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x271198u, 0x2711A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2711A0u;
label_2711a0:
    // 0x2711a0: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x2711a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2711a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2711a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2711a8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2711a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2711ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2711acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2711b0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2711b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2711b4: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x2711B4u;
    SET_GPR_U32(ctx, 31, 0x2711BCu);
    ctx->pc = 0x2711B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2711B4u;
    // 0x2711b8: 0x8e4500f0  lw          $a1, 0xF0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2711B4u, 0x2711BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2711BCu;
label_2711bc:
    // 0x2711bc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2711bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2711c0: 0x0  nop
    ctx->pc = 0x2711c0u;
    // NOP
    // 0x2711c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2711C4u;
    {
        const bool branch_taken_0x2711c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2711C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711C4u;
        // 0x2711c8: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2711c4) {
            ctx->pc = 0x2711D0u;
            goto label_2711d0;
        }
    }
    ctx->pc = 0x2711CCu;
    // 0x2711cc: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2711ccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2711d0:
    // 0x2711d0: 0x3c013fdf  lui         $at, 0x3FDF
    ctx->pc = 0x2711d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16351 << 16));
    // 0x2711d4: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x2711d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x2711d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2711d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2711dc: 0x0  nop
    ctx->pc = 0x2711dcu;
    // NOP
    // 0x2711e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2711e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2711e4: 0x0  nop
    ctx->pc = 0x2711e4u;
    // NOP
    // 0x2711e8: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x2711E8u;
    {
        const bool branch_taken_0x2711e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2711ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711E8u;
        // 0x2711ec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2711e8) {
            ctx->pc = 0x27127Cu;
            goto label_27127c;
        }
    }
    ctx->pc = 0x2711F0u;
    // 0x2711f0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2711f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2711f4: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x2711f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2711f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2711f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2711fc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2711fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271200: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x271200u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x271204: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x271204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271208: 0x0  nop
    ctx->pc = 0x271208u;
    // NOP
    // 0x27120c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x27120Cu;
    {
        const bool branch_taken_0x27120c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27120Cu;
        // 0x271210: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27120c) {
            ctx->pc = 0x271218u;
            goto label_271218;
        }
    }
    ctx->pc = 0x271214u;
    // 0x271214: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x271214u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_271218:
    // 0x271218: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x271218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27121c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27121cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271220: 0x0  nop
    ctx->pc = 0x271220u;
    // NOP
    // 0x271224: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x271224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271228: 0x0  nop
    ctx->pc = 0x271228u;
    // NOP
    // 0x27122c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x27122Cu;
    {
        const bool branch_taken_0x27122c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x271230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27122Cu;
        // 0x271230: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27122c) {
            ctx->pc = 0x27127Cu;
            goto label_27127c;
        }
    }
    ctx->pc = 0x271234u;
    // 0x271234: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x271234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271238: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x271238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x27123c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27123cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271240: 0x0  nop
    ctx->pc = 0x271240u;
    // NOP
    // 0x271244: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x271244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271248: 0x0  nop
    ctx->pc = 0x271248u;
    // NOP
    // 0x27124c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x27124Cu;
    {
        const bool branch_taken_0x27124c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27124Cu;
        // 0x271250: 0x2402020f  addiu       $v0, $zero, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27124c) {
            ctx->pc = 0x27127Cu;
            goto label_27127c;
        }
    }
    ctx->pc = 0x271254u;
    // 0x271254: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x271254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x271258: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x271258u;
    {
        const bool branch_taken_0x271258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x271258) {
            ctx->pc = 0x271270u;
            goto label_271270;
        }
    }
    ctx->pc = 0x271260u;
    // 0x271260: 0xc0b7098  jal         func_2DC260
    ctx->pc = 0x271260u;
    SET_GPR_U32(ctx, 31, 0x271268u);
    ctx->pc = 0x271264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271260u;
    // 0x271264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC260u, 0x271260u, 0x271268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271268u;
label_271268:
    // 0x271268: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271268u;
    {
        const bool branch_taken_0x271268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271268u;
        // 0x27126c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271268) {
            ctx->pc = 0x27127Cu;
            goto label_27127c;
        }
    }
    ctx->pc = 0x271270u;
label_271270:
    // 0x271270: 0xc0b7178  jal         func_2DC5E0
    ctx->pc = 0x271270u;
    SET_GPR_U32(ctx, 31, 0x271278u);
    ctx->pc = 0x271274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271270u;
    // 0x271274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC5E0u, 0x271270u, 0x271278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271278u;
label_271278:
    // 0x271278: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x271278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27127c:
    // 0x27127c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27127cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_271280:
    // 0x271280: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x271280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x271284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271288: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x271288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27128c: 0x3e00008  jr          $ra
    ctx->pc = 0x27128Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27128Cu;
        // 0x271290: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27128Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271294u;
    // 0x271294: 0x0  nop
    ctx->pc = 0x271294u;
    // NOP
    ctx->pc = 0x271298u;
}
