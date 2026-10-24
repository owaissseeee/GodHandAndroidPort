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

// Function: func_0026A3D8
// Address: 0x26a3d8 - 0x26a558
void func_0026A3D8_0x26a3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026A3D8_0x26a3d8");
#endif

    ctx->pc = 0x26a3d8u;

    // 0x26a3d8: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x26a3d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x26a3dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26a3dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26a3e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a3e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26a3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26a3e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A3E8u;
    {
        const bool branch_taken_0x26a3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3E8u;
        // 0x26a3ec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3e8) {
            ctx->pc = 0x26A3FCu;
            goto label_26a3fc;
        }
    }
    ctx->pc = 0x26A3F0u;
    // 0x26a3f0: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x26a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x26a3f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26A3F4u;
    {
        const bool branch_taken_0x26a3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3F4u;
        // 0x26a3f8: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3f4) {
            ctx->pc = 0x26A400u;
            goto label_26a400;
        }
    }
    ctx->pc = 0x26A3FCu;
label_26a3fc:
    // 0x26a3fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26a3fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a400:
    // 0x26a400: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a404: 0x50a00012  beql        $a1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x26A404u;
    {
        const bool branch_taken_0x26a404 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a404) {
            ctx->pc = 0x26A408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A404u;
            // 0x26a408: 0x908302b4  lbu         $v1, 0x2B4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A450u;
            goto label_26a450;
        }
    }
    ctx->pc = 0x26A40Cu;
    // 0x26a40c: 0xc48016fc  lwc1        $f0, 0x16FC($a0)
    ctx->pc = 0x26a40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a410: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26a410u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a414: 0x0  nop
    ctx->pc = 0x26a414u;
    // NOP
    // 0x26a418: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x26a418u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a41c: 0x0  nop
    ctx->pc = 0x26a41cu;
    // NOP
    // 0x26a420: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x26A420u;
    {
        const bool branch_taken_0x26a420 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A420u;
        // 0x26a424: 0x8ca20154  lw          $v0, 0x154($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a420) {
            ctx->pc = 0x26A43Cu;
            goto label_26a43c;
        }
    }
    ctx->pc = 0x26A428u;
    // 0x26a428: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x26a428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x26a42c: 0xaca20154  sw          $v0, 0x154($a1)
    ctx->pc = 0x26a42cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 2));
    // 0x26a430: 0xc48016fc  lwc1        $f0, 0x16FC($a0)
    ctx->pc = 0x26a430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a434: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26A434u;
    {
        const bool branch_taken_0x26a434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A434u;
        // 0x26a438: 0xe4a00150  swc1        $f0, 0x150($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a434) {
            ctx->pc = 0x26A44Cu;
            goto label_26a44c;
        }
    }
    ctx->pc = 0x26A43Cu;
label_26a43c:
    // 0x26a43c: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x26a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x26a440: 0xe4a10150  swc1        $f1, 0x150($a1)
    ctx->pc = 0x26a440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 336), bits); }
    // 0x26a444: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26a448: 0xaca20154  sw          $v0, 0x154($a1)
    ctx->pc = 0x26a448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 2));
label_26a44c:
    // 0x26a44c: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x26a44cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
label_26a450:
    // 0x26a450: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26a450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26a454: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26a454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26a458: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A458u;
    {
        const bool branch_taken_0x26a458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A458u;
        // 0x26a45c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a458) {
            ctx->pc = 0x26A46Cu;
            goto label_26a46c;
        }
    }
    ctx->pc = 0x26A460u;
    // 0x26a460: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x26a460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x26a464: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26A464u;
    {
        const bool branch_taken_0x26a464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A464u;
        // 0x26a468: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a464) {
            ctx->pc = 0x26A470u;
            goto label_26a470;
        }
    }
    ctx->pc = 0x26A46Cu;
label_26a46c:
    // 0x26a46c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26a46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a470:
    // 0x26a470: 0x50a00012  beql        $a1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x26A470u;
    {
        const bool branch_taken_0x26a470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a470) {
            ctx->pc = 0x26A474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A470u;
            // 0x26a474: 0x8c830564  lw          $v1, 0x564($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A4BCu;
            goto label_26a4bc;
        }
    }
    ctx->pc = 0x26A478u;
    // 0x26a478: 0xc48016fc  lwc1        $f0, 0x16FC($a0)
    ctx->pc = 0x26a478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a47c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26a47cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a480: 0x0  nop
    ctx->pc = 0x26a480u;
    // NOP
    // 0x26a484: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x26a484u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a488: 0x0  nop
    ctx->pc = 0x26a488u;
    // NOP
    // 0x26a48c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x26A48Cu;
    {
        const bool branch_taken_0x26a48c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A48Cu;
        // 0x26a490: 0x8ca20154  lw          $v0, 0x154($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a48c) {
            ctx->pc = 0x26A4A8u;
            goto label_26a4a8;
        }
    }
    ctx->pc = 0x26A494u;
    // 0x26a494: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x26a494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x26a498: 0xaca20154  sw          $v0, 0x154($a1)
    ctx->pc = 0x26a498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 2));
    // 0x26a49c: 0xc48016fc  lwc1        $f0, 0x16FC($a0)
    ctx->pc = 0x26a49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a4a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26A4A0u;
    {
        const bool branch_taken_0x26a4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4A0u;
        // 0x26a4a4: 0xe4a00150  swc1        $f0, 0x150($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4a0) {
            ctx->pc = 0x26A4B8u;
            goto label_26a4b8;
        }
    }
    ctx->pc = 0x26A4A8u;
