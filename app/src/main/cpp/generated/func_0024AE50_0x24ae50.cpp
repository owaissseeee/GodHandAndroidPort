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

// Function: func_0024AE50
// Address: 0x24ae50 - 0x24b218
void func_0024AE50_0x24ae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0024AE50_0x24ae50");
#endif

    switch (ctx->pc) {
        case 0x24ae78u: goto label_24ae78;
        case 0x24ae8cu: goto label_24ae8c;
        case 0x24aeecu: goto label_24aeec;
        case 0x24af18u: goto label_24af18;
        case 0x24af2cu: goto label_24af2c;
        case 0x24af40u: goto label_24af40;
        case 0x24af54u: goto label_24af54;
        case 0x24af70u: goto label_24af70;
        case 0x24af90u: goto label_24af90;
        case 0x24af9cu: goto label_24af9c;
        case 0x24afacu: goto label_24afac;
        case 0x24affcu: goto label_24affc;
        case 0x24b004u: goto label_24b004;
        case 0x24b010u: goto label_24b010;
        case 0x24b034u: goto label_24b034;
        case 0x24b054u: goto label_24b054;
        case 0x24b060u: goto label_24b060;
        case 0x24b0a4u: goto label_24b0a4;
        case 0x24b0b8u: goto label_24b0b8;
        case 0x24b0ccu: goto label_24b0cc;
        case 0x24b0e0u: goto label_24b0e0;
        case 0x24b118u: goto label_24b118;
        case 0x24b12cu: goto label_24b12c;
        case 0x24b140u: goto label_24b140;
        case 0x24b154u: goto label_24b154;
        case 0x24b1a4u: goto label_24b1a4;
        case 0x24b1d0u: goto label_24b1d0;
        case 0x24b1dcu: goto label_24b1dc;
        case 0x24b1f8u: goto label_24b1f8;
        default: break;
    }

    ctx->pc = 0x24ae50u;

    // 0x24ae50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24ae54: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x24ae54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x24ae58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24ae58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ae5c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x24ae5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x24ae60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24ae60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24ae64: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x24ae64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x24ae68: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x24ae68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x24ae6c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x24ae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24ae70: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x24AE70u;
    SET_GPR_U32(ctx, 31, 0x24AE78u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x24AE70u, 0x24AE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE78u;
label_24ae78:
    // 0x24ae78: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x24ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x24ae7c: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x24ae7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x24ae80: 0x247150b0  addiu       $s1, $v1, 0x50B0
    ctx->pc = 0x24ae80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 20656));
    // 0x24ae84: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x24AE84u;
    SET_GPR_U32(ctx, 31, 0x24AE8Cu);
    ctx->pc = 0x24AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AE84u;
    // 0x24ae88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x24AE84u, 0x24AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE8Cu;
label_24ae8c:
    // 0x24ae8c: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x24ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24ae90: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x24ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x24ae94: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x24ae94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x24ae98: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x24ae98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24ae9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24ae9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24aea0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x24aea0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x24aea4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24aea8: 0x10a4002d  beq         $a1, $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x24AEA8u;
    {
        const bool branch_taken_0x24aea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x24AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEA8u;
        // 0x24aeac: 0xae0316d0  sw          $v1, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aea8) {
            ctx->pc = 0x24AF60u;
            goto label_24af60;
        }
    }
    ctx->pc = 0x24AEB0u;
    // 0x24aeb0: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x24aeb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24aeb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24AEB4u;
    {
        const bool branch_taken_0x24aeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEB4u;
        // 0x24aeb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aeb4) {
            ctx->pc = 0x24AECCu;
            goto label_24aecc;
        }
    }
    ctx->pc = 0x24AEBCu;
    // 0x24aebc: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24AEBCu;
    {
        const bool branch_taken_0x24aebc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aebc) {
            ctx->pc = 0x24AEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AEBCu;
            // 0x24aec0: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AEE4u;
            goto label_24aee4;
        }
    }
    ctx->pc = 0x24AEC4u;
    // 0x24aec4: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x24AEC4u;
    {
        const bool branch_taken_0x24aec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEC4u;
        // 0x24aec8: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aec4) {
            ctx->pc = 0x24B1E0u;
            goto label_24b1e0;
        }
    }
    ctx->pc = 0x24AECCu;
