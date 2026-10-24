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

// Function: cMessDrawFont_draw
// Address: 0x2af728 - 0x2afc08
void cMessDrawFont_draw_0x2af728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessDrawFont_draw_0x2af728");
#endif

    switch (ctx->pc) {
        case 0x2af770u: goto label_2af770;
        case 0x2af818u: goto label_2af818;
        case 0x2af84cu: goto label_2af84c;
        case 0x2af854u: goto label_2af854;
        case 0x2af8b8u: goto label_2af8b8;
        case 0x2af8c4u: goto label_2af8c4;
        case 0x2af8d0u: goto label_2af8d0;
        case 0x2af8e8u: goto label_2af8e8;
        case 0x2af8f0u: goto label_2af8f0;
        case 0x2af924u: goto label_2af924;
        case 0x2af938u: goto label_2af938;
        case 0x2af954u: goto label_2af954;
        case 0x2af968u: goto label_2af968;
        case 0x2af974u: goto label_2af974;
        case 0x2afa34u: goto label_2afa34;
        case 0x2afa48u: goto label_2afa48;
        case 0x2afa6cu: goto label_2afa6c;
        case 0x2afa94u: goto label_2afa94;
        case 0x2afb4cu: goto label_2afb4c;
        case 0x2afb64u: goto label_2afb64;
        case 0x2afbbcu: goto label_2afbbc;
        default: break;
    }

    ctx->pc = 0x2af728u;

    // 0x2af728: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2af728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2af72c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2af72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2af730: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2af730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2af734: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2af734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af738: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2af738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2af73c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2af73cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af740: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2af740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2af744: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2af744u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af748: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2af748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2af74c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2af74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2af750: 0x26460070  addiu       $a2, $s2, 0x70
    ctx->pc = 0x2af750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x2af754: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2af754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2af758: 0x26470074  addiu       $a3, $s2, 0x74
    ctx->pc = 0x2af758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
    // 0x2af75c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2af75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2af760: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2af760u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2af764: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2af764u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2af768: 0xc0ac184  jal         func_2B0610
    ctx->pc = 0x2AF768u;
    SET_GPR_U32(ctx, 31, 0x2AF770u);
    ctx->pc = 0x2AF76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF768u;
    // 0x2af76c: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0610u, 0x2AF768u, 0x2AF770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF770u;
label_2af770:
    // 0x2af770: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2af770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2af774: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2af774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2af778: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF778u;
    {
        const bool branch_taken_0x2af778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af778) {
            ctx->pc = 0x2AF77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF778u;
            // 0x2af77c: 0xc6400020  lwc1        $f0, 0x20($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF7A0u;
            goto label_2af7a0;
        }
    }
    ctx->pc = 0x2AF780u;
    // 0x2af780: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x2af780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af784: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2af784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2af788: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2af788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2af78c: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x2af78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af790: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2af790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2af794: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2af794u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2af798: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF798u;
    {
        const bool branch_taken_0x2af798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF798u;
        // 0x2af79c: 0xe6410080  swc1        $f1, 0x80($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af798) {
            ctx->pc = 0x2AF7A4u;
            goto label_2af7a4;
        }
    }
    ctx->pc = 0x2AF7A0u;
label_2af7a0:
    // 0x2af7a0: 0xe6400080  swc1        $f0, 0x80($s2)
    ctx->pc = 0x2af7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
