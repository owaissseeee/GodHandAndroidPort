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

// Function: func_002439A0
// Address: 0x2439a0 - 0x243fa0
void func_002439A0_0x2439a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002439A0_0x2439a0");
#endif

    switch (ctx->pc) {
        case 0x2439c8u: goto label_2439c8;
        case 0x243a0cu: goto label_243a0c;
        case 0x243a38u: goto label_243a38;
        case 0x243a58u: goto label_243a58;
        case 0x243a78u: goto label_243a78;
        case 0x243a80u: goto label_243a80;
        case 0x243aa8u: goto label_243aa8;
        case 0x243ab4u: goto label_243ab4;
        case 0x243adcu: goto label_243adc;
        case 0x243aecu: goto label_243aec;
        case 0x243b18u: goto label_243b18;
        case 0x243b38u: goto label_243b38;
        case 0x243b60u: goto label_243b60;
        case 0x243b68u: goto label_243b68;
        case 0x243b74u: goto label_243b74;
        case 0x243b80u: goto label_243b80;
        case 0x243bb4u: goto label_243bb4;
        case 0x243be0u: goto label_243be0;
        case 0x243bfcu: goto label_243bfc;
        case 0x243c1cu: goto label_243c1c;
        case 0x243c24u: goto label_243c24;
        case 0x243c4cu: goto label_243c4c;
        case 0x243c58u: goto label_243c58;
        case 0x243cbcu: goto label_243cbc;
        case 0x243ce8u: goto label_243ce8;
        case 0x243cfcu: goto label_243cfc;
        case 0x243d24u: goto label_243d24;
        case 0x243d2cu: goto label_243d2c;
        case 0x243d38u: goto label_243d38;
        case 0x243d44u: goto label_243d44;
        case 0x243d90u: goto label_243d90;
        case 0x243db8u: goto label_243db8;
        case 0x243de4u: goto label_243de4;
        case 0x243df8u: goto label_243df8;
        case 0x243e18u: goto label_243e18;
        case 0x243e20u: goto label_243e20;
        case 0x243e48u: goto label_243e48;
        case 0x243e54u: goto label_243e54;
        case 0x243e64u: goto label_243e64;
        case 0x243e90u: goto label_243e90;
        case 0x243eb0u: goto label_243eb0;
        case 0x243ed8u: goto label_243ed8;
        case 0x243ee0u: goto label_243ee0;
        case 0x243eecu: goto label_243eec;
        case 0x243ef8u: goto label_243ef8;
        case 0x243f34u: goto label_243f34;
        case 0x243f70u: goto label_243f70;
        default: break;
    }

    ctx->pc = 0x2439a0u;

    // 0x2439a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2439a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2439a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2439a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2439a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2439a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2439ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2439acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2439b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2439b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2439b4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2439b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2439b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2439b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2439bc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2439bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2439c0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2439C0u;
    SET_GPR_U32(ctx, 31, 0x2439C8u);
    ctx->pc = 0x2439C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2439C0u;
    // 0x2439c4: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2439C0u, 0x2439C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2439C8u;
label_2439c8:
    // 0x2439c8: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x2439c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x2439cc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2439ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2439d0: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x2439d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2439d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2439d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2439d8: 0x2ca4000c  sltiu       $a0, $a1, 0xC
    ctx->pc = 0x2439d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2439dc: 0x10800153  beqz        $a0, . + 4 + (0x153 << 2)
    ctx->pc = 0x2439DCu;
    {
        const bool branch_taken_0x2439dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2439E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2439DCu;
        // 0x2439e0: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2439dc) {
            ctx->pc = 0x243F2Cu;
            goto label_243f2c;
        }
    }
    ctx->pc = 0x2439E4u;
    // 0x2439e4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x2439e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x2439e8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2439e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2439ec: 0x2442c8e0  addiu       $v0, $v0, -0x3720
    ctx->pc = 0x2439ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953184));
    // 0x2439f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2439f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2439f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2439f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2439f8: 0x800008  jr          $a0
    ctx->pc = 0x2439F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x243A00u: goto label_243a00;
            case 0x243A50u: goto label_243a50;
            case 0x243AE4u: goto label_243ae4;
            case 0x243B30u: goto label_243b30;
            case 0x243BA8u: goto label_243ba8;
            case 0x243BF4u: goto label_243bf4;
            case 0x243CB4u: goto label_243cb4;
            case 0x243CF4u: goto label_243cf4;
            case 0x243DB0u: goto label_243db0;
            case 0x243DF0u: goto label_243df0;
            case 0x243E5Cu: goto label_243e5c;
            case 0x243EA8u: goto label_243ea8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2439F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x243A00u;