label_24aecc:
    // 0x24aecc: 0x10a20035  beq         $a1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x24AECCu;
    {
        const bool branch_taken_0x24aecc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AECCu;
        // 0x24aed0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aecc) {
            ctx->pc = 0x24AFA4u;
            goto label_24afa4;
        }
    }
    ctx->pc = 0x24AED4u;
    // 0x24aed4: 0x50a200a7  beql        $a1, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x24AED4u;
    {
        const bool branch_taken_0x24aed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24aed4) {
            ctx->pc = 0x24AED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AED4u;
            // 0x24aed8: 0xc6010600  lwc1        $f1, 0x600($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B174u;
            goto label_24b174;
        }
    }
    ctx->pc = 0x24AEDCu;
    // 0x24aedc: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x24AEDCu;
    {
        const bool branch_taken_0x24aedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AEDCu;
        // 0x24aee0: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aedc) {
            ctx->pc = 0x24B1E0u;
            goto label_24b1e0;
        }
    }
    ctx->pc = 0x24AEE4u;
label_24aee4:
    // 0x24aee4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24AEE4u;
    SET_GPR_U32(ctx, 31, 0x24AEECu);
    ctx->pc = 0x24AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AEE4u;
    // 0x24aee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24AEE4u, 0x24AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AEECu;
label_24aeec:
    // 0x24aeec: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x24aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x24aef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24aef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aef4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24aef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24aef8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24aef8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24aefc: 0x8c653d3c  lw          $a1, 0x3D3C($v1)
    ctx->pc = 0x24aefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15676)));
    // 0x24af00: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24af00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24af04: 0x8c663d40  lw          $a2, 0x3D40($v1)
    ctx->pc = 0x24af04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15680)));
    // 0x24af08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24af08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af0c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24af0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24af10: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24AF10u;
    SET_GPR_U32(ctx, 31, 0x24AF18u);
    ctx->pc = 0x24AF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF10u;
    // 0x24af14: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24AF10u, 0x24AF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF18u;
label_24af18:
    // 0x24af18: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x24af18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    // 0x24af1c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AF1Cu;
    {
        const bool branch_taken_0x24af1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24af1c) {
            ctx->pc = 0x24AF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AF1Cu;
            // 0x24af20: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AF30u;
            goto label_24af30;
        }
    }
    ctx->pc = 0x24AF24u;
    // 0x24af24: 0xc0a04da  jal         func_281368
    ctx->pc = 0x24AF24u;
    SET_GPR_U32(ctx, 31, 0x24AF2Cu);
    ctx->pc = 0x24AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF24u;
    // 0x24af28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281368u, 0x24AF24u, 0x24AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF2Cu;
label_24af2c:
    // 0x24af2c: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x24af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_24af30:
    // 0x24af30: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AF30u;
    {
        const bool branch_taken_0x24af30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24af30) {
            ctx->pc = 0x24AF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AF30u;
            // 0x24af34: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AF44u;
            goto label_24af44;
        }
    }
    ctx->pc = 0x24AF38u;
    // 0x24af38: 0xc0a0ca8  jal         func_2832A0
    ctx->pc = 0x24AF38u;
    SET_GPR_U32(ctx, 31, 0x24AF40u);
    ctx->pc = 0x24AF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF38u;
    // 0x24af3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2832A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2832A0u, 0x24AF38u, 0x24AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF40u;
