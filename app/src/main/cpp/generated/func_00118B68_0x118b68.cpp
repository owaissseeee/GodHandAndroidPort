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

// Function: func_00118B68
// Address: 0x118b68 - 0x1191a0
void func_00118B68_0x118b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00118B68_0x118b68");
#endif

    switch (ctx->pc) {
        case 0x118bb8u: goto label_118bb8;
        case 0x118bc8u: goto label_118bc8;
        case 0x118bd4u: goto label_118bd4;
        case 0x118c14u: goto label_118c14;
        case 0x118c1cu: goto label_118c1c;
        case 0x118c68u: goto label_118c68;
        case 0x118c7cu: goto label_118c7c;
        case 0x118c8cu: goto label_118c8c;
        case 0x118ca8u: goto label_118ca8;
        case 0x118cccu: goto label_118ccc;
        case 0x118cd4u: goto label_118cd4;
        case 0x118d38u: goto label_118d38;
        case 0x118d4cu: goto label_118d4c;
        case 0x118d74u: goto label_118d74;
        case 0x118f44u: goto label_118f44;
        case 0x118f4cu: goto label_118f4c;
        case 0x118f54u: goto label_118f54;
        case 0x118fd4u: goto label_118fd4;
        case 0x118fe8u: goto label_118fe8;
        case 0x119034u: goto label_119034;
        case 0x11903cu: goto label_11903c;
        case 0x119050u: goto label_119050;
        case 0x119074u: goto label_119074;
        case 0x119080u: goto label_119080;
        case 0x1190d4u: goto label_1190d4;
        case 0x1190e8u: goto label_1190e8;
        case 0x119134u: goto label_119134;
        case 0x11913cu: goto label_11913c;
        case 0x119150u: goto label_119150;
        case 0x119174u: goto label_119174;
        case 0x119180u: goto label_119180;
        default: break;
    }

    ctx->pc = 0x118b68u;

    // 0x118b68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x118b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x118b6c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x118b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x118b70: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x118b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x118b74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x118b74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b78: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x118b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x118b7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x118b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x118b80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118b88: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x118b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x118b8c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x118b8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x118b90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x118b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b94: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x118b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x118b98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118b9c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x118b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x118ba0: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x118ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x118ba4: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x118ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x118ba8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x118ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x118bac: 0x8e320694  lw          $s2, 0x694($s1)
    ctx->pc = 0x118bacu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x118bb0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x118BB0u;
    SET_GPR_U32(ctx, 31, 0x118BB8u);
    ctx->pc = 0x118BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118BB0u;
    // 0x118bb4: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x118BB0u, 0x118BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118BB8u;
label_118bb8:
    // 0x118bb8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x118bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x118bbc: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x118bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x118bc0: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x118BC0u;
    SET_GPR_U32(ctx, 31, 0x118BC8u);
    ctx->pc = 0x118BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118BC0u;
    // 0x118bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x118BC0u, 0x118BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118BC8u;
label_118bc8:
    // 0x118bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118bcc: 0xc0a480c  jal         func_292030
    ctx->pc = 0x118BCCu;
    SET_GPR_U32(ctx, 31, 0x118BD4u);
    ctx->pc = 0x118BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118BCCu;
    // 0x118bd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x118BCCu, 0x118BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118BD4u;
label_118bd4:
    // 0x118bd4: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x118bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x118bd8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x118bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x118bdc: 0x922502f6  lbu         $a1, 0x2F6($s1)
    ctx->pc = 0x118bdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x118be0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x118be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x118be4: 0x2ca40008  sltiu       $a0, $a1, 0x8
    ctx->pc = 0x118be4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x118be8: 0x10800165  beqz        $a0, . + 4 + (0x165 << 2)
    ctx->pc = 0x118BE8u;
    {
        const bool branch_taken_0x118be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x118BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118BE8u;
        // 0x118bec: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118be8) {
            ctx->pc = 0x119180u;
            goto label_119180;
        }
    }
    ctx->pc = 0x118BF0u;
    // 0x118bf0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x118bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x118bf4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x118bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x118bf8: 0x2442c410  addiu       $v0, $v0, -0x3BF0
    ctx->pc = 0x118bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951952));
    // 0x118bfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118c00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x118c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118c04: 0x800008  jr          $a0
    ctx->pc = 0x118C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118C0Cu: goto label_118c0c;
            case 0x118CA0u: goto label_118ca0;
            case 0x118CECu: goto label_118cec;
            case 0x118D6Cu: goto label_118d6c;
            case 0x118F88u: goto label_118f88;
            case 0x118FFCu: goto label_118ffc;
            case 0x119088u: goto label_119088;
            case 0x1190FCu: goto label_1190fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118C04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x118C0Cu;