label_243a00:
    // 0x243a00: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x243a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x243a04: 0xc09d91a  jal         func_276468
    ctx->pc = 0x243A04u;
    SET_GPR_U32(ctx, 31, 0x243A0Cu);
    ctx->pc = 0x243A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243A04u;
    // 0x243a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x243A04u, 0x243A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A0Cu;
label_243a0c:
    // 0x243a0c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x243a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x243a10: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x243a10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x243a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243a18: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x243a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x243a1c: 0x8c652474  lw          $a1, 0x2474($v1)
    ctx->pc = 0x243a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9332)));
    // 0x243a20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x243a20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x243a24: 0x8c662478  lw          $a2, 0x2478($v1)
    ctx->pc = 0x243a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9336)));
    // 0x243a28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x243a28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243a2c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x243a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x243a30: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x243A30u;
    SET_GPR_U32(ctx, 31, 0x243A38u);
    ctx->pc = 0x243A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243A30u;
    // 0x243a34: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x243A30u, 0x243A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A38u;
label_243a38:
    // 0x243a38: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x243a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x243a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243a40: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x243a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x243a44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x243a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x243a48: 0xe614060c  swc1        $f20, 0x60C($s0)
    ctx->pc = 0x243a48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1548), bits); }
    // 0x243a4c: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x243a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_243a50:
    // 0x243a50: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x243A50u;
    SET_GPR_U32(ctx, 31, 0x243A58u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x243A50u, 0x243A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A58u;
label_243a58:
    // 0x243a58: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x243a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243a60: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x243a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x243a64: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x243a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x243a68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x243a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243a6c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x243a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x243a70: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x243A70u;
    SET_GPR_U32(ctx, 31, 0x243A78u);
    ctx->pc = 0x243A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243A70u;
    // 0x243a74: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x243A70u, 0x243A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A78u;
label_243a78:
    // 0x243a78: 0xc055f06  jal         func_157C18
    ctx->pc = 0x243A78u;
    SET_GPR_U32(ctx, 31, 0x243A80u);
    ctx->pc = 0x243A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243A78u;
    // 0x243a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x243A78u, 0x243A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A80u;
label_243a80:
    // 0x243a80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x243A80u;
    {
        const bool branch_taken_0x243a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243a80) {
            ctx->pc = 0x243A94u;
            goto label_243a94;
        }
    }
    ctx->pc = 0x243A88u;
    // 0x243a88: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x243a88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x243a8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243a90: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x243a90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_243a94:
    // 0x243a94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x243a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x243a98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x243a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x243a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243aa0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x243AA0u;
    SET_GPR_U32(ctx, 31, 0x243AA8u);
    ctx->pc = 0x243AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AA0u;
    // 0x243aa4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x243AA0u, 0x243AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243AA8u;
label_243aa8:
    // 0x243aa8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x243aa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x243aac: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x243AACu;
    SET_GPR_U32(ctx, 31, 0x243AB4u);
    ctx->pc = 0x243AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AACu;
    // 0x243ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x243AACu, 0x243AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243AB4u;
label_243ab4:
    // 0x243ab4: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x243ab4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x243ab8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x243ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x243abc: 0x1040011b  beqz        $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x243ABCu;
    {
        const bool branch_taken_0x243abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243abc) {
            ctx->pc = 0x243F2Cu;
            goto label_243f2c;
        }
    }
    ctx->pc = 0x243AC4u;
    // 0x243ac4: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x243ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x243ac8: 0x10400118  beqz        $v0, . + 4 + (0x118 << 2)
    ctx->pc = 0x243AC8u;
    {
        const bool branch_taken_0x243ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243ac8) {
            ctx->pc = 0x243F2Cu;
            goto label_243f2c;
        }
    }
    ctx->pc = 0x243AD0u;
    // 0x243ad0: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x243ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x243ad4: 0xc09ad80  jal         func_26B600
    ctx->pc = 0x243AD4u;
    SET_GPR_U32(ctx, 31, 0x243ADCu);
    ctx->pc = 0x243AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AD4u;
    // 0x243ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B600u, 0x243AD4u, 0x243ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243ADCu;
