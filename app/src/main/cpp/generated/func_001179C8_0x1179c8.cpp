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

// Function: func_001179C8
// Address: 0x1179c8 - 0x117f78
void func_001179C8_0x1179c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001179C8_0x1179c8");
#endif

    switch (ctx->pc) {
        case 0x117a18u: goto label_117a18;
        case 0x117a28u: goto label_117a28;
        case 0x117a34u: goto label_117a34;
        case 0x117a74u: goto label_117a74;
        case 0x117a7cu: goto label_117a7c;
        case 0x117ac8u: goto label_117ac8;
        case 0x117adcu: goto label_117adc;
        case 0x117aecu: goto label_117aec;
        case 0x117b08u: goto label_117b08;
        case 0x117b2cu: goto label_117b2c;
        case 0x117b34u: goto label_117b34;
        case 0x117b90u: goto label_117b90;
        case 0x117ba4u: goto label_117ba4;
        case 0x117bccu: goto label_117bcc;
        case 0x117d9cu: goto label_117d9c;
        case 0x117da4u: goto label_117da4;
        case 0x117dacu: goto label_117dac;
        case 0x117de0u: goto label_117de0;
        case 0x117decu: goto label_117dec;
        case 0x117e40u: goto label_117e40;
        case 0x117e54u: goto label_117e54;
        case 0x117ea0u: goto label_117ea0;
        case 0x117ea8u: goto label_117ea8;
        case 0x117ebcu: goto label_117ebc;
        case 0x117ee0u: goto label_117ee0;
        case 0x117eecu: goto label_117eec;
        case 0x117f4cu: goto label_117f4c;
        default: break;
    }

    ctx->pc = 0x1179c8u;

    // 0x1179c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1179c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1179cc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1179ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1179d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1179d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1179d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1179d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1179d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1179dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1179dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1179e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1179e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1179e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1179e8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1179e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1179ec: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1179ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1179f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1179f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179f4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1179f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1179f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1179f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1179fc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x1179fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x117a00: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x117a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x117a04: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x117a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x117a08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x117a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x117a0c: 0x8e320694  lw          $s2, 0x694($s1)
    ctx->pc = 0x117a0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x117a10: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x117A10u;
    SET_GPR_U32(ctx, 31, 0x117A18u);
    ctx->pc = 0x117A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117A10u;
    // 0x117a14: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x117A10u, 0x117A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A18u;
label_117a18:
    // 0x117a18: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x117a18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x117a1c: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x117a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x117a20: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x117A20u;
    SET_GPR_U32(ctx, 31, 0x117A28u);
    ctx->pc = 0x117A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117A20u;
    // 0x117a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x117A20u, 0x117A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A28u;
label_117a28:
    // 0x117a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a2c: 0xc0a480c  jal         func_292030
    ctx->pc = 0x117A2Cu;
    SET_GPR_U32(ctx, 31, 0x117A34u);
    ctx->pc = 0x117A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117A2Cu;
    // 0x117a30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x117A2Cu, 0x117A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A34u;
label_117a34:
    // 0x117a34: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x117a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x117a38: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x117a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x117a3c: 0x922502f6  lbu         $a1, 0x2F6($s1)
    ctx->pc = 0x117a3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x117a40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x117a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x117a44: 0x2ca40006  sltiu       $a0, $a1, 0x6
    ctx->pc = 0x117a44u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x117a48: 0x10800128  beqz        $a0, . + 4 + (0x128 << 2)
    ctx->pc = 0x117A48u;
    {
        const bool branch_taken_0x117a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A48u;
        // 0x117a4c: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a48) {
            ctx->pc = 0x117EECu;
            goto label_117eec;
        }
    }
    ctx->pc = 0x117A50u;
    // 0x117a50: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x117a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x117a54: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x117a54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x117a58: 0x2442c2f0  addiu       $v0, $v0, -0x3D10
    ctx->pc = 0x117a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951664));
    // 0x117a5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x117a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x117a60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x117a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117a64: 0x800008  jr          $a0
    ctx->pc = 0x117A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117A6Cu: goto label_117a6c;
            case 0x117B00u: goto label_117b00;
            case 0x117B44u: goto label_117b44;
            case 0x117BC4u: goto label_117bc4;
            case 0x117DF4u: goto label_117df4;
            case 0x117E68u: goto label_117e68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117A64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x117A6Cu;
