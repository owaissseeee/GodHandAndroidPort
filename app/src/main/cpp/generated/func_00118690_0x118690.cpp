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

// Function: func_00118690
// Address: 0x118690 - 0x118b68
void func_00118690_0x118690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00118690_0x118690");
#endif

    switch (ctx->pc) {
        case 0x1186e0u: goto label_1186e0;
        case 0x1186f0u: goto label_1186f0;
        case 0x1186fcu: goto label_1186fc;
        case 0x11873cu: goto label_11873c;
        case 0x118744u: goto label_118744;
        case 0x118790u: goto label_118790;
        case 0x1187a4u: goto label_1187a4;
        case 0x1187b4u: goto label_1187b4;
        case 0x1187d0u: goto label_1187d0;
        case 0x1187f4u: goto label_1187f4;
        case 0x1187fcu: goto label_1187fc;
        case 0x118820u: goto label_118820;
        case 0x118848u: goto label_118848;
        case 0x118a0cu: goto label_118a0c;
        case 0x118a14u: goto label_118a14;
        case 0x118a1cu: goto label_118a1c;
        case 0x118a50u: goto label_118a50;
        case 0x118a5cu: goto label_118a5c;
        case 0x118a78u: goto label_118a78;
        case 0x118a8cu: goto label_118a8c;
        case 0x118a94u: goto label_118a94;
        case 0x118aa8u: goto label_118aa8;
        case 0x118accu: goto label_118acc;
        case 0x118ad8u: goto label_118ad8;
        case 0x118b38u: goto label_118b38;
        default: break;
    }

    ctx->pc = 0x118690u;

    // 0x118690: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x118690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x118694: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x118694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x118698: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x118698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11869c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11869cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1186a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1186a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1186a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1186a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1186a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1186acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1186b0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1186b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1186b4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1186b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1186b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1186b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186bc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1186bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1186c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1186c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1186c4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x1186c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x1186c8: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1186c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1186cc: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x1186ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x1186d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1186d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1186d4: 0x8e320694  lw          $s2, 0x694($s1)
    ctx->pc = 0x1186d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x1186d8: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x1186D8u;
    SET_GPR_U32(ctx, 31, 0x1186E0u);
    ctx->pc = 0x1186DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1186D8u;
    // 0x1186dc: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x1186D8u, 0x1186E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1186E0u;
label_1186e0:
    // 0x1186e0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1186e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1186e4: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x1186e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x1186e8: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x1186E8u;
    SET_GPR_U32(ctx, 31, 0x1186F0u);
    ctx->pc = 0x1186ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1186E8u;
    // 0x1186ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x1186E8u, 0x1186F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1186F0u;
label_1186f0:
    // 0x1186f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1186f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186f4: 0xc0a480c  jal         func_292030
    ctx->pc = 0x1186F4u;
    SET_GPR_U32(ctx, 31, 0x1186FCu);
    ctx->pc = 0x1186F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1186F4u;
    // 0x1186f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x1186F4u, 0x1186FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1186FCu;
label_1186fc:
    // 0x1186fc: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x1186fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x118700: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x118700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x118704: 0x922502f6  lbu         $a1, 0x2F6($s1)
    ctx->pc = 0x118704u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x118708: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x118708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11870c: 0x2ca40006  sltiu       $a0, $a1, 0x6
    ctx->pc = 0x11870cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x118710: 0x108000f1  beqz        $a0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x118710u;
    {
        const bool branch_taken_0x118710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x118714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118710u;
        // 0x118714: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118710) {
            ctx->pc = 0x118AD8u;
            goto label_118ad8;
        }
    }
    ctx->pc = 0x118718u;
    // 0x118718: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x118718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x11871c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11871cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x118720: 0x2442c3b0  addiu       $v0, $v0, -0x3C50
    ctx->pc = 0x118720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951856));
    // 0x118724: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118728: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x118728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11872c: 0x800008  jr          $a0
    ctx->pc = 0x11872Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118734u: goto label_118734;
            case 0x1187C8u: goto label_1187c8;
            case 0x11880Cu: goto label_11880c;
            case 0x118840u: goto label_118840;
            case 0x118A64u: goto label_118a64;
            case 0x118A84u: goto label_118a84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11872Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x118734u;
label_118734:
    // 0x118734: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x118734u;
    SET_GPR_U32(ctx, 31, 0x11873Cu);
    ctx->pc = 0x118738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118734u;
    // 0x118738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x118734u, 0x11873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11873Cu;