label_118c0c:
    // 0x118c0c: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x118C0Cu;
    SET_GPR_U32(ctx, 31, 0x118C14u);
    ctx->pc = 0x118C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C0Cu;
    // 0x118c10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x118C0Cu, 0x118C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C14u;
label_118c14:
    // 0x118c14: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x118C14u;
    SET_GPR_U32(ctx, 31, 0x118C1Cu);
    ctx->pc = 0x118C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C14u;
    // 0x118c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x118C14u, 0x118C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C1Cu;
label_118c1c:
    // 0x118c1c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x118c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x118c20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x118c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c24: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x118c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x118c28: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x118c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x118c2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x118c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x118c30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c34: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x118c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x118c38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c3c: 0x3c013fc5  lui         $at, 0x3FC5
    ctx->pc = 0x118c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16325 << 16));
    // 0x118c40: 0x34214952  ori         $at, $at, 0x4952
    ctx->pc = 0x118c40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18770);
    // 0x118c44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x118c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118c48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x118c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x118c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x118c50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118c54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x118c54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x118c58: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x118c58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x118c5c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x118c5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x118c60: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x118C60u;
    SET_GPR_U32(ctx, 31, 0x118C68u);
    ctx->pc = 0x118C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C60u;
    // 0x118c64: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x118C60u, 0x118C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C68u;
label_118c68:
    // 0x118c68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x118c68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x118c6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c70: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x118c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x118c74: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x118C74u;
    SET_GPR_U32(ctx, 31, 0x118C7Cu);
    ctx->pc = 0x118C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C74u;
    // 0x118c78: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x118C74u, 0x118C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C7Cu;
label_118c7c:
    // 0x118c7c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x118c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x118c80: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x118c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x118c84: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x118C84u;
    SET_GPR_U32(ctx, 31, 0x118C8Cu);
    ctx->pc = 0x118C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C84u;
    // 0x118c88: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x118C84u, 0x118C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C8Cu;
label_118c8c:
    // 0x118c8c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x118c8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x118c90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x118c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118c94: 0xa623056a  sh          $v1, 0x56A($s1)
    ctx->pc = 0x118c94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 3));
    // 0x118c98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118c9c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x118c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_118ca0:
    // 0x118ca0: 0xc0b6dea  jal         func_2DB7A8
    ctx->pc = 0x118CA0u;
    SET_GPR_U32(ctx, 31, 0x118CA8u);
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x118CA0u, 0x118CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118CA8u;
label_118ca8:
    // 0x118ca8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x118CA8u;
    {
        const bool branch_taken_0x118ca8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CA8u;
        // 0x118cac: 0x26430550  addiu       $v1, $s2, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ca8) {
            ctx->pc = 0x118CC4u;
            goto label_118cc4;
        }
    }
    ctx->pc = 0x118CB0u;
    // 0x118cb0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x118cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x118cb4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x118cb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118cb8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x118cb8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118cbc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x118cbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x118cc0: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x118cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_118cc4:
    // 0x118cc4: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x118CC4u;
    SET_GPR_U32(ctx, 31, 0x118CCCu);
    ctx->pc = 0x118CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118CC4u;
    // 0x118cc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x118CC4u, 0x118CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118CCCu;
label_118ccc:
    // 0x118ccc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x118CCCu;
    SET_GPR_U32(ctx, 31, 0x118CD4u);
    ctx->pc = 0x118CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118CCCu;
    // 0x118cd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x118CCCu, 0x118CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118CD4u;
