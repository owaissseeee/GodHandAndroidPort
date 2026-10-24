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

// Function: func_00249AB0
// Address: 0x249ab0 - 0x249ef8
void func_00249AB0_0x249ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00249AB0_0x249ab0");
#endif

    switch (ctx->pc) {
        case 0x249accu: goto label_249acc;
        case 0x249adcu: goto label_249adc;
        case 0x249b24u: goto label_249b24;
        case 0x249b50u: goto label_249b50;
        case 0x249b6cu: goto label_249b6c;
        case 0x249b80u: goto label_249b80;
        case 0x249b94u: goto label_249b94;
        case 0x249bccu: goto label_249bcc;
        case 0x249bd4u: goto label_249bd4;
        case 0x249be0u: goto label_249be0;
        case 0x249becu: goto label_249bec;
        case 0x249c4cu: goto label_249c4c;
        case 0x249c78u: goto label_249c78;
        case 0x249c94u: goto label_249c94;
        case 0x249ca8u: goto label_249ca8;
        case 0x249cbcu: goto label_249cbc;
        case 0x249cdcu: goto label_249cdc;
        case 0x249d04u: goto label_249d04;
        case 0x249db4u: goto label_249db4;
        case 0x249dbcu: goto label_249dbc;
        case 0x249dc8u: goto label_249dc8;
        case 0x249dd4u: goto label_249dd4;
        case 0x249e20u: goto label_249e20;
        case 0x249ec0u: goto label_249ec0;
        case 0x249ec8u: goto label_249ec8;
        case 0x249ed4u: goto label_249ed4;
        case 0x249ee0u: goto label_249ee0;
        default: break;
    }

    ctx->pc = 0x249ab0u;

    // 0x249ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x249ab4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x249ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x249ab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249abc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249ac0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x249ac0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x249ac4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x249AC4u;
    SET_GPR_U32(ctx, 31, 0x249ACCu);
    ctx->pc = 0x249AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249AC4u;
    // 0x249ac8: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x249AC4u, 0x249ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249ACCu;
label_249acc:
    // 0x249acc: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x249accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x249ad0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x249ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x249ad4: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x249AD4u;
    SET_GPR_U32(ctx, 31, 0x249ADCu);
    ctx->pc = 0x249AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249AD4u;
    // 0x249ad8: 0x24a550b0  addiu       $a1, $a1, 0x50B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x249AD4u, 0x249ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249ADCu;
label_249adc:
    // 0x249adc: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x249adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x249ae0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x249ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x249ae4: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x249ae4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x249ae8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x249ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x249aec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x249aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x249af0: 0x2ca40006  sltiu       $a0, $a1, 0x6
    ctx->pc = 0x249af0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x249af4: 0x108000fa  beqz        $a0, . + 4 + (0xFA << 2)
    ctx->pc = 0x249AF4u;
    {
        const bool branch_taken_0x249af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x249AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AF4u;
        // 0x249af8: 0xae0316d0  sw          $v1, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249af4) {
            ctx->pc = 0x249EE0u;
            goto label_249ee0;
        }
    }
    ctx->pc = 0x249AFCu;
    // 0x249afc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x249afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x249b00: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x249b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x249b04: 0x2442d7d0  addiu       $v0, $v0, -0x2830
    ctx->pc = 0x249b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957008));
    // 0x249b08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x249b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x249b0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x249b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249b10: 0x800008  jr          $a0
    ctx->pc = 0x249B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x249B18u: goto label_249b18;
            case 0x249BB4u: goto label_249bb4;
            case 0x249C3Cu: goto label_249c3c;
            case 0x249D24u: goto label_249d24;
            case 0x249E14u: goto label_249e14;
            case 0x249E2Cu: goto label_249e2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249B10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x249B18u;
label_249b18:
    // 0x249b18: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x249b18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x249b1c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x249B1Cu;
    SET_GPR_U32(ctx, 31, 0x249B24u);
    ctx->pc = 0x249B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249B1Cu;
    // 0x249b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x249B1Cu, 0x249B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B24u;
