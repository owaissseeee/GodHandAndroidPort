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

// Function: func_001223F8
// Address: 0x1223f8 - 0x1228d8
void func_001223F8_0x1223f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001223F8_0x1223f8");
#endif

    switch (ctx->pc) {
        case 0x122434u: goto label_122434;
        case 0x122440u: goto label_122440;
        case 0x1224c4u: goto label_1224c4;
        case 0x1224ccu: goto label_1224cc;
        case 0x1224d4u: goto label_1224d4;
        case 0x1224e8u: goto label_1224e8;
        case 0x122500u: goto label_122500;
        case 0x122544u: goto label_122544;
        case 0x12254cu: goto label_12254c;
        case 0x1225b0u: goto label_1225b0;
        case 0x1225c4u: goto label_1225c4;
        case 0x1225e0u: goto label_1225e0;
        case 0x1225e8u: goto label_1225e8;
        case 0x122638u: goto label_122638;
        case 0x122644u: goto label_122644;
        case 0x1226a0u: goto label_1226a0;
        case 0x1226b8u: goto label_1226b8;
        case 0x1226f8u: goto label_1226f8;
        case 0x122700u: goto label_122700;
        case 0x122710u: goto label_122710;
        case 0x122748u: goto label_122748;
        case 0x12275cu: goto label_12275c;
        case 0x122770u: goto label_122770;
        case 0x122790u: goto label_122790;
        case 0x1227d0u: goto label_1227d0;
        case 0x1227dcu: goto label_1227dc;
        case 0x122830u: goto label_122830;
        case 0x122848u: goto label_122848;
        case 0x122864u: goto label_122864;
        case 0x122878u: goto label_122878;
        case 0x12288cu: goto label_12288c;
        case 0x1228b0u: goto label_1228b0;
        case 0x1228bcu: goto label_1228bc;
        default: break;
    }

    ctx->pc = 0x1223f8u;

    // 0x1223f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1223f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1223fc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1223fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x122400: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x122400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122404: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x122404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x122408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x122408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12240c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12240cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122410: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x122410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x122414: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x122414u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x122418: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x122418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x12241c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12241cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x122420: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x122420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x122424: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122428: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x122428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x12242c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x12242Cu;
    SET_GPR_U32(ctx, 31, 0x122434u);
    ctx->pc = 0x122430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12242Cu;
    // 0x122430: 0x8e300694  lw          $s0, 0x694($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x12242Cu, 0x122434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122434u;
label_122434:
    // 0x122434: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x122434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x122438: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x122438u;
    SET_GPR_U32(ctx, 31, 0x122440u);
    ctx->pc = 0x12243Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122438u;
    // 0x12243c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x122438u, 0x122440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122440u;
label_122440:
    // 0x122440: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x122440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x122444: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x122444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x122448: 0x922502f6  lbu         $a1, 0x2F6($s1)
    ctx->pc = 0x122448u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x12244c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12244cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x122450: 0x2ca40008  sltiu       $a0, $a1, 0x8
    ctx->pc = 0x122450u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x122454: 0x10800119  beqz        $a0, . + 4 + (0x119 << 2)
    ctx->pc = 0x122454u;
    {
        const bool branch_taken_0x122454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x122458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122454u;
        // 0x122458: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122454) {
            ctx->pc = 0x1228BCu;
            goto label_1228bc;
        }
    }
    ctx->pc = 0x12245Cu;
    // 0x12245c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x12245cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x122460: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x122460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x122464: 0x2442c750  addiu       $v0, $v0, -0x38B0
    ctx->pc = 0x122464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952784));
    // 0x122468: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x122468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12246c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12246cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122470: 0x800008  jr          $a0
    ctx->pc = 0x122470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122478u: goto label_122478;
            case 0x12250Cu: goto label_12250c;
            case 0x122564u: goto label_122564;
            case 0x1225D8u: goto label_1225d8;
            case 0x122654u: goto label_122654;
            case 0x122754u: goto label_122754;
            case 0x1227E4u: goto label_1227e4;
            case 0x12285Cu: goto label_12285c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122470u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x122478u;