label_243adc:
    // 0x243adc: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x243ADCu;
    {
        const bool branch_taken_0x243adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243adc) {
            ctx->pc = 0x243F2Cu;
            goto label_243f2c;
        }
    }
    ctx->pc = 0x243AE4u;
label_243ae4:
    // 0x243ae4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x243AE4u;
    SET_GPR_U32(ctx, 31, 0x243AECu);
    ctx->pc = 0x243AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AE4u;
    // 0x243ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x243AE4u, 0x243AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243AECu;
label_243aec:
    // 0x243aec: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x243aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x243af0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x243af0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x243af4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x243af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243afc: 0x8c65247c  lw          $a1, 0x247C($v1)
    ctx->pc = 0x243afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9340)));
    // 0x243b00: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x243b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x243b04: 0x8c662480  lw          $a2, 0x2480($v1)
    ctx->pc = 0x243b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9344)));
    // 0x243b08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x243b08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243b0c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x243b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x243b10: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x243B10u;
    SET_GPR_U32(ctx, 31, 0x243B18u);
    ctx->pc = 0x243B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B10u;
    // 0x243b14: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x243B10u, 0x243B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B18u;
label_243b18:
    // 0x243b18: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x243b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x243b1c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x243b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x243b20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243b24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243b28: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x243b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x243b2c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x243b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_243b30:
    // 0x243b30: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x243B30u;
    SET_GPR_U32(ctx, 31, 0x243B38u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x243B30u, 0x243B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B38u;
label_243b38:
    // 0x243b38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x243b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x243b3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x243b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x243b40: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x243b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243b48: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x243b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x243b4c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x243b4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x243b50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x243b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243b54: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x243b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x243b58: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x243B58u;
    SET_GPR_U32(ctx, 31, 0x243B60u);
    ctx->pc = 0x243B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B58u;
    // 0x243b5c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x243B58u, 0x243B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B60u;
label_243b60:
    // 0x243b60: 0xc055f06  jal         func_157C18
    ctx->pc = 0x243B60u;
    SET_GPR_U32(ctx, 31, 0x243B68u);
    ctx->pc = 0x243B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B60u;
    // 0x243b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x243B60u, 0x243B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B68u;
label_243b68:
    // 0x243b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243b6c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x243B6Cu;
    SET_GPR_U32(ctx, 31, 0x243B74u);
    ctx->pc = 0x243B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B6Cu;
    // 0x243b70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x243B6Cu, 0x243B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B74u;
label_243b74:
    // 0x243b74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x243b74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x243b78: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x243B78u;
    SET_GPR_U32(ctx, 31, 0x243B80u);
    ctx->pc = 0x243B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B78u;
    // 0x243b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x243B78u, 0x243B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B80u;
label_243b80:
    // 0x243b80: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x243b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243b84: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x243b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243b88: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x243b88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x243b8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x243b8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x243b90: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x243b90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243b94: 0x0  nop
    ctx->pc = 0x243b94u;
    // NOP
    // 0x243b98: 0x450000e4  bc1f        . + 4 + (0xE4 << 2)
    ctx->pc = 0x243B98u;
    {
        const bool branch_taken_0x243b98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B98u;
        // 0x243b9c: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b98) {
            ctx->pc = 0x243F2Cu;
            goto label_243f2c;
        }
    }
    ctx->pc = 0x243BA0u;
    // 0x243ba0: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x243BA0u;
    {
        const bool branch_taken_0x243ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BA0u;
        // 0x243ba4: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ba0) {
            ctx->pc = 0x243DA4u;
            goto label_243da4;
        }
    }
    ctx->pc = 0x243BA8u;
label_243ba8:
    // 0x243ba8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x243ba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x243bac: 0xc09d91a  jal         func_276468
    ctx->pc = 0x243BACu;
    SET_GPR_U32(ctx, 31, 0x243BB4u);
    ctx->pc = 0x243BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243BACu;
    // 0x243bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x243BACu, 0x243BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BB4u;