label_24af40:
    // 0x24af40: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x24af40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_24af44:
    // 0x24af44: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AF44u;
    {
        const bool branch_taken_0x24af44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24af44) {
            ctx->pc = 0x24AF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AF44u;
            // 0x24af48: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AF58u;
            goto label_24af58;
        }
    }
    ctx->pc = 0x24AF4Cu;
    // 0x24af4c: 0xc0a0ca8  jal         func_2832A0
    ctx->pc = 0x24AF4Cu;
    SET_GPR_U32(ctx, 31, 0x24AF54u);
    ctx->pc = 0x24AF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF4Cu;
    // 0x24af50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2832A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2832A0u, 0x24AF4Cu, 0x24AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF54u;
label_24af54:
    // 0x24af54: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24af54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_24af58:
    // 0x24af58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24af58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24af5c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24af5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_24af60:
    // 0x24af60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24af60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24af64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24af64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af68: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24AF68u;
    SET_GPR_U32(ctx, 31, 0x24AF70u);
    ctx->pc = 0x24AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF68u;
    // 0x24af6c: 0xa2020617  sb          $v0, 0x617($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1559), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24AF68u, 0x24AF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF70u;
label_24af70:
    // 0x24af70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24AF70u;
    {
        const bool branch_taken_0x24af70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF70u;
        // 0x24af74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af70) {
            ctx->pc = 0x24AF7Cu;
            goto label_24af7c;
        }
    }
    ctx->pc = 0x24AF78u;
    // 0x24af78: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24af78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_24af7c:
    // 0x24af7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24af7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24af80: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24af80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24af84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24af84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af88: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24AF88u;
    SET_GPR_U32(ctx, 31, 0x24AF90u);
    ctx->pc = 0x24AF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF88u;
    // 0x24af8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24AF88u, 0x24AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF90u;
label_24af90:
    // 0x24af90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24af90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24af94: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24AF94u;
    SET_GPR_U32(ctx, 31, 0x24AF9Cu);
    ctx->pc = 0x24AF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF94u;
    // 0x24af98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24AF94u, 0x24AF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF9Cu;
label_24af9c:
    // 0x24af9c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x24AF9Cu;
    {
        const bool branch_taken_0x24af9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF9Cu;
        // 0x24afa0: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af9c) {
            ctx->pc = 0x24B1E0u;
            goto label_24b1e0;
        }
    }
    ctx->pc = 0x24AFA4u;
label_24afa4:
    // 0x24afa4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x24AFA4u;
    SET_GPR_U32(ctx, 31, 0x24AFACu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x24AFA4u, 0x24AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFACu;
label_24afac:
    // 0x24afac: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x24afacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x24afb0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x24afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24afb4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24afb8: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x24afb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x24afbc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x24afbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24afc0: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x24afc0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24afc4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x24afc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x24afc8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x24afc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24afcc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24afccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24afd0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x24afd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24afd4: 0x13a40006  beq         $sp, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24AFD4u;
    {
        const bool branch_taken_0x24afd4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 4));
        ctx->pc = 0x24AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFD4u;
        // 0x24afd8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24afd4) {
            ctx->pc = 0x24AFF0u;
            goto label_24aff0;
        }
    }
    ctx->pc = 0x24AFDCu;
    // 0x24afdc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x24afdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24afe0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x24afe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24afe4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x24afe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24afe8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x24afe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24afec: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x24afecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_24aff0:
    // 0x24aff0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x24aff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24aff4: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x24AFF4u;
    SET_GPR_U32(ctx, 31, 0x24AFFCu);
    ctx->pc = 0x24AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AFF4u;
    // 0x24aff8: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x24AFF4u, 0x24AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFFCu;
label_24affc:
    // 0x24affc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x24AFFCu;
    SET_GPR_U32(ctx, 31, 0x24B004u);
    ctx->pc = 0x24B000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AFFCu;
    // 0x24b000: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x24AFFCu, 0x24B004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B004u;
label_24b004:
    // 0x24b004: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x24b004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x24b008: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x24B008u;
    SET_GPR_U32(ctx, 31, 0x24B010u);
    ctx->pc = 0x24B00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B008u;
    // 0x24b00c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x24B008u, 0x24B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B010u;
