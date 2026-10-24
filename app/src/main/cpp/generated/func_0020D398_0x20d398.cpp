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

// Function: func_0020D398
// Address: 0x20d398 - 0x20da18
void func_0020D398_0x20d398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0020D398_0x20d398");
#endif

    switch (ctx->pc) {
        case 0x20d3c0u: goto label_20d3c0;
        case 0x20d3e4u: goto label_20d3e4;
        case 0x20d3ecu: goto label_20d3ec;
        case 0x20d474u: goto label_20d474;
        case 0x20d57cu: goto label_20d57c;
        case 0x20d5b0u: goto label_20d5b0;
        case 0x20d5d8u: goto label_20d5d8;
        case 0x20d690u: goto label_20d690;
        case 0x20d6a4u: goto label_20d6a4;
        case 0x20d6c8u: goto label_20d6c8;
        case 0x20d798u: goto label_20d798;
        case 0x20d7b4u: goto label_20d7b4;
        case 0x20d7c8u: goto label_20d7c8;
        case 0x20d7ecu: goto label_20d7ec;
        case 0x20d8c8u: goto label_20d8c8;
        case 0x20d900u: goto label_20d900;
        case 0x20d924u: goto label_20d924;
        case 0x20d96cu: goto label_20d96c;
        default: break;
    }

    ctx->pc = 0x20d398u;

    // 0x20d398: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20d398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20d39c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x20d39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x20d3a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20d3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x20d3a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20d3a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x20d3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x20d3ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20d3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d3b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20d3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20d3b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20d3b8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x20D3B8u;
    SET_GPR_U32(ctx, 31, 0x20D3C0u);
    ctx->pc = 0x20D3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D3B8u;
    // 0x20d3bc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20D3B8u, 0x20D3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D3C0u;
label_20d3c0:
    // 0x20d3c0: 0xc6011740  lwc1        $f1, 0x1740($s0)
    ctx->pc = 0x20d3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d3c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d3c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d3c8: 0x0  nop
    ctx->pc = 0x20d3c8u;
    // NOP
    // 0x20d3cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20d3ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d3d0: 0x0  nop
    ctx->pc = 0x20d3d0u;
    // NOP
    // 0x20d3d4: 0x45030188  bc1tl       . + 4 + (0x188 << 2)
    ctx->pc = 0x20D3D4u;
    {
        const bool branch_taken_0x20d3d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d3d4) {
            ctx->pc = 0x20D3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D3D4u;
            // 0x20d3d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D9F8u;
            goto label_20d9f8;
        }
    }
    ctx->pc = 0x20D3DCu;
    // 0x20d3dc: 0xc04b1d2  jal         func_12C748
    ctx->pc = 0x20D3DCu;
    SET_GPR_U32(ctx, 31, 0x20D3E4u);
    ctx->pc = 0x20D3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D3DCu;
    // 0x20d3e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C748u, 0x20D3DCu, 0x20D3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D3E4u;
label_20d3e4:
    // 0x20d3e4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D3E4u;
    {
        const bool branch_taken_0x20d3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d3e4) {
            ctx->pc = 0x20D3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D3E4u;
            // 0x20d3e8: 0x8e0216d4  lw          $v0, 0x16D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D3F4u;
            goto label_20d3f4;
        }
    }
    ctx->pc = 0x20D3ECu;
label_20d3ec:
    // 0x20d3ec: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x20D3ECu;
    {
        const bool branch_taken_0x20d3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3ECu;
        // 0x20d3f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3ec) {
            ctx->pc = 0x20D9F8u;
            goto label_20d9f8;
        }
    }
    ctx->pc = 0x20D3F4u;
label_20d3f4:
    // 0x20d3f4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x20d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x20d3f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20d3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20d3fc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x20D3FCu;
    {
        const bool branch_taken_0x20d3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D3FCu;
        // 0x20d400: 0x24020256  addiu       $v0, $zero, 0x256 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d3fc) {
            ctx->pc = 0x20D46Cu;
            goto label_20d46c;
        }
    }
    ctx->pc = 0x20D404u;
    // 0x20d404: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x20d404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x20d408: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D408u;
    {
        const bool branch_taken_0x20d408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D408u;
        // 0x20d40c: 0x2402027e  addiu       $v0, $zero, 0x27E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d408) {
            ctx->pc = 0x20D418u;
            goto label_20d418;
        }
    }
    ctx->pc = 0x20D410u;
    // 0x20d410: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20D410u;
    {
        const bool branch_taken_0x20d410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d410) {
            ctx->pc = 0x20D414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D410u;
            // 0x20d414: 0xc6010760  lwc1        $f1, 0x760($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D43Cu;
            goto label_20d43c;
        }
    }
    ctx->pc = 0x20D418u;