label_122478:
    // 0x122478: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x122478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x12247c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x12247cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122480: 0x3c01be91  lui         $at, 0xBE91
    ctx->pc = 0x122480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48785 << 16));
    // 0x122484: 0x34216873  ori         $at, $at, 0x6873
    ctx->pc = 0x122484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26739);
    // 0x122488: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x122488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12248c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12248cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122490: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x122490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x122494: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122498: 0x3c013f16  lui         $at, 0x3F16
    ctx->pc = 0x122498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16150 << 16));
    // 0x12249c: 0x342145a2  ori         $at, $at, 0x45A2
    ctx->pc = 0x12249cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17826);
    // 0x1224a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1224a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1224a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1224a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1224a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1224ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1224acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1224b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1224b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1224b4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1224b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1224b8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1224b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1224bc: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x1224BCu;
    SET_GPR_U32(ctx, 31, 0x1224C4u);
    ctx->pc = 0x1224C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224BCu;
    // 0x1224c0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x1224BCu, 0x1224C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224C4u;
label_1224c4:
    // 0x1224c4: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x1224C4u;
    SET_GPR_U32(ctx, 31, 0x1224CCu);
    ctx->pc = 0x1224C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224C4u;
    // 0x1224c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x1224C4u, 0x1224CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224CCu;
label_1224cc:
    // 0x1224cc: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x1224CCu;
    SET_GPR_U32(ctx, 31, 0x1224D4u);
    ctx->pc = 0x1224D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224CCu;
    // 0x1224d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x1224CCu, 0x1224D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224D4u;
label_1224d4:
    // 0x1224d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1224d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1224d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1224d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224dc: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x1224dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1224e0: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x1224E0u;
    SET_GPR_U32(ctx, 31, 0x1224E8u);
    ctx->pc = 0x1224E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224E0u;
    // 0x1224e4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x1224E0u, 0x1224E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224E8u;
label_1224e8:
    // 0x1224e8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1224e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1224ec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1224ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1224f0: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x1224f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x1224f4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1224f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1224f8: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x1224F8u;
    SET_GPR_U32(ctx, 31, 0x122500u);
    ctx->pc = 0x1224FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224F8u;
    // 0x1224fc: 0x2405fec0  addiu       $a1, $zero, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x1224F8u, 0x122500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122500u;
label_122500:
    // 0x122500: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x122500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x122504: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x122504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x122508: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x122508u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_12250c:
    // 0x12250c: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x12250cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x122510: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x122510u;
    {
        const bool branch_taken_0x122510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122510u;
        // 0x122514: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122510) {
            ctx->pc = 0x12253Cu;
            goto label_12253c;
        }
    }
    ctx->pc = 0x122518u;
    // 0x122518: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x122518u;
    {
        const bool branch_taken_0x122518 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122518u;
        // 0x12251c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122518) {
            ctx->pc = 0x12253Cu;
            goto label_12253c;
        }
    }
    ctx->pc = 0x122520u;
    // 0x122520: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x122520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x122524: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x122524u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x122528: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x122528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x12252c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x12252cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122530: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x122530u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122534: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x122534u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x122538: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x122538u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_12253c:
    // 0x12253c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x12253Cu;
    SET_GPR_U32(ctx, 31, 0x122544u);
    ctx->pc = 0x122540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12253Cu;
    // 0x122540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x12253Cu, 0x122544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122544u;
label_122544:
    // 0x122544: 0xc055f06  jal         func_157C18
    ctx->pc = 0x122544u;
    SET_GPR_U32(ctx, 31, 0x12254Cu);
    ctx->pc = 0x122548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122544u;
    // 0x122548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x122544u, 0x12254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12254Cu;
label_12254c:
    // 0x12254c: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x12254Cu;
    {
        const bool branch_taken_0x12254c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12254c) {
            ctx->pc = 0x1227BCu;
            goto label_1227bc;
        }
    }
    ctx->pc = 0x122554u;
    // 0x122554: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x122554u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x122558: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x122558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12255c: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x12255Cu;
    {
        const bool branch_taken_0x12255c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12255Cu;
        // 0x122560: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12255c) {
            ctx->pc = 0x1227BCu;
            goto label_1227bc;
        }
    }
    ctx->pc = 0x122564u;
label_122564:
    // 0x122564: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x122564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x122568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12256c: 0x3c01be2e  lui         $at, 0xBE2E
    ctx->pc = 0x12256cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48686 << 16));
    // 0x122570: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x122570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x122574: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x122574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x122578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12257c: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x12257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x122580: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x122580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122584: 0x3c013ed3  lui         $at, 0x3ED3
    ctx->pc = 0x122584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16083 << 16));
    // 0x122588: 0x3421f7cf  ori         $at, $at, 0xF7CF
    ctx->pc = 0x122588u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63439);
    // 0x12258c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12258cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x122590: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x122590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122594: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x122594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x122598: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x122598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12259c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12259cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1225a0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1225a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1225a4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1225a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1225a8: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x1225A8u;
    SET_GPR_U32(ctx, 31, 0x1225B0u);
    ctx->pc = 0x1225ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1225A8u;
    // 0x1225ac: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x1225A8u, 0x1225B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1225B0u;