label_24b010:
    // 0x24b010: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x24b010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x24b014: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24b014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b018: 0x0  nop
    ctx->pc = 0x24b018u;
    // NOP
    // 0x24b01c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24b01cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b020: 0x0  nop
    ctx->pc = 0x24b020u;
    // NOP
    // 0x24b024: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x24B024u;
    {
        const bool branch_taken_0x24b024 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B024u;
        // 0x24b028: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b024) {
            ctx->pc = 0x24B04Cu;
            goto label_24b04c;
        }
    }
    ctx->pc = 0x24B02Cu;
    // 0x24b02c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x24B02Cu;
    SET_GPR_U32(ctx, 31, 0x24B034u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x24B02Cu, 0x24B034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B034u;
label_24b034:
    // 0x24b034: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x24b034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x24b038: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24b038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24b03c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24b03cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b040: 0x0  nop
    ctx->pc = 0x24b040u;
    // NOP
    // 0x24b044: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x24b044u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24b048: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24b048u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_24b04c:
    // 0x24b04c: 0xc09262a  jal         func_2498A8
    ctx->pc = 0x24B04Cu;
    SET_GPR_U32(ctx, 31, 0x24B054u);
    ctx->pc = 0x24B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B04Cu;
    // 0x24b050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2498A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2498A8u, 0x24B04Cu, 0x24B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B054u;
label_24b054:
    // 0x24b054: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x24b054u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x24b058: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24B058u;
    SET_GPR_U32(ctx, 31, 0x24B060u);
    ctx->pc = 0x24B05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B058u;
    // 0x24b05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24B058u, 0x24B060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B060u;
label_24b060:
    // 0x24b060: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x24b060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x24b064: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b068: 0x0  nop
    ctx->pc = 0x24b068u;
    // NOP
    // 0x24b06c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x24b06cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b070: 0x0  nop
    ctx->pc = 0x24b070u;
    // NOP
    // 0x24b074: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x24B074u;
    {
        const bool branch_taken_0x24b074 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B074u;
        // 0x24b078: 0x3048ffff  andi        $t0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b074) {
            ctx->pc = 0x24B0F0u;
            goto label_24b0f0;
        }
    }
    ctx->pc = 0x24B07Cu;
    // 0x24b07c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x24b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x24b080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b084: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24b084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b088: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24b088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24b08c: 0x8c453d44  lw          $a1, 0x3D44($v0)
    ctx->pc = 0x24b08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15684)));
    // 0x24b090: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24b090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b094: 0x8c463d48  lw          $a2, 0x3D48($v0)
    ctx->pc = 0x24b094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15688)));
    // 0x24b098: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x24b098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24b09c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24B09Cu;
    SET_GPR_U32(ctx, 31, 0x24B0A4u);
    ctx->pc = 0x24B0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B09Cu;
    // 0x24b0a0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24B09Cu, 0x24B0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B0A4u;
label_24b0a4:
    // 0x24b0a4: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x24b0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    // 0x24b0a8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B0A8u;
    {
        const bool branch_taken_0x24b0a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b0a8) {
            ctx->pc = 0x24B0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B0A8u;
            // 0x24b0ac: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B0BCu;
            goto label_24b0bc;
        }
    }
    ctx->pc = 0x24B0B0u;
    // 0x24b0b0: 0xc0a04da  jal         func_281368
    ctx->pc = 0x24B0B0u;
    SET_GPR_U32(ctx, 31, 0x24B0B8u);
    ctx->pc = 0x24B0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B0B0u;
    // 0x24b0b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281368u, 0x24B0B0u, 0x24B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B0B8u;