label_11873c:
    // 0x11873c: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11873Cu;
    SET_GPR_U32(ctx, 31, 0x118744u);
    ctx->pc = 0x118740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11873Cu;
    // 0x118740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11873Cu, 0x118744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118744u;
label_118744:
    // 0x118744: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x118744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x118748: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x118748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11874c: 0x3c013e9b  lui         $at, 0x3E9B
    ctx->pc = 0x11874cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16027 << 16));
    // 0x118750: 0x342122d1  ori         $at, $at, 0x22D1
    ctx->pc = 0x118750u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8913);
    // 0x118754: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x118754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x118758: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11875c: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x11875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x118760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118764: 0x3c013f15  lui         $at, 0x3F15
    ctx->pc = 0x118764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16149 << 16));
    // 0x118768: 0x3421a858  ori         $at, $at, 0xA858
    ctx->pc = 0x118768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43096);
    // 0x11876c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11876cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118770: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x118770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118774: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x118774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x118778: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11877c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11877cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x118780: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x118780u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x118784: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x118784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x118788: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x118788u;
    SET_GPR_U32(ctx, 31, 0x118790u);
    ctx->pc = 0x11878Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118788u;
    // 0x11878c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x118788u, 0x118790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118790u;
label_118790:
    // 0x118790: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x118790u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x118794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118798: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x118798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x11879c: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11879Cu;
    SET_GPR_U32(ctx, 31, 0x1187A4u);
    ctx->pc = 0x1187A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11879Cu;
    // 0x1187a0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11879Cu, 0x1187A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187A4u;
label_1187a4:
    // 0x1187a4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1187a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1187a8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1187a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1187ac: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x1187ACu;
    SET_GPR_U32(ctx, 31, 0x1187B4u);
    ctx->pc = 0x1187B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1187ACu;
    // 0x1187b0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x1187ACu, 0x1187B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187B4u;
label_1187b4:
    // 0x1187b4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1187b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1187b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1187b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1187bc: 0xa623056a  sh          $v1, 0x56A($s1)
    ctx->pc = 0x1187bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 3));
    // 0x1187c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1187c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1187c4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1187c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1187c8:
    // 0x1187c8: 0xc0b6dea  jal         func_2DB7A8
    ctx->pc = 0x1187C8u;
    SET_GPR_U32(ctx, 31, 0x1187D0u);
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x1187C8u, 0x1187D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187D0u;
label_1187d0:
    // 0x1187d0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1187D0u;
    {
        const bool branch_taken_0x1187d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1187D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1187D0u;
        // 0x1187d4: 0x26430550  addiu       $v1, $s2, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1187d0) {
            ctx->pc = 0x1187ECu;
            goto label_1187ec;
        }
    }
    ctx->pc = 0x1187D8u;
    // 0x1187d8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1187d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1187dc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1187dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1187e0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1187e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1187e4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1187e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1187e8: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1187e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1187ec:
    // 0x1187ec: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1187ECu;
    SET_GPR_U32(ctx, 31, 0x1187F4u);
    ctx->pc = 0x1187F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1187ECu;
    // 0x1187f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1187ECu, 0x1187F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187F4u;
label_1187f4:
    // 0x1187f4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1187F4u;
    SET_GPR_U32(ctx, 31, 0x1187FCu);
    ctx->pc = 0x1187F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1187F4u;
    // 0x1187f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1187F4u, 0x1187FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1187FCu;
label_1187fc:
    // 0x1187fc: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x1187FCu;
    {
        const bool branch_taken_0x1187fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1187fc) {
            ctx->pc = 0x118A3Cu;
            goto label_118a3c;
        }
    }
    ctx->pc = 0x118804u;
    // 0x118804: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x118804u;
    {
        const bool branch_taken_0x118804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118804u;
        // 0x118808: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118804) {
            ctx->pc = 0x118A34u;
            goto label_118a34;
        }
    }
    ctx->pc = 0x11880Cu;
label_11880c:
    // 0x11880c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11880cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x118810: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118814: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x118814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x118818: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x118818u;
    SET_GPR_U32(ctx, 31, 0x118820u);
    ctx->pc = 0x11881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118818u;
    // 0x11881c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x118818u, 0x118820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118820u;
label_118820:
    // 0x118820: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x118820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x118824: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x118824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x118828: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x118828u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x11882c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11882cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x118830: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x118830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x118834: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x118834u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x118838: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x118838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
    // 0x11883c: 0xae2015b8  sw          $zero, 0x15B8($s1)
    ctx->pc = 0x11883cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 0));