label_117a6c:
    // 0x117a6c: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x117A6Cu;
    SET_GPR_U32(ctx, 31, 0x117A74u);
    ctx->pc = 0x117A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117A6Cu;
    // 0x117a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x117A6Cu, 0x117A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A74u;
label_117a74:
    // 0x117a74: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x117A74u;
    SET_GPR_U32(ctx, 31, 0x117A7Cu);
    ctx->pc = 0x117A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117A74u;
    // 0x117a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x117A74u, 0x117A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A7Cu;
label_117a7c:
    // 0x117a7c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x117a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x117a80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x117a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a84: 0x3c01be3a  lui         $at, 0xBE3A
    ctx->pc = 0x117a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48698 << 16));
    // 0x117a88: 0x342129c7  ori         $at, $at, 0x29C7
    ctx->pc = 0x117a88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10695);
    // 0x117a8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x117a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x117a90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x117a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a94: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x117a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x117a98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a9c: 0x3c013f96  lui         $at, 0x3F96
    ctx->pc = 0x117a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16278 << 16));
    // 0x117aa0: 0x3421dc5d  ori         $at, $at, 0xDC5D
    ctx->pc = 0x117aa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56413);
    // 0x117aa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x117aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x117aa8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x117aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117aac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x117ab0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117ab4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x117ab4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x117ab8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x117ab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x117abc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x117abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x117ac0: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x117AC0u;
    SET_GPR_U32(ctx, 31, 0x117AC8u);
    ctx->pc = 0x117AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117AC0u;
    // 0x117ac4: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x117AC0u, 0x117AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117AC8u;
label_117ac8:
    // 0x117ac8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x117ac8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x117acc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ad0: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x117ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x117ad4: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x117AD4u;
    SET_GPR_U32(ctx, 31, 0x117ADCu);
    ctx->pc = 0x117AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117AD4u;
    // 0x117ad8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x117AD4u, 0x117ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117ADCu;
label_117adc:
    // 0x117adc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x117adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x117ae0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x117ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x117ae4: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x117AE4u;
    SET_GPR_U32(ctx, 31, 0x117AECu);
    ctx->pc = 0x117AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117AE4u;
    // 0x117ae8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x117AE4u, 0x117AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117AECu;
label_117aec:
    // 0x117aec: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x117aecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x117af0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x117af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117af4: 0xa623056a  sh          $v1, 0x56A($s1)
    ctx->pc = 0x117af4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 3));
    // 0x117af8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x117af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x117afc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x117afcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_117b00:
    // 0x117b00: 0xc0b6dea  jal         func_2DB7A8
    ctx->pc = 0x117B00u;
    SET_GPR_U32(ctx, 31, 0x117B08u);
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x117B00u, 0x117B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117B08u;
label_117b08:
    // 0x117b08: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x117B08u;
    {
        const bool branch_taken_0x117b08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x117B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B08u;
        // 0x117b0c: 0x26430550  addiu       $v1, $s2, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b08) {
            ctx->pc = 0x117B24u;
            goto label_117b24;
        }
    }
    ctx->pc = 0x117B10u;
    // 0x117b10: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x117b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x117b14: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x117b14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117b18: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x117b18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117b1c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x117b1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x117b20: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x117b20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_117b24:
    // 0x117b24: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x117B24u;
    SET_GPR_U32(ctx, 31, 0x117B2Cu);
    ctx->pc = 0x117B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117B24u;
    // 0x117b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x117B24u, 0x117B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117B2Cu;
label_117b2c:
    // 0x117b2c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x117B2Cu;
    SET_GPR_U32(ctx, 31, 0x117B34u);
    ctx->pc = 0x117B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117B2Cu;
    // 0x117b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x117B2Cu, 0x117B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117B34u;
label_117b34:
    // 0x117b34: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x117B34u;
    {
        const bool branch_taken_0x117b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117b34) {
            ctx->pc = 0x117DCCu;
            goto label_117dcc;
        }
    }
    ctx->pc = 0x117B3Cu;
    // 0x117b3c: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x117B3Cu;
    {
        const bool branch_taken_0x117b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B3Cu;
        // 0x117b40: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b3c) {
            ctx->pc = 0x117DC4u;
            goto label_117dc4;
        }
    }
    ctx->pc = 0x117B44u;
