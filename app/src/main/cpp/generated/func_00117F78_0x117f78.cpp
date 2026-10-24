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

// Function: func_00117F78
// Address: 0x117f78 - 0x118158
void func_00117F78_0x117f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00117F78_0x117f78");
#endif

    switch (ctx->pc) {
        case 0x117fc8u: goto label_117fc8;
        case 0x117fd8u: goto label_117fd8;
        case 0x117fe4u: goto label_117fe4;
        case 0x118018u: goto label_118018;
        case 0x118020u: goto label_118020;
        case 0x11806cu: goto label_11806c;
        case 0x118080u: goto label_118080;
        case 0x118090u: goto label_118090;
        case 0x1180c0u: goto label_1180c0;
        case 0x1180f8u: goto label_1180f8;
        case 0x11810cu: goto label_11810c;
        case 0x118130u: goto label_118130;
        case 0x11813cu: goto label_11813c;
        default: break;
    }

    ctx->pc = 0x117f78u;

    // 0x117f78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x117f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x117f7c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x117f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x117f80: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x117f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x117f84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117f88: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x117f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x117f8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x117f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x117f90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x117f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117f98: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x117f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x117f9c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x117f9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x117fa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117fa4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x117fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x117fa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117fac: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x117facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x117fb0: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x117fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x117fb4: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x117fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x117fb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x117fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x117fbc: 0x8e320694  lw          $s2, 0x694($s1)
    ctx->pc = 0x117fbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x117fc0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x117FC0u;
    SET_GPR_U32(ctx, 31, 0x117FC8u);
    ctx->pc = 0x117FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117FC0u;
    // 0x117fc4: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x117FC0u, 0x117FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117FC8u;
label_117fc8:
    // 0x117fc8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x117fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x117fcc: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x117fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x117fd0: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x117FD0u;
    SET_GPR_U32(ctx, 31, 0x117FD8u);
    ctx->pc = 0x117FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117FD0u;
    // 0x117fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x117FD0u, 0x117FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117FD8u;
label_117fd8:
    // 0x117fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117fdc: 0xc0a480c  jal         func_292030
    ctx->pc = 0x117FDCu;
    SET_GPR_U32(ctx, 31, 0x117FE4u);
    ctx->pc = 0x117FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117FDCu;
    // 0x117fe0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x117FDCu, 0x117FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117FE4u;
label_117fe4:
    // 0x117fe4: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x117fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x117fe8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x117fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x117fec: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x117fecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x117ff0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x117ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x117ff4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x117FF4u;
    {
        const bool branch_taken_0x117ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x117FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FF4u;
        // 0x117ff8: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ff4) {
            ctx->pc = 0x118010u;
            goto label_118010;
        }
    }
    ctx->pc = 0x117FFCu;
    // 0x117ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118000: 0x1082002d  beq         $a0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x118000u;
    {
        const bool branch_taken_0x118000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x118004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118000u;
        // 0x118004: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118000) {
            ctx->pc = 0x1180B8u;
            goto label_1180b8;
        }
    }
    ctx->pc = 0x118008u;
    // 0x118008: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x118008u;
    {
        const bool branch_taken_0x118008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118008u;
        // 0x11800c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118008) {
            ctx->pc = 0x118144u;
            goto label_118144;
        }
    }
    ctx->pc = 0x118010u;
label_118010:
    // 0x118010: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x118010u;
    SET_GPR_U32(ctx, 31, 0x118018u);
    ctx->pc = 0x118014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118010u;
    // 0x118014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x118010u, 0x118018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118018u;
label_118018:
    // 0x118018: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x118018u;
    SET_GPR_U32(ctx, 31, 0x118020u);
    ctx->pc = 0x11801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118018u;
    // 0x11801c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x118018u, 0x118020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118020u;
label_118020:
    // 0x118020: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x118020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x118024: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118028: 0x3c01bf04  lui         $at, 0xBF04
    ctx->pc = 0x118028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48900 << 16));
    // 0x11802c: 0x3421e3bd  ori         $at, $at, 0xE3BD
    ctx->pc = 0x11802cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58301);
    // 0x118030: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x118030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x118034: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x118034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118038: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x118038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11803c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11803cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118040: 0x3c013d2e  lui         $at, 0x3D2E
    ctx->pc = 0x118040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15662 << 16));
    // 0x118044: 0x3421e632  ori         $at, $at, 0xE632
    ctx->pc = 0x118044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58930);
    // 0x118048: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x118048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11804c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11804cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118050: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x118050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x118054: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118058: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x118058u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11805c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11805cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x118060: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x118060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x118064: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x118064u;
    SET_GPR_U32(ctx, 31, 0x11806Cu);
    ctx->pc = 0x118068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118064u;
    // 0x118068: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x118064u, 0x11806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11806Cu;