label_243bb4:
    // 0x243bb4: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x243bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x243bb8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x243bb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x243bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243bc0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x243bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x243bc4: 0x8c65249c  lw          $a1, 0x249C($v1)
    ctx->pc = 0x243bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9372)));
    // 0x243bc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x243bc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x243bcc: 0x8c6624a0  lw          $a2, 0x24A0($v1)
    ctx->pc = 0x243bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9376)));
    // 0x243bd0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x243bd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243bd4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x243bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x243bd8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x243BD8u;
    SET_GPR_U32(ctx, 31, 0x243BE0u);
    ctx->pc = 0x243BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243BD8u;
    // 0x243bdc: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x243BD8u, 0x243BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BE0u;
label_243be0:
    // 0x243be0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x243be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x243be4: 0xe6140600  swc1        $f20, 0x600($s0)
    ctx->pc = 0x243be4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x243be8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243bec: 0xa6000568  sh          $zero, 0x568($s0)
    ctx->pc = 0x243becu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 0));
    // 0x243bf0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x243bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_243bf4:
    // 0x243bf4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x243BF4u;
    SET_GPR_U32(ctx, 31, 0x243BFCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x243BF4u, 0x243BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BFCu;
label_243bfc:
    // 0x243bfc: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x243bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c04: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x243c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x243c08: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x243c08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x243c0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x243c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243c10: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x243c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x243c14: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x243C14u;
    SET_GPR_U32(ctx, 31, 0x243C1Cu);
    ctx->pc = 0x243C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C14u;
    // 0x243c18: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x243C14u, 0x243C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C1Cu;
label_243c1c:
    // 0x243c1c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x243C1Cu;
    SET_GPR_U32(ctx, 31, 0x243C24u);
    ctx->pc = 0x243C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C1Cu;
    // 0x243c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x243C1Cu, 0x243C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C24u;
label_243c24:
    // 0x243c24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x243C24u;
    {
        const bool branch_taken_0x243c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243c24) {
            ctx->pc = 0x243C38u;
            goto label_243c38;
        }
    }
    ctx->pc = 0x243C2Cu;
    // 0x243c2c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x243c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x243c30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243c34: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x243c34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_243c38:
    // 0x243c38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x243c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x243c3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x243c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x243c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c44: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x243C44u;
    SET_GPR_U32(ctx, 31, 0x243C4Cu);
    ctx->pc = 0x243C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C44u;
    // 0x243c48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x243C44u, 0x243C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C4Cu;
label_243c4c:
    // 0x243c4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x243c4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x243c50: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x243C50u;
    SET_GPR_U32(ctx, 31, 0x243C58u);
    ctx->pc = 0x243C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C50u;
    // 0x243c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x243C50u, 0x243C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C58u;
label_243c58:
    // 0x243c58: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x243c58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x243c5c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x243c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x243c60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x243C60u;
    {
        const bool branch_taken_0x243c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C60u;
        // 0x243c64: 0x86020568  lh          $v0, 0x568($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c60) {
            ctx->pc = 0x243C88u;
            goto label_243c88;
        }
    }
    ctx->pc = 0x243C68u;
    // 0x243c68: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x243C68u;
    {
        const bool branch_taken_0x243c68 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x243C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C68u;
        // 0x243c6c: 0x96030568  lhu         $v1, 0x568($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c68) {
            ctx->pc = 0x243C90u;
            goto label_243c90;
        }
    }
    ctx->pc = 0x243C70u;
    // 0x243c70: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x243c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x243c74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243c78: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x243c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x243c7c: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x243c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x243c80: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x243c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x243c84: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x243c84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_243c88:
    // 0x243c88: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x243C88u;
    {
        const bool branch_taken_0x243c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C88u;
        // 0x243c8c: 0x96030568  lhu         $v1, 0x568($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c88) {
            ctx->pc = 0x243F2Cu;
            goto label_243f2c;
        }
    }
    ctx->pc = 0x243C90u;
label_243c90:
    // 0x243c90: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x243c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243c94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x243c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243c98: 0x0  nop
    ctx->pc = 0x243c98u;
    // NOP
    // 0x243c9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x243c9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243ca0: 0x0  nop
    ctx->pc = 0x243ca0u;
    // NOP
    // 0x243ca4: 0x45030032  bc1tl       . + 4 + (0x32 << 2)
    ctx->pc = 0x243CA4u;
    {
        const bool branch_taken_0x243ca4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243ca4) {
            ctx->pc = 0x243CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243CA4u;
            // 0x243ca8: 0xc60005a8  lwc1        $f0, 0x5A8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x243D70u;
            goto label_243d70;
        }
    }
    ctx->pc = 0x243CACu;
    // 0x243cac: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x243CACu;
    {
        const bool branch_taken_0x243cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CACu;
        // 0x243cb0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243cac) {
            ctx->pc = 0x243D7Cu;
            goto label_243d7c;
        }
    }
    ctx->pc = 0x243CB4u;