label_249b24:
    // 0x249b24: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x249b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x249b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249b2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x249b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x249b30: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x249b30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x249b34: 0x8c653d34  lw          $a1, 0x3D34($v1)
    ctx->pc = 0x249b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15668)));
    // 0x249b38: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x249b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x249b3c: 0x8c663d38  lw          $a2, 0x3D38($v1)
    ctx->pc = 0x249b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15672)));
    // 0x249b40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x249b40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249b44: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x249b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x249b48: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x249B48u;
    SET_GPR_U32(ctx, 31, 0x249B50u);
    ctx->pc = 0x249B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249B48u;
    // 0x249b4c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x249B48u, 0x249B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B50u;
label_249b50:
    // 0x249b50: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x249b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x249b54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x249b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249b58: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x249b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    // 0x249b5c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x249B5Cu;
    {
        const bool branch_taken_0x249b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B5Cu;
        // 0x249b60: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b5c) {
            ctx->pc = 0x249B6Cu;
            goto label_249b6c;
        }
    }
    ctx->pc = 0x249B64u;
    // 0x249b64: 0xc0a0498  jal         func_281260
    ctx->pc = 0x249B64u;
    SET_GPR_U32(ctx, 31, 0x249B6Cu);
    ctx->pc = 0x281260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281260u, 0x249B64u, 0x249B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B6Cu;
label_249b6c:
    // 0x249b6c: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x249b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    // 0x249b70: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x249B70u;
    {
        const bool branch_taken_0x249b70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x249b70) {
            ctx->pc = 0x249B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249B70u;
            // 0x249b74: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249B84u;
            goto label_249b84;
        }
    }
    ctx->pc = 0x249B78u;
    // 0x249b78: 0xc0a0c5c  jal         func_283170
    ctx->pc = 0x249B78u;
    SET_GPR_U32(ctx, 31, 0x249B80u);
    ctx->pc = 0x283170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283170u, 0x249B78u, 0x249B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B80u;
label_249b80:
    // 0x249b80: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x249b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_249b84:
    // 0x249b84: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x249B84u;
    {
        const bool branch_taken_0x249b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x249b84) {
            ctx->pc = 0x249B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249B84u;
            // 0x249b88: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249B98u;
            goto label_249b98;
        }
    }
    ctx->pc = 0x249B8Cu;
    // 0x249b8c: 0xc0a0c5c  jal         func_283170
    ctx->pc = 0x249B8Cu;
    SET_GPR_U32(ctx, 31, 0x249B94u);
    ctx->pc = 0x283170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283170u, 0x249B8Cu, 0x249B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249B94u;
label_249b94:
    // 0x249b94: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x249b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_249b98:
    // 0x249b98: 0x3c03fcff  lui         $v1, 0xFCFF
    ctx->pc = 0x249b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64767 << 16));
    // 0x249b9c: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x249b9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x249ba0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x249ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x249ba4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x249ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x249ba8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x249ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x249bac: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x249bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x249bb0: 0xa20402f6  sb          $a0, 0x2F6($s0)
    ctx->pc = 0x249bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 4));
label_249bb4:
    // 0x249bb4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x249bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x249bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249bbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x249bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x249bc0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x249bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x249bc4: 0xc092578  jal         func_2495E0
    ctx->pc = 0x249BC4u;
    SET_GPR_U32(ctx, 31, 0x249BCCu);
    ctx->pc = 0x249BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249BC4u;
    // 0x249bc8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2495E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2495E0u, 0x249BC4u, 0x249BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249BCCu;
label_249bcc:
    // 0x249bcc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x249BCCu;
    SET_GPR_U32(ctx, 31, 0x249BD4u);
    ctx->pc = 0x249BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249BCCu;
    // 0x249bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x249BCCu, 0x249BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249BD4u;
label_249bd4:
    // 0x249bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249bd8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x249BD8u;
    SET_GPR_U32(ctx, 31, 0x249BE0u);
    ctx->pc = 0x249BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249BD8u;
    // 0x249bdc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x249BD8u, 0x249BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249BE0u;