label_1225b0:
    // 0x1225b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1225b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1225b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1225b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1225b8: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x1225b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1225bc: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x1225BCu;
    SET_GPR_U32(ctx, 31, 0x1225C4u);
    ctx->pc = 0x1225C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1225BCu;
    // 0x1225c0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x1225BCu, 0x1225C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1225C4u;
label_1225c4:
    // 0x1225c4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1225c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1225c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1225c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1225cc: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x1225ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x1225d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1225d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1225d4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1225d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1225d8:
    // 0x1225d8: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1225D8u;
    SET_GPR_U32(ctx, 31, 0x1225E0u);
    ctx->pc = 0x1225DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1225D8u;
    // 0x1225dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1225D8u, 0x1225E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1225E0u;
label_1225e0:
    // 0x1225e0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1225E0u;
    SET_GPR_U32(ctx, 31, 0x1225E8u);
    ctx->pc = 0x1225E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1225E0u;
    // 0x1225e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1225E0u, 0x1225E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1225E8u;
label_1225e8:
    // 0x1225e8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1225E8u;
    {
        const bool branch_taken_0x1225e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1225ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225E8u;
        // 0x1225ec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1225e8) {
            ctx->pc = 0x1225F4u;
            goto label_1225f4;
        }
    }
    ctx->pc = 0x1225F0u;
    // 0x1225f0: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x1225f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
label_1225f4:
    // 0x1225f4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x1225f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x1225f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1225f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1225fc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1225FCu;
    {
        const bool branch_taken_0x1225fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1225FCu;
        // 0x122600: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1225fc) {
            ctx->pc = 0x12264Cu;
            goto label_12264c;
        }
    }
    ctx->pc = 0x122604u;
    // 0x122604: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x122604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x122608: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x122608u;
    {
        const bool branch_taken_0x122608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122608) {
            ctx->pc = 0x1227BCu;
            goto label_1227bc;
        }
    }
    ctx->pc = 0x122610u;
    // 0x122610: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x122610u;
    {
        const bool branch_taken_0x122610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x122614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122610u;
        // 0x122614: 0xae2015b0  sw          $zero, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122610) {
            ctx->pc = 0x122638u;
            goto label_122638;
        }
    }
    ctx->pc = 0x122618u;
    // 0x122618: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x122618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x12261c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12261cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x122620: 0xc600076c  lwc1        $f0, 0x76C($s0)
    ctx->pc = 0x122620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122624: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x122624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x122628: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x122628u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12262c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x12262cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x122630: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x122630u;
    SET_GPR_U32(ctx, 31, 0x122638u);
    ctx->pc = 0x122634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122630u;
    // 0x122634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x122630u, 0x122638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122638u;
label_122638:
    // 0x122638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12263c: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x12263Cu;
    SET_GPR_U32(ctx, 31, 0x122644u);
    ctx->pc = 0x122640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12263Cu;
    // 0x122640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x12263Cu, 0x122644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122644u;
label_122644:
    // 0x122644: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x122644u;
    {
        const bool branch_taken_0x122644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122644) {
            ctx->pc = 0x1227BCu;
            goto label_1227bc;
        }
    }
    ctx->pc = 0x12264Cu;
label_12264c:
    // 0x12264c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x12264Cu;
    {
        const bool branch_taken_0x12264c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12264Cu;
        // 0x122650: 0xae2215b0  sw          $v0, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12264c) {
            ctx->pc = 0x1227BCu;
            goto label_1227bc;
        }
    }
    ctx->pc = 0x122654u;
label_122654:
    // 0x122654: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x122654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x122658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12265c: 0x3c01be38  lui         $at, 0xBE38
    ctx->pc = 0x12265cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48696 << 16));
    // 0x122660: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x122660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x122664: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x122664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x122668: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12266c: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x12266cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x122670: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x122670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122674: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x122674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x122678: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x122678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12267c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12267cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x122680: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x122680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122684: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x122684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x122688: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x122688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12268c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12268cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x122690: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x122690u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x122694: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x122694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x122698: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x122698u;
    SET_GPR_U32(ctx, 31, 0x1226A0u);
    ctx->pc = 0x12269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122698u;
    // 0x12269c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x122698u, 0x1226A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226A0u;