label_118840:
    // 0x118840: 0xc0b6dea  jal         func_2DB7A8
    ctx->pc = 0x118840u;
    SET_GPR_U32(ctx, 31, 0x118848u);
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x118840u, 0x118848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118848u;
label_118848:
    // 0x118848: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x118848u;
    {
        const bool branch_taken_0x118848 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118848u;
        // 0x11884c: 0x26430550  addiu       $v1, $s2, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118848) {
            ctx->pc = 0x118864u;
            goto label_118864;
        }
    }
    ctx->pc = 0x118850u;
    // 0x118850: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x118850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x118854: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x118854u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118858: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x118858u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11885c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11885cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x118860: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x118860u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_118864:
    // 0x118864: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x118864u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x118868: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118868u;
    {
        const bool branch_taken_0x118868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118868u;
        // 0x11886c: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118868) {
            ctx->pc = 0x118878u;
            goto label_118878;
        }
    }
    ctx->pc = 0x118870u;
    // 0x118870: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x118870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x118874: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x118874u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_118878:
    // 0x118878: 0x8e2215b8  lw          $v0, 0x15B8($s1)
    ctx->pc = 0x118878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
    // 0x11887c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11887Cu;
    {
        const bool branch_taken_0x11887c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11887Cu;
        // 0x118880: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11887c) {
            ctx->pc = 0x118888u;
            goto label_118888;
        }
    }
    ctx->pc = 0x118884u;
    // 0x118884: 0xae2215b8  sw          $v0, 0x15B8($s1)
    ctx->pc = 0x118884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
label_118888:
    // 0x118888: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x118888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11888c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x11888cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x118890: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118894: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x118894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
    // 0x118898: 0x8c8374a8  lw          $v1, 0x74A8($a0)
    ctx->pc = 0x118898u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7474A8u));
    // 0x11889c: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x11889cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x1188a0: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x1188A0u;
    {
        const bool branch_taken_0x1188a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1188a0) {
            ctx->pc = 0x1188A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1188A0u;
            // 0x1188a4: 0x8e2215b8  lw          $v0, 0x15B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118964u;
            goto label_118964;
        }
    }
    ctx->pc = 0x1188A8u;
    // 0x1188a8: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x1188a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x1188ac: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1188acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1188b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1188B0u;
    {
        const bool branch_taken_0x1188b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1188B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1188B0u;
        // 0x1188b4: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1188b0) {
            ctx->pc = 0x1188D0u;
            goto label_1188d0;
        }
    }
    ctx->pc = 0x1188B8u;
    // 0x1188b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1188b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1188bc: 0x2442c3d0  addiu       $v0, $v0, -0x3C30
    ctx->pc = 0x1188bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951888));
    // 0x1188c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1188c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1188c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1188c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1188c8: 0x800008  jr          $a0
    ctx->pc = 0x1188C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1188D0u: goto label_1188d0;
            case 0x1188D8u: goto label_1188d8;
            case 0x1188E0u: goto label_1188e0;
            case 0x1188E8u: goto label_1188e8;
            case 0x1188F0u: goto label_1188f0;
            case 0x1188F8u: goto label_1188f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1188C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1188D0u;
label_1188d0:
    // 0x1188d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1188D0u;
    {
        const bool branch_taken_0x1188d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1188D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1188D0u;
        // 0x1188d4: 0x240303e7  addiu       $v1, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1188d0) {
            ctx->pc = 0x1188FCu;
            goto label_1188fc;
        }
    }
    ctx->pc = 0x1188D8u;
label_1188d8:
    // 0x1188d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1188D8u;
    {
        const bool branch_taken_0x1188d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1188DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1188D8u;
        // 0x1188dc: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1188d8) {
            ctx->pc = 0x1188FCu;
            goto label_1188fc;
        }
    }
    ctx->pc = 0x1188E0u;
label_1188e0:
    // 0x1188e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1188E0u;
    {
        const bool branch_taken_0x1188e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1188E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1188E0u;
        // 0x1188e4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1188e0) {
            ctx->pc = 0x1188FCu;
            goto label_1188fc;
        }
    }
    ctx->pc = 0x1188E8u;
label_1188e8:
    // 0x1188e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1188E8u;
    {
        const bool branch_taken_0x1188e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1188ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1188E8u;
        // 0x1188ec: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1188e8) {
            ctx->pc = 0x1188FCu;
            goto label_1188fc;
        }
    }
    ctx->pc = 0x1188F0u;
