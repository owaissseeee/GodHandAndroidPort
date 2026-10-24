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

// Function: func_00249960
// Address: 0x249960 - 0x249ab0
void func_00249960_0x249960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00249960_0x249960");
#endif

    switch (ctx->pc) {
        case 0x249978u: goto label_249978;
        case 0x249988u: goto label_249988;
        case 0x2499c4u: goto label_2499c4;
        case 0x2499f0u: goto label_2499f0;
        case 0x249a04u: goto label_249a04;
        case 0x249a18u: goto label_249a18;
        case 0x249a2cu: goto label_249a2c;
        case 0x249a60u: goto label_249a60;
        case 0x249a68u: goto label_249a68;
        case 0x249a74u: goto label_249a74;
        case 0x249a80u: goto label_249a80;
        case 0x249a9cu: goto label_249a9c;
        default: break;
    }

    ctx->pc = 0x249960u;

    // 0x249960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x249964: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x249964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x249968: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24996c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24996cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249970: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x249970u;
    SET_GPR_U32(ctx, 31, 0x249978u);
    ctx->pc = 0x249974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249970u;
    // 0x249974: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x249970u, 0x249978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249978u;
label_249978:
    // 0x249978: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x249978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x24997c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x24997cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x249980: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x249980u;
    SET_GPR_U32(ctx, 31, 0x249988u);
    ctx->pc = 0x249984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249980u;
    // 0x249984: 0x24a550b0  addiu       $a1, $a1, 0x50B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x249980u, 0x249988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249988u;
label_249988:
    // 0x249988: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x249988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24998c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x24998cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x249990: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x249990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x249994: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x249994u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x249998: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x249998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24999c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24999Cu;
    {
        const bool branch_taken_0x24999c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2499A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24999Cu;
        // 0x2499a0: 0xae0316d0  sw          $v1, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24999c) {
            ctx->pc = 0x2499B8u;
            goto label_2499b8;
        }
    }
    ctx->pc = 0x2499A4u;
    // 0x2499a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2499a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2499a8: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2499A8u;
    {
        const bool branch_taken_0x2499a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2499ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499A8u;
        // 0x2499ac: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2499a8) {
            ctx->pc = 0x249A4Cu;
            goto label_249a4c;
        }
    }
    ctx->pc = 0x2499B0u;
    // 0x2499b0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2499B0u;
    {
        const bool branch_taken_0x2499b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2499B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2499B0u;
        // 0x2499b4: 0x2442b000  addiu       $v0, $v0, -0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2499b0) {
            ctx->pc = 0x249A88u;
            goto label_249a88;
        }
    }
    ctx->pc = 0x2499B8u;
label_2499b8:
    // 0x2499b8: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x2499b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2499bc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2499BCu;
    SET_GPR_U32(ctx, 31, 0x2499C4u);
    ctx->pc = 0x2499C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2499BCu;
    // 0x2499c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2499BCu, 0x2499C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2499C4u;
label_2499c4:
    // 0x2499c4: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2499c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2499c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2499c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2499cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2499ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2499d0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2499d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2499d4: 0x8c653d34  lw          $a1, 0x3D34($v1)
    ctx->pc = 0x2499d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15668)));
    // 0x2499d8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2499d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2499dc: 0x8c663d38  lw          $a2, 0x3D38($v1)
    ctx->pc = 0x2499dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15672)));
    // 0x2499e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2499e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2499e4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2499e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2499e8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2499E8u;
    SET_GPR_U32(ctx, 31, 0x2499F0u);
    ctx->pc = 0x2499ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2499E8u;
    // 0x2499ec: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2499E8u, 0x2499F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2499F0u;
label_2499f0:
    // 0x2499f0: 0x8e040748  lw          $a0, 0x748($s0)
    ctx->pc = 0x2499f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1864)));
    // 0x2499f4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2499F4u;
    {
        const bool branch_taken_0x2499f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2499f4) {
            ctx->pc = 0x2499F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2499F4u;
            // 0x2499f8: 0x8e04074c  lw          $a0, 0x74C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249A08u;
            goto label_249a08;
        }
    }
    ctx->pc = 0x2499FCu;
    // 0x2499fc: 0xc0a0498  jal         func_281260
    ctx->pc = 0x2499FCu;
    SET_GPR_U32(ctx, 31, 0x249A04u);
    ctx->pc = 0x281260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281260u, 0x2499FCu, 0x249A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A04u;