label_249be0:
    // 0x249be0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x249be0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x249be4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x249BE4u;
    SET_GPR_U32(ctx, 31, 0x249BECu);
    ctx->pc = 0x249BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249BE4u;
    // 0x249be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x249BE4u, 0x249BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249BECu;
label_249bec:
    // 0x249bec: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x249becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x249bf0: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x249bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x249bf4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x249BF4u;
    {
        const bool branch_taken_0x249bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249BF4u;
        // 0x249bf8: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249bf4) {
            ctx->pc = 0x249C10u;
            goto label_249c10;
        }
    }
    ctx->pc = 0x249BFCu;
    // 0x249bfc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x249bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x249c00: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x249c00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x249c04: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x249c04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x249c08: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x249C08u;
    {
        const bool branch_taken_0x249c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C08u;
        // 0x249c0c: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c08) {
            ctx->pc = 0x249EE0u;
            goto label_249ee0;
        }
    }
    ctx->pc = 0x249C10u;
label_249c10:
    // 0x249c10: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x249c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249c14: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x249c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249c18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x249c18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x249c1c: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x249c1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249c20: 0x0  nop
    ctx->pc = 0x249c20u;
    // NOP
    // 0x249c24: 0x450000ae  bc1f        . + 4 + (0xAE << 2)
    ctx->pc = 0x249C24u;
    {
        const bool branch_taken_0x249c24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x249C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C24u;
        // 0x249c28: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c24) {
            ctx->pc = 0x249EE0u;
            goto label_249ee0;
        }
    }
    ctx->pc = 0x249C2Cu;
    // 0x249c2c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x249c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x249c30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x249c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x249c34: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x249C34u;
    {
        const bool branch_taken_0x249c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C34u;
        // 0x249c38: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c34) {
            ctx->pc = 0x249EE0u;
            goto label_249ee0;
        }
    }
    ctx->pc = 0x249C3Cu;
label_249c3c:
    // 0x249c3c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x249c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x249c40: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x249c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x249c44: 0xc09d91a  jal         func_276468
    ctx->pc = 0x249C44u;
    SET_GPR_U32(ctx, 31, 0x249C4Cu);
    ctx->pc = 0x249C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C44u;
    // 0x249c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x249C44u, 0x249C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C4Cu;
label_249c4c:
    // 0x249c4c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x249c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x249c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c54: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x249c54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x249c58: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x249c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x249c5c: 0x8c653d34  lw          $a1, 0x3D34($v1)
    ctx->pc = 0x249c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15668)));
    // 0x249c60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x249c60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x249c64: 0x8c663d38  lw          $a2, 0x3D38($v1)
    ctx->pc = 0x249c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15672)));
    // 0x249c68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x249c68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c6c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x249c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x249c70: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x249C70u;
    SET_GPR_U32(ctx, 31, 0x249C78u);
    ctx->pc = 0x249C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C70u;
    // 0x249c74: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x249C70u, 0x249C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C78u;
label_249c78:
    // 0x249c78: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x249c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x249c7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x249c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249c80: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x249c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    // 0x249c84: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x249C84u;
    {
        const bool branch_taken_0x249c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x249C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C84u;
        // 0x249c88: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c84) {
            ctx->pc = 0x249C94u;
            goto label_249c94;
        }
    }
    ctx->pc = 0x249C8Cu;
    // 0x249c8c: 0xc0a0498  jal         func_281260
    ctx->pc = 0x249C8Cu;
    SET_GPR_U32(ctx, 31, 0x249C94u);
    ctx->pc = 0x281260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281260u, 0x249C8Cu, 0x249C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C94u;
label_249c94:
    // 0x249c94: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x249c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
    // 0x249c98: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x249C98u;
    {
        const bool branch_taken_0x249c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x249c98) {
            ctx->pc = 0x249C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249C98u;
            // 0x249c9c: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249CACu;
            goto label_249cac;
        }
    }
    ctx->pc = 0x249CA0u;
    // 0x249ca0: 0xc0a0c5c  jal         func_283170
    ctx->pc = 0x249CA0u;
    SET_GPR_U32(ctx, 31, 0x249CA8u);
    ctx->pc = 0x283170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283170u, 0x249CA0u, 0x249CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249CA8u;