label_2af7a4:
    // 0x2af7a4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2af7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2af7a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2af7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af7ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2af7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2af7b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2af7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2af7b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF7B4u;
    {
        const bool branch_taken_0x2af7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7B4u;
        // 0x2af7b8: 0xae430064  sw          $v1, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af7b4) {
            ctx->pc = 0x2AF7C0u;
            goto label_2af7c0;
        }
    }
    ctx->pc = 0x2AF7BCu;
    // 0x2af7bc: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2af7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2af7c0:
    // 0x2af7c0: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x2af7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2af7c4: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2af7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2af7c8: 0xae440068  sw          $a0, 0x68($s2)
    ctx->pc = 0x2af7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 4));
    // 0x2af7cc: 0xae43006c  sw          $v1, 0x6C($s2)
    ctx->pc = 0x2af7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 3));
    // 0x2af7d0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2af7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2af7d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF7D4u;
    {
        const bool branch_taken_0x2af7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7D4u;
        // 0x2af7d8: 0xc6420024  lwc1        $f2, 0x24($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af7d4) {
            ctx->pc = 0x2AF7F4u;
            goto label_2af7f4;
        }
    }
    ctx->pc = 0x2AF7DCu;
    // 0x2af7dc: 0xc6400074  lwc1        $f0, 0x74($s2)
    ctx->pc = 0x2af7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af7e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2af7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2af7e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2af7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af7e8: 0x0  nop
    ctx->pc = 0x2af7e8u;
    // NOP
    // 0x2af7ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2af7ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2af7f0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2af7f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2af7f4:
    // 0x2af7f4: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x2af7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af7f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2af7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af7fc: 0xe642008c  swc1        $f2, 0x8C($s2)
    ctx->pc = 0x2af7fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
    // 0x2af800: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2af800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af804: 0xe6400088  swc1        $f0, 0x88($s2)
    ctx->pc = 0x2af804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x2af808: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2af808u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2af80c: 0xe6420084  swc1        $f2, 0x84($s2)
    ctx->pc = 0x2af80cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
    // 0x2af810: 0xc0ac120  jal         func_2B0480
    ctx->pc = 0x2AF810u;
    SET_GPR_U32(ctx, 31, 0x2AF818u);
    ctx->pc = 0x2AF814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF810u;
    // 0x2af814: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0480u, 0x2AF810u, 0x2AF818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF818u;
label_2af818:
    // 0x2af818: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2af818u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af81c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2af81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2af820: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2af820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2af824: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x2af824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x2af828: 0x8e242380  lw          $a0, 0x2380($s1)
    ctx->pc = 0x2af828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9088)));
    // 0x2af82c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2af82cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2af830: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2af830u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2af834: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2af834u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2af838: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2af838u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2af83c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2af83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2af840: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x2af840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2af844: 0xc0a9396  jal         func_2A4E58
    ctx->pc = 0x2AF844u;
    SET_GPR_U32(ctx, 31, 0x2AF84Cu);
    ctx->pc = 0x2AF848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF844u;
    // 0x2af848: 0x34a58080  ori         $a1, $a1, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4E58u, 0x2AF844u, 0x2AF84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF84Cu;
label_2af84c:
    // 0x2af84c: 0xc0a93e8  jal         func_2A4FA0
    ctx->pc = 0x2AF84Cu;
    SET_GPR_U32(ctx, 31, 0x2AF854u);
    ctx->pc = 0x2AF850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF84Cu;
    // 0x2af850: 0x8e242380  lw          $a0, 0x2380($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4FA0u, 0x2AF84Cu, 0x2AF854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF854u;
label_2af854:
    // 0x2af854: 0x8e222380  lw          $v0, 0x2380($s1)
    ctx->pc = 0x2af854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9088)));
    // 0x2af858: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2af858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2af85c: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x2af85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2af860: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2af860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2af864: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2af864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2af868: 0xac432070  sw          $v1, 0x2070($v0)
    ctx->pc = 0x2af868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8304), GPR_U32(ctx, 3));
    // 0x2af86c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2af86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af870: 0xc641003c  lwc1        $f1, 0x3C($s2)
    ctx->pc = 0x2af870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af874: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x2af874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2af878: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2af878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2af87c: 0x8e222380  lw          $v0, 0x2380($s1)
    ctx->pc = 0x2af87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9088)));
    // 0x2af880: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2af880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2af884: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2af884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2af888: 0xe4402068  swc1        $f0, 0x2068($v0)
    ctx->pc = 0x2af888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8296), bits); }
    // 0x2af88c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2af88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af890: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x2af890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af894: 0xc6420048  lwc1        $f2, 0x48($s2)
    ctx->pc = 0x2af894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2af898: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2af898u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2af89c: 0x8e222380  lw          $v0, 0x2380($s1)
    ctx->pc = 0x2af89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9088)));
    // 0x2af8a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2af8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2af8a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2af8a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2af8a8: 0xe441206c  swc1        $f1, 0x206C($v0)
    ctx->pc = 0x2af8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8300), bits); }
    // 0x2af8ac: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2af8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2af8b0: 0xc0a94ba  jal         func_2A52E8
    ctx->pc = 0x2AF8B0u;
    SET_GPR_U32(ctx, 31, 0x2AF8B8u);
    ctx->pc = 0x2AF8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF8B0u;
    // 0x2af8b4: 0x8e242380  lw          $a0, 0x2380($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A52E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A52E8u, 0x2AF8B0u, 0x2AF8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF8B8u;