label_20d418:
    // 0x20d418: 0xde0202f0  ld          $v0, 0x2F0($s0)
    ctx->pc = 0x20d418u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x20d41c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20d41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20d420: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20d420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20d424: 0x3404e000  ori         $a0, $zero, 0xE000
    ctx->pc = 0x20d424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x20d428: 0x427f8  dsll        $a0, $a0, 31
    ctx->pc = 0x20d428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 31);
    // 0x20d42c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20d42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20d430: 0x10440171  beq         $v0, $a0, . + 4 + (0x171 << 2)
    ctx->pc = 0x20D430u;
    {
        const bool branch_taken_0x20d430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x20D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D430u;
        // 0x20d434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d430) {
            ctx->pc = 0x20D9F8u;
            goto label_20d9f8;
        }
    }
    ctx->pc = 0x20D438u;
    // 0x20d438: 0xc6010760  lwc1        $f1, 0x760($s0)
    ctx->pc = 0x20d438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d43c:
    // 0x20d43c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x20d43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x20d440: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20d440u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x20d444: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20d444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d448: 0x0  nop
    ctx->pc = 0x20d448u;
    // NOP
    // 0x20d44c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20d44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d450: 0x0  nop
    ctx->pc = 0x20d450u;
    // NOP
    // 0x20d454: 0x45010168  bc1t        . + 4 + (0x168 << 2)
    ctx->pc = 0x20D454u;
    {
        const bool branch_taken_0x20d454 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D454u;
        // 0x20d458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d454) {
            ctx->pc = 0x20D9F8u;
            goto label_20d9f8;
        }
    }
    ctx->pc = 0x20D45Cu;
    // 0x20d45c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x20d45cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x20d460: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20d460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20d464: 0x14400164  bnez        $v0, . + 4 + (0x164 << 2)
    ctx->pc = 0x20D464u;
    {
        const bool branch_taken_0x20d464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D464u;
        // 0x20d468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d464) {
            ctx->pc = 0x20D9F8u;
            goto label_20d9f8;
        }
    }
    ctx->pc = 0x20D46Cu;
label_20d46c:
    // 0x20d46c: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20D46Cu;
    SET_GPR_U32(ctx, 31, 0x20D474u);
    ctx->pc = 0x20D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D46Cu;
    // 0x20d470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20D46Cu, 0x20D474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D474u;
label_20d474:
    // 0x20d474: 0x14400160  bnez        $v0, . + 4 + (0x160 << 2)
    ctx->pc = 0x20D474u;
    {
        const bool branch_taken_0x20d474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D474u;
        // 0x20d478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d474) {
            ctx->pc = 0x20D9F8u;
            goto label_20d9f8;
        }
    }
    ctx->pc = 0x20D47Cu;
    // 0x20d47c: 0x8e0217ac  lw          $v0, 0x17AC($s0)
    ctx->pc = 0x20d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6060)));
    // 0x20d480: 0x1840015d  blez        $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x20D480u;
    {
        const bool branch_taken_0x20d480 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D480u;
        // 0x20d484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d480) {
            ctx->pc = 0x20D9F8u;
            goto label_20d9f8;
        }
    }
    ctx->pc = 0x20D488u;
    // 0x20d488: 0x960303ac  lhu         $v1, 0x3AC($s0)
    ctx->pc = 0x20d488u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x20d48c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x20d48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x20d490: 0x14400159  bnez        $v0, . + 4 + (0x159 << 2)
    ctx->pc = 0x20D490u;
    {
        const bool branch_taken_0x20d490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D490u;
        // 0x20d494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d490) {
            ctx->pc = 0x20D9F8u;
            goto label_20d9f8;
        }
    }
    ctx->pc = 0x20D498u;
    // 0x20d498: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x20d498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x20d49c: 0x14400156  bnez        $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x20D49Cu;
    {
        const bool branch_taken_0x20d49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D49Cu;
        // 0x20d4a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d49c) {
            ctx->pc = 0x20D9F8u;
            goto label_20d9f8;
        }
    }
    ctx->pc = 0x20D4A4u;
    // 0x20d4a4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x20d4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x20d4a8: 0x14400153  bnez        $v0, . + 4 + (0x153 << 2)
    ctx->pc = 0x20D4A8u;
    {
        const bool branch_taken_0x20d4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4A8u;
        // 0x20d4ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d4a8) {
            ctx->pc = 0x20D9F8u;
            goto label_20d9f8;
        }
    }
    ctx->pc = 0x20D4B0u;
    // 0x20d4b0: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x20d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x20d4b4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x20d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x20d4b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20d4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20d4bc: 0x1440014e  bnez        $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x20D4BCu;
    {
        const bool branch_taken_0x20d4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4BCu;
        // 0x20d4c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d4bc) {
            ctx->pc = 0x20D9F8u;
            goto label_20d9f8;
        }
    }
    ctx->pc = 0x20D4C4u;
    // 0x20d4c4: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x20d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x20d4c8: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20d4c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20d4cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20d4d0: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x20d4d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x20d4d4: 0x1040ffc5  beqz        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x20D4D4u;
    {
        const bool branch_taken_0x20d4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4D4u;
        // 0x20d4d8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d4d4) {
            ctx->pc = 0x20D3ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d3ec;
        }
    }
    ctx->pc = 0x20D4DCu;
    // 0x20d4dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d4e0: 0x244222c0  addiu       $v0, $v0, 0x22C0
    ctx->pc = 0x20d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8896));
    // 0x20d4e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20d4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20d4e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20d4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20d4ec: 0x800008  jr          $a0
    ctx->pc = 0x20D4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D3ECu: goto label_20d3ec;
            case 0x20D4F4u: goto label_20d4f4;
            case 0x20D50Cu: goto label_20d50c;
            case 0x20D51Cu: goto label_20d51c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D4ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20D4F4u;