label_1188f0:
    // 0x1188f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1188F0u;
    {
        const bool branch_taken_0x1188f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1188F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1188F0u;
        // 0x1188f4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1188f0) {
            ctx->pc = 0x1188FCu;
            goto label_1188fc;
        }
    }
    ctx->pc = 0x1188F8u;
label_1188f8:
    // 0x1188f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1188f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1188fc:
    // 0x1188fc: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x1188fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x118900: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x118900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x118904: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x118904u;
    {
        const bool branch_taken_0x118904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118904) {
            ctx->pc = 0x118908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118904u;
            // 0x118908: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11891Cu;
            goto label_11891c;
        }
    }
    ctx->pc = 0x11890Cu;
    // 0x11890c: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x11890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x118910: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118914: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x118914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x118918: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x118918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_11891c:
    // 0x11891c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x11891cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x118920: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118920u;
    {
        const bool branch_taken_0x118920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118920u;
        // 0x118924: 0x8e2215b4  lw          $v0, 0x15B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118920) {
            ctx->pc = 0x118934u;
            goto label_118934;
        }
    }
    ctx->pc = 0x118928u;
    // 0x118928: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x118928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11892c: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x11892cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x118930: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x118930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_118934:
    // 0x118934: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x118934u;
    {
        const bool branch_taken_0x118934 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x118934) {
            ctx->pc = 0x118938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118934u;
            // 0x118938: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11893Cu;
            goto label_11893c;
        }
    }
    ctx->pc = 0x11893Cu;
label_11893c:
    // 0x11893c: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x11893cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x118940: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x118940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x118944: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118944u;
    {
        const bool branch_taken_0x118944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118944u;
        // 0x118948: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118944) {
            ctx->pc = 0x118958u;
            goto label_118958;
        }
    }
    ctx->pc = 0x11894Cu;
    // 0x11894c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11894cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118950: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x118950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x118954: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x118954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_118958:
    // 0x118958: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x118958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x11895c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11895Cu;
    {
        const bool branch_taken_0x11895c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11895Cu;
        // 0x118960: 0xae2215b8  sw          $v0, 0x15B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11895c) {
            ctx->pc = 0x118988u;
            goto label_118988;
        }
    }
    ctx->pc = 0x118964u;
label_118964:
    // 0x118964: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x118964u;
    {
        const bool branch_taken_0x118964 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x118964) {
            ctx->pc = 0x118968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118964u;
            // 0x118968: 0x8e2315b4  lw          $v1, 0x15B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11898Cu;
            goto label_11898c;
        }
    }
    ctx->pc = 0x11896Cu;
    // 0x11896c: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x11896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x118970: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x118970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x118974: 0xae2315b8  sw          $v1, 0x15B8($s1)
    ctx->pc = 0x118974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 3));
    // 0x118978: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x118978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11897c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11897Cu;
    {
        const bool branch_taken_0x11897c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x118980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11897Cu;
        // 0x118980: 0xae2215b4  sw          $v0, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11897c) {
            ctx->pc = 0x118988u;
            goto label_118988;
        }
    }
    ctx->pc = 0x118984u;
    // 0x118984: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x118984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_118988:
    // 0x118988: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x118988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_11898c:
    // 0x11898c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x11898cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x118990: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x118990u;
    {
        const bool branch_taken_0x118990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118990u;
        // 0x118994: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118990) {
            ctx->pc = 0x1189B0u;
            goto label_1189b0;
        }
    }
    ctx->pc = 0x118998u;
    // 0x118998: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x118998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11899c: 0x2442c3f0  addiu       $v0, $v0, -0x3C10
    ctx->pc = 0x11899cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951920));
    // 0x1189a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1189a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1189a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1189a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1189a8: 0x800008  jr          $a0
    ctx->pc = 0x1189A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1189B0u: goto label_1189b0;
            case 0x1189C0u: goto label_1189c0;
            case 0x1189D0u: goto label_1189d0;
            case 0x1189E0u: goto label_1189e0;
            case 0x1189F0u: goto label_1189f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1189A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1189B0u;
label_1189b0:
    // 0x1189b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1189b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1189b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1189b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1189b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1189B8u;
    {
        const bool branch_taken_0x1189b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1189BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189B8u;
        // 0x1189bc: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1189b8) {
            ctx->pc = 0x118A00u;
            goto label_118a00;
        }
    }
    ctx->pc = 0x1189C0u;