label_117b44:
    // 0x117b44: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x117b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x117b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b4c: 0x3c01be6f  lui         $at, 0xBE6F
    ctx->pc = 0x117b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48751 << 16));
    // 0x117b50: 0x342134d7  ori         $at, $at, 0x34D7
    ctx->pc = 0x117b50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13527);
    // 0x117b54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x117b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x117b58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x117b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b5c: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x117b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x117b60: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x117b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b64: 0x3c013f9b  lui         $at, 0x3F9B
    ctx->pc = 0x117b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16283 << 16));
    // 0x117b68: 0x34218bac  ori         $at, $at, 0x8BAC
    ctx->pc = 0x117b68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35756);
    // 0x117b6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x117b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x117b70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x117b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117b74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x117b78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117b7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x117b7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x117b80: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x117b80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x117b84: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x117b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x117b88: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x117B88u;
    SET_GPR_U32(ctx, 31, 0x117B90u);
    ctx->pc = 0x117B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117B88u;
    // 0x117b8c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x117B88u, 0x117B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117B90u;
label_117b90:
    // 0x117b90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x117b90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x117b94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117b98: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x117b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x117b9c: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x117B9Cu;
    SET_GPR_U32(ctx, 31, 0x117BA4u);
    ctx->pc = 0x117BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117B9Cu;
    // 0x117ba0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x117B9Cu, 0x117BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117BA4u;
label_117ba4:
    // 0x117ba4: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x117ba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x117ba8: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x117ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x117bac: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x117bacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x117bb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x117bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x117bb4: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x117bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x117bb8: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x117bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x117bbc: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x117bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
    // 0x117bc0: 0xae2015b8  sw          $zero, 0x15B8($s1)
    ctx->pc = 0x117bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 0));
label_117bc4:
    // 0x117bc4: 0xc0b6dea  jal         func_2DB7A8
    ctx->pc = 0x117BC4u;
    SET_GPR_U32(ctx, 31, 0x117BCCu);
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x117BC4u, 0x117BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117BCCu;
label_117bcc:
    // 0x117bcc: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x117BCCu;
    {
        const bool branch_taken_0x117bcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x117BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117BCCu;
        // 0x117bd0: 0x26430550  addiu       $v1, $s2, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117bcc) {
            ctx->pc = 0x117BE8u;
            goto label_117be8;
        }
    }
    ctx->pc = 0x117BD4u;
    // 0x117bd4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x117bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x117bd8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x117bd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117bdc: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x117bdcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117be0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x117be0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x117be4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x117be4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_117be8:
    // 0x117be8: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x117be8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x117bec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117BECu;
    {
        const bool branch_taken_0x117bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117BECu;
        // 0x117bf0: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117bec) {
            ctx->pc = 0x117BFCu;
            goto label_117bfc;
        }
    }
    ctx->pc = 0x117BF4u;
    // 0x117bf4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x117bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x117bf8: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x117bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_117bfc:
    // 0x117bfc: 0x8e2215b8  lw          $v0, 0x15B8($s1)
    ctx->pc = 0x117bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
    // 0x117c00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x117C00u;
    {
        const bool branch_taken_0x117c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C00u;
        // 0x117c04: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c00) {
            ctx->pc = 0x117C0Cu;
            goto label_117c0c;
        }
    }
    ctx->pc = 0x117C08u;
    // 0x117c08: 0xae2215b8  sw          $v0, 0x15B8($s1)
    ctx->pc = 0x117c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
label_117c0c:
    // 0x117c0c: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x117c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x117c10: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x117c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x117c14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x117c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x117c18: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x117c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
    // 0x117c1c: 0x8c8374a8  lw          $v1, 0x74A8($a0)
    ctx->pc = 0x117c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7474A8u));
    // 0x117c20: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x117c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x117c24: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x117C24u;
    {
        const bool branch_taken_0x117c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x117c24) {
            ctx->pc = 0x117C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117C24u;
            // 0x117c28: 0x8e2215b8  lw          $v0, 0x15B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117CE8u;
            goto label_117ce8;
        }
    }
    ctx->pc = 0x117C2Cu;
    // 0x117c2c: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x117c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x117c30: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x117c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x117c34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x117C34u;
    {
        const bool branch_taken_0x117c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C34u;
        // 0x117c38: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c34) {
            ctx->pc = 0x117C54u;
            goto label_117c54;
        }
    }
    ctx->pc = 0x117C3Cu;
    // 0x117c3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x117c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x117c40: 0x2442c310  addiu       $v0, $v0, -0x3CF0
    ctx->pc = 0x117c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951696));
    // 0x117c44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x117c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x117c48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x117c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117c4c: 0x800008  jr          $a0
    ctx->pc = 0x117C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117C54u: goto label_117c54;
            case 0x117C5Cu: goto label_117c5c;
            case 0x117C64u: goto label_117c64;
            case 0x117C6Cu: goto label_117c6c;
            case 0x117C74u: goto label_117c74;
            case 0x117C7Cu: goto label_117c7c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117C4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x117C54u;