label_20d4f4:
    // 0x20d4f4: 0x920217ba  lbu         $v0, 0x17BA($s0)
    ctx->pc = 0x20d4f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6074)));
    // 0x20d4f8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x20d4f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20d4fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20D4FCu;
    {
        const bool branch_taken_0x20d4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D4FCu;
        // 0x20d500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d4fc) {
            ctx->pc = 0x20D51Cu;
            goto label_20d51c;
        }
    }
    ctx->pc = 0x20D504u;
    // 0x20d504: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x20D504u;
    {
        const bool branch_taken_0x20d504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D504u;
        // 0x20d508: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d504) {
            ctx->pc = 0x20D9FCu;
            goto label_20d9fc;
        }
    }
    ctx->pc = 0x20D50Cu;
label_20d50c:
    // 0x20d50c: 0x920317ba  lbu         $v1, 0x17BA($s0)
    ctx->pc = 0x20d50cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6074)));
    // 0x20d510: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20d510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20d514: 0x1462ffb5  bne         $v1, $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x20D514u;
    {
        const bool branch_taken_0x20d514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D514u;
        // 0x20d518: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d514) {
            ctx->pc = 0x20D3ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d3ec;
        }
    }
    ctx->pc = 0x20D51Cu;
label_20d51c:
    // 0x20d51c: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x20d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x20d520: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x20d520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x20d524: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d528: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20d528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20d52c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20D52Cu;
    {
        const bool branch_taken_0x20d52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d52c) {
            ctx->pc = 0x20D530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D52Cu;
            // 0x20d530: 0x920317ba  lbu         $v1, 0x17BA($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6074)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D548u;
            goto label_20d548;
        }
    }
    ctx->pc = 0x20D534u;
    // 0x20d534: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x20d534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x20d538: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x20d538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x20d53c: 0x1460012e  bnez        $v1, . + 4 + (0x12E << 2)
    ctx->pc = 0x20D53Cu;
    {
        const bool branch_taken_0x20d53c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D53Cu;
        // 0x20d540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d53c) {
            ctx->pc = 0x20D9F8u;
            goto label_20d9f8;
        }
    }
    ctx->pc = 0x20D544u;
    // 0x20d544: 0x920317ba  lbu         $v1, 0x17BA($s0)
    ctx->pc = 0x20d544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6074)));
label_20d548:
    // 0x20d548: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x20d548u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d54c: 0x1072004d  beq         $v1, $s2, . + 4 + (0x4D << 2)
    ctx->pc = 0x20D54Cu;
    {
        const bool branch_taken_0x20d54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x20D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D54Cu;
        // 0x20d550: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d54c) {
            ctx->pc = 0x20D684u;
            goto label_20d684;
        }
    }
    ctx->pc = 0x20D554u;
    // 0x20d554: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20D554u;
    {
        const bool branch_taken_0x20d554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d554) {
            ctx->pc = 0x20D558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D554u;
            // 0x20d558: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D574u;
            goto label_20d574;
        }
    }
    ctx->pc = 0x20D55Cu;
    // 0x20d55c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d560: 0x10620091  beq         $v1, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x20D560u;
    {
        const bool branch_taken_0x20d560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D560u;
        // 0x20d564: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d560) {
            ctx->pc = 0x20D7A8u;
            goto label_20d7a8;
        }
    }
    ctx->pc = 0x20D568u;
    // 0x20d568: 0x106200d2  beq         $v1, $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x20D568u;
    {
        const bool branch_taken_0x20d568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D568u;
        // 0x20d56c: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d568) {
            ctx->pc = 0x20D8B4u;
            goto label_20d8b4;
        }
    }
    ctx->pc = 0x20D570u;
    // 0x20d570: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20d570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_20d574:
    // 0x20d574: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20D574u;
    SET_GPR_U32(ctx, 31, 0x20D57Cu);
    ctx->pc = 0x20D578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D574u;
    // 0x20d578: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20D574u, 0x20D57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D57Cu;
label_20d57c:
    // 0x20d57c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20d57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20d580: 0x1440011d  bnez        $v0, . + 4 + (0x11D << 2)
    ctx->pc = 0x20D580u;
    {
        const bool branch_taken_0x20d580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D580u;
        // 0x20d584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d580) {
            ctx->pc = 0x20D9F8u;
            goto label_20d9f8;
        }
    }
    ctx->pc = 0x20D588u;
    // 0x20d588: 0x920217b9  lbu         $v0, 0x17B9($s0)
    ctx->pc = 0x20d588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6073)));
    // 0x20d58c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x20d58cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20d590: 0x14400103  bnez        $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x20D590u;
    {
        const bool branch_taken_0x20d590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D590u;
        // 0x20d594: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d590) {
            ctx->pc = 0x20D9A0u;
            goto label_20d9a0;
        }
    }
    ctx->pc = 0x20D598u;
    // 0x20d598: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x20d598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x20d59c: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20d59cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20d5a0: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x20D5A0u;
    {
        const bool branch_taken_0x20d5a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x20d5a0) {
            ctx->pc = 0x20D5D0u;
            goto label_20d5d0;
        }
    }
    ctx->pc = 0x20D5A8u;
    // 0x20d5a8: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x20D5A8u;
    SET_GPR_U32(ctx, 31, 0x20D5B0u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x20D5A8u, 0x20D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D5B0u;
label_20d5b0:
    // 0x20d5b0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x20d5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x20d5b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20d5b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x20d5b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20d5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20d5bc: 0x0  nop
    ctx->pc = 0x20d5bcu;
    // NOP
    // 0x20d5c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20d5c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d5c4: 0x0  nop
    ctx->pc = 0x20d5c4u;
    // NOP
    // 0x20d5c8: 0x4503000c  bc1tl       . + 4 + (0xC << 2)
    ctx->pc = 0x20D5C8u;
    {
        const bool branch_taken_0x20d5c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d5c8) {
            ctx->pc = 0x20D5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D5C8u;
            // 0x20d5cc: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D5FCu;
            goto label_20d5fc;
        }
    }
    ctx->pc = 0x20D5D0u;