label_243cb4:
    // 0x243cb4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x243CB4u;
    SET_GPR_U32(ctx, 31, 0x243CBCu);
    ctx->pc = 0x243CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243CB4u;
    // 0x243cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x243CB4u, 0x243CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CBCu;
label_243cbc:
    // 0x243cbc: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x243cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x243cc0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x243cc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x243cc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x243cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243ccc: 0x8c65247c  lw          $a1, 0x247C($v1)
    ctx->pc = 0x243cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9340)));
    // 0x243cd0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x243cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x243cd4: 0x8c662480  lw          $a2, 0x2480($v1)
    ctx->pc = 0x243cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9344)));
    // 0x243cd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x243cd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243cdc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x243cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x243ce0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x243CE0u;
    SET_GPR_U32(ctx, 31, 0x243CE8u);
    ctx->pc = 0x243CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243CE0u;
    // 0x243ce4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x243CE0u, 0x243CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CE8u;
label_243ce8:
    // 0x243ce8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x243ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x243cec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243cf0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x243cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_243cf4:
    // 0x243cf4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x243CF4u;
    SET_GPR_U32(ctx, 31, 0x243CFCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x243CF4u, 0x243CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CFCu;
label_243cfc:
    // 0x243cfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x243cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x243d00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x243d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x243d04: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x243d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243d0c: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x243d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x243d10: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x243d10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x243d14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x243d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243d18: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x243d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x243d1c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x243D1Cu;
    SET_GPR_U32(ctx, 31, 0x243D24u);
    ctx->pc = 0x243D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D1Cu;
    // 0x243d20: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x243D1Cu, 0x243D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D24u;
label_243d24:
    // 0x243d24: 0xc055f06  jal         func_157C18
    ctx->pc = 0x243D24u;
    SET_GPR_U32(ctx, 31, 0x243D2Cu);
    ctx->pc = 0x243D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D24u;
    // 0x243d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x243D24u, 0x243D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D2Cu;
label_243d2c:
    // 0x243d2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243d30: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x243D30u;
    SET_GPR_U32(ctx, 31, 0x243D38u);
    ctx->pc = 0x243D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D30u;
    // 0x243d34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x243D30u, 0x243D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D38u;
label_243d38:
    // 0x243d38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x243d38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x243d3c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x243D3Cu;
    SET_GPR_U32(ctx, 31, 0x243D44u);
    ctx->pc = 0x243D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D3Cu;
    // 0x243d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x243D3Cu, 0x243D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D44u;
label_243d44:
    // 0x243d44: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x243d44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x243d48: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x243D48u;
    {
        const bool branch_taken_0x243d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D48u;
        // 0x243d4c: 0x96030568  lhu         $v1, 0x568($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d48) {
            ctx->pc = 0x243DA0u;
            goto label_243da0;
        }
    }
    ctx->pc = 0x243D50u;
    // 0x243d50: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x243d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243d54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x243d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243d58: 0x0  nop
    ctx->pc = 0x243d58u;
    // NOP
    // 0x243d5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x243d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243d60: 0x0  nop
    ctx->pc = 0x243d60u;
    // NOP
    // 0x243d64: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x243D64u;
    {
        const bool branch_taken_0x243d64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D64u;
        // 0x243d68: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d64) {
            ctx->pc = 0x243D7Cu;
            goto label_243d7c;
        }
    }
    ctx->pc = 0x243D6Cu;
    // 0x243d6c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x243d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243d70:
    // 0x243d70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x243d70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x243d74: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x243D74u;
    {
        const bool branch_taken_0x243d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D74u;
        // 0x243d78: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d74) {
            ctx->pc = 0x243F2Cu;
            goto label_243f2c;
        }
    }
    ctx->pc = 0x243D7Cu;
label_243d7c:
    // 0x243d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243d80: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x243d80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x243d84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x243d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243d88: 0xc09aeb6  jal         func_26BAD8
    ctx->pc = 0x243D88u;
    SET_GPR_U32(ctx, 31, 0x243D90u);
    ctx->pc = 0x243D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243D88u;
    // 0x243d8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BAD8u, 0x243D88u, 0x243D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D90u;