label_249ca8:
    // 0x249ca8: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x249ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_249cac:
    // 0x249cac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x249CACu;
    {
        const bool branch_taken_0x249cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x249cac) {
            ctx->pc = 0x249CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249CACu;
            // 0x249cb0: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249CC0u;
            goto label_249cc0;
        }
    }
    ctx->pc = 0x249CB4u;
    // 0x249cb4: 0xc0a0c5c  jal         func_283170
    ctx->pc = 0x249CB4u;
    SET_GPR_U32(ctx, 31, 0x249CBCu);
    ctx->pc = 0x283170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283170u, 0x249CB4u, 0x249CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249CBCu;
label_249cbc:
    // 0x249cbc: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x249cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_249cc0:
    // 0x249cc0: 0x3c03fcff  lui         $v1, 0xFCFF
    ctx->pc = 0x249cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64767 << 16));
    // 0x249cc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x249cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x249cc8: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x249cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x249ccc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x249cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x249cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249cd4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x249CD4u;
    SET_GPR_U32(ctx, 31, 0x249CDCu);
    ctx->pc = 0x249CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249CD4u;
    // 0x249cd8: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x249CD4u, 0x249CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249CDCu;
label_249cdc:
    // 0x249cdc: 0xc600075c  lwc1        $f0, 0x75C($s0)
    ctx->pc = 0x249cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249ce0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x249ce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249ce4: 0x0  nop
    ctx->pc = 0x249ce4u;
    // NOP
    // 0x249ce8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x249CE8u;
    {
        const bool branch_taken_0x249ce8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x249CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CE8u;
        // 0x249cec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ce8) {
            ctx->pc = 0x249CF8u;
            goto label_249cf8;
        }
    }
    ctx->pc = 0x249CF0u;
    // 0x249cf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x249CF0u;
    {
        const bool branch_taken_0x249cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CF0u;
        // 0x249cf4: 0xa6000568  sh          $zero, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cf0) {
            ctx->pc = 0x249CFCu;
            goto label_249cfc;
        }
    }
    ctx->pc = 0x249CF8u;
label_249cf8:
    // 0x249cf8: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x249cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_249cfc:
    // 0x249cfc: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x249CFCu;
    SET_GPR_U32(ctx, 31, 0x249D04u);
    ctx->pc = 0x249D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249CFCu;
    // 0x249d00: 0xae000604  sw          $zero, 0x604($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x249CFCu, 0x249D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249D04u;
label_249d04:
    // 0x249d04: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x249d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x249d08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x249d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x249d0c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x249d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x249d10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x249d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x249d14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x249d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x249d18: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x249d18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x249d1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x249d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x249d20: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x249d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_249d24:
    // 0x249d24: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x249d24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x249d28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x249d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x249d2c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x249D2Cu;
    {
        const bool branch_taken_0x249d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D2Cu;
        // 0x249d30: 0xc60005a8  lwc1        $f0, 0x5A8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d2c) {
            ctx->pc = 0x249D64u;
            goto label_249d64;
        }
    }
    ctx->pc = 0x249D34u;
    // 0x249d34: 0x3c013a64  lui         $at, 0x3A64
    ctx->pc = 0x249d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14948 << 16));
    // 0x249d38: 0x3421c388  ori         $at, $at, 0xC388
    ctx->pc = 0x249d38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50056);
    // 0x249d3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x249d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x249d40: 0xc6010604  lwc1        $f1, 0x604($s0)
    ctx->pc = 0x249d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249d44: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x249d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x249d48: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x249d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x249d4c: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x249d4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x249d50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x249d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x249d54: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x249d54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x249d58: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x249d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249d5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x249D5Cu;
    {
        const bool branch_taken_0x249d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D5Cu;
        // 0x249d60: 0xe6010604  swc1        $f1, 0x604($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d5c) {
            ctx->pc = 0x249D90u;
            goto label_249d90;
        }
    }
    ctx->pc = 0x249D64u;