label_20d5d0:
    // 0x20d5d0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x20D5D0u;
    SET_GPR_U32(ctx, 31, 0x20D5D8u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x20D5D0u, 0x20D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D5D8u;
label_20d5d8:
    // 0x20d5d8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x20d5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x20d5dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20d5dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x20d5e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20d5e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20d5e4: 0x0  nop
    ctx->pc = 0x20d5e4u;
    // NOP
    // 0x20d5e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20d5e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d5ec: 0x0  nop
    ctx->pc = 0x20d5ecu;
    // NOP
    // 0x20d5f0: 0x450000eb  bc1f        . + 4 + (0xEB << 2)
    ctx->pc = 0x20D5F0u;
    {
        const bool branch_taken_0x20d5f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d5f0) {
            ctx->pc = 0x20D9A0u;
            goto label_20d9a0;
        }
    }
    ctx->pc = 0x20D5F8u;
    // 0x20d5f8: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x20d5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_20d5fc:
    // 0x20d5fc: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x20d5fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x20d600: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D600u;
    {
        const bool branch_taken_0x20d600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D600u;
        // 0x20d604: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d600) {
            ctx->pc = 0x20D610u;
            goto label_20d610;
        }
    }
    ctx->pc = 0x20D608u;
    // 0x20d608: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x20D608u;
    {
        const bool branch_taken_0x20d608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d608) {
            ctx->pc = 0x20D60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D608u;
            // 0x20d60c: 0x8e0317ac  lw          $v1, 0x17AC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D64Cu;
            goto label_20d64c;
        }
    }
    ctx->pc = 0x20D610u;
label_20d610:
    // 0x20d610: 0x8e0317ac  lw          $v1, 0x17AC($s0)
    ctx->pc = 0x20d610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6060)));
    // 0x20d614: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x20d614u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x20d618: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20d618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20d61c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D61Cu;
    {
        const bool branch_taken_0x20d61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D61Cu;
        // 0x20d620: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d61c) {
            ctx->pc = 0x20D62Cu;
            goto label_20d62c;
        }
    }
    ctx->pc = 0x20D624u;
    // 0x20d624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D624u;
    {
        const bool branch_taken_0x20d624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D624u;
        // 0x20d628: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d624) {
            ctx->pc = 0x20D630u;
            goto label_20d630;
        }
    }
    ctx->pc = 0x20D62Cu;
label_20d62c:
    // 0x20d62c: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x20d62cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20d630:
    // 0x20d630: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20d630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20d634: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x20d634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20d638: 0xae0217c4  sw          $v0, 0x17C4($s0)
    ctx->pc = 0x20d638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6084), GPR_U32(ctx, 2));
    // 0x20d63c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d640: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x20d640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d644: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x20D644u;
    {
        const bool branch_taken_0x20d644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D644u;
        // 0x20d648: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d644) {
            ctx->pc = 0x20D9ECu;
            goto label_20d9ec;
        }
    }
    ctx->pc = 0x20D64Cu;
label_20d64c:
    // 0x20d64c: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x20d64cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x20d650: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20d650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20d654: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D654u;
    {
        const bool branch_taken_0x20d654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D654u;
        // 0x20d658: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d654) {
            ctx->pc = 0x20D664u;
            goto label_20d664;
        }
    }
    ctx->pc = 0x20D65Cu;
    // 0x20d65c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D65Cu;
    {
        const bool branch_taken_0x20d65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D65Cu;
        // 0x20d660: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d65c) {
            ctx->pc = 0x20D668u;
            goto label_20d668;
        }
    }
    ctx->pc = 0x20D664u;
label_20d664:
    // 0x20d664: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x20d664u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20d668:
    // 0x20d668: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20d668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20d66c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x20d66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x20d670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20d670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d674: 0xae0217c4  sw          $v0, 0x17C4($s0)
    ctx->pc = 0x20d674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6084), GPR_U32(ctx, 2));
    // 0x20d678: 0xa20302f7  sb          $v1, 0x2F7($s0)
    ctx->pc = 0x20d678u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d67c: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x20D67Cu;
    {
        const bool branch_taken_0x20d67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D67Cu;
        // 0x20d680: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d67c) {
            ctx->pc = 0x20D9E8u;
            goto label_20d9e8;
        }
    }
    ctx->pc = 0x20D684u;
label_20d684:
    // 0x20d684: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20d684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x20d688: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20D688u;
    SET_GPR_U32(ctx, 31, 0x20D690u);
    ctx->pc = 0x20D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D688u;
    // 0x20d68c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20D688u, 0x20D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D690u;