label_24b0b8:
    // 0x24b0b8: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x24b0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_24b0bc:
    // 0x24b0bc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B0BCu;
    {
        const bool branch_taken_0x24b0bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b0bc) {
            ctx->pc = 0x24B0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B0BCu;
            // 0x24b0c0: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B0D0u;
            goto label_24b0d0;
        }
    }
    ctx->pc = 0x24B0C4u;
    // 0x24b0c4: 0xc0a0ca8  jal         func_2832A0
    ctx->pc = 0x24B0C4u;
    SET_GPR_U32(ctx, 31, 0x24B0CCu);
    ctx->pc = 0x24B0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B0C4u;
    // 0x24b0c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2832A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2832A0u, 0x24B0C4u, 0x24B0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B0CCu;
label_24b0cc:
    // 0x24b0cc: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x24b0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_24b0d0:
    // 0x24b0d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B0D0u;
    {
        const bool branch_taken_0x24b0d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b0d0) {
            ctx->pc = 0x24B0E0u;
            goto label_24b0e0;
        }
    }
    ctx->pc = 0x24B0D8u;
    // 0x24b0d8: 0xc0a0ca8  jal         func_2832A0
    ctx->pc = 0x24B0D8u;
    SET_GPR_U32(ctx, 31, 0x24B0E0u);
    ctx->pc = 0x24B0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B0D8u;
    // 0x24b0dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2832A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2832A0u, 0x24B0D8u, 0x24B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B0E0u;
label_24b0e0:
    // 0x24b0e0: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x24b0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x24b0e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b0e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b0e8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x24B0E8u;
    {
        const bool branch_taken_0x24b0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0E8u;
        // 0x24b0ec: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b0e8) {
            ctx->pc = 0x24B164u;
            goto label_24b164;
        }
    }
    ctx->pc = 0x24B0F0u;
label_24b0f0:
    // 0x24b0f0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x24b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x24b0f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b0f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24b0f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b0fc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x24b0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24b100: 0x8c453d4c  lw          $a1, 0x3D4C($v0)
    ctx->pc = 0x24b100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15692)));
    // 0x24b104: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24b104u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b108: 0x8c463d50  lw          $a2, 0x3D50($v0)
    ctx->pc = 0x24b108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15696)));
    // 0x24b10c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x24b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24b110: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24B110u;
    SET_GPR_U32(ctx, 31, 0x24B118u);
    ctx->pc = 0x24B114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B110u;
    // 0x24b114: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24B110u, 0x24B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B118u;
label_24b118:
    // 0x24b118: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x24b118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    // 0x24b11c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B11Cu;
    {
        const bool branch_taken_0x24b11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b11c) {
            ctx->pc = 0x24B120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B11Cu;
            // 0x24b120: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B130u;
            goto label_24b130;
        }
    }
    ctx->pc = 0x24B124u;
    // 0x24b124: 0xc0a04da  jal         func_281368
    ctx->pc = 0x24B124u;
    SET_GPR_U32(ctx, 31, 0x24B12Cu);
    ctx->pc = 0x24B128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B124u;
    // 0x24b128: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281368u, 0x24B124u, 0x24B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B12Cu;
label_24b12c:
    // 0x24b12c: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x24b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_24b130:
    // 0x24b130: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B130u;
    {
        const bool branch_taken_0x24b130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b130) {
            ctx->pc = 0x24B134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B130u;
            // 0x24b134: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B144u;
            goto label_24b144;
        }
    }
    ctx->pc = 0x24B138u;
    // 0x24b138: 0xc0a0ca8  jal         func_2832A0
    ctx->pc = 0x24B138u;
    SET_GPR_U32(ctx, 31, 0x24B140u);
    ctx->pc = 0x24B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B138u;
    // 0x24b13c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2832A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2832A0u, 0x24B138u, 0x24B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B140u;
label_24b140:
    // 0x24b140: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x24b140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_24b144:
    // 0x24b144: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B144u;
    {
        const bool branch_taken_0x24b144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b144) {
            ctx->pc = 0x24B154u;
            goto label_24b154;
        }
    }
    ctx->pc = 0x24B14Cu;
    // 0x24b14c: 0xc0a0ca8  jal         func_2832A0
    ctx->pc = 0x24B14Cu;
    SET_GPR_U32(ctx, 31, 0x24B154u);
    ctx->pc = 0x24B150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B14Cu;
    // 0x24b150: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2832A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2832A0u, 0x24B14Cu, 0x24B154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B154u;