label_249d64:
    // 0x249d64: 0x3c013a64  lui         $at, 0x3A64
    ctx->pc = 0x249d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14948 << 16));
    // 0x249d68: 0x3421c388  ori         $at, $at, 0xC388
    ctx->pc = 0x249d68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50056);
    // 0x249d6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x249d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x249d70: 0xc6010604  lwc1        $f1, 0x604($s0)
    ctx->pc = 0x249d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249d74: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x249d74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x249d78: 0x3c01bc8e  lui         $at, 0xBC8E
    ctx->pc = 0x249d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48270 << 16));
    // 0x249d7c: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x249d7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x249d80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x249d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x249d84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x249d84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x249d88: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x249d88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249d8c: 0xe6010604  swc1        $f1, 0x604($s0)
    ctx->pc = 0x249d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
label_249d90:
    // 0x249d90: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x249D90u;
    {
        const bool branch_taken_0x249d90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x249d90) {
            ctx->pc = 0x249D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249D90u;
            // 0x249d94: 0xe6020604  swc1        $f2, 0x604($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x249D98u;
            goto label_249d98;
        }
    }
    ctx->pc = 0x249D98u;
label_249d98:
    // 0x249d98: 0xc6000604  lwc1        $f0, 0x604($s0)
    ctx->pc = 0x249d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249da0: 0xc60c05a8  lwc1        $f12, 0x5A8($s0)
    ctx->pc = 0x249da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x249da4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x249da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x249da8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x249da8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x249dac: 0xc0925dc  jal         func_249770
    ctx->pc = 0x249DACu;
    SET_GPR_U32(ctx, 31, 0x249DB4u);
    ctx->pc = 0x249DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249DACu;
    // 0x249db0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249770u, 0x249DACu, 0x249DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249DB4u;
label_249db4:
    // 0x249db4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x249DB4u;
    SET_GPR_U32(ctx, 31, 0x249DBCu);
    ctx->pc = 0x249DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249DB4u;
    // 0x249db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x249DB4u, 0x249DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249DBCu;
label_249dbc:
    // 0x249dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249dc0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x249DC0u;
    SET_GPR_U32(ctx, 31, 0x249DC8u);
    ctx->pc = 0x249DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249DC0u;
    // 0x249dc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x249DC0u, 0x249DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249DC8u;
label_249dc8:
    // 0x249dc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x249dc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x249dcc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x249DCCu;
    SET_GPR_U32(ctx, 31, 0x249DD4u);
    ctx->pc = 0x249DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249DCCu;
    // 0x249dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x249DCCu, 0x249DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249DD4u;
label_249dd4:
    // 0x249dd4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x249dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x249dd8: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x249dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x249ddc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x249DDCu;
    {
        const bool branch_taken_0x249ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DDCu;
        // 0x249de0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ddc) {
            ctx->pc = 0x249DE8u;
            goto label_249de8;
        }
    }
    ctx->pc = 0x249DE4u;
    // 0x249de4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x249de4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_249de8:
    // 0x249de8: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x249de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249dec: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x249decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249df0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x249df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x249df4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x249df4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x249df8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x249df8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249dfc: 0x0  nop
    ctx->pc = 0x249dfcu;
    // NOP
    // 0x249e00: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x249E00u;
    {
        const bool branch_taken_0x249e00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x249E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E00u;
        // 0x249e04: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e00) {
            ctx->pc = 0x249EE0u;
            goto label_249ee0;
        }
    }
    ctx->pc = 0x249E08u;
    // 0x249e08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x249e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x249e0c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x249E0Cu;
    {
        const bool branch_taken_0x249e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E0Cu;
        // 0x249e10: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e0c) {
            ctx->pc = 0x249EE0u;
            goto label_249ee0;
        }
    }
    ctx->pc = 0x249E14u;
label_249e14:
    // 0x249e14: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x249e14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x249e18: 0xc09d91a  jal         func_276468
    ctx->pc = 0x249E18u;
    SET_GPR_U32(ctx, 31, 0x249E20u);
    ctx->pc = 0x249E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249E18u;
    // 0x249e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x249E18u, 0x249E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249E20u;