label_1189c0:
    // 0x1189c0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1189c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1189c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1189c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1189c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1189C8u;
    {
        const bool branch_taken_0x1189c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1189CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189C8u;
        // 0x1189cc: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1189c8) {
            ctx->pc = 0x118A00u;
            goto label_118a00;
        }
    }
    ctx->pc = 0x1189D0u;
label_1189d0:
    // 0x1189d0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1189d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1189d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1189d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1189d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1189D8u;
    {
        const bool branch_taken_0x1189d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1189DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189D8u;
        // 0x1189dc: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1189d8) {
            ctx->pc = 0x118A00u;
            goto label_118a00;
        }
    }
    ctx->pc = 0x1189E0u;
label_1189e0:
    // 0x1189e0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1189e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1189e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1189e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1189e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1189E8u;
    {
        const bool branch_taken_0x1189e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1189ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189E8u;
        // 0x1189ec: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1189e8) {
            ctx->pc = 0x118A00u;
            goto label_118a00;
        }
    }
    ctx->pc = 0x1189F0u;
label_1189f0:
    // 0x1189f0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1189f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1189f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1189f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1189f8: 0x0  nop
    ctx->pc = 0x1189f8u;
    // NOP
    // 0x1189fc: 0xe62005a8  swc1        $f0, 0x5A8($s1)
    ctx->pc = 0x1189fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
label_118a00:
    // 0x118a00: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x118a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x118a04: 0xc0560a2  jal         func_158288
    ctx->pc = 0x118A04u;
    SET_GPR_U32(ctx, 31, 0x118A0Cu);
    ctx->pc = 0x118A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A04u;
    // 0x118a08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x118A04u, 0x118A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A0Cu;
label_118a0c:
    // 0x118a0c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x118A0Cu;
    SET_GPR_U32(ctx, 31, 0x118A14u);
    ctx->pc = 0x118A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A0Cu;
    // 0x118a10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x118A0Cu, 0x118A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A14u;
label_118a14:
    // 0x118a14: 0xc055f06  jal         func_157C18
    ctx->pc = 0x118A14u;
    SET_GPR_U32(ctx, 31, 0x118A1Cu);
    ctx->pc = 0x118A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A14u;
    // 0x118a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x118A14u, 0x118A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A1Cu;
label_118a1c:
    // 0x118a1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x118A1Cu;
    {
        const bool branch_taken_0x118a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118a1c) {
            ctx->pc = 0x118A3Cu;
            goto label_118a3c;
        }
    }
    ctx->pc = 0x118A24u;
    // 0x118a24: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x118a24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x118a28: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118A28u;
    {
        const bool branch_taken_0x118a28 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x118a28) {
            ctx->pc = 0x118A3Cu;
            goto label_118a3c;
        }
    }
    ctx->pc = 0x118A30u;
    // 0x118a30: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x118a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_118a34:
    // 0x118a34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118a38: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x118a38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_118a3c:
    // 0x118a3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x118a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x118a40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118a44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a48: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x118A48u;
    SET_GPR_U32(ctx, 31, 0x118A50u);
    ctx->pc = 0x118A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A48u;
    // 0x118a4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x118A48u, 0x118A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A50u;
label_118a50:
    // 0x118a50: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x118a50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x118a54: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x118A54u;
    SET_GPR_U32(ctx, 31, 0x118A5Cu);
    ctx->pc = 0x118A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A54u;
    // 0x118a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x118A54u, 0x118A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A5Cu;
label_118a5c:
    // 0x118a5c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x118A5Cu;
    {
        const bool branch_taken_0x118a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A5Cu;
        // 0x118a60: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a5c) {
            ctx->pc = 0x118ADCu;
            goto label_118adc;
        }
    }
    ctx->pc = 0x118A64u;
label_118a64:
    // 0x118a64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x118a64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x118a68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a6c: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x118a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x118a70: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x118A70u;
    SET_GPR_U32(ctx, 31, 0x118A78u);
    ctx->pc = 0x118A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A70u;
    // 0x118a74: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x118A70u, 0x118A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A78u;
label_118a78:
    // 0x118a78: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x118a78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x118a7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118a80: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x118a80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_118a84:
    // 0x118a84: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x118A84u;
    SET_GPR_U32(ctx, 31, 0x118A8Cu);
    ctx->pc = 0x118A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A84u;
    // 0x118a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x118A84u, 0x118A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A8Cu;