label_249a04:
    // 0x249a04: 0x8e04074c  lw          $a0, 0x74C($s0)
    ctx->pc = 0x249a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1868)));
label_249a08:
    // 0x249a08: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x249A08u;
    {
        const bool branch_taken_0x249a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x249a08) {
            ctx->pc = 0x249A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249A08u;
            // 0x249a0c: 0x8e040750  lw          $a0, 0x750($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249A1Cu;
            goto label_249a1c;
        }
    }
    ctx->pc = 0x249A10u;
    // 0x249a10: 0xc0a0c5c  jal         func_283170
    ctx->pc = 0x249A10u;
    SET_GPR_U32(ctx, 31, 0x249A18u);
    ctx->pc = 0x283170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283170u, 0x249A10u, 0x249A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A18u;
label_249a18:
    // 0x249a18: 0x8e040750  lw          $a0, 0x750($s0)
    ctx->pc = 0x249a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_249a1c:
    // 0x249a1c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x249A1Cu;
    {
        const bool branch_taken_0x249a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x249a1c) {
            ctx->pc = 0x249A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249A1Cu;
            // 0x249a20: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249A30u;
            goto label_249a30;
        }
    }
    ctx->pc = 0x249A24u;
    // 0x249a24: 0xc0a0c5c  jal         func_283170
    ctx->pc = 0x249A24u;
    SET_GPR_U32(ctx, 31, 0x249A2Cu);
    ctx->pc = 0x283170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283170u, 0x249A24u, 0x249A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A2Cu;
label_249a2c:
    // 0x249a2c: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x249a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_249a30:
    // 0x249a30: 0x3c03fcff  lui         $v1, 0xFCFF
    ctx->pc = 0x249a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64767 << 16));
    // 0x249a34: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x249a34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x249a38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x249a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x249a3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x249a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x249a40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x249a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x249a44: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x249a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x249a48: 0xa20402f6  sb          $a0, 0x2F6($s0)
    ctx->pc = 0x249a48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 4));
label_249a4c:
    // 0x249a4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x249a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x249a50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x249a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x249a54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x249a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x249a58: 0xc092578  jal         func_2495E0
    ctx->pc = 0x249A58u;
    SET_GPR_U32(ctx, 31, 0x249A60u);
    ctx->pc = 0x249A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A58u;
    // 0x249a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2495E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2495E0u, 0x249A58u, 0x249A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A60u;
label_249a60:
    // 0x249a60: 0xc055f06  jal         func_157C18
    ctx->pc = 0x249A60u;
    SET_GPR_U32(ctx, 31, 0x249A68u);
    ctx->pc = 0x249A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A60u;
    // 0x249a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x249A60u, 0x249A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A68u;
label_249a68:
    // 0x249a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249a6c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x249A6Cu;
    SET_GPR_U32(ctx, 31, 0x249A74u);
    ctx->pc = 0x249A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A6Cu;
    // 0x249a70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x249A6Cu, 0x249A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A74u;
label_249a74:
    // 0x249a74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x249a74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x249a78: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x249A78u;
    SET_GPR_U32(ctx, 31, 0x249A80u);
    ctx->pc = 0x249A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A78u;
    // 0x249a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x249A78u, 0x249A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A80u;
label_249a80:
    // 0x249a80: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x249a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x249a84: 0x2442b000  addiu       $v0, $v0, -0x5000
    ctx->pc = 0x249a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
label_249a88:
    // 0x249a88: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x249a88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x249a8c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x249A8Cu;
    {
        const bool branch_taken_0x249a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x249a8c) {
            ctx->pc = 0x249A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249A8Cu;
            // 0x249a90: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249AA0u;
            goto label_249aa0;
        }
    }
    ctx->pc = 0x249A94u;
    // 0x249a94: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x249A94u;
    SET_GPR_U32(ctx, 31, 0x249A9Cu);
    ctx->pc = 0x249A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A94u;
    // 0x249a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x249A94u, 0x249A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249A9Cu;
label_249a9c:
    // 0x249a9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x249a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_249aa0:
    // 0x249aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249aa4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x249aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x249aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x249AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AA8u;
        // 0x249aac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249AB0u;
}