label_117c54:
    // 0x117c54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x117C54u;
    {
        const bool branch_taken_0x117c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C54u;
        // 0x117c58: 0x240303e7  addiu       $v1, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c54) {
            ctx->pc = 0x117C80u;
            goto label_117c80;
        }
    }
    ctx->pc = 0x117C5Cu;
label_117c5c:
    // 0x117c5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x117C5Cu;
    {
        const bool branch_taken_0x117c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C5Cu;
        // 0x117c60: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c5c) {
            ctx->pc = 0x117C80u;
            goto label_117c80;
        }
    }
    ctx->pc = 0x117C64u;
label_117c64:
    // 0x117c64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x117C64u;
    {
        const bool branch_taken_0x117c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C64u;
        // 0x117c68: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c64) {
            ctx->pc = 0x117C80u;
            goto label_117c80;
        }
    }
    ctx->pc = 0x117C6Cu;
label_117c6c:
    // 0x117c6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x117C6Cu;
    {
        const bool branch_taken_0x117c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C6Cu;
        // 0x117c70: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c6c) {
            ctx->pc = 0x117C80u;
            goto label_117c80;
        }
    }
    ctx->pc = 0x117C74u;
label_117c74:
    // 0x117c74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x117C74u;
    {
        const bool branch_taken_0x117c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117C74u;
        // 0x117c78: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117c74) {
            ctx->pc = 0x117C80u;
            goto label_117c80;
        }
    }
    ctx->pc = 0x117C7Cu;
label_117c7c:
    // 0x117c7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x117c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_117c80:
    // 0x117c80: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x117c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x117c84: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x117c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x117c88: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x117C88u;
    {
        const bool branch_taken_0x117c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117c88) {
            ctx->pc = 0x117C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117C88u;
            // 0x117c8c: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117CA0u;
            goto label_117ca0;
        }
    }
    ctx->pc = 0x117C90u;
    // 0x117c90: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x117c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x117c94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x117c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x117c98: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x117c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x117c9c: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x117c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_117ca0:
    // 0x117ca0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x117ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x117ca4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117CA4u;
    {
        const bool branch_taken_0x117ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CA4u;
        // 0x117ca8: 0x8e2215b4  lw          $v0, 0x15B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ca4) {
            ctx->pc = 0x117CB8u;
            goto label_117cb8;
        }
    }
    ctx->pc = 0x117CACu;
    // 0x117cac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x117cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x117cb0: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x117cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x117cb4: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x117cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_117cb8:
    // 0x117cb8: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x117CB8u;
    {
        const bool branch_taken_0x117cb8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x117cb8) {
            ctx->pc = 0x117CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117CB8u;
            // 0x117cbc: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117CC0u;
            goto label_117cc0;
        }
    }
    ctx->pc = 0x117CC0u;
label_117cc0:
    // 0x117cc0: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x117cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x117cc4: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x117cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x117cc8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117CC8u;
    {
        const bool branch_taken_0x117cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CC8u;
        // 0x117ccc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117cc8) {
            ctx->pc = 0x117CDCu;
            goto label_117cdc;
        }
    }
    ctx->pc = 0x117CD0u;
    // 0x117cd0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x117cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117cd4: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x117cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x117cd8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x117cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_117cdc:
    // 0x117cdc: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x117cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x117ce0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x117CE0u;
    {
        const bool branch_taken_0x117ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117CE0u;
        // 0x117ce4: 0xae2215b8  sw          $v0, 0x15B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ce0) {
            ctx->pc = 0x117D0Cu;
            goto label_117d0c;
        }
    }
    ctx->pc = 0x117CE8u;