label_2af8b8:
    // 0x2af8b8: 0x8e242380  lw          $a0, 0x2380($s1)
    ctx->pc = 0x2af8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9088)));
    // 0x2af8bc: 0xc0a9628  jal         func_2A58A0
    ctx->pc = 0x2AF8BCu;
    SET_GPR_U32(ctx, 31, 0x2AF8C4u);
    ctx->pc = 0x2AF8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF8BCu;
    // 0x2af8c0: 0x8e450058  lw          $a1, 0x58($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A58A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A58A0u, 0x2AF8BCu, 0x2AF8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF8C4u;
label_2af8c4:
    // 0x2af8c4: 0x8e242380  lw          $a0, 0x2380($s1)
    ctx->pc = 0x2af8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9088)));
    // 0x2af8c8: 0xc0a9636  jal         func_2A58D8
    ctx->pc = 0x2AF8C8u;
    SET_GPR_U32(ctx, 31, 0x2AF8D0u);
    ctx->pc = 0x2AF8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF8C8u;
    // 0x2af8cc: 0x8e45005c  lw          $a1, 0x5C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A58D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A58D8u, 0x2AF8C8u, 0x2AF8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF8D0u;
label_2af8d0:
    // 0x2af8d0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2af8d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2af8d4: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x2af8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x2af8d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2af8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2af8dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8e0: 0xc0ac20c  jal         func_2B0830
    ctx->pc = 0x2AF8E0u;
    SET_GPR_U32(ctx, 31, 0x2AF8E8u);
    ctx->pc = 0x2AF8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF8E0u;
    // 0x2af8e4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0830u, 0x2AF8E0u, 0x2AF8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF8E8u;
label_2af8e8:
    // 0x2af8e8: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x2AF8E8u;
    {
        const bool branch_taken_0x2af8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF8E8u;
        // 0x2af8ec: 0xc655008c  lwc1        $f21, 0x8C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af8e8) {
            ctx->pc = 0x2AFB74u;
            goto label_2afb74;
        }
    }
    ctx->pc = 0x2AF8F0u;
label_2af8f0:
    // 0x2af8f0: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AF8F0u;
    {
        const bool branch_taken_0x2af8f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF8F0u;
        // 0x2af8f4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af8f0) {
            ctx->pc = 0x2AF938u;
            goto label_2af938;
        }
    }
    ctx->pc = 0x2AF8F8u;
    // 0x2af8f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2af8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af8fc: 0x26470078  addiu       $a3, $s2, 0x78
    ctx->pc = 0x2af8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x2af900: 0x2648007c  addiu       $t0, $s2, 0x7C
    ctx->pc = 0x2af900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
    // 0x2af904: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2af904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2af908: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2af908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2af90c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af910: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2af910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2af914: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2af914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2af918: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2af918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2af91c: 0xc0ac1c0  jal         func_2B0700
    ctx->pc = 0x2AF91Cu;
    SET_GPR_U32(ctx, 31, 0x2AF924u);
    ctx->pc = 0x2AF920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF91Cu;
    // 0x2af920: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0700u, 0x2AF91Cu, 0x2AF924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF924u;
label_2af924:
    // 0x2af924: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x2af924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x2af928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2af928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af92c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2af92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af930: 0xc0ac20c  jal         func_2B0830
    ctx->pc = 0x2AF930u;
    SET_GPR_U32(ctx, 31, 0x2AF938u);
    ctx->pc = 0x2AF934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF930u;
    // 0x2af934: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0830u, 0x2AF930u, 0x2AF938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF938u;
label_2af938:
    // 0x2af938: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x2af938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x2af93c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2af93cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2af940: 0x213c2  srl         $v0, $v0, 15
    ctx->pc = 0x2af940u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2af944: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2AF944u;
    {
        const bool branch_taken_0x2af944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF944u;
        // 0x2af948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af944) {
            ctx->pc = 0x2AF9ACu;
            goto label_2af9ac;
        }
    }
    ctx->pc = 0x2AF94Cu;
    // 0x2af94c: 0xc0ac130  jal         func_2B04C0
    ctx->pc = 0x2AF94Cu;
    SET_GPR_U32(ctx, 31, 0x2AF954u);
    ctx->pc = 0x2AF950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF94Cu;
    // 0x2af950: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04C0u, 0x2AF94Cu, 0x2AF954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF954u;