label_118cd4:
    // 0x118cd4: 0x104000e2  beqz        $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x118CD4u;
    {
        const bool branch_taken_0x118cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118cd4) {
            ctx->pc = 0x119060u;
            goto label_119060;
        }
    }
    ctx->pc = 0x118CDCu;
    // 0x118cdc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x118cdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x118ce0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118ce4: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x118CE4u;
    {
        const bool branch_taken_0x118ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118CE4u;
        // 0x118ce8: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ce4) {
            ctx->pc = 0x119060u;
            goto label_119060;
        }
    }
    ctx->pc = 0x118CECu;
label_118cec:
    // 0x118cec: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x118cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x118cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118cf4: 0x3c01bd50  lui         $at, 0xBD50
    ctx->pc = 0x118cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48464 << 16));
    // 0x118cf8: 0x3421e560  ori         $at, $at, 0xE560
    ctx->pc = 0x118cf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58720);
    // 0x118cfc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x118cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x118d00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x118d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d04: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x118d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x118d08: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x118d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d0c: 0x3c013e47  lui         $at, 0x3E47
    ctx->pc = 0x118d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15943 << 16));
    // 0x118d10: 0x34214539  ori         $at, $at, 0x4539
    ctx->pc = 0x118d10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17721);
    // 0x118d14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x118d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118d18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x118d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118d1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x118d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x118d20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118d24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x118d24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x118d28: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x118d28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x118d2c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x118d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x118d30: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x118D30u;
    SET_GPR_U32(ctx, 31, 0x118D38u);
    ctx->pc = 0x118D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D30u;
    // 0x118d34: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x118D30u, 0x118D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D38u;
label_118d38:
    // 0x118d38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x118d38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x118d3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d40: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x118d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x118d44: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x118D44u;
    SET_GPR_U32(ctx, 31, 0x118D4Cu);
    ctx->pc = 0x118D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D44u;
    // 0x118d48: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x118D44u, 0x118D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D4Cu;
label_118d4c:
    // 0x118d4c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x118d4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x118d50: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x118d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x118d54: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x118d54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x118d58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x118d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x118d5c: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x118d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x118d60: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x118d60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x118d64: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x118d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
    // 0x118d68: 0xae2015b8  sw          $zero, 0x15B8($s1)
    ctx->pc = 0x118d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 0));
label_118d6c:
    // 0x118d6c: 0xc0b6dea  jal         func_2DB7A8
    ctx->pc = 0x118D6Cu;
    SET_GPR_U32(ctx, 31, 0x118D74u);
    ctx->pc = 0x2DB7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7A8u, 0x118D6Cu, 0x118D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D74u;
label_118d74:
    // 0x118d74: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x118D74u;
    {
        const bool branch_taken_0x118d74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D74u;
        // 0x118d78: 0x26420550  addiu       $v0, $s2, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d74) {
            ctx->pc = 0x118D90u;
            goto label_118d90;
        }
    }
    ctx->pc = 0x118D7Cu;
    // 0x118d7c: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x118d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x118d80: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x118d80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118d84: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x118d84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118d88: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x118d88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x118d8c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x118d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_118d90:
    // 0x118d90: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x118d90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x118d94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118D94u;
    {
        const bool branch_taken_0x118d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D94u;
        // 0x118d98: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d94) {
            ctx->pc = 0x118DA4u;
            goto label_118da4;
        }
    }
    ctx->pc = 0x118D9Cu;
    // 0x118d9c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x118d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x118da0: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x118da0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_118da4:
    // 0x118da4: 0x8e2215b8  lw          $v0, 0x15B8($s1)
    ctx->pc = 0x118da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
    // 0x118da8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x118DA8u;
    {
        const bool branch_taken_0x118da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DA8u;
        // 0x118dac: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118da8) {
            ctx->pc = 0x118DB4u;
            goto label_118db4;
        }
    }
    ctx->pc = 0x118DB0u;
    // 0x118db0: 0xae2215b8  sw          $v0, 0x15B8($s1)
    ctx->pc = 0x118db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
