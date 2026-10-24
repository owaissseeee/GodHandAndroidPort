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

// Function: func_0023ADB8
// Address: 0x23adb8 - 0x23afd8
void func_0023ADB8_0x23adb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0023ADB8_0x23adb8");
#endif

    switch (ctx->pc) {
        case 0x23adecu: goto label_23adec;
        case 0x23ae38u: goto label_23ae38;
        case 0x23ae64u: goto label_23ae64;
        case 0x23aeb4u: goto label_23aeb4;
        case 0x23aec0u: goto label_23aec0;
        case 0x23aeccu: goto label_23aecc;
        case 0x23aef0u: goto label_23aef0;
        case 0x23af1cu: goto label_23af1c;
        case 0x23af38u: goto label_23af38;
        case 0x23af44u: goto label_23af44;
        case 0x23af50u: goto label_23af50;
        case 0x23af60u: goto label_23af60;
        case 0x23af90u: goto label_23af90;
        case 0x23afacu: goto label_23afac;
        case 0x23afb8u: goto label_23afb8;
        case 0x23afc4u: goto label_23afc4;
        default: break;
    }

    ctx->pc = 0x23adb8u;

    // 0x23adb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23adb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23adbc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x23adbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x23adc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23adc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23adc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23adc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23adc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23adc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23adcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23adccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23add0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23add0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23add4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x23add4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23add8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x23add8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x23addc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23addcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ade0: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x23ade0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x23ade4: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x23ADE4u;
    SET_GPR_U32(ctx, 31, 0x23ADECu);
    ctx->pc = 0x23ADE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ADE4u;
    // 0x23ade8: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x23ADE4u, 0x23ADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ADECu;
label_23adec:
    // 0x23adec: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x23adecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23adf0: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x23adf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x23adf4: 0x920602f6  lbu         $a2, 0x2F6($s0)
    ctx->pc = 0x23adf4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23adf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23adfc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x23adfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x23ae00: 0xa2020617  sb          $v0, 0x617($s0)
    ctx->pc = 0x23ae00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1559), (uint8_t)GPR_U32(ctx, 2));
    // 0x23ae04: 0x2cc40006  sltiu       $a0, $a2, 0x6
    ctx->pc = 0x23ae04u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x23ae08: 0x1080006e  beqz        $a0, . + 4 + (0x6E << 2)
    ctx->pc = 0x23AE08u;
    {
        const bool branch_taken_0x23ae08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE08u;
        // 0x23ae0c: 0xae0316d0  sw          $v1, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae08) {
            ctx->pc = 0x23AFC4u;
            goto label_23afc4;
        }
    }
    ctx->pc = 0x23AE10u;
    // 0x23ae10: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x23ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x23ae14: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x23ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x23ae18: 0x2442a620  addiu       $v0, $v0, -0x59E0
    ctx->pc = 0x23ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944288));
    // 0x23ae1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ae20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ae24: 0x800008  jr          $a0
    ctx->pc = 0x23AE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23AE2Cu: goto label_23ae2c;
            case 0x23AE94u: goto label_23ae94;
            case 0x23AEE8u: goto label_23aee8;
            case 0x23AF28u: goto label_23af28;
            case 0x23AF58u: goto label_23af58;
            case 0x23AF9Cu: goto label_23af9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AE24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23AE2Cu;
label_23ae2c:
    // 0x23ae2c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x23ae2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ae30: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23AE30u;
    SET_GPR_U32(ctx, 31, 0x23AE38u);
    ctx->pc = 0x23AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE30u;
    // 0x23ae34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23AE30u, 0x23AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE38u;
label_23ae38:
    // 0x23ae38: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x23ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23ae3c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23ae3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23ae40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23ae40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23ae44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ae44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ae48: 0x8c650be8  lw          $a1, 0xBE8($v1)
    ctx->pc = 0x23ae48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3048)));
    // 0x23ae4c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x23ae4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23ae50: 0x8c660bec  lw          $a2, 0xBEC($v1)
    ctx->pc = 0x23ae50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3052)));
    // 0x23ae54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23ae54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ae58: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23ae58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23ae5c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23AE5Cu;
    SET_GPR_U32(ctx, 31, 0x23AE64u);
    ctx->pc = 0x23AE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE5Cu;
    // 0x23ae60: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23AE5Cu, 0x23AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE64u;
label_23ae64:
    // 0x23ae64: 0x8e0416d0  lw          $a0, 0x16D0($s0)
    ctx->pc = 0x23ae64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23ae68: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23ae6c: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x23ae6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23ae70: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x23ae70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x23ae74: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23ae78: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x23ae78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23ae7c: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x23ae7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x23ae80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23ae80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23ae84: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x23ae84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23ae88: 0xa20502f6  sb          $a1, 0x2F6($s0)
    ctx->pc = 0x23ae88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 5));
    // 0x23ae8c: 0xae0416d0  sw          $a0, 0x16D0($s0)
    ctx->pc = 0x23ae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 4));
    // 0x23ae90: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x23ae90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
label_23ae94:
    // 0x23ae94: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x23ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23ae98: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x23ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x23ae9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ae9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aea0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23aea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23aea4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23aea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23aea8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23aea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23aeac: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23AEACu;
    SET_GPR_U32(ctx, 31, 0x23AEB4u);
    ctx->pc = 0x23AEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AEACu;
    // 0x23aeb0: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23AEACu, 0x23AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AEB4u;