label_1226a0:
    // 0x1226a0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1226a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1226a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1226a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1226a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1226a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1226ac: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1226acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1226b0: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x1226B0u;
    SET_GPR_U32(ctx, 31, 0x1226B8u);
    ctx->pc = 0x1226B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1226B0u;
    // 0x1226b4: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x1226B0u, 0x1226B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226B8u;
label_1226b8:
    // 0x1226b8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1226b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1226bc: 0x8623054a  lh          $v1, 0x54A($s1)
    ctx->pc = 0x1226bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x1226c0: 0x1c600017  bgtz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1226C0u;
    {
        const bool branch_taken_0x1226c0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1226C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226C0u;
        // 0x1226c4: 0xae2215b0  sw          $v0, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226c0) {
            ctx->pc = 0x122720u;
            goto label_122720;
        }
    }
    ctx->pc = 0x1226C8u;
    // 0x1226c8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1226c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1226cc: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x1226ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x1226d0: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1226d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1226d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1226d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1226d8: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x1226d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x1226dc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1226dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1226e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1226e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1226e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1226e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1226e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1226e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1226ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1226ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1226f0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1226F0u;
    SET_GPR_U32(ctx, 31, 0x1226F8u);
    ctx->pc = 0x1226F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1226F0u;
    // 0x1226f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1226F0u, 0x1226F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226F8u;
label_1226f8:
    // 0x1226f8: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x1226F8u;
    SET_GPR_U32(ctx, 31, 0x122700u);
    ctx->pc = 0x1226FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1226F8u;
    // 0x1226fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x1226F8u, 0x122700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122700u;
label_122700:
    // 0x122700: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x122700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x122704: 0x2405fc18  addiu       $a1, $zero, -0x3E8
    ctx->pc = 0x122704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x122708: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x122708u;
    SET_GPR_U32(ctx, 31, 0x122710u);
    ctx->pc = 0x12270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122708u;
    // 0x12270c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x122708u, 0x122710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122710u;
label_122710:
    // 0x122710: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x122710u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x122714: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x122714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x122718: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x122718u;
    {
        const bool branch_taken_0x122718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122718u;
        // 0x12271c: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122718) {
            ctx->pc = 0x122748u;
            goto label_122748;
        }
    }
    ctx->pc = 0x122720u;
label_122720:
    // 0x122720: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x122720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x122724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122728: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x122728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x12272c: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x12272cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x122730: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x122730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122734: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x122734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122738: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x122738u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12273c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12273cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122740: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x122740u;
    SET_GPR_U32(ctx, 31, 0x122748u);
    ctx->pc = 0x122744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122740u;
    // 0x122744: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x122740u, 0x122748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122748u;
label_122748:
    // 0x122748: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x122748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x12274c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12274cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x122750: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x122750u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_122754:
    // 0x122754: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x122754u;
    SET_GPR_U32(ctx, 31, 0x12275Cu);
    ctx->pc = 0x122758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122754u;
    // 0x122758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x122754u, 0x12275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12275Cu;
label_12275c:
    // 0x12275c: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x12275cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x122760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122764: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x122764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x122768: 0xc055f06  jal         func_157C18
    ctx->pc = 0x122768u;
    SET_GPR_U32(ctx, 31, 0x122770u);
    ctx->pc = 0x12276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122768u;
    // 0x12276c: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x122768u, 0x122770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122770u;
label_122770:
    // 0x122770: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x122770u;
    {
        const bool branch_taken_0x122770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122770) {
            ctx->pc = 0x1227BCu;
            goto label_1227bc;
        }
    }
    ctx->pc = 0x122778u;
    // 0x122778: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x122778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x12277c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12277Cu;
    {
        const bool branch_taken_0x12277c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x122780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12277Cu;
        // 0x122780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12277c) {
            ctx->pc = 0x1227ACu;
            goto label_1227ac;
        }
    }
    ctx->pc = 0x122784u;
    // 0x122784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122788: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x122788u;
    SET_GPR_U32(ctx, 31, 0x122790u);
    ctx->pc = 0x12278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122788u;
    // 0x12278c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x122788u, 0x122790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122790u;
label_122790:
    // 0x122790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122794: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x122794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x122798: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x122798u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x12279c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x12279cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1227a0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1227a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1227a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1227A4u;
    {
        const bool branch_taken_0x1227a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1227A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227A4u;
        // 0x1227a8: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227a4) {
            ctx->pc = 0x1227BCu;
            goto label_1227bc;
        }
    }
    ctx->pc = 0x1227ACu;
