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

// Function: func_002606E8
// Address: 0x2606e8 - 0x260890
void func_002606E8_0x2606e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002606E8_0x2606e8");
#endif

    switch (ctx->pc) {
        case 0x260720u: goto label_260720;
        case 0x260820u: goto label_260820;
        case 0x260834u: goto label_260834;
        case 0x26084cu: goto label_26084c;
        case 0x260874u: goto label_260874;
        default: break;
    }

    ctx->pc = 0x2606e8u;

    // 0x2606e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2606e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2606ec: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2606ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2606f0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2606f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2606f4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2606f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2606f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2606f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2606fc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2606fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x260700: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x260700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x260704: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x260704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x260708: 0x38420211  xori        $v0, $v0, 0x211
    ctx->pc = 0x260708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)529);
    // 0x26070c: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x26070Cu;
    {
        const bool branch_taken_0x26070c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26070Cu;
        // 0x260710: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26070c) {
            ctx->pc = 0x260874u;
            goto label_260874;
        }
    }
    ctx->pc = 0x260714u;
    // 0x260714: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x260714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x260718: 0xc098194  jal         func_260650
    ctx->pc = 0x260718u;
    SET_GPR_U32(ctx, 31, 0x260720u);
    ctx->pc = 0x26071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260718u;
    // 0x26071c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260650u, 0x260718u, 0x260720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260720u;
label_260720:
    // 0x260720: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x260720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x260724: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x260724u;
    {
        const bool branch_taken_0x260724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260724u;
        // 0x260728: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260724) {
            ctx->pc = 0x260874u;
            goto label_260874;
        }
    }
    ctx->pc = 0x26072Cu;
    // 0x26072c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26072Cu;
    {
        const bool branch_taken_0x26072c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x260730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26072Cu;
        // 0x260730: 0x24020203  addiu       $v0, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26072c) {
            ctx->pc = 0x26073Cu;
            goto label_26073c;
        }
    }
    ctx->pc = 0x260734u;
    // 0x260734: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x260734u;
    {
        const bool branch_taken_0x260734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x260734) {
            ctx->pc = 0x26077Cu;
            goto label_26077c;
        }
    }
    ctx->pc = 0x26073Cu;
label_26073c:
    // 0x26073c: 0x3c01c140  lui         $at, 0xC140
    ctx->pc = 0x26073cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49472 << 16));
    // 0x260740: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x260740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x260744: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x260744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260748: 0x3c0140bb  lui         $at, 0x40BB
    ctx->pc = 0x260748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16571 << 16));
    // 0x26074c: 0x34219581  ori         $at, $at, 0x9581
    ctx->pc = 0x26074cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38273);
    // 0x260750: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x260750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260754: 0x3c01c1c6  lui         $at, 0xC1C6
    ctx->pc = 0x260754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49606 << 16));
    // 0x260758: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x260758u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x26075c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26075cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x260760: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x260760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x260764: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x260764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x260768: 0x3c013fa7  lui         $at, 0x3FA7
    ctx->pc = 0x260768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16295 << 16));
    // 0x26076c: 0x34218d36  ori         $at, $at, 0x8D36
    ctx->pc = 0x26076cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36150);
    // 0x260770: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x260770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x260774: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x260774u;
    {
        const bool branch_taken_0x260774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260774u;
        // 0x260778: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260774) {
            ctx->pc = 0x2607B8u;
            goto label_2607b8;
        }
    }
    ctx->pc = 0x26077Cu;