label_118db4:
    // 0x118db4: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x118db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x118db8: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x118db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x118dbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118dc0: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x118dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
    // 0x118dc4: 0x8c8374a8  lw          $v1, 0x74A8($a0)
    ctx->pc = 0x118dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7474A8u));
    // 0x118dc8: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x118dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x118dcc: 0x50600030  beql        $v1, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x118DCCu;
    {
        const bool branch_taken_0x118dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x118dcc) {
            ctx->pc = 0x118DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118DCCu;
            // 0x118dd0: 0x8e2215b8  lw          $v0, 0x15B8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118E90u;
            goto label_118e90;
        }
    }
    ctx->pc = 0x118DD4u;
    // 0x118dd4: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x118dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x118dd8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x118dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x118ddc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x118DDCu;
    {
        const bool branch_taken_0x118ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DDCu;
        // 0x118de0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ddc) {
            ctx->pc = 0x118DFCu;
            goto label_118dfc;
        }
    }
    ctx->pc = 0x118DE4u;
    // 0x118de4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x118de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x118de8: 0x2442c430  addiu       $v0, $v0, -0x3BD0
    ctx->pc = 0x118de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
    // 0x118dec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118df0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x118df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118df4: 0x800008  jr          $a0
    ctx->pc = 0x118DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118DFCu: goto label_118dfc;
            case 0x118E04u: goto label_118e04;
            case 0x118E0Cu: goto label_118e0c;
            case 0x118E14u: goto label_118e14;
            case 0x118E1Cu: goto label_118e1c;
            case 0x118E24u: goto label_118e24;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118DF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x118DFCu;
label_118dfc:
    // 0x118dfc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x118DFCu;
    {
        const bool branch_taken_0x118dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DFCu;
        // 0x118e00: 0x240303e7  addiu       $v1, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118dfc) {
            ctx->pc = 0x118E28u;
            goto label_118e28;
        }
    }
    ctx->pc = 0x118E04u;
label_118e04:
    // 0x118e04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x118E04u;
    {
        const bool branch_taken_0x118e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E04u;
        // 0x118e08: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e04) {
            ctx->pc = 0x118E28u;
            goto label_118e28;
        }
    }
    ctx->pc = 0x118E0Cu;
label_118e0c:
    // 0x118e0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x118E0Cu;
    {
        const bool branch_taken_0x118e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E0Cu;
        // 0x118e10: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e0c) {
            ctx->pc = 0x118E28u;
            goto label_118e28;
        }
    }
    ctx->pc = 0x118E14u;
label_118e14:
    // 0x118e14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x118E14u;
    {
        const bool branch_taken_0x118e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E14u;
        // 0x118e18: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e14) {
            ctx->pc = 0x118E28u;
            goto label_118e28;
        }
    }
    ctx->pc = 0x118E1Cu;
label_118e1c:
    // 0x118e1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x118E1Cu;
    {
        const bool branch_taken_0x118e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E1Cu;
        // 0x118e20: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e1c) {
            ctx->pc = 0x118E28u;
            goto label_118e28;
        }
    }
    ctx->pc = 0x118E24u;
label_118e24:
    // 0x118e24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x118e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_118e28:
    // 0x118e28: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x118e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x118e2c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x118e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x118e30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x118E30u;
    {
        const bool branch_taken_0x118e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118e30) {
            ctx->pc = 0x118E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118E30u;
            // 0x118e34: 0x8e2215b0  lw          $v0, 0x15B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118E48u;
            goto label_118e48;
        }
    }
    ctx->pc = 0x118E38u;
    // 0x118e38: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x118e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x118e3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118e40: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x118e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x118e44: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x118e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