label_24b154:
    // 0x24b154: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x24b154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x24b158: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b15c: 0x0  nop
    ctx->pc = 0x24b15cu;
    // NOP
    // 0x24b160: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x24b160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_24b164:
    // 0x24b164: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24b164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24b168: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24b168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24b16c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24b16cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x24b170: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x24b170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24b174:
    // 0x24b174: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24b174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b178: 0x0  nop
    ctx->pc = 0x24b178u;
    // NOP
    // 0x24b17c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24b17cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b180: 0x0  nop
    ctx->pc = 0x24b180u;
    // NOP
    // 0x24b184: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24B184u;
    {
        const bool branch_taken_0x24b184 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B184u;
        // 0x24b188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b184) {
            ctx->pc = 0x24B19Cu;
            goto label_24b19c;
        }
    }
    ctx->pc = 0x24B18Cu;
    // 0x24b18c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x24b18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b190: 0xa2020617  sb          $v0, 0x617($s0)
    ctx->pc = 0x24b190u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1559), (uint8_t)GPR_U32(ctx, 2));
    // 0x24b194: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24b194u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24b198: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x24b198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_24b19c:
    // 0x24b19c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24B19Cu;
    SET_GPR_U32(ctx, 31, 0x24B1A4u);
    ctx->pc = 0x24B1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B19Cu;
    // 0x24b1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24B19Cu, 0x24B1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B1A4u;
label_24b1a4:
    // 0x24b1a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24B1A4u;
    {
        const bool branch_taken_0x24b1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1A4u;
        // 0x24b1a8: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b1a4) {
            ctx->pc = 0x24B1BCu;
            goto label_24b1bc;
        }
    }
    ctx->pc = 0x24B1ACu;
    // 0x24b1ac: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x24b1acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24b1b0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x24b1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x24b1b4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x24b1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x24b1b8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x24b1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_24b1bc:
    // 0x24b1bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24b1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24b1c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24b1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24b1c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b1c8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24B1C8u;
    SET_GPR_U32(ctx, 31, 0x24B1D0u);
    ctx->pc = 0x24B1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B1C8u;
    // 0x24b1cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24B1C8u, 0x24B1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B1D0u;
label_24b1d0:
    // 0x24b1d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24b1d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24b1d4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24B1D4u;
    SET_GPR_U32(ctx, 31, 0x24B1DCu);
    ctx->pc = 0x24B1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B1D4u;
    // 0x24b1d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24B1D4u, 0x24B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B1DCu;
label_24b1dc:
    // 0x24b1dc: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x24b1dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_24b1e0:
    // 0x24b1e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24b1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24b1e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B1E4u;
    {
        const bool branch_taken_0x24b1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1E4u;
        // 0x24b1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b1e4) {
            ctx->pc = 0x24B1F8u;
            goto label_24b1f8;
        }
    }
    ctx->pc = 0x24B1ECu;
    // 0x24b1ec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x24b1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24b1f0: 0xc09b6c0  jal         func_26DB00
    ctx->pc = 0x24B1F0u;
    SET_GPR_U32(ctx, 31, 0x24B1F8u);
    ctx->pc = 0x24B1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B1F0u;
    // 0x24b1f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DB00u, 0x24B1F0u, 0x24B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B1F8u;
label_24b1f8:
    // 0x24b1f8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x24b1f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24b1fc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x24b1fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24b200: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24b200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b204: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x24b204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24b208: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x24b208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24b20c: 0x3e00008  jr          $ra
    ctx->pc = 0x24B20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B20Cu;
        // 0x24b210: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B214u;
    // 0x24b214: 0x0  nop
    ctx->pc = 0x24b214u;
    // NOP
    ctx->pc = 0x24b218u;
}