label_2af954:
    // 0x2af954: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF954u;
    {
        const bool branch_taken_0x2af954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af954) {
            ctx->pc = 0x2AF958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF954u;
            // 0x2af958: 0x8e420064  lw          $v0, 0x64($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF96Cu;
            goto label_2af96c;
        }
    }
    ctx->pc = 0x2AF95Cu;
    // 0x2af95c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2af95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af960: 0xc0ac00a  jal         func_2B0028
    ctx->pc = 0x2AF960u;
    SET_GPR_U32(ctx, 31, 0x2AF968u);
    ctx->pc = 0x2AF964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF960u;
    // 0x2af964: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0028u, 0x2AF960u, 0x2AF968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF968u;
label_2af968:
    // 0x2af968: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x2af968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_2af96c:
    // 0x2af96c: 0xc0abc1a  jal         func_2AF068
    ctx->pc = 0x2AF96Cu;
    SET_GPR_U32(ctx, 31, 0x2AF974u);
    ctx->pc = 0x2AF970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF96Cu;
    // 0x2af970: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF068u, 0x2AF96Cu, 0x2AF974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF974u;
label_2af974:
    // 0x2af974: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x2AF974u;
    {
        const bool branch_taken_0x2af974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af974) {
            ctx->pc = 0x2AF978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF974u;
            // 0x2af978: 0x8e450064  lw          $a1, 0x64($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFA3Cu;
            goto label_2afa3c;
        }
    }
    ctx->pc = 0x2AF97Cu;
    // 0x2af97c: 0xc640007c  lwc1        $f0, 0x7C($s2)
    ctx->pc = 0x2af97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af980: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2af980u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af984: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x2af984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af988: 0xc6430048  lwc1        $f3, 0x48($s2)
    ctx->pc = 0x2af988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2af98c: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x2af98cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2af990: 0xc6420080  lwc1        $f2, 0x80($s2)
    ctx->pc = 0x2af990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2af994: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2af994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2af998: 0xe6420088  swc1        $f2, 0x88($s2)
    ctx->pc = 0x2af998u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x2af99c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2af99cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2af9a0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2af9a0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2af9a4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2AF9A4u;
    {
        const bool branch_taken_0x2af9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF9A4u;
        // 0x2af9a8: 0xe640008c  swc1        $f0, 0x8C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af9a4) {
            ctx->pc = 0x2AFA38u;
            goto label_2afa38;
        }
    }
    ctx->pc = 0x2AF9ACu;
label_2af9ac:
    // 0x2af9ac: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x2af9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2af9b0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2af9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2af9b4: 0xc6420048  lwc1        $f2, 0x48($s2)
    ctx->pc = 0x2af9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2af9b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2af9b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2af9bc: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2af9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2af9c0: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x2af9c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2af9c4: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x2af9c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2af9c8: 0x0  nop
    ctx->pc = 0x2af9c8u;
    // NOP
    // 0x2af9cc: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x2AF9CCu;
    {
        const bool branch_taken_0x2af9cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AF9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF9CCu;
        // 0x2af9d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af9cc) {
            ctx->pc = 0x2AFA18u;
            goto label_2afa18;
        }
    }
    ctx->pc = 0x2AF9D4u;
    // 0x2af9d4: 0xe655008c  swc1        $f21, 0x8C($s2)
    ctx->pc = 0x2af9d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
    // 0x2af9d8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2af9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2af9dc: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x2af9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x2af9e0: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x2af9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x2af9e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2af9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af9e8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF9E8u;
    {
        const bool branch_taken_0x2af9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af9e8) {
            ctx->pc = 0x2AF9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF9E8u;
            // 0x2af9ec: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFA00u;
            goto label_2afa00;
        }
    }
    ctx->pc = 0x2AF9F0u;
    // 0x2af9f0: 0x3c0141d0  lui         $at, 0x41D0
    ctx->pc = 0x2af9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16848 << 16));
    // 0x2af9f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2af9f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af9f8: 0x0  nop
    ctx->pc = 0x2af9f8u;
    // NOP
    // 0x2af9fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2af9fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2afa00:
    // 0x2afa00: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2afa00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2afa04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2afa04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2afa08: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x2afa08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2afa0c: 0xe640008c  swc1        $f0, 0x8C($s2)
    ctx->pc = 0x2afa0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
    // 0x2afa10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AFA10u;
    {
        const bool branch_taken_0x2afa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFA10u;
        // 0x2afa14: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afa10) {
            ctx->pc = 0x2AFA28u;
            goto label_2afa28;
        }
    }
    ctx->pc = 0x2AFA18u;