label_1227ac:
    // 0x1227ac: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1227acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1227b0: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x1227b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x1227b4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1227b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1227b8: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x1227b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_1227bc:
    // 0x1227bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1227bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1227c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1227c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1227c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1227c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1227c8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1227C8u;
    SET_GPR_U32(ctx, 31, 0x1227D0u);
    ctx->pc = 0x1227CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227C8u;
    // 0x1227cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1227C8u, 0x1227D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227D0u;
label_1227d0:
    // 0x1227d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1227d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1227d4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1227D4u;
    SET_GPR_U32(ctx, 31, 0x1227DCu);
    ctx->pc = 0x1227D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1227D4u;
    // 0x1227d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1227D4u, 0x1227DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227DCu;
label_1227dc:
    // 0x1227dc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1227DCu;
    {
        const bool branch_taken_0x1227dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1227E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227DCu;
        // 0x1227e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227dc) {
            ctx->pc = 0x1228C0u;
            goto label_1228c0;
        }
    }
    ctx->pc = 0x1227E4u;
label_1227e4:
    // 0x1227e4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1227e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1227e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1227e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1227ec: 0x3c01be2e  lui         $at, 0xBE2E
    ctx->pc = 0x1227ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48686 << 16));
    // 0x1227f0: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1227f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1227f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1227f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1227f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1227f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1227fc: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x1227fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x122800: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x122800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122804: 0x3c013ed3  lui         $at, 0x3ED3
    ctx->pc = 0x122804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16083 << 16));
    // 0x122808: 0x3421f7cf  ori         $at, $at, 0xF7CF
    ctx->pc = 0x122808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63439);
    // 0x12280c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12280cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x122810: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x122810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122814: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x122814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x122818: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x122818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12281c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12281cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x122820: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x122820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x122824: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x122824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x122828: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x122828u;
    SET_GPR_U32(ctx, 31, 0x122830u);
    ctx->pc = 0x12282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122828u;
    // 0x12282c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x122828u, 0x122830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122830u;
label_122830:
    // 0x122830: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x122830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x122834: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x122834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x122838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12283c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x12283cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x122840: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x122840u;
    SET_GPR_U32(ctx, 31, 0x122848u);
    ctx->pc = 0x122844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122840u;
    // 0x122844: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x122840u, 0x122848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122848u;
label_122848:
    // 0x122848: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x122848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x12284c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x12284cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x122850: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x122850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x122854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x122854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x122858: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x122858u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_12285c:
    // 0x12285c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x12285Cu;
    SET_GPR_U32(ctx, 31, 0x122864u);
    ctx->pc = 0x122860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12285Cu;
    // 0x122860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x12285Cu, 0x122864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122864u;
label_122864:
    // 0x122864: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x122864u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x122868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12286c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x12286cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x122870: 0xc055f06  jal         func_157C18
    ctx->pc = 0x122870u;
    SET_GPR_U32(ctx, 31, 0x122878u);
    ctx->pc = 0x122874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122870u;
    // 0x122874: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x122870u, 0x122878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122878u;
label_122878:
    // 0x122878: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x122878u;
    {
        const bool branch_taken_0x122878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122878u;
        // 0x12287c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122878) {
            ctx->pc = 0x12289Cu;
            goto label_12289c;
        }
    }
    ctx->pc = 0x122880u;
    // 0x122880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122884: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x122884u;
    SET_GPR_U32(ctx, 31, 0x12288Cu);
    ctx->pc = 0x122888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122884u;
    // 0x122888: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x122884u, 0x12288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12288Cu;
label_12288c:
    // 0x12288c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x12288cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x122890: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x122890u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x122894: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x122894u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x122898: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x122898u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_12289c:
    // 0x12289c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12289cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1228a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1228a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1228a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1228a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1228a8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x1228A8u;
    SET_GPR_U32(ctx, 31, 0x1228B0u);
    ctx->pc = 0x1228ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1228A8u;
    // 0x1228ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x1228A8u, 0x1228B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1228B0u;
label_1228b0:
    // 0x1228b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1228b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1228b4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x1228B4u;
    SET_GPR_U32(ctx, 31, 0x1228BCu);
    ctx->pc = 0x1228B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1228B4u;
    // 0x1228b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x1228B4u, 0x1228BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1228BCu;
label_1228bc:
    // 0x1228bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1228bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1228c0:
    // 0x1228c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1228c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1228c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1228c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1228c8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1228c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1228cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1228CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1228D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228CCu;
        // 0x1228d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1228CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1228D4u;
    // 0x1228d4: 0x0  nop
    ctx->pc = 0x1228d4u;
    // NOP
    ctx->pc = 0x1228d8u;
}