label_20d690:
    // 0x20d690: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20d690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20d694: 0x144000d8  bnez        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x20D694u;
    {
        const bool branch_taken_0x20d694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D694u;
        // 0x20d698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d694) {
            ctx->pc = 0x20D9F8u;
            goto label_20d9f8;
        }
    }
    ctx->pc = 0x20D69Cu;
    // 0x20d69c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20D69Cu;
    SET_GPR_U32(ctx, 31, 0x20D6A4u);
    ctx->pc = 0x20D6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D69Cu;
    // 0x20d6a0: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20D69Cu, 0x20D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D6A4u;
label_20d6a4:
    // 0x20d6a4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x20d6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x20d6a8: 0x8e040698  lw          $a0, 0x698($s0)
    ctx->pc = 0x20d6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x20d6ac: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x20d6acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x20d6b0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x20d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x20d6b4: 0x84820046  lh          $v0, 0x46($a0)
    ctx->pc = 0x20d6b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x20d6b8: 0x144300b9  bne         $v0, $v1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x20D6B8u;
    {
        const bool branch_taken_0x20d6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20d6b8) {
            ctx->pc = 0x20D9A0u;
            goto label_20d9a0;
        }
    }
    ctx->pc = 0x20D6C0u;
    // 0x20d6c0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x20D6C0u;
    SET_GPR_U32(ctx, 31, 0x20D6C8u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x20D6C0u, 0x20D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D6C8u;
label_20d6c8:
    // 0x20d6c8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x20d6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x20d6cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20d6ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x20d6d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20d6d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20d6d4: 0x0  nop
    ctx->pc = 0x20d6d4u;
    // NOP
    // 0x20d6d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20d6d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d6dc: 0x0  nop
    ctx->pc = 0x20d6dcu;
    // NOP
    // 0x20d6e0: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x20D6E0u;
    {
        const bool branch_taken_0x20d6e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d6e0) {
            ctx->pc = 0x20D790u;
            goto label_20d790;
        }
    }
    ctx->pc = 0x20D6E8u;
    // 0x20d6e8: 0x920217b9  lbu         $v0, 0x17B9($s0)
    ctx->pc = 0x20d6e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6073)));
    // 0x20d6ec: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x20D6ECu;
    {
        const bool branch_taken_0x20d6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d6ec) {
            ctx->pc = 0x20D790u;
            goto label_20d790;
        }
    }
    ctx->pc = 0x20D6F4u;
    // 0x20d6f4: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x20D6F4u;
    {
        const bool branch_taken_0x20d6f4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x20D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6F4u;
        // 0x20d6f8: 0x28420004  slti        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d6f4) {
            ctx->pc = 0x20D790u;
            goto label_20d790;
        }
    }
    ctx->pc = 0x20D6FCu;
    // 0x20d6fc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x20D6FCu;
    {
        const bool branch_taken_0x20d6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d6fc) {
            ctx->pc = 0x20D790u;
            goto label_20d790;
        }
    }
    ctx->pc = 0x20D704u;
    // 0x20d704: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x20d704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x20d708: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x20d708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x20d70c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D70Cu;
    {
        const bool branch_taken_0x20d70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D70Cu;
        // 0x20d710: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d70c) {
            ctx->pc = 0x20D71Cu;
            goto label_20d71c;
        }
    }
    ctx->pc = 0x20D714u;
    // 0x20d714: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x20D714u;
    {
        const bool branch_taken_0x20d714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d714) {
            ctx->pc = 0x20D718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D714u;
            // 0x20d718: 0x8e0317ac  lw          $v1, 0x17AC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D758u;
            goto label_20d758;
        }
    }
    ctx->pc = 0x20D71Cu;
label_20d71c:
    // 0x20d71c: 0x8e0317ac  lw          $v1, 0x17AC($s0)
    ctx->pc = 0x20d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6060)));
    // 0x20d720: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x20d720u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x20d724: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20d724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20d728: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D728u;
    {
        const bool branch_taken_0x20d728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D728u;
        // 0x20d72c: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d728) {
            ctx->pc = 0x20D738u;
            goto label_20d738;
        }
    }
    ctx->pc = 0x20D730u;
    // 0x20d730: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D730u;
    {
        const bool branch_taken_0x20d730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D730u;
        // 0x20d734: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d730) {
            ctx->pc = 0x20D73Cu;
            goto label_20d73c;
        }
    }
    ctx->pc = 0x20D738u;
label_20d738:
    // 0x20d738: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x20d738u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20d73c:
    // 0x20d73c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20d740: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x20d740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20d744: 0xae0217c4  sw          $v0, 0x17C4($s0)
    ctx->pc = 0x20d744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6084), GPR_U32(ctx, 2));
    // 0x20d748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d74c: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x20d74cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d750: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x20D750u;
    {
        const bool branch_taken_0x20d750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D750u;
        // 0x20d754: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d750) {
            ctx->pc = 0x20D9ECu;
            goto label_20d9ec;
        }
    }
    ctx->pc = 0x20D758u;
label_20d758:
    // 0x20d758: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x20d758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x20d75c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20d75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20d760: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D760u;
    {
        const bool branch_taken_0x20d760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D760u;
        // 0x20d764: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d760) {
            ctx->pc = 0x20D770u;
            goto label_20d770;
        }
    }
    ctx->pc = 0x20D768u;
    // 0x20d768: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D768u;
    {
        const bool branch_taken_0x20d768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D768u;
        // 0x20d76c: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d768) {
            ctx->pc = 0x20D774u;
            goto label_20d774;
        }
    }
    ctx->pc = 0x20D770u;