label_118e48:
    // 0x118e48: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x118e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x118e4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118E4Cu;
    {
        const bool branch_taken_0x118e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E4Cu;
        // 0x118e50: 0x8e2215b4  lw          $v0, 0x15B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e4c) {
            ctx->pc = 0x118E60u;
            goto label_118e60;
        }
    }
    ctx->pc = 0x118E54u;
    // 0x118e54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x118e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x118e58: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x118e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x118e5c: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x118e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_118e60:
    // 0x118e60: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x118E60u;
    {
        const bool branch_taken_0x118e60 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x118e60) {
            ctx->pc = 0x118E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118E60u;
            // 0x118e64: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118E68u;
            goto label_118e68;
        }
    }
    ctx->pc = 0x118E68u;
label_118e68:
    // 0x118e68: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x118e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x118e6c: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x118e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x118e70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118E70u;
    {
        const bool branch_taken_0x118e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E70u;
        // 0x118e74: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e70) {
            ctx->pc = 0x118E84u;
            goto label_118e84;
        }
    }
    ctx->pc = 0x118E78u;
    // 0x118e78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x118e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118e7c: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x118e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
    // 0x118e80: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x118e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_118e84:
    // 0x118e84: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x118e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x118e88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x118E88u;
    {
        const bool branch_taken_0x118e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118E88u;
        // 0x118e8c: 0xae2215b8  sw          $v0, 0x15B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118e88) {
            ctx->pc = 0x118EB4u;
            goto label_118eb4;
        }
    }
    ctx->pc = 0x118E90u;
label_118e90:
    // 0x118e90: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x118E90u;
    {
        const bool branch_taken_0x118e90 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x118e90) {
            ctx->pc = 0x118E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118E90u;
            // 0x118e94: 0x8e2315b4  lw          $v1, 0x15B4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118EB8u;
            goto label_118eb8;
        }
    }
    ctx->pc = 0x118E98u;
    // 0x118e98: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x118e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x118e9c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x118e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x118ea0: 0xae2315b8  sw          $v1, 0x15B8($s1)
    ctx->pc = 0x118ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5560), GPR_U32(ctx, 3));
    // 0x118ea4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x118ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x118ea8: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x118EA8u;
    {
        const bool branch_taken_0x118ea8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x118EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EA8u;
        // 0x118eac: 0xae2215b4  sw          $v0, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ea8) {
            ctx->pc = 0x118EB4u;
            goto label_118eb4;
        }
    }
    ctx->pc = 0x118EB0u;
    // 0x118eb0: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x118eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
label_118eb4:
    // 0x118eb4: 0x8e2315b4  lw          $v1, 0x15B4($s1)
    ctx->pc = 0x118eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
label_118eb8:
    // 0x118eb8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x118eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x118ebc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x118EBCu;
    {
        const bool branch_taken_0x118ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EBCu;
        // 0x118ec0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ebc) {
            ctx->pc = 0x118EDCu;
            goto label_118edc;
        }
    }
    ctx->pc = 0x118EC4u;
    // 0x118ec4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x118ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x118ec8: 0x2442c450  addiu       $v0, $v0, -0x3BB0
    ctx->pc = 0x118ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952016));
    // 0x118ecc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x118eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118ed0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x118ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118ed4: 0x800008  jr          $a0
    ctx->pc = 0x118ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118EDCu: goto label_118edc;
            case 0x118EF0u: goto label_118ef0;
            case 0x118F00u: goto label_118f00;
            case 0x118F14u: goto label_118f14;
            case 0x118F28u: goto label_118f28;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118ED4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x118EDCu;
label_118edc:
    // 0x118edc: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x118edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x118ee0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x118ee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x118ee4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118ee8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x118EE8u;
    {
        const bool branch_taken_0x118ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EE8u;
        // 0x118eec: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ee8) {
            ctx->pc = 0x118F38u;
            goto label_118f38;
        }
    }
    ctx->pc = 0x118EF0u;
label_118ef0:
    // 0x118ef0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x118ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x118ef4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118ef8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x118EF8u;
    {
        const bool branch_taken_0x118ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EF8u;
        // 0x118efc: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ef8) {
            ctx->pc = 0x118F38u;
            goto label_118f38;
        }
    }
    ctx->pc = 0x118F00u;