label_11806c:
    // 0x11806c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11806cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x118070: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118074: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x118074u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x118078: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x118078u;
    SET_GPR_U32(ctx, 31, 0x118080u);
    ctx->pc = 0x11807Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118078u;
    // 0x11807c: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x118078u, 0x118080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118080u;
label_118080:
    // 0x118080: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x118080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x118084: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x118084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x118088: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x118088u;
    SET_GPR_U32(ctx, 31, 0x118090u);
    ctx->pc = 0x11808Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118088u;
    // 0x11808c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x118088u, 0x118090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118090u;
label_118090:
    // 0x118090: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x118090u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x118094: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118094u;
    {
        const bool branch_taken_0x118094 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x118094) {
            ctx->pc = 0x118098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118094u;
            // 0x118098: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1180A8u;
            goto label_1180a8;
        }
    }
    ctx->pc = 0x11809Cu;
    // 0x11809c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1180a0: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x1180a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x1180a4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1180a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_1180a8:
    // 0x1180a8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1180a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1180ac: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x1180acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x1180b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1180b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1180b4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1180b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1180b8:
    // 0x1180b8: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1180B8u;
    SET_GPR_U32(ctx, 31, 0x1180C0u);
    ctx->pc = 0x1180BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1180B8u;
    // 0x1180bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1180B8u, 0x1180C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1180C0u;
label_1180c0:
    // 0x1180c0: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x1180c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x1180c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1180C4u;
    {
        const bool branch_taken_0x1180c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180C4u;
        // 0x1180c8: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180c4) {
            ctx->pc = 0x1180F0u;
            goto label_1180f0;
        }
    }
    ctx->pc = 0x1180CCu;
    // 0x1180cc: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1180CCu;
    {
        const bool branch_taken_0x1180cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180CCu;
        // 0x1180d0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180cc) {
            ctx->pc = 0x1180F0u;
            goto label_1180f0;
        }
    }
    ctx->pc = 0x1180D4u;
    // 0x1180d4: 0x26440550  addiu       $a0, $s2, 0x550
    ctx->pc = 0x1180d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x1180d8: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x1180d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x1180dc: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1180dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1180e0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1180e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1180e4: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1180e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1180e8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1180e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1180ec: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1180ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1180f0:
    // 0x1180f0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1180F0u;
    SET_GPR_U32(ctx, 31, 0x1180F8u);
    ctx->pc = 0x1180F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1180F0u;
    // 0x1180f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1180F0u, 0x1180F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1180F8u;
label_1180f8:
    // 0x1180f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1180F8u;
    {
        const bool branch_taken_0x1180f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180F8u;
        // 0x1180fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180f8) {
            ctx->pc = 0x11811Cu;
            goto label_11811c;
        }
    }
    ctx->pc = 0x118100u;
    // 0x118100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x118100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118104: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x118104u;
    SET_GPR_U32(ctx, 31, 0x11810Cu);
    ctx->pc = 0x118108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118104u;
    // 0x118108: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x118104u, 0x11810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11810Cu;
label_11810c:
    // 0x11810c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11810cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x118110: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x118110u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x118114: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x118114u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x118118: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x118118u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_11811c:
    // 0x11811c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11811cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x118120: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x118120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x118124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118128: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x118128u;
    SET_GPR_U32(ctx, 31, 0x118130u);
    ctx->pc = 0x11812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118128u;
    // 0x11812c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x118128u, 0x118130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118130u;
label_118130:
    // 0x118130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118134: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x118134u;
    SET_GPR_U32(ctx, 31, 0x11813Cu);
    ctx->pc = 0x118138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118134u;
    // 0x118138: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x118134u, 0x11813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11813Cu;
label_11813c:
    // 0x11813c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11813cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118140: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x118140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_118144:
    // 0x118144: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x118144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118148: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11814c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x118150: 0x3e00008  jr          $ra
    ctx->pc = 0x118150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118150u;
        // 0x118154: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118158u;
}