label_20d770:
    // 0x20d770: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x20d770u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20d774:
    // 0x20d774: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20d774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20d778: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x20d778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x20d77c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20d77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d780: 0xae0217c4  sw          $v0, 0x17C4($s0)
    ctx->pc = 0x20d780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6084), GPR_U32(ctx, 2));
    // 0x20d784: 0xa20302f7  sb          $v1, 0x2F7($s0)
    ctx->pc = 0x20d784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d788: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x20D788u;
    {
        const bool branch_taken_0x20d788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D788u;
        // 0x20d78c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d788) {
            ctx->pc = 0x20D9E8u;
            goto label_20d9e8;
        }
    }
    ctx->pc = 0x20D790u;
label_20d790:
    // 0x20d790: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20D790u;
    SET_GPR_U32(ctx, 31, 0x20D798u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20D790u, 0x20D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D798u;
label_20d798:
    // 0x20d798: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x20d798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x20d79c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20d79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d7a0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x20D7A0u;
    {
        const bool branch_taken_0x20d7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7A0u;
        // 0x20d7a4: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d7a0) {
            ctx->pc = 0x20D9A0u;
            goto label_20d9a0;
        }
    }
    ctx->pc = 0x20D7A8u;
label_20d7a8:
    // 0x20d7a8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20d7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x20d7ac: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20D7ACu;
    SET_GPR_U32(ctx, 31, 0x20D7B4u);
    ctx->pc = 0x20D7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D7ACu;
    // 0x20d7b0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20D7ACu, 0x20D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D7B4u;
label_20d7b4:
    // 0x20d7b4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20d7b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20d7b8: 0x1440008f  bnez        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x20D7B8u;
    {
        const bool branch_taken_0x20d7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7B8u;
        // 0x20d7bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d7b8) {
            ctx->pc = 0x20D9F8u;
            goto label_20d9f8;
        }
    }
    ctx->pc = 0x20D7C0u;
    // 0x20d7c0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20D7C0u;
    SET_GPR_U32(ctx, 31, 0x20D7C8u);
    ctx->pc = 0x20D7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D7C0u;
    // 0x20d7c4: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20D7C0u, 0x20D7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D7C8u;
label_20d7c8:
    // 0x20d7c8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x20d7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x20d7cc: 0x8e040698  lw          $a0, 0x698($s0)
    ctx->pc = 0x20d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x20d7d0: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x20d7d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x20d7d4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x20d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x20d7d8: 0x84820046  lh          $v0, 0x46($a0)
    ctx->pc = 0x20d7d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x20d7dc: 0x14430070  bne         $v0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x20D7DCu;
    {
        const bool branch_taken_0x20d7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20d7dc) {
            ctx->pc = 0x20D9A0u;
            goto label_20d9a0;
        }
    }
    ctx->pc = 0x20D7E4u;
    // 0x20d7e4: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x20D7E4u;
    SET_GPR_U32(ctx, 31, 0x20D7ECu);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x20D7E4u, 0x20D7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D7ECu;
label_20d7ec:
    // 0x20d7ec: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x20d7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x20d7f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20d7f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x20d7f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20d7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20d7f8: 0x0  nop
    ctx->pc = 0x20d7f8u;
    // NOP
    // 0x20d7fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20d7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d800: 0x0  nop
    ctx->pc = 0x20d800u;
    // NOP
    // 0x20d804: 0x45020066  bc1fl       . + 4 + (0x66 << 2)
    ctx->pc = 0x20D804u;
    {
        const bool branch_taken_0x20d804 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d804) {
            ctx->pc = 0x20D808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D804u;
            // 0x20d808: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D9A0u;
            goto label_20d9a0;
        }
    }
    ctx->pc = 0x20D80Cu;
    // 0x20d80c: 0x920217b9  lbu         $v0, 0x17B9($s0)
    ctx->pc = 0x20d80cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6073)));
    // 0x20d810: 0x50400063  beql        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x20D810u;
    {
        const bool branch_taken_0x20d810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d810) {
            ctx->pc = 0x20D814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D810u;
            // 0x20d814: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D9A0u;
            goto label_20d9a0;
        }
    }
    ctx->pc = 0x20D818u;
    // 0x20d818: 0x4400060  bltz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x20D818u;
    {
        const bool branch_taken_0x20d818 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x20D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D818u;
        // 0x20d81c: 0x28420004  slti        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d818) {
            ctx->pc = 0x20D99Cu;
            goto label_20d99c;
        }
    }
    ctx->pc = 0x20D820u;
    // 0x20d820: 0x5040005f  beql        $v0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x20D820u;
    {
        const bool branch_taken_0x20d820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d820) {
            ctx->pc = 0x20D824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D820u;
            // 0x20d824: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D9A0u;
            goto label_20d9a0;
        }
    }
    ctx->pc = 0x20D828u;
    // 0x20d828: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x20d828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x20d82c: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x20d82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x20d830: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D830u;
    {
        const bool branch_taken_0x20d830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D830u;
        // 0x20d834: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d830) {
            ctx->pc = 0x20D840u;
            goto label_20d840;
        }
    }
    ctx->pc = 0x20D838u;
    // 0x20d838: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x20D838u;
    {
        const bool branch_taken_0x20d838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d838) {
            ctx->pc = 0x20D83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D838u;
            // 0x20d83c: 0x8e0317ac  lw          $v1, 0x17AC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D87Cu;
            goto label_20d87c;
        }
    }
    ctx->pc = 0x20D840u;