label_117ce8:
    // 0x117ce8: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x117CE8u;
    {
        const bool branch_taken_0x117ce8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x117ce8) {
            ctx->pc = 0x117CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117CE8u;
            // 0x117cec: 0x8e2315b4  lw          $v1, 0x15B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117D10u;
            goto label_117d10;
        }
    }
    ctx->pc = 0x117CF0u;
    // 0x117cf0: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x117cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x117cf4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x117cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x117cf8: 0xae2315b8  sw          $v1, 0x15B8($s1)
    ctx->pc = 0x117cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 3));
    // 0x117cfc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x117cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x117d00: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x117D00u;
    {
        const bool branch_taken_0x117d00 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x117D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D00u;
        // 0x117d04: 0xae2215b4  sw          $v0, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d00) {
            ctx->pc = 0x117D0Cu;
            goto label_117d0c;
        }
    }
    ctx->pc = 0x117D08u;
    // 0x117d08: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x117d08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_117d0c:
    // 0x117d0c: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x117d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_117d10:
    // 0x117d10: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x117d10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x117d14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x117D14u;
    {
        const bool branch_taken_0x117d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D14u;
        // 0x117d18: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d14) {
            ctx->pc = 0x117D34u;
            goto label_117d34;
        }
    }
    ctx->pc = 0x117D1Cu;
    // 0x117d1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x117d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x117d20: 0x2442c330  addiu       $v0, $v0, -0x3CD0
    ctx->pc = 0x117d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951728));
    // 0x117d24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x117d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x117d28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x117d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117d2c: 0x800008  jr          $a0
    ctx->pc = 0x117D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117D34u: goto label_117d34;
            case 0x117D48u: goto label_117d48;
            case 0x117D58u: goto label_117d58;
            case 0x117D6Cu: goto label_117d6c;
            case 0x117D80u: goto label_117d80;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117D2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x117D34u;
label_117d34:
    // 0x117d34: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x117d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x117d38: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x117d38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x117d3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117d40: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x117D40u;
    {
        const bool branch_taken_0x117d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D40u;
        // 0x117d44: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d40) {
            ctx->pc = 0x117D90u;
            goto label_117d90;
        }
    }
    ctx->pc = 0x117D48u;
label_117d48:
    // 0x117d48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x117d4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117d50: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x117D50u;
    {
        const bool branch_taken_0x117d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D50u;
        // 0x117d54: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d50) {
            ctx->pc = 0x117D90u;
            goto label_117d90;
        }
    }
    ctx->pc = 0x117D58u;
label_117d58:
    // 0x117d58: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x117d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x117d5c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x117d5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x117d60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117d64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x117D64u;
    {
        const bool branch_taken_0x117d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D64u;
        // 0x117d68: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d64) {
            ctx->pc = 0x117D90u;
            goto label_117d90;
        }
    }
    ctx->pc = 0x117D6Cu;
label_117d6c:
    // 0x117d6c: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x117d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x117d70: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x117d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x117d74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117d78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x117D78u;
    {
        const bool branch_taken_0x117d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D78u;
        // 0x117d7c: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d78) {
            ctx->pc = 0x117D90u;
            goto label_117d90;
        }
    }
    ctx->pc = 0x117D80u;
label_117d80:
    // 0x117d80: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x117d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x117d84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117d88: 0x0  nop
    ctx->pc = 0x117d88u;
    // NOP
    // 0x117d8c: 0xe62005a8  swc1        $f0, 0x5A8($s1)
    ctx->pc = 0x117d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
label_117d90:
    // 0x117d90: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x117d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x117d94: 0xc0560a2  jal         func_158288
    ctx->pc = 0x117D94u;
    SET_GPR_U32(ctx, 31, 0x117D9Cu);
    ctx->pc = 0x117D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D94u;
    // 0x117d98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x117D94u, 0x117D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D9Cu;
label_117d9c:
    // 0x117d9c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x117D9Cu;
    SET_GPR_U32(ctx, 31, 0x117DA4u);
    ctx->pc = 0x117DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D9Cu;
    // 0x117da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x117D9Cu, 0x117DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117DA4u;