label_118a8c:
    // 0x118a8c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x118A8Cu;
    SET_GPR_U32(ctx, 31, 0x118A94u);
    ctx->pc = 0x118A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A8Cu;
    // 0x118a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x118A8Cu, 0x118A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A94u;
label_118a94:
    // 0x118a94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x118A94u;
    {
        const bool branch_taken_0x118a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A94u;
        // 0x118a98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a94) {
            ctx->pc = 0x118AB8u;
            goto label_118ab8;
        }
    }
    ctx->pc = 0x118A9Cu;
    // 0x118a9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118aa0: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x118AA0u;
    SET_GPR_U32(ctx, 31, 0x118AA8u);
    ctx->pc = 0x118AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118AA0u;
    // 0x118aa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x118AA0u, 0x118AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118AA8u;
label_118aa8:
    // 0x118aa8: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x118aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x118aac: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x118aacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x118ab0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x118ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x118ab4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x118ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_118ab8:
    // 0x118ab8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x118ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x118abc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118ac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ac4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x118AC4u;
    SET_GPR_U32(ctx, 31, 0x118ACCu);
    ctx->pc = 0x118AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118AC4u;
    // 0x118ac8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x118AC4u, 0x118ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118ACCu;
label_118acc:
    // 0x118acc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x118accu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x118ad0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x118AD0u;
    SET_GPR_U32(ctx, 31, 0x118AD8u);
    ctx->pc = 0x118AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118AD0u;
    // 0x118ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x118AD0u, 0x118AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118AD8u;
label_118ad8:
    // 0x118ad8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x118ad8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_118adc:
    // 0x118adc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x118adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x118ae0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x118AE0u;
    {
        const bool branch_taken_0x118ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AE0u;
        // 0x118ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ae0) {
            ctx->pc = 0x118B44u;
            goto label_118b44;
        }
    }
    ctx->pc = 0x118AE8u;
    // 0x118ae8: 0x8622056a  lh          $v0, 0x56A($s1)
    ctx->pc = 0x118ae8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1386)));
    // 0x118aec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x118AECu;
    {
        const bool branch_taken_0x118aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AECu;
        // 0x118af0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118aec) {
            ctx->pc = 0x118B40u;
            goto label_118b40;
        }
    }
    ctx->pc = 0x118AF4u;
    // 0x118af4: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x118af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x118af8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x118af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x118afc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118AFCu;
    {
        const bool branch_taken_0x118afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118AFCu;
        // 0x118b00: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118afc) {
            ctx->pc = 0x118B10u;
            goto label_118b10;
        }
    }
    ctx->pc = 0x118B04u;
    // 0x118b04: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x118b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x118b08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x118B08u;
    {
        const bool branch_taken_0x118b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B08u;
        // 0x118b0c: 0x8c420028  lw          $v0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118b08) {
            ctx->pc = 0x118B14u;
            goto label_118b14;
        }
    }
    ctx->pc = 0x118B10u;
label_118b10:
    // 0x118b10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118b14:
    // 0x118b14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x118B14u;
    {
        const bool branch_taken_0x118b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B14u;
        // 0x118b18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118b14) {
            ctx->pc = 0x118B38u;
            goto label_118b38;
        }
    }
    ctx->pc = 0x118B1Cu;
    // 0x118b1c: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x118b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x118b20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x118b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x118b24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x118b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x118b28: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x118b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x118b2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x118b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b30: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x118B30u;
    SET_GPR_U32(ctx, 31, 0x118B38u);
    ctx->pc = 0x118B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118B30u;
    // 0x118b34: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x118B30u, 0x118B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B38u;
label_118b38:
    // 0x118b38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x118B38u;
    {
        const bool branch_taken_0x118b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B38u;
        // 0x118b3c: 0xa620056a  sh          $zero, 0x56A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118b38) {
            ctx->pc = 0x118B48u;
            goto label_118b48;
        }
    }
    ctx->pc = 0x118B40u;
label_118b40:
    // 0x118b40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_118b44:
    // 0x118b44: 0xa622056a  sh          $v0, 0x56A($s1)
    ctx->pc = 0x118b44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 2));
label_118b48:
    // 0x118b48: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x118b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118b4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x118b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118b50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x118b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118b58: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x118b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x118b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x118B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B5Cu;
        // 0x118b60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118B64u;
    // 0x118b64: 0x0  nop
    ctx->pc = 0x118b64u;
    // NOP
    ctx->pc = 0x118b68u;
}