label_20d840:
    // 0x20d840: 0x8e0317ac  lw          $v1, 0x17AC($s0)
    ctx->pc = 0x20d840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6060)));
    // 0x20d844: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x20d844u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x20d848: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20d848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20d84c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D84Cu;
    {
        const bool branch_taken_0x20d84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D84Cu;
        // 0x20d850: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d84c) {
            ctx->pc = 0x20D85Cu;
            goto label_20d85c;
        }
    }
    ctx->pc = 0x20D854u;
    // 0x20d854: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D854u;
    {
        const bool branch_taken_0x20d854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D854u;
        // 0x20d858: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d854) {
            ctx->pc = 0x20D860u;
            goto label_20d860;
        }
    }
    ctx->pc = 0x20D85Cu;
label_20d85c:
    // 0x20d85c: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x20d85cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20d860:
    // 0x20d860: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20d860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20d864: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x20d864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20d868: 0xae0217c4  sw          $v0, 0x17C4($s0)
    ctx->pc = 0x20d868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6084), GPR_U32(ctx, 2));
    // 0x20d86c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d870: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x20d870u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d874: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x20D874u;
    {
        const bool branch_taken_0x20d874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D874u;
        // 0x20d878: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d874) {
            ctx->pc = 0x20D9ECu;
            goto label_20d9ec;
        }
    }
    ctx->pc = 0x20D87Cu;
label_20d87c:
    // 0x20d87c: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x20d87cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x20d880: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20d880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20d884: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D884u;
    {
        const bool branch_taken_0x20d884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D884u;
        // 0x20d888: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d884) {
            ctx->pc = 0x20D894u;
            goto label_20d894;
        }
    }
    ctx->pc = 0x20D88Cu;
    // 0x20d88c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D88Cu;
    {
        const bool branch_taken_0x20d88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D88Cu;
        // 0x20d890: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d88c) {
            ctx->pc = 0x20D898u;
            goto label_20d898;
        }
    }
    ctx->pc = 0x20D894u;
label_20d894:
    // 0x20d894: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x20d894u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20d898:
    // 0x20d898: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20d898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20d89c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x20d89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x20d8a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d8a4: 0xae0217c4  sw          $v0, 0x17C4($s0)
    ctx->pc = 0x20d8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6084), GPR_U32(ctx, 2));
    // 0x20d8a8: 0xa20302f7  sb          $v1, 0x2F7($s0)
    ctx->pc = 0x20d8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d8ac: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x20D8ACu;
    {
        const bool branch_taken_0x20d8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8ACu;
        // 0x20d8b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8ac) {
            ctx->pc = 0x20D9E8u;
            goto label_20d9e8;
        }
    }
    ctx->pc = 0x20D8B4u;
label_20d8b4:
    // 0x20d8b4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x20d8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x20d8b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20D8B8u;
    {
        const bool branch_taken_0x20d8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d8b8) {
            ctx->pc = 0x20D8F8u;
            goto label_20d8f8;
        }
    }
    ctx->pc = 0x20D8C0u;
    // 0x20d8c0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x20D8C0u;
    SET_GPR_U32(ctx, 31, 0x20D8C8u);
    ctx->pc = 0x20D8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D8C0u;
    // 0x20d8c4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x20D8C0u, 0x20D8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D8C8u;
label_20d8c8:
    // 0x20d8c8: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x20d8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x20d8cc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x20d8ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x20d8d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20d8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20d8d4: 0x0  nop
    ctx->pc = 0x20d8d4u;
    // NOP
    // 0x20d8d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20d8d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d8dc: 0x0  nop
    ctx->pc = 0x20d8dcu;
    // NOP
    // 0x20d8e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20D8E0u;
    {
        const bool branch_taken_0x20d8e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8E0u;
        // 0x20d8e4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8e0) {
            ctx->pc = 0x20D8F8u;
            goto label_20d8f8;
        }
    }
    ctx->pc = 0x20D8E8u;
    // 0x20d8e8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x20d8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d8ec: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x20d8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x20d8f0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x20D8F0u;
    {
        const bool branch_taken_0x20d8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8F0u;
        // 0x20d8f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8f0) {
            ctx->pc = 0x20D9F0u;
            goto label_20d9f0;
        }
    }
    ctx->pc = 0x20D8F8u;
label_20d8f8:
    // 0x20d8f8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20D8F8u;
    SET_GPR_U32(ctx, 31, 0x20D900u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20D8F8u, 0x20D900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D900u;
label_20d900:
    // 0x20d900: 0x8e060698  lw          $a2, 0x698($s0)
    ctx->pc = 0x20d900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x20d904: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x20d904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x20d908: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20d908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d90c: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x20d90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x20d910: 0x84c30046  lh          $v1, 0x46($a2)
    ctx->pc = 0x20d910u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 70)));
    // 0x20d914: 0x1465000e  bne         $v1, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x20D914u;
    {
        const bool branch_taken_0x20d914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x20D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D914u;
        // 0x20d918: 0x82880a  movz        $s1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d914) {
            ctx->pc = 0x20D950u;
            goto label_20d950;
        }
    }
    ctx->pc = 0x20D91Cu;
    // 0x20d91c: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x20D91Cu;
    SET_GPR_U32(ctx, 31, 0x20D924u);
    ctx->pc = 0x20D920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D91Cu;
    // 0x20d920: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x20D91Cu, 0x20D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D924u;