label_26a4a8:
    // 0x26a4a8: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x26a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x26a4ac: 0xe4a10150  swc1        $f1, 0x150($a1)
    ctx->pc = 0x26a4acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 336), bits); }
    // 0x26a4b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26a4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26a4b4: 0xaca20154  sw          $v0, 0x154($a1)
    ctx->pc = 0x26a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 2));
label_26a4b8:
    // 0x26a4b8: 0x8c830564  lw          $v1, 0x564($a0)
    ctx->pc = 0x26a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
label_26a4bc:
    // 0x26a4bc: 0x24020223  addiu       $v0, $zero, 0x223
    ctx->pc = 0x26a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
    // 0x26a4c0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26A4C0u;
    {
        const bool branch_taken_0x26a4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4C0u;
        // 0x26a4c4: 0x28620223  slti        $v0, $v1, 0x223 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4c0) {
            ctx->pc = 0x26A4F4u;
            goto label_26a4f4;
        }
    }
    ctx->pc = 0x26A4C8u;
    // 0x26a4c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A4C8u;
    {
        const bool branch_taken_0x26a4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4C8u;
        // 0x26a4cc: 0x28620277  slti        $v0, $v1, 0x277 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)631) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4c8) {
            ctx->pc = 0x26A4E0u;
            goto label_26a4e0;
        }
    }
    ctx->pc = 0x26A4D0u;
    // 0x26a4d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A4D0u;
    {
        const bool branch_taken_0x26a4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4D0u;
        // 0x26a4d4: 0x28620275  slti        $v0, $v1, 0x275 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4d0) {
            ctx->pc = 0x26A4E0u;
            goto label_26a4e0;
        }
    }
    ctx->pc = 0x26A4D8u;
    // 0x26a4d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A4D8u;
    {
        const bool branch_taken_0x26a4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a4d8) {
            ctx->pc = 0x26A4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A4D8u;
            // 0x26a4dc: 0xc48016fc  lwc1        $f0, 0x16FC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A4F8u;
            goto label_26a4f8;
        }
    }
    ctx->pc = 0x26A4E0u;
label_26a4e0:
    // 0x26a4e0: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x26a4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x26a4e4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26a4e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x26a4e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26a4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a4ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26A4ECu;
    {
        const bool branch_taken_0x26a4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4ECu;
        // 0x26a4f0: 0xc48016fc  lwc1        $f0, 0x16FC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4ec) {
            ctx->pc = 0x26A504u;
            goto label_26a504;
        }
    }
    ctx->pc = 0x26A4F4u;
label_26a4f4:
    // 0x26a4f4: 0xc48016fc  lwc1        $f0, 0x16FC($a0)
    ctx->pc = 0x26a4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a4f8:
    // 0x26a4f8: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x26a4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
    // 0x26a4fc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26a4fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x26a500: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26a500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26a504:
    // 0x26a504: 0x0  nop
    ctx->pc = 0x26a504u;
    // NOP
    // 0x26a508: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26a508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a50c: 0xe48016fc  swc1        $f0, 0x16FC($a0)
    ctx->pc = 0x26a50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5884), bits); }
    // 0x26a510: 0xc48116fc  lwc1        $f1, 0x16FC($a0)
    ctx->pc = 0x26a510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 5884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a514: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x26a514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a518: 0x0  nop
    ctx->pc = 0x26a518u;
    // NOP
    // 0x26a51c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x26a51cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a520: 0x0  nop
    ctx->pc = 0x26a520u;
    // NOP
    // 0x26a524: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x26A524u;
    {
        const bool branch_taken_0x26a524 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a524) {
            ctx->pc = 0x26A528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A524u;
            // 0x26a528: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A52Cu;
            goto label_26a52c;
        }
    }
    ctx->pc = 0x26A52Cu;
label_26a52c:
    // 0x26a52c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x26a52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x26a530: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x26a530u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x26a534: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26a534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a538: 0x0  nop
    ctx->pc = 0x26a538u;
    // NOP
    // 0x26a53c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26a53cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a540: 0x0  nop
    ctx->pc = 0x26a540u;
    // NOP
    // 0x26a544: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x26A544u;
    {
        const bool branch_taken_0x26a544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a544) {
            ctx->pc = 0x26A548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A544u;
            // 0x26a548: 0xe48216fc  swc1        $f2, 0x16FC($a0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5884), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A54Cu;
            goto label_26a54c;
        }
    }
    ctx->pc = 0x26A54Cu;
label_26a54c:
    // 0x26a54c: 0x3e00008  jr          $ra
    ctx->pc = 0x26A54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A54Cu;
        // 0x26a550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A554u;
    // 0x26a554: 0x0  nop
    ctx->pc = 0x26a554u;
    // NOP
    ctx->pc = 0x26a558u;
}