label_23aeb4:
    // 0x23aeb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23aeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aeb8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23AEB8u;
    SET_GPR_U32(ctx, 31, 0x23AEC0u);
    ctx->pc = 0x23AEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AEB8u;
    // 0x23aebc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23AEB8u, 0x23AEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AEC0u;
label_23aec0:
    // 0x23aec0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23aec0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23aec4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23AEC4u;
    SET_GPR_U32(ctx, 31, 0x23AECCu);
    ctx->pc = 0x23AEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AEC4u;
    // 0x23aec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23AEC4u, 0x23AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AECCu;
label_23aecc:
    // 0x23aecc: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x23aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23aed0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x23aed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x23aed4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23aed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23aed8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x23AED8u;
    {
        const bool branch_taken_0x23aed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AED8u;
        // 0x23aedc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aed8) {
            ctx->pc = 0x23AFC4u;
            goto label_23afc4;
        }
    }
    ctx->pc = 0x23AEE0u;
    // 0x23aee0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x23AEE0u;
    {
        const bool branch_taken_0x23aee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AEE0u;
        // 0x23aee4: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aee0) {
            ctx->pc = 0x23AFC4u;
            goto label_23afc4;
        }
    }
    ctx->pc = 0x23AEE8u;
label_23aee8:
    // 0x23aee8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23AEE8u;
    SET_GPR_U32(ctx, 31, 0x23AEF0u);
    ctx->pc = 0x23AEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AEE8u;
    // 0x23aeec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23AEE8u, 0x23AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AEF0u;
label_23aef0:
    // 0x23aef0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x23aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23aef4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23aef4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23aef8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23aef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23aefc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23aefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af00: 0x8c650bf0  lw          $a1, 0xBF0($v1)
    ctx->pc = 0x23af00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3056)));
    // 0x23af04: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23af04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23af08: 0x8c660bf4  lw          $a2, 0xBF4($v1)
    ctx->pc = 0x23af08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3060)));
    // 0x23af0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23af0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af10: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23af10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23af14: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23AF14u;
    SET_GPR_U32(ctx, 31, 0x23AF1Cu);
    ctx->pc = 0x23AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF14u;
    // 0x23af18: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23AF14u, 0x23AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF1Cu;
label_23af1c:
    // 0x23af1c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x23af1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23af20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23af20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23af24: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23af24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23af28:
    // 0x23af28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23af28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23af2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23af2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23af30: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23AF30u;
    SET_GPR_U32(ctx, 31, 0x23AF38u);
    ctx->pc = 0x23AF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF30u;
    // 0x23af34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23AF30u, 0x23AF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF38u;
label_23af38:
    // 0x23af38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23af38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af3c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23AF3Cu;
    SET_GPR_U32(ctx, 31, 0x23AF44u);
    ctx->pc = 0x23AF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF3Cu;
    // 0x23af40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23AF3Cu, 0x23AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF44u;
label_23af44:
    // 0x23af44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23af44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af48: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23AF48u;
    SET_GPR_U32(ctx, 31, 0x23AF50u);
    ctx->pc = 0x23AF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF48u;
    // 0x23af4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23AF48u, 0x23AF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF50u;
label_23af50:
    // 0x23af50: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x23AF50u;
    {
        const bool branch_taken_0x23af50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF50u;
        // 0x23af54: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af50) {
            ctx->pc = 0x23AFC8u;
            goto label_23afc8;
        }
    }
    ctx->pc = 0x23AF58u;
label_23af58:
    // 0x23af58: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23AF58u;
    SET_GPR_U32(ctx, 31, 0x23AF60u);
    ctx->pc = 0x23AF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF58u;
    // 0x23af5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23AF58u, 0x23AF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF60u;
label_23af60:
    // 0x23af60: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x23af60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23af64: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23af64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23af68: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x23af68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x23af6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23af6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23af70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23af70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af74: 0x8c650bf0  lw          $a1, 0xBF0($v1)
    ctx->pc = 0x23af74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3056)));
    // 0x23af78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23af78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af7c: 0x8c660bf4  lw          $a2, 0xBF4($v1)
    ctx->pc = 0x23af7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3060)));
    // 0x23af80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23af80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af84: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x23af84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x23af88: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23AF88u;
    SET_GPR_U32(ctx, 31, 0x23AF90u);
    ctx->pc = 0x23AF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF88u;
    // 0x23af8c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23AF88u, 0x23AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF90u;
label_23af90:
    // 0x23af90: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x23af90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23af94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23af94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23af98: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23af98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23af9c:
    // 0x23af9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23af9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23afa0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23afa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23afa4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23AFA4u;
    SET_GPR_U32(ctx, 31, 0x23AFACu);
    ctx->pc = 0x23AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFA4u;
    // 0x23afa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23AFA4u, 0x23AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AFACu;
label_23afac:
    // 0x23afac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23afacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23afb0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23AFB0u;
    SET_GPR_U32(ctx, 31, 0x23AFB8u);
    ctx->pc = 0x23AFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFB0u;
    // 0x23afb4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23AFB0u, 0x23AFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AFB8u;
label_23afb8:
    // 0x23afb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23afb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23afbc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23AFBCu;
    SET_GPR_U32(ctx, 31, 0x23AFC4u);
    ctx->pc = 0x23AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFBCu;
    // 0x23afc0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23AFBCu, 0x23AFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AFC4u;
label_23afc4:
    // 0x23afc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23afc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23afc8:
    // 0x23afc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23afc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23afcc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x23afccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23afd0: 0x3e00008  jr          $ra
    ctx->pc = 0x23AFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFD0u;
        // 0x23afd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AFD8u;
}