label_118f00:
    // 0x118f00: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x118f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x118f04: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x118f04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x118f08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118f0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x118F0Cu;
    {
        const bool branch_taken_0x118f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F0Cu;
        // 0x118f10: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f0c) {
            ctx->pc = 0x118F38u;
            goto label_118f38;
        }
    }
    ctx->pc = 0x118F14u;
label_118f14:
    // 0x118f14: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x118f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x118f18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x118f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x118f1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118f20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x118F20u;
    {
        const bool branch_taken_0x118f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F20u;
        // 0x118f24: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f20) {
            ctx->pc = 0x118F38u;
            goto label_118f38;
        }
    }
    ctx->pc = 0x118F28u;
label_118f28:
    // 0x118f28: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x118f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x118f2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118f30: 0x0  nop
    ctx->pc = 0x118f30u;
    // NOP
    // 0x118f34: 0xe62005a8  swc1        $f0, 0x5A8($s1)
    ctx->pc = 0x118f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
label_118f38:
    // 0x118f38: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x118f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x118f3c: 0xc0560a2  jal         func_158288
    ctx->pc = 0x118F3Cu;
    SET_GPR_U32(ctx, 31, 0x118F44u);
    ctx->pc = 0x118F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118F3Cu;
    // 0x118f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x118F3Cu, 0x118F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118F44u;
label_118f44:
    // 0x118f44: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x118F44u;
    SET_GPR_U32(ctx, 31, 0x118F4Cu);
    ctx->pc = 0x118F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118F44u;
    // 0x118f48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x118F44u, 0x118F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118F4Cu;
label_118f4c:
    // 0x118f4c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x118F4Cu;
    SET_GPR_U32(ctx, 31, 0x118F54u);
    ctx->pc = 0x118F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118F4Cu;
    // 0x118f50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x118F4Cu, 0x118F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118F54u;
label_118f54:
    // 0x118f54: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x118F54u;
    {
        const bool branch_taken_0x118f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118f54) {
            ctx->pc = 0x119060u;
            goto label_119060;
        }
    }
    ctx->pc = 0x118F5Cu;
    // 0x118f5c: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x118f5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x118f60: 0x1c40003f  bgtz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x118F60u;
    {
        const bool branch_taken_0x118f60 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x118F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F60u;
        // 0x118f64: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f60) {
            ctx->pc = 0x119060u;
            goto label_119060;
        }
    }
    ctx->pc = 0x118F68u;
    // 0x118f68: 0x1240003d  beqz        $s2, . + 4 + (0x3D << 2)
    ctx->pc = 0x118F68u;
    {
        const bool branch_taken_0x118f68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F68u;
        // 0x118f6c: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f68) {
            ctx->pc = 0x119060u;
            goto label_119060;
        }
    }
    ctx->pc = 0x118F70u;
    // 0x118f70: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x118f70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x118f74: 0x2842001f  slti        $v0, $v0, 0x1F
    ctx->pc = 0x118f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x118f78: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x118F78u;
    {
        const bool branch_taken_0x118f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F78u;
        // 0x118f7c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f78) {
            ctx->pc = 0x119060u;
            goto label_119060;
        }
    }
    ctx->pc = 0x118F80u;
    // 0x118f80: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x118F80u;
    {
        const bool branch_taken_0x118f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F80u;
        // 0x118f84: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118f80) {
            ctx->pc = 0x119060u;
            goto label_119060;
        }
    }
    ctx->pc = 0x118F88u;
label_118f88:
    // 0x118f88: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x118f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x118f8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118f90: 0x3c01bd50  lui         $at, 0xBD50
    ctx->pc = 0x118f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48464 << 16));
    // 0x118f94: 0x3421e560  ori         $at, $at, 0xE560
    ctx->pc = 0x118f94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58720);
    // 0x118f98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x118f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x118f9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x118f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fa0: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x118fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x118fa4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x118fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fa8: 0x3c013e5e  lui         $at, 0x3E5E
    ctx->pc = 0x118fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15966 << 16));
    // 0x118fac: 0x34219e1b  ori         $at, $at, 0x9E1B
    ctx->pc = 0x118facu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40475);
    // 0x118fb0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x118fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118fb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x118fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118fb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x118fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x118fbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x118fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118fc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x118fc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x118fc4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x118fc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x118fc8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x118fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x118fcc: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x118FCCu;
    SET_GPR_U32(ctx, 31, 0x118FD4u);
    ctx->pc = 0x118FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118FCCu;
    // 0x118fd0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x118FCCu, 0x118FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118FD4u;