label_117da4:
    // 0x117da4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x117DA4u;
    SET_GPR_U32(ctx, 31, 0x117DACu);
    ctx->pc = 0x117DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DA4u;
    // 0x117da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x117DA4u, 0x117DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117DACu;
label_117dac:
    // 0x117dac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x117DACu;
    {
        const bool branch_taken_0x117dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117dac) {
            ctx->pc = 0x117DCCu;
            goto label_117dcc;
        }
    }
    ctx->pc = 0x117DB4u;
    // 0x117db4: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x117db4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x117db8: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117DB8u;
    {
        const bool branch_taken_0x117db8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x117db8) {
            ctx->pc = 0x117DCCu;
            goto label_117dcc;
        }
    }
    ctx->pc = 0x117DC0u;
    // 0x117dc0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x117dc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_117dc4:
    // 0x117dc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x117dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x117dc8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x117dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_117dcc:
    // 0x117dcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x117dd0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x117dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x117dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117dd8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x117DD8u;
    SET_GPR_U32(ctx, 31, 0x117DE0u);
    ctx->pc = 0x117DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DD8u;
    // 0x117ddc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x117DD8u, 0x117DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117DE0u;
label_117de0:
    // 0x117de0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x117de0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x117de4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x117DE4u;
    SET_GPR_U32(ctx, 31, 0x117DECu);
    ctx->pc = 0x117DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DE4u;
    // 0x117de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x117DE4u, 0x117DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117DECu;
label_117dec:
    // 0x117dec: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x117DECu;
    {
        const bool branch_taken_0x117dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DECu;
        // 0x117df0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117dec) {
            ctx->pc = 0x117EF0u;
            goto label_117ef0;
        }
    }
    ctx->pc = 0x117DF4u;
label_117df4:
    // 0x117df4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x117df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x117df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117dfc: 0x3c01be82  lui         $at, 0xBE82
    ctx->pc = 0x117dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48770 << 16));
    // 0x117e00: 0x34212681  ori         $at, $at, 0x2681
    ctx->pc = 0x117e00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9857);
    // 0x117e04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x117e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x117e08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x117e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e0c: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x117e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x117e10: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x117e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e14: 0x3c013f95  lui         $at, 0x3F95
    ctx->pc = 0x117e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16277 << 16));
    // 0x117e18: 0x342197f6  ori         $at, $at, 0x97F6
    ctx->pc = 0x117e18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38902);
    // 0x117e1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x117e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x117e20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x117e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117e24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x117e28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x117e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117e2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x117e2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x117e30: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x117e30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x117e34: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x117e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x117e38: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x117E38u;
    SET_GPR_U32(ctx, 31, 0x117E40u);
    ctx->pc = 0x117E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E38u;
    // 0x117e3c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x117E38u, 0x117E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E40u;
label_117e40:
    // 0x117e40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x117e40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x117e44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e48: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x117e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x117e4c: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x117E4Cu;
    SET_GPR_U32(ctx, 31, 0x117E54u);
    ctx->pc = 0x117E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E4Cu;
    // 0x117e50: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x117E4Cu, 0x117E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E54u;
label_117e54:
    // 0x117e54: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x117e54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x117e58: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x117e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x117e5c: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x117e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x117e60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x117e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x117e64: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x117e64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_117e68:
    // 0x117e68: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x117e68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x117e6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x117E6Cu;
    {
        const bool branch_taken_0x117e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E6Cu;
        // 0x117e70: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e6c) {
            ctx->pc = 0x117E98u;
            goto label_117e98;
        }
    }
    ctx->pc = 0x117E74u;
    // 0x117e74: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x117E74u;
    {
        const bool branch_taken_0x117e74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E74u;
        // 0x117e78: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e74) {
            ctx->pc = 0x117E98u;
            goto label_117e98;
        }
    }
    ctx->pc = 0x117E7Cu;
    // 0x117e7c: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x117e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x117e80: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x117e80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x117e84: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x117e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x117e88: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x117e88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x117e8c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x117e8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x117e90: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x117e90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x117e94: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x117e94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_117e98:
    // 0x117e98: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x117E98u;
    SET_GPR_U32(ctx, 31, 0x117EA0u);
    ctx->pc = 0x117E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E98u;
    // 0x117e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x117E98u, 0x117EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EA0u;