label_243d90:
    // 0x243d90: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x243d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x243d94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243d98: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x243D98u;
    {
        const bool branch_taken_0x243d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D98u;
        // 0x243d9c: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d98) {
            ctx->pc = 0x243F2Cu;
            goto label_243f2c;
        }
    }
    ctx->pc = 0x243DA0u;
label_243da0:
    // 0x243da0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x243da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_243da4:
    // 0x243da4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243da8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x243DA8u;
    {
        const bool branch_taken_0x243da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243DA8u;
        // 0x243dac: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243da8) {
            ctx->pc = 0x243F2Cu;
            goto label_243f2c;
        }
    }
    ctx->pc = 0x243DB0u;
label_243db0:
    // 0x243db0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x243DB0u;
    SET_GPR_U32(ctx, 31, 0x243DB8u);
    ctx->pc = 0x243DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243DB0u;
    // 0x243db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x243DB0u, 0x243DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DB8u;
label_243db8:
    // 0x243db8: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x243db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x243dbc: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x243dbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x243dc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x243dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243dc8: 0x8c6524a4  lw          $a1, 0x24A4($v1)
    ctx->pc = 0x243dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9380)));
    // 0x243dcc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x243dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x243dd0: 0x8c6624a8  lw          $a2, 0x24A8($v1)
    ctx->pc = 0x243dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9384)));
    // 0x243dd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x243dd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243dd8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x243dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x243ddc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x243DDCu;
    SET_GPR_U32(ctx, 31, 0x243DE4u);
    ctx->pc = 0x243DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243DDCu;
    // 0x243de0: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x243DDCu, 0x243DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DE4u;
label_243de4:
    // 0x243de4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x243de4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x243de8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243dec: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x243decu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_243df0:
    // 0x243df0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x243DF0u;
    SET_GPR_U32(ctx, 31, 0x243DF8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x243DF0u, 0x243DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243DF8u;
label_243df8:
    // 0x243df8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x243df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243e00: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x243e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x243e04: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x243e04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x243e08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x243e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243e0c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x243e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x243e10: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x243E10u;
    SET_GPR_U32(ctx, 31, 0x243E18u);
    ctx->pc = 0x243E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243E10u;
    // 0x243e14: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x243E10u, 0x243E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E18u;
label_243e18:
    // 0x243e18: 0xc055f06  jal         func_157C18
    ctx->pc = 0x243E18u;
    SET_GPR_U32(ctx, 31, 0x243E20u);
    ctx->pc = 0x243E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243E18u;
    // 0x243e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x243E18u, 0x243E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E20u;
label_243e20:
    // 0x243e20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x243E20u;
    {
        const bool branch_taken_0x243e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243e20) {
            ctx->pc = 0x243E34u;
            goto label_243e34;
        }
    }
    ctx->pc = 0x243E28u;
    // 0x243e28: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x243e28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x243e2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243e30: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x243e30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_243e34:
    // 0x243e34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x243e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x243e38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x243e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x243e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243e40: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x243E40u;
    SET_GPR_U32(ctx, 31, 0x243E48u);
    ctx->pc = 0x243E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243E40u;
    // 0x243e44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x243E40u, 0x243E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E48u;
label_243e48:
    // 0x243e48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x243e48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x243e4c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x243E4Cu;
    SET_GPR_U32(ctx, 31, 0x243E54u);
    ctx->pc = 0x243E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243E4Cu;
    // 0x243e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x243E4Cu, 0x243E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E54u;
label_243e54:
    // 0x243e54: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x243E54u;
    {
        const bool branch_taken_0x243e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243e54) {
            ctx->pc = 0x243F2Cu;
            goto label_243f2c;
        }
    }
    ctx->pc = 0x243E5Cu;
label_243e5c:
    // 0x243e5c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x243E5Cu;
    SET_GPR_U32(ctx, 31, 0x243E64u);
    ctx->pc = 0x243E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243E5Cu;
    // 0x243e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x243E5Cu, 0x243E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E64u;
label_243e64:
    // 0x243e64: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x243e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x243e68: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x243e68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x243e6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x243e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243e74: 0x8c652464  lw          $a1, 0x2464($v1)
    ctx->pc = 0x243e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9316)));
    // 0x243e78: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x243e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x243e7c: 0x8c662468  lw          $a2, 0x2468($v1)
    ctx->pc = 0x243e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9320)));
    // 0x243e80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x243e80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243e84: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x243e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x243e88: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x243E88u;
    SET_GPR_U32(ctx, 31, 0x243E90u);
    ctx->pc = 0x243E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243E88u;
    // 0x243e8c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x243E88u, 0x243E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243E90u;