label_26077c:
    // 0x26077c: 0x3c014121  lui         $at, 0x4121
    ctx->pc = 0x26077cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16673 << 16));
    // 0x260780: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x260780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x260784: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x260784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260788: 0x3c0140ce  lui         $at, 0x40CE
    ctx->pc = 0x260788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16590 << 16));
    // 0x26078c: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x26078cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x260790: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x260790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260794: 0x3c01c1a7  lui         $at, 0xC1A7
    ctx->pc = 0x260794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49575 << 16));
    // 0x260798: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x260798u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x26079c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26079cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2607a0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2607a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2607a4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2607a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2607a8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2607a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2607ac: 0x3c01bfa0  lui         $at, 0xBFA0
    ctx->pc = 0x2607acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49056 << 16));
    // 0x2607b0: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x2607b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
    // 0x2607b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2607b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2607b8:
    // 0x2607b8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2607b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2607bc: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2607bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2607c0: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x2607c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x2607c4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2607c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2607c8: 0xa0450031  sb          $a1, 0x31($v0)
    ctx->pc = 0x2607c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 49), (uint8_t)GPR_U32(ctx, 5));
    // 0x2607cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2607ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2607d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2607d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2607d4: 0x109d0007  beq         $a0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2607D4u;
    {
        const bool branch_taken_0x2607d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 29));
        ctx->pc = 0x2607D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2607D4u;
        // 0x2607d8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2607d4) {
            ctx->pc = 0x2607F4u;
            goto label_2607f4;
        }
    }
    ctx->pc = 0x2607DCu;
    // 0x2607dc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2607dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2607e0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2607e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2607e4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2607e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2607e8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2607e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2607ec: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2607ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2607f0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2607f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2607f4:
    // 0x2607f4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2607f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2607f8: 0x3c030408  lui         $v1, 0x408
    ctx->pc = 0x2607f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1032 << 16));
    // 0x2607fc: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x2607fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x260800: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x260800u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x260804: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x260804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x260808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26080c: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x26080cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x260810: 0xa3a50041  sb          $a1, 0x41($sp)
    ctx->pc = 0x260810u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 5));
    // 0x260814: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x260814u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x260818: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x260818u;
    SET_GPR_U32(ctx, 31, 0x260820u);
    ctx->pc = 0x26081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260818u;
    // 0x26081c: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x260818u, 0x260820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260820u;
label_260820:
    // 0x260820: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x260820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x260824: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x260824u;
    {
        const bool branch_taken_0x260824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260824u;
        // 0x260828: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260824) {
            ctx->pc = 0x260860u;
            goto label_260860;
        }
    }
    ctx->pc = 0x26082Cu;
    // 0x26082c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x26082Cu;
    SET_GPR_U32(ctx, 31, 0x260834u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x26082Cu, 0x260834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260834u;
label_260834:
    // 0x260834: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x260834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x260838: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x260838u;
    {
        const bool branch_taken_0x260838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260838u;
        // 0x26083c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260838) {
            ctx->pc = 0x260844u;
            goto label_260844;
        }
    }
    ctx->pc = 0x260840u;
    // 0x260840: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x260840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_260844:
    // 0x260844: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x260844u;
    SET_GPR_U32(ctx, 31, 0x26084Cu);
    ctx->pc = 0x260848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260844u;
    // 0x260848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x260844u, 0x26084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26084Cu;
label_26084c:
    // 0x26084c: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x26084cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x260850: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x260850u;
    {
        const bool branch_taken_0x260850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260850u;
        // 0x260854: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260850) {
            ctx->pc = 0x260860u;
            goto label_260860;
        }
    }
    ctx->pc = 0x260858u;
    // 0x260858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x260858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26085c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x26085cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_260860:
    // 0x260860: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x260860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260864: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x260864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x260868: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x260868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26086c: 0xc0a4174  jal         func_2905D0
    ctx->pc = 0x26086Cu;
    SET_GPR_U32(ctx, 31, 0x260874u);
    ctx->pc = 0x260870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26086Cu;
    // 0x260870: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2905D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2905D0u, 0x26086Cu, 0x260874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260874u;
label_260874:
    // 0x260874: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x260874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x260878: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x260878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26087c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x26087cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x260880: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x260880u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x260884: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x260884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260888: 0x3e00008  jr          $ra
    ctx->pc = 0x260888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260888u;
        // 0x26088c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260890u;
}