label_117ea0:
    // 0x117ea0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x117EA0u;
    SET_GPR_U32(ctx, 31, 0x117EA8u);
    ctx->pc = 0x117EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117EA0u;
    // 0x117ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x117EA0u, 0x117EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EA8u;
label_117ea8:
    // 0x117ea8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x117EA8u;
    {
        const bool branch_taken_0x117ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EA8u;
        // 0x117eac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ea8) {
            ctx->pc = 0x117ECCu;
            goto label_117ecc;
        }
    }
    ctx->pc = 0x117EB0u;
    // 0x117eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117eb4: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x117EB4u;
    SET_GPR_U32(ctx, 31, 0x117EBCu);
    ctx->pc = 0x117EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117EB4u;
    // 0x117eb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x117EB4u, 0x117EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EBCu;
label_117ebc:
    // 0x117ebc: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x117ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x117ec0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x117ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x117ec4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x117ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x117ec8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x117ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_117ecc:
    // 0x117ecc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x117ed0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x117ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x117ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x117ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ed8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x117ED8u;
    SET_GPR_U32(ctx, 31, 0x117EE0u);
    ctx->pc = 0x117EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117ED8u;
    // 0x117edc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x117ED8u, 0x117EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EE0u;
label_117ee0:
    // 0x117ee0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x117ee0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x117ee4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x117EE4u;
    SET_GPR_U32(ctx, 31, 0x117EECu);
    ctx->pc = 0x117EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117EE4u;
    // 0x117ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x117EE4u, 0x117EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EECu;
label_117eec:
    // 0x117eec: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x117eecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_117ef0:
    // 0x117ef0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x117ef4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x117EF4u;
    {
        const bool branch_taken_0x117ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EF4u;
        // 0x117ef8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ef4) {
            ctx->pc = 0x117F58u;
            goto label_117f58;
        }
    }
    ctx->pc = 0x117EFCu;
    // 0x117efc: 0x8622056a  lh          $v0, 0x56A($s1)
    ctx->pc = 0x117efcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1386)));
    // 0x117f00: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x117F00u;
    {
        const bool branch_taken_0x117f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F00u;
        // 0x117f04: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f00) {
            ctx->pc = 0x117F54u;
            goto label_117f54;
        }
    }
    ctx->pc = 0x117F08u;
    // 0x117f08: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x117f08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x117f0c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x117f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x117f10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117F10u;
    {
        const bool branch_taken_0x117f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F10u;
        // 0x117f14: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f10) {
            ctx->pc = 0x117F24u;
            goto label_117f24;
        }
    }
    ctx->pc = 0x117F18u;
    // 0x117f18: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x117f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x117f1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x117F1Cu;
    {
        const bool branch_taken_0x117f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F1Cu;
        // 0x117f20: 0x8c42005c  lw          $v0, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f1c) {
            ctx->pc = 0x117F28u;
            goto label_117f28;
        }
    }
    ctx->pc = 0x117F24u;
label_117f24:
    // 0x117f24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117f28:
    // 0x117f28: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x117F28u;
    {
        const bool branch_taken_0x117f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F28u;
        // 0x117f2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f28) {
            ctx->pc = 0x117F4Cu;
            goto label_117f4c;
        }
    }
    ctx->pc = 0x117F30u;
    // 0x117f30: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x117f30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x117f34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x117f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x117f38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x117f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x117f3c: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x117f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x117f40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117f44: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x117F44u;
    SET_GPR_U32(ctx, 31, 0x117F4Cu);
    ctx->pc = 0x117F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117F44u;
    // 0x117f48: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x117F44u, 0x117F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F4Cu;
label_117f4c:
    // 0x117f4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x117F4Cu;
    {
        const bool branch_taken_0x117f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F4Cu;
        // 0x117f50: 0xa620056a  sh          $zero, 0x56A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f4c) {
            ctx->pc = 0x117F5Cu;
            goto label_117f5c;
        }
    }
    ctx->pc = 0x117F54u;
label_117f54:
    // 0x117f54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117f58:
    // 0x117f58: 0xa622056a  sh          $v0, 0x56A($s1)
    ctx->pc = 0x117f58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 2));
label_117f5c:
    // 0x117f5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x117f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117f60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x117f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117f64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x117f64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117f68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117f6c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x117f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x117f70: 0x3e00008  jr          $ra
    ctx->pc = 0x117F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F70u;
        // 0x117f74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117F78u;
}