label_118fd4:
    // 0x118fd4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x118fd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x118fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118fdc: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x118fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x118fe0: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x118FE0u;
    SET_GPR_U32(ctx, 31, 0x118FE8u);
    ctx->pc = 0x118FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118FE0u;
    // 0x118fe4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x118FE0u, 0x118FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118FE8u;
label_118fe8:
    // 0x118fe8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x118fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x118fec: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x118fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x118ff0: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x118ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x118ff4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x118ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x118ff8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x118ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_118ffc:
    // 0x118ffc: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x118ffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x119000: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x119000u;
    {
        const bool branch_taken_0x119000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119000u;
        // 0x119004: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119000) {
            ctx->pc = 0x11902Cu;
            goto label_11902c;
        }
    }
    ctx->pc = 0x119008u;
    // 0x119008: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x119008u;
    {
        const bool branch_taken_0x119008 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119008u;
        // 0x11900c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119008) {
            ctx->pc = 0x11902Cu;
            goto label_11902c;
        }
    }
    ctx->pc = 0x119010u;
    // 0x119010: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x119010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x119014: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x119014u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x119018: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x119018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x11901c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11901cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x119020: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x119020u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119024: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x119024u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x119028: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x119028u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_11902c:
    // 0x11902c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11902Cu;
    SET_GPR_U32(ctx, 31, 0x119034u);
    ctx->pc = 0x119030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11902Cu;
    // 0x119030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11902Cu, 0x119034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119034u;
label_119034:
    // 0x119034: 0xc055f06  jal         func_157C18
    ctx->pc = 0x119034u;
    SET_GPR_U32(ctx, 31, 0x11903Cu);
    ctx->pc = 0x119038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119034u;
    // 0x119038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x119034u, 0x11903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11903Cu;
label_11903c:
    // 0x11903c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11903Cu;
    {
        const bool branch_taken_0x11903c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11903Cu;
        // 0x119040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11903c) {
            ctx->pc = 0x119060u;
            goto label_119060;
        }
    }
    ctx->pc = 0x119044u;
    // 0x119044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x119044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119048: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x119048u;
    SET_GPR_U32(ctx, 31, 0x119050u);
    ctx->pc = 0x11904Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119048u;
    // 0x11904c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x119048u, 0x119050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119050u;
label_119050:
    // 0x119050: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x119050u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x119054: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x119054u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x119058: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x119058u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11905c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11905cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_119060:
    // 0x119060: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119064: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x119064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x119068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11906c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11906Cu;
    SET_GPR_U32(ctx, 31, 0x119074u);
    ctx->pc = 0x119070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11906Cu;
    // 0x119070: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11906Cu, 0x119074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119074u;
label_119074:
    // 0x119074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119078: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x119078u;
    SET_GPR_U32(ctx, 31, 0x119080u);
    ctx->pc = 0x11907Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119078u;
    // 0x11907c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x119078u, 0x119080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119080u;
label_119080:
    // 0x119080: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x119080u;
    {
        const bool branch_taken_0x119080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119080u;
        // 0x119084: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119080) {
            ctx->pc = 0x119184u;
            goto label_119184;
        }
    }
    ctx->pc = 0x119088u;