label_2afa18:
    // 0x2afa18: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AFA18u;
    {
        const bool branch_taken_0x2afa18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFA18u;
        // 0x2afa1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afa18) {
            ctx->pc = 0x2AFA2Cu;
            goto label_2afa2c;
        }
    }
    ctx->pc = 0x2AFA20u;
    // 0x2afa20: 0xe655008c  swc1        $f21, 0x8C($s2)
    ctx->pc = 0x2afa20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 140), bits); }
    // 0x2afa24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2afa24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2afa28:
    // 0x2afa28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2afa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2afa2c:
    // 0x2afa2c: 0xc0abf02  jal         func_2AFC08
    ctx->pc = 0x2AFA2Cu;
    SET_GPR_U32(ctx, 31, 0x2AFA34u);
    ctx->pc = 0x2AFA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFA2Cu;
    // 0x2afa30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFC08u, 0x2AFA2Cu, 0x2AFA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFA34u;
label_2afa34:
    // 0x2afa34: 0xae420068  sw          $v0, 0x68($s2)
    ctx->pc = 0x2afa34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 2));
label_2afa38:
    // 0x2afa38: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x2afa38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_2afa3c:
    // 0x2afa3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2afa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afa40: 0xc0ac242  jal         func_2B0908
    ctx->pc = 0x2AFA40u;
    SET_GPR_U32(ctx, 31, 0x2AFA48u);
    ctx->pc = 0x2AFA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFA40u;
    // 0x2afa44: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0908u, 0x2AFA40u, 0x2AFA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFA48u;
label_2afa48:
    // 0x2afa48: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2afa48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2afa4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2afa4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2afa50: 0x0  nop
    ctx->pc = 0x2afa50u;
    // NOP
    // 0x2afa54: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2afa54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2afa58: 0x0  nop
    ctx->pc = 0x2afa58u;
    // NOP
    // 0x2afa5c: 0x45010039  bc1t        . + 4 + (0x39 << 2)
    ctx->pc = 0x2AFA5Cu;
    {
        const bool branch_taken_0x2afa5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2afa5c) {
            ctx->pc = 0x2AFB44u;
            goto label_2afb44;
        }
    }
    ctx->pc = 0x2AFA64u;
    // 0x2afa64: 0xc0ac4a8  jal         func_2B12A0
    ctx->pc = 0x2AFA64u;
    SET_GPR_U32(ctx, 31, 0x2AFA6Cu);
    ctx->pc = 0x2AFA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFA64u;
    // 0x2afa68: 0x8e440064  lw          $a0, 0x64($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B12A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B12A0u, 0x2AFA64u, 0x2AFA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFA6Cu;
label_2afa6c:
    // 0x2afa6c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2AFA6Cu;
    {
        const bool branch_taken_0x2afa6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFA6Cu;
        // 0x2afa70: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afa6c) {
            ctx->pc = 0x2AFAF8u;
            goto label_2afaf8;
        }
    }
    ctx->pc = 0x2AFA74u;
    // 0x2afa74: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2afa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2afa78: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2afa78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2afa7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2afa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2afa80: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2AFA80u;
    {
        const bool branch_taken_0x2afa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afa80) {
            ctx->pc = 0x2AFA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AFA80u;
            // 0x2afa84: 0xc640002c  lwc1        $f0, 0x2C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AFAE4u;
            goto label_2afae4;
        }
    }
    ctx->pc = 0x2AFA88u;
    // 0x2afa88: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x2afa88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x2afa8c: 0xc0ac3ae  jal         func_2B0EB8
    ctx->pc = 0x2AFA8Cu;
    SET_GPR_U32(ctx, 31, 0x2AFA94u);
    ctx->pc = 0x2AFA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFA8Cu;
    // 0x2afa90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0EB8u, 0x2AFA8Cu, 0x2AFA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFA94u;