label_243e90:
    // 0x243e90: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x243e90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x243e94: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x243e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x243e98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243e9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243ea0: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x243ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x243ea4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x243ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_243ea8:
    // 0x243ea8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x243EA8u;
    SET_GPR_U32(ctx, 31, 0x243EB0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x243EA8u, 0x243EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243EB0u;
label_243eb0:
    // 0x243eb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x243eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x243eb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x243eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x243eb8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x243eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243ec0: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x243ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x243ec4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x243ec4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x243ec8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x243ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x243ecc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x243eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x243ed0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x243ED0u;
    SET_GPR_U32(ctx, 31, 0x243ED8u);
    ctx->pc = 0x243ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243ED0u;
    // 0x243ed4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x243ED0u, 0x243ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243ED8u;
label_243ed8:
    // 0x243ed8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x243ED8u;
    SET_GPR_U32(ctx, 31, 0x243EE0u);
    ctx->pc = 0x243EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243ED8u;
    // 0x243edc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x243ED8u, 0x243EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243EE0u;
label_243ee0:
    // 0x243ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243ee4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x243EE4u;
    SET_GPR_U32(ctx, 31, 0x243EECu);
    ctx->pc = 0x243EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243EE4u;
    // 0x243ee8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x243EE4u, 0x243EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243EECu;
label_243eec:
    // 0x243eec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x243eecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x243ef0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x243EF0u;
    SET_GPR_U32(ctx, 31, 0x243EF8u);
    ctx->pc = 0x243EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243EF0u;
    // 0x243ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x243EF0u, 0x243EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243EF8u;
label_243ef8:
    // 0x243ef8: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x243ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243efc: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x243efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243f00: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x243f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x243f04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x243f04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x243f08: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x243f08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243f0c: 0x0  nop
    ctx->pc = 0x243f0cu;
    // NOP
    // 0x243f10: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x243F10u;
    {
        const bool branch_taken_0x243f10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F10u;
        // 0x243f14: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f10) {
            ctx->pc = 0x243F2Cu;
            goto label_243f2c;
        }
    }
    ctx->pc = 0x243F18u;
    // 0x243f18: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x243f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x243f1c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x243f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x243f20: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x243f20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x243f24: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x243f24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x243f28: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x243f28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_243f2c:
    // 0x243f2c: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x243F2Cu;
    SET_GPR_U32(ctx, 31, 0x243F34u);
    ctx->pc = 0x243F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F2Cu;
    // 0x243f30: 0xc60c060c  lwc1        $f12, 0x60C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x243F2Cu, 0x243F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F34u;
label_243f34:
    // 0x243f34: 0xc60305a8  lwc1        $f3, 0x5A8($s0)
    ctx->pc = 0x243f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x243f38: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x243f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x243f3c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x243f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x243f40: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x243f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x243f44: 0xc602060c  lwc1        $f2, 0x60C($s0)
    ctx->pc = 0x243f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x243f48: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x243f48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x243f4c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x243f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x243f50: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x243f50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x243f54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x243f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x243f58: 0x0  nop
    ctx->pc = 0x243f58u;
    // NOP
    // 0x243f5c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x243f5cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x243f60: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x243f60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x243f64: 0xe602060c  swc1        $f2, 0x60C($s0)
    ctx->pc = 0x243f64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1548), bits); }
    // 0x243f68: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x243F68u;
    SET_GPR_U32(ctx, 31, 0x243F70u);
    ctx->pc = 0x243F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243F68u;
    // 0x243f6c: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x243F68u, 0x243F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243F70u;
label_243f70:
    // 0x243f70: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x243f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243f74: 0xe600060c  swc1        $f0, 0x60C($s0)
    ctx->pc = 0x243f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1548), bits); }
    // 0x243f78: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x243f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x243f7c: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x243f7cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x243f80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x243f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243f84: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x243f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243f8c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x243f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x243f90: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x243f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x243f94: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x243f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x243f98: 0x3e00008  jr          $ra
    ctx->pc = 0x243F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243F98u;
        // 0x243f9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243FA0u;
}