label_119088:
    // 0x119088: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x119088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11908c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11908cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119090: 0x3c01bd50  lui         $at, 0xBD50
    ctx->pc = 0x119090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48464 << 16));
    // 0x119094: 0x3421e560  ori         $at, $at, 0xE560
    ctx->pc = 0x119094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58720);
    // 0x119098: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x119098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11909c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11909cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1190a0: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x1190a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1190a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1190a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1190a8: 0x3c013e5e  lui         $at, 0x3E5E
    ctx->pc = 0x1190a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15966 << 16));
    // 0x1190ac: 0x34219e1b  ori         $at, $at, 0x9E1B
    ctx->pc = 0x1190acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40475);
    // 0x1190b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1190b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1190b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1190b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1190b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1190b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1190bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1190bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1190c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1190c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1190c4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1190c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1190c8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1190c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1190cc: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x1190CCu;
    SET_GPR_U32(ctx, 31, 0x1190D4u);
    ctx->pc = 0x1190D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1190CCu;
    // 0x1190d0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x1190CCu, 0x1190D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1190D4u;
label_1190d4:
    // 0x1190d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1190d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1190d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1190d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1190dc: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1190dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1190e0: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x1190E0u;
    SET_GPR_U32(ctx, 31, 0x1190E8u);
    ctx->pc = 0x1190E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1190E0u;
    // 0x1190e4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x1190E0u, 0x1190E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1190E8u;
label_1190e8:
    // 0x1190e8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1190e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1190ec: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1190ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1190f0: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x1190f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x1190f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1190f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1190f8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1190f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1190fc:
    // 0x1190fc: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x1190fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x119100: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x119100u;
    {
        const bool branch_taken_0x119100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119100u;
        // 0x119104: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119100) {
            ctx->pc = 0x11912Cu;
            goto label_11912c;
        }
    }
    ctx->pc = 0x119108u;
    // 0x119108: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x119108u;
    {
        const bool branch_taken_0x119108 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119108u;
        // 0x11910c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119108) {
            ctx->pc = 0x11912Cu;
            goto label_11912c;
        }
    }
    ctx->pc = 0x119110u;
    // 0x119110: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x119110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x119114: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x119114u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x119118: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x119118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x11911c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11911cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x119120: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x119120u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119124: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x119124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x119128: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x119128u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_11912c:
    // 0x11912c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11912Cu;
    SET_GPR_U32(ctx, 31, 0x119134u);
    ctx->pc = 0x119130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11912Cu;
    // 0x119130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11912Cu, 0x119134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119134u;
label_119134:
    // 0x119134: 0xc055f06  jal         func_157C18
    ctx->pc = 0x119134u;
    SET_GPR_U32(ctx, 31, 0x11913Cu);
    ctx->pc = 0x119138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119134u;
    // 0x119138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x119134u, 0x11913Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11913Cu;
label_11913c:
    // 0x11913c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11913Cu;
    {
        const bool branch_taken_0x11913c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11913Cu;
        // 0x119140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11913c) {
            ctx->pc = 0x119160u;
            goto label_119160;
        }
    }
    ctx->pc = 0x119144u;
    // 0x119144: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x119144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119148: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x119148u;
    SET_GPR_U32(ctx, 31, 0x119150u);
    ctx->pc = 0x11914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119148u;
    // 0x11914c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x119148u, 0x119150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119150u;
label_119150:
    // 0x119150: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x119150u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x119154: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x119154u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x119158: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x119158u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11915c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11915cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_119160:
    // 0x119160: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x119160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x119164: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x119164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x119168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11916c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11916Cu;
    SET_GPR_U32(ctx, 31, 0x119174u);
    ctx->pc = 0x119170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11916Cu;
    // 0x119170: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11916Cu, 0x119174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119174u;
label_119174:
    // 0x119174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119178: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x119178u;
    SET_GPR_U32(ctx, 31, 0x119180u);
    ctx->pc = 0x11917Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119178u;
    // 0x11917c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x119178u, 0x119180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119180u;
label_119180:
    // 0x119180: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x119180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_119184:
    // 0x119184: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x119184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119188: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x119188u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11918c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11918cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119190: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x119190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x119194: 0x3e00008  jr          $ra
    ctx->pc = 0x119194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119194u;
        // 0x119198: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11919Cu;
    // 0x11919c: 0x0  nop
    ctx->pc = 0x11919cu;
    // NOP
    ctx->pc = 0x1191a0u;
}