label_2afa94:
    // 0x2afa94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AFA94u;
    {
        const bool branch_taken_0x2afa94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFA94u;
        // 0x2afa98: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afa94) {
            ctx->pc = 0x2AFAB4u;
            goto label_2afab4;
        }
    }
    ctx->pc = 0x2AFA9Cu;
    // 0x2afa9c: 0xc641003c  lwc1        $f1, 0x3C($s2)
    ctx->pc = 0x2afa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2afaa0: 0xc6430044  lwc1        $f3, 0x44($s2)
    ctx->pc = 0x2afaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2afaa4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2afaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2afaa8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2afaa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2afaac: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2AFAACu;
    {
        const bool branch_taken_0x2afaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFAACu;
        // 0x2afab0: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afaac) {
            ctx->pc = 0x2AFB30u;
            goto label_2afb30;
        }
    }
    ctx->pc = 0x2AFAB4u;
label_2afab4:
    // 0x2afab4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2afab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2afab8: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x2afab8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x2afabc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AFABCu;
    {
        const bool branch_taken_0x2afabc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFABCu;
        // 0x2afac0: 0xc641003c  lwc1        $f1, 0x3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afabc) {
            ctx->pc = 0x2AFADCu;
            goto label_2afadc;
        }
    }
    ctx->pc = 0x2AFAC4u;
    // 0x2afac4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2afac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2afac8: 0xc6430044  lwc1        $f3, 0x44($s2)
    ctx->pc = 0x2afac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2afacc: 0x3c0141d0  lui         $at, 0x41D0
    ctx->pc = 0x2afaccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16848 << 16));
    // 0x2afad0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2afad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2afad4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2AFAD4u;
    {
        const bool branch_taken_0x2afad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFAD4u;
        // 0x2afad8: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afad4) {
            ctx->pc = 0x2AFB30u;
            goto label_2afb30;
        }
    }
    ctx->pc = 0x2AFADCu;
label_2afadc:
    // 0x2afadc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2AFADCu;
    {
        const bool branch_taken_0x2afadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFADCu;
        // 0x2afae0: 0xc6430044  lwc1        $f3, 0x44($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afadc) {
            ctx->pc = 0x2AFB24u;
            goto label_2afb24;
        }
    }
    ctx->pc = 0x2AFAE4u;
label_2afae4:
    // 0x2afae4: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x2afae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2afae8: 0xc6410088  lwc1        $f1, 0x88($s2)
    ctx->pc = 0x2afae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2afaec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2afaecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2afaf0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2AFAF0u;
    {
        const bool branch_taken_0x2afaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFAF0u;
        // 0x2afaf4: 0x4600a000  add.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afaf0) {
            ctx->pc = 0x2AFB3Cu;
            goto label_2afb3c;
        }
    }
    ctx->pc = 0x2AFAF8u;
label_2afaf8:
    // 0x2afaf8: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x2afaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31244)));
    // 0x2afafc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AFAFCu;
    {
        const bool branch_taken_0x2afafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFAFCu;
        // 0x2afb00: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afafc) {
            ctx->pc = 0x2AFB1Cu;
            goto label_2afb1c;
        }
    }
    ctx->pc = 0x2AFB04u;
    // 0x2afb04: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x2afb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2afb08: 0xc6430048  lwc1        $f3, 0x48($s2)
    ctx->pc = 0x2afb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2afb0c: 0x3c0141d0  lui         $at, 0x41D0
    ctx->pc = 0x2afb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16848 << 16));
    // 0x2afb10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2afb10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2afb14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AFB14u;
    {
        const bool branch_taken_0x2afb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB14u;
        // 0x2afb18: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb14) {
            ctx->pc = 0x2AFB30u;
            goto label_2afb30;
        }
    }
    ctx->pc = 0x2AFB1Cu;
label_2afb1c:
    // 0x2afb1c: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x2afb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2afb20: 0xc6430048  lwc1        $f3, 0x48($s2)
    ctx->pc = 0x2afb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2afb24:
    // 0x2afb24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2afb24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2afb28: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x2afb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x2afb2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2afb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2afb30:
    // 0x2afb30: 0xc6410088  lwc1        $f1, 0x88($s2)
    ctx->pc = 0x2afb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2afb34: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2afb34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2afb38: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2afb38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2afb3c:
    // 0x2afb3c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2afb3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2afb40: 0xe6410088  swc1        $f1, 0x88($s2)
    ctx->pc = 0x2afb40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