label_249e20:
    // 0x249e20: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x249e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x249e24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x249e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x249e28: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x249e28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_249e2c:
    // 0x249e2c: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x249e2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x249e30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x249e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x249e34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x249E34u;
    {
        const bool branch_taken_0x249e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E34u;
        // 0x249e38: 0xc60005a8  lwc1        $f0, 0x5A8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e34) {
            ctx->pc = 0x249E64u;
            goto label_249e64;
        }
    }
    ctx->pc = 0x249E3Cu;
    // 0x249e3c: 0x3c013a64  lui         $at, 0x3A64
    ctx->pc = 0x249e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14948 << 16));
    // 0x249e40: 0x3421c388  ori         $at, $at, 0xC388
    ctx->pc = 0x249e40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50056);
    // 0x249e44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x249e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x249e48: 0xc6010604  lwc1        $f1, 0x604($s0)
    ctx->pc = 0x249e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249e4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x249e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x249e50: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x249e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x249e54: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x249e54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x249e58: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x249e58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249e5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x249E5Cu;
    {
        const bool branch_taken_0x249e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E5Cu;
        // 0x249e60: 0xe6010604  swc1        $f1, 0x604($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e5c) {
            ctx->pc = 0x249E88u;
            goto label_249e88;
        }
    }
    ctx->pc = 0x249E64u;
label_249e64:
    // 0x249e64: 0x3c013a64  lui         $at, 0x3A64
    ctx->pc = 0x249e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14948 << 16));
    // 0x249e68: 0x3421c388  ori         $at, $at, 0xC388
    ctx->pc = 0x249e68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50056);
    // 0x249e6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x249e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x249e70: 0xc6010604  lwc1        $f1, 0x604($s0)
    ctx->pc = 0x249e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249e74: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x249e74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x249e78: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x249e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x249e7c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x249e7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x249e80: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x249e80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249e84: 0xe6010604  swc1        $f1, 0x604($s0)
    ctx->pc = 0x249e84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
label_249e88:
    // 0x249e88: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x249E88u;
    {
        const bool branch_taken_0x249e88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x249E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E88u;
        // 0x249e8c: 0x240200a1  addiu       $v0, $zero, 0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e88) {
            ctx->pc = 0x249EA4u;
            goto label_249ea4;
        }
    }
    ctx->pc = 0x249E90u;
    // 0x249e90: 0xe6020604  swc1        $f2, 0x604($s0)
    ctx->pc = 0x249e90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x249e94: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x249e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x249e98: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x249e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x249e9c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x249e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x249ea0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x249ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_249ea4:
    // 0x249ea4: 0xc6000604  lwc1        $f0, 0x604($s0)
    ctx->pc = 0x249ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249eac: 0xc60c05a8  lwc1        $f12, 0x5A8($s0)
    ctx->pc = 0x249eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x249eb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x249eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x249eb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x249eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x249eb8: 0xc0925dc  jal         func_249770
    ctx->pc = 0x249EB8u;
    SET_GPR_U32(ctx, 31, 0x249EC0u);
    ctx->pc = 0x249EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249EB8u;
    // 0x249ebc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249770u, 0x249EB8u, 0x249EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249EC0u;
label_249ec0:
    // 0x249ec0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x249EC0u;
    SET_GPR_U32(ctx, 31, 0x249EC8u);
    ctx->pc = 0x249EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249EC0u;
    // 0x249ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x249EC0u, 0x249EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249EC8u;
label_249ec8:
    // 0x249ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ecc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x249ECCu;
    SET_GPR_U32(ctx, 31, 0x249ED4u);
    ctx->pc = 0x249ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249ECCu;
    // 0x249ed0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x249ECCu, 0x249ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249ED4u;
label_249ed4:
    // 0x249ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ed8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x249ED8u;
    SET_GPR_U32(ctx, 31, 0x249EE0u);
    ctx->pc = 0x249EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249ED8u;
    // 0x249edc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x249ED8u, 0x249EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249EE0u;
label_249ee0:
    // 0x249ee0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x249ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249ee8: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x249ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x249eec: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x249eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x249ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x249EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EF0u;
        // 0x249ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249EF8u;
}