label_20d924:
    // 0x20d924: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x20d924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x20d928: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20d928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20d92c: 0x0  nop
    ctx->pc = 0x20d92cu;
    // NOP
    // 0x20d930: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20d930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d934: 0x0  nop
    ctx->pc = 0x20d934u;
    // NOP
    // 0x20d938: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20D938u;
    {
        const bool branch_taken_0x20d938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D938u;
        // 0x20d93c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d938) {
            ctx->pc = 0x20D950u;
            goto label_20d950;
        }
    }
    ctx->pc = 0x20D940u;
    // 0x20d940: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x20d940u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d944: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x20d944u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x20d948: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x20D948u;
    {
        const bool branch_taken_0x20d948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D948u;
        // 0x20d94c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d948) {
            ctx->pc = 0x20D9F0u;
            goto label_20d9f0;
        }
    }
    ctx->pc = 0x20D950u;
label_20d950:
    // 0x20d950: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x20d950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x20d954: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x20d954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x20d958: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20d958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20d95c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20D95Cu;
    {
        const bool branch_taken_0x20d95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d95c) {
            ctx->pc = 0x20D9A0u;
            goto label_20d9a0;
        }
    }
    ctx->pc = 0x20D964u;
    // 0x20d964: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x20D964u;
    SET_GPR_U32(ctx, 31, 0x20D96Cu);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x20D964u, 0x20D96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D96Cu;
label_20d96c:
    // 0x20d96c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x20d96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x20d970: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20d970u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x20d974: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20d974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20d978: 0x0  nop
    ctx->pc = 0x20d978u;
    // NOP
    // 0x20d97c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20d97cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d980: 0x0  nop
    ctx->pc = 0x20d980u;
    // NOP
    // 0x20d984: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20D984u;
    {
        const bool branch_taken_0x20d984 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D984u;
        // 0x20d988: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d984) {
            ctx->pc = 0x20D99Cu;
            goto label_20d99c;
        }
    }
    ctx->pc = 0x20D98Cu;
    // 0x20d98c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x20d98cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d990: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x20d990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x20d994: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x20D994u;
    {
        const bool branch_taken_0x20d994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D994u;
        // 0x20d998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d994) {
            ctx->pc = 0x20D9F0u;
            goto label_20d9f0;
        }
    }
    ctx->pc = 0x20D99Cu;
label_20d99c:
    // 0x20d99c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x20d99cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d9a0:
    // 0x20d9a0: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x20D9A0u;
    {
        const bool branch_taken_0x20d9a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9A0u;
        // 0x20d9a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9a0) {
            ctx->pc = 0x20D9F8u;
            goto label_20d9f8;
        }
    }
    ctx->pc = 0x20D9A8u;
    // 0x20d9a8: 0x8e0317ac  lw          $v1, 0x17AC($s0)
    ctx->pc = 0x20d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6060)));
    // 0x20d9ac: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x20d9acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x20d9b0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20d9b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20d9b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D9B4u;
    {
        const bool branch_taken_0x20d9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9B4u;
        // 0x20d9b8: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9b4) {
            ctx->pc = 0x20D9C4u;
            goto label_20d9c4;
        }
    }
    ctx->pc = 0x20D9BCu;
    // 0x20d9bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D9BCu;
    {
        const bool branch_taken_0x20d9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9BCu;
        // 0x20d9c0: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9bc) {
            ctx->pc = 0x20D9C8u;
            goto label_20d9c8;
        }
    }
    ctx->pc = 0x20D9C4u;
label_20d9c4:
    // 0x20d9c4: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x20d9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20d9c8:
    // 0x20d9c8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x20d9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x20d9cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20d9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d9d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20d9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20d9d4: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x20d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x20d9d8: 0xa21302f7  sb          $s3, 0x2F7($s0)
    ctx->pc = 0x20d9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 19));
    // 0x20d9dc: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x20d9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x20d9e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d9e4: 0xae0317c4  sw          $v1, 0x17C4($s0)
    ctx->pc = 0x20d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6084), GPR_U32(ctx, 3));
label_20d9e8:
    // 0x20d9e8: 0xa20402f5  sb          $a0, 0x2F5($s0)
    ctx->pc = 0x20d9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 4));
label_20d9ec:
    // 0x20d9ec: 0xa60017c8  sh          $zero, 0x17C8($s0)
    ctx->pc = 0x20d9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6088), (uint16_t)GPR_U32(ctx, 0));
label_20d9f0:
    // 0x20d9f0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x20d9f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d9f4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x20d9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_20d9f8:
    // 0x20d9f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x20d9f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20d9fc:
    // 0x20d9fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20d9fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20da00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20da00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20da04: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x20da04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20da08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20da08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20da0c: 0x3e00008  jr          $ra
    ctx->pc = 0x20DA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA0Cu;
        // 0x20da10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DA14u;
    // 0x20da14: 0x0  nop
    ctx->pc = 0x20da14u;
    // NOP
    ctx->pc = 0x20da18u;
}
