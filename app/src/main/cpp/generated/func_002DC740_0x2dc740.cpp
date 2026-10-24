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

// Function: func_002DC740
// Address: 0x2dc740 - 0x2dc898
void func_002DC740_0x2dc740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DC740_0x2dc740");
#endif

    switch (ctx->pc) {
        case 0x2dc75cu: goto label_2dc75c;
        case 0x2dc774u: goto label_2dc774;
        case 0x2dc798u: goto label_2dc798;
        case 0x2dc7acu: goto label_2dc7ac;
        case 0x2dc824u: goto label_2dc824;
        case 0x2dc880u: goto label_2dc880;
        default: break;
    }

    ctx->pc = 0x2dc740u;

    // 0x2dc740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dc740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dc744: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dc748: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dc748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dc74c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dc74cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc754: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DC754u;
    SET_GPR_U32(ctx, 31, 0x2DC75Cu);
    ctx->pc = 0x2DC758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC754u;
    // 0x2dc758: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DC754u, 0x2DC75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC75Cu;
label_2dc75c:
    // 0x2dc75c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dc75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc760: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2dc760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2dc764: 0x58400047  blezl       $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2DC764u;
    {
        const bool branch_taken_0x2dc764 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dc764) {
            ctx->pc = 0x2DC768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC764u;
            // 0x2dc768: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC884u;
            goto label_2dc884;
        }
    }
    ctx->pc = 0x2DC76Cu;
    // 0x2dc76c: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DC76Cu;
    SET_GPR_U32(ctx, 31, 0x2DC774u);
    ctx->pc = 0x2DC770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC76Cu;
    // 0x2dc770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DC76Cu, 0x2DC774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC774u;
label_2dc774:
    // 0x2dc774: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x2DC774u;
    {
        const bool branch_taken_0x2dc774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc774) {
            ctx->pc = 0x2DC778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC774u;
            // 0x2dc778: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC884u;
            goto label_2dc884;
        }
    }
    ctx->pc = 0x2DC77Cu;
    // 0x2dc77c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dc77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dc780: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dc780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dc784: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dc784u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dc788: 0x5c60003e  bgtzl       $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2DC788u;
    {
        const bool branch_taken_0x2dc788 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dc788) {
            ctx->pc = 0x2DC78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC788u;
            // 0x2dc78c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC884u;
            goto label_2dc884;
        }
    }
    ctx->pc = 0x2DC790u;
    // 0x2dc790: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DC790u;
    SET_GPR_U32(ctx, 31, 0x2DC798u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DC790u, 0x2DC798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC798u;
label_2dc798:
    // 0x2dc798: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x2DC798u;
    {
        const bool branch_taken_0x2dc798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc798) {
            ctx->pc = 0x2DC79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC798u;
            // 0x2dc79c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC884u;
            goto label_2dc884;
        }
    }
    ctx->pc = 0x2DC7A0u;
    // 0x2dc7a0: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x2dc7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2dc7a4: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x2DC7A4u;
    SET_GPR_U32(ctx, 31, 0x2DC7ACu);
    ctx->pc = 0x2DC7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC7A4u;
    // 0x2dc7a8: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2DC7A4u, 0x2DC7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC7ACu;
label_2dc7ac:
    // 0x2dc7ac: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2dc7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2dc7b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dc7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dc7b4: 0x0  nop
    ctx->pc = 0x2dc7b4u;
    // NOP
    // 0x2dc7b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dc7b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc7bc: 0x0  nop
    ctx->pc = 0x2dc7bcu;
    // NOP
    // 0x2dc7c0: 0x45030030  bc1tl       . + 4 + (0x30 << 2)
    ctx->pc = 0x2DC7C0u;
    {
        const bool branch_taken_0x2dc7c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc7c0) {
            ctx->pc = 0x2DC7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC7C0u;
            // 0x2dc7c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC884u;
            goto label_2dc884;
        }
    }
    ctx->pc = 0x2DC7C8u;
    // 0x2dc7c8: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x2dc7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2dc7cc: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x2dc7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2dc7d0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2dc7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc7d4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2dc7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc7d8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2dc7d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2dc7dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2dc7dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2dc7e0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2dc7e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc7e4: 0x0  nop
    ctx->pc = 0x2dc7e4u;
    // NOP
    // 0x2dc7e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DC7E8u;
    {
        const bool branch_taken_0x2dc7e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC7E8u;
        // 0x2dc7ec: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc7e8) {
            ctx->pc = 0x2DC7F4u;
            goto label_2dc7f4;
        }
    }
    ctx->pc = 0x2DC7F0u;
    // 0x2dc7f0: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2dc7f0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_2dc7f4:
    // 0x2dc7f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2dc7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2dc7f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dc7f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc7fc: 0x0  nop
    ctx->pc = 0x2dc7fcu;
    // NOP
    // 0x2dc800: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2dc800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc804: 0x0  nop
    ctx->pc = 0x2dc804u;
    // NOP
    // 0x2dc808: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
    ctx->pc = 0x2DC808u;
    {
        const bool branch_taken_0x2dc808 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc808) {
            ctx->pc = 0x2DC80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC808u;
            // 0x2dc80c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC884u;
            goto label_2dc884;
        }
    }
    ctx->pc = 0x2DC810u;
    // 0x2dc810: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2dc810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2dc814: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2dc814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2dc818: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2dc818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dc81c: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x2DC81Cu;
    SET_GPR_U32(ctx, 31, 0x2DC824u);
    ctx->pc = 0x2DC820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC81Cu;
    // 0x2dc820: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2DC81Cu, 0x2DC824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC824u;
label_2dc824:
    // 0x2dc824: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2dc824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc828: 0x0  nop
    ctx->pc = 0x2dc828u;
    // NOP
    // 0x2dc82c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DC82Cu;
    {
        const bool branch_taken_0x2dc82c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC82Cu;
        // 0x2dc830: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc82c) {
            ctx->pc = 0x2DC838u;
            goto label_2dc838;
        }
    }
    ctx->pc = 0x2DC834u;
    // 0x2dc834: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2dc834u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2dc838:
    // 0x2dc838: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x2dc838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x2dc83c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2dc83cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2dc840: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dc840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc844: 0x0  nop
    ctx->pc = 0x2dc844u;
    // NOP
    // 0x2dc848: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dc848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc84c: 0x0  nop
    ctx->pc = 0x2dc84cu;
    // NOP
    // 0x2dc850: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2DC850u;
    {
        const bool branch_taken_0x2dc850 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DC854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC850u;
        // 0x2dc854: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc850) {
            ctx->pc = 0x2DC884u;
            goto label_2dc884;
        }
    }
    ctx->pc = 0x2DC858u;
    // 0x2dc858: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dc858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2dc85c: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dc85cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2dc860: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dc860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2dc864: 0x2508c898  addiu       $t0, $t0, -0x3768
    ctx->pc = 0x2dc864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953112));
    // 0x2dc868: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2dc868u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc86c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2dc86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dc870: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x2dc870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2dc874: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dc874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc878: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DC878u;
    SET_GPR_U32(ctx, 31, 0x2DC880u);
    ctx->pc = 0x2DC87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC878u;
    // 0x2dc87c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DC878u, 0x2DC880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC880u;
label_2dc880:
    // 0x2dc880: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dc880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dc884:
    // 0x2dc884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc88c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2dc88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dc890: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC890u;
        // 0x2dc894: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC898u;
}