label_2afb44:
    // 0x2afb44: 0xc0abc86  jal         func_2AF218
    ctx->pc = 0x2AFB44u;
    SET_GPR_U32(ctx, 31, 0x2AFB4Cu);
    ctx->pc = 0x2AFB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFB44u;
    // 0x2afb48: 0x8e440064  lw          $a0, 0x64($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF218u, 0x2AFB44u, 0x2AFB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFB4Cu;
label_2afb4c:
    // 0x2afb4c: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x2afb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x2afb50: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x2afb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x2afb54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2afb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2afb58: 0xae43006c  sw          $v1, 0x6C($s2)
    ctx->pc = 0x2afb58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 3));
    // 0x2afb5c: 0xc0abc7e  jal         func_2AF1F8
    ctx->pc = 0x2AFB5Cu;
    SET_GPR_U32(ctx, 31, 0x2AFB64u);
    ctx->pc = 0x2AFB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFB5Cu;
    // 0x2afb60: 0x94a40000  lhu         $a0, 0x0($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF1F8u, 0x2AFB5Cu, 0x2AFB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFB64u;
label_2afb64:
    // 0x2afb64: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x2afb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x2afb68: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2afb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2afb6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2afb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2afb70: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x2afb70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
label_2afb74:
    // 0x2afb74: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x2afb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x2afb78: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2afb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2afb7c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2afb7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2afb80: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AFB80u;
    {
        const bool branch_taken_0x2afb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afb80) {
            ctx->pc = 0x2AFBB4u;
            goto label_2afbb4;
        }
    }
    ctx->pc = 0x2AFB88u;
    // 0x2afb88: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2afb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2afb8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AFB8Cu;
    {
        const bool branch_taken_0x2afb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFB8Cu;
        // 0x2afb90: 0x8e450064  lw          $a1, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afb8c) {
            ctx->pc = 0x2AFBA0u;
            goto label_2afba0;
        }
    }
    ctx->pc = 0x2AFB94u;
    // 0x2afb94: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2afb94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2afb98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AFB98u;
    {
        const bool branch_taken_0x2afb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afb98) {
            ctx->pc = 0x2AFBB4u;
            goto label_2afbb4;
        }
    }
    ctx->pc = 0x2AFBA0u;
label_2afba0:
    // 0x2afba0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2afba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2afba4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2afba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2afba8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2afba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2afbac: 0x1443ff50  bne         $v0, $v1, . + 4 + (-0xB0 << 2)
    ctx->pc = 0x2AFBACu;
    {
        const bool branch_taken_0x2afbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2afbac) {
            ctx->pc = 0x2AF8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af8f0;
        }
    }
    ctx->pc = 0x2AFBB4u;
label_2afbb4:
    // 0x2afbb4: 0xc0a964c  jal         func_2A5930
    ctx->pc = 0x2AFBB4u;
    SET_GPR_U32(ctx, 31, 0x2AFBBCu);
    ctx->pc = 0x2AFBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFBB4u;
    // 0x2afbb8: 0x8e242380  lw          $a0, 0x2380($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5930u, 0x2AFBB4u, 0x2AFBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFBBCu;
label_2afbbc:
    // 0x2afbbc: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFBBCu;
    {
        const bool branch_taken_0x2afbbc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2afbbc) {
            ctx->pc = 0x2AFBCCu;
            goto label_2afbcc;
        }
    }
    ctx->pc = 0x2AFBC4u;
    // 0x2afbc4: 0xc6400070  lwc1        $f0, 0x70($s2)
    ctx->pc = 0x2afbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2afbc8: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2afbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_2afbcc:
    // 0x2afbcc: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFBCCu;
    {
        const bool branch_taken_0x2afbcc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFBCCu;
        // 0x2afbd0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afbcc) {
            ctx->pc = 0x2AFBDCu;
            goto label_2afbdc;
        }
    }
    ctx->pc = 0x2AFBD4u;
    // 0x2afbd4: 0xc6400074  lwc1        $f0, 0x74($s2)
    ctx->pc = 0x2afbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2afbd8: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x2afbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_2afbdc:
    // 0x2afbdc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2afbdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2afbe0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2afbe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2afbe4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2afbe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2afbe8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2afbe8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2afbec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2afbecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2afbf0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2afbf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2afbf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2afbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afbf8: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2afbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2afbfc: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2afbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2afc00: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFC00u;
        // 0x2afc04: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFC08u;
}
