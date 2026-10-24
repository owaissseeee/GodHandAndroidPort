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

// Function: func_00243FA0
// Address: 0x243fa0 - 0x244398
void func_00243FA0_0x243fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00243FA0_0x243fa0");
#endif

    switch (ctx->pc) {
        case 0x243fc8u: goto label_243fc8;
        case 0x24402cu: goto label_24402c;
        case 0x244040u: goto label_244040;
        case 0x244060u: goto label_244060;
        case 0x244068u: goto label_244068;
        case 0x2440bcu: goto label_2440bc;
        case 0x24410cu: goto label_24410c;
        case 0x24412cu: goto label_24412c;
        case 0x244134u: goto label_244134;
        case 0x244194u: goto label_244194;
        case 0x2441a0u: goto label_2441a0;
        case 0x2441a8u: goto label_2441a8;
        case 0x2441b8u: goto label_2441b8;
        case 0x2441c8u: goto label_2441c8;
        case 0x24422cu: goto label_24422c;
        case 0x244240u: goto label_244240;
        case 0x24429cu: goto label_24429c;
        case 0x2442a8u: goto label_2442a8;
        case 0x2442dcu: goto label_2442dc;
        case 0x2442f0u: goto label_2442f0;
        case 0x244310u: goto label_244310;
        case 0x244318u: goto label_244318;
        case 0x244344u: goto label_244344;
        case 0x244350u: goto label_244350;
        default: break;
    }

    ctx->pc = 0x243fa0u;

    // 0x243fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x243fa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x243fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243fa8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x243fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x243fac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x243facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243fb4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x243fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x243fb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x243fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243fbc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x243fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x243fc0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x243FC0u;
    SET_GPR_U32(ctx, 31, 0x243FC8u);
    ctx->pc = 0x243FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243FC0u;
    // 0x243fc4: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x243FC0u, 0x243FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243FC8u;
label_243fc8:
    // 0x243fc8: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x243fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x243fcc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x243fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x243fd0: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x243fd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x243fd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x243fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x243fd8: 0x2ca40008  sltiu       $a0, $a1, 0x8
    ctx->pc = 0x243fd8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x243fdc: 0x108000dc  beqz        $a0, . + 4 + (0xDC << 2)
    ctx->pc = 0x243FDCu;
    {
        const bool branch_taken_0x243fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x243FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243FDCu;
        // 0x243fe0: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243fdc) {
            ctx->pc = 0x244350u;
            goto label_244350;
        }
    }
    ctx->pc = 0x243FE4u;
    // 0x243fe4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x243fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x243fe8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x243fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x243fec: 0x2442c910  addiu       $v0, $v0, -0x36F0
    ctx->pc = 0x243fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953232));
    // 0x243ff0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x243ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x243ff4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x243ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x243ff8: 0x800008  jr          $a0
    ctx->pc = 0x243FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244000u: goto label_244000;
            case 0x244038u: goto label_244038;
            case 0x244090u: goto label_244090;
            case 0x2440E4u: goto label_2440e4;
            case 0x244200u: goto label_244200;
            case 0x244238u: goto label_244238;
            case 0x2442B0u: goto label_2442b0;
            case 0x2442E8u: goto label_2442e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243FF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x244000u;
label_244000:
    // 0x244000: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x244000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x244004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244008: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x244008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24400c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x24400cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x244010: 0x8c4524b4  lw          $a1, 0x24B4($v0)
    ctx->pc = 0x244010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9396)));
    // 0x244014: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x244014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244018: 0x8c4624b8  lw          $a2, 0x24B8($v0)
    ctx->pc = 0x244018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9400)));
    // 0x24401c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24401cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244020: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x244020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x244024: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x244024u;
    SET_GPR_U32(ctx, 31, 0x24402Cu);
    ctx->pc = 0x244028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244024u;
    // 0x244028: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x244024u, 0x24402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24402Cu;
label_24402c:
    // 0x24402c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24402cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x244030: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x244030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x244034: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x244034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_244038:
    // 0x244038: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x244038u;
    SET_GPR_U32(ctx, 31, 0x244040u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x244038u, 0x244040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244040u;
label_244040:
    // 0x244040: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x244040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244048: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x244048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x24404c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x24404cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x244050: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x244050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x244054: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x244054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x244058: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x244058u;
    SET_GPR_U32(ctx, 31, 0x244060u);
    ctx->pc = 0x24405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244058u;
    // 0x24405c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x244058u, 0x244060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244060u;
label_244060:
    // 0x244060: 0xc055f06  jal         func_157C18
    ctx->pc = 0x244060u;
    SET_GPR_U32(ctx, 31, 0x244068u);
    ctx->pc = 0x244064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244060u;
    // 0x244064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x244060u, 0x244068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244068u;
label_244068:
    // 0x244068: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x244068u;
    {
        const bool branch_taken_0x244068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244068) {
            ctx->pc = 0x24407Cu;
            goto label_24407c;
        }
    }
    ctx->pc = 0x244070u;
    // 0x244070: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x244070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x244074: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x244074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x244078: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x244078u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_24407c:
    // 0x24407c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24407cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x244080: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x244080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x244084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244088: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x244088u;
    {
        const bool branch_taken_0x244088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244088u;
        // 0x24408c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244088) {
            ctx->pc = 0x244294u;
            goto label_244294;
        }
    }
    ctx->pc = 0x244090u;
label_244090:
    // 0x244090: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x244090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x244094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244098: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x244098u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24409c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x24409cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2440a0: 0x8c4524c4  lw          $a1, 0x24C4($v0)
    ctx->pc = 0x2440a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9412)));
    // 0x2440a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2440a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2440a8: 0x8c4624c8  lw          $a2, 0x24C8($v0)
    ctx->pc = 0x2440a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9416)));
    // 0x2440ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2440acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2440b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2440b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2440b4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2440B4u;
    SET_GPR_U32(ctx, 31, 0x2440BCu);
    ctx->pc = 0x2440B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2440B4u;
    // 0x2440b8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2440B4u, 0x2440BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2440BCu;
label_2440bc:
    // 0x2440bc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2440bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2440c0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2440c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2440c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2440c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2440c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2440c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2440cc: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x2440ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x2440d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2440d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2440d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2440d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2440d8: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x2440d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x2440dc: 0xe6010604  swc1        $f1, 0x604($s0)
    ctx->pc = 0x2440dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    // 0x2440e0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2440e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2440e4:
    // 0x2440e4: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x2440e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2440e8: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x2440e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x2440ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2440ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2440f0: 0x0  nop
    ctx->pc = 0x2440f0u;
    // NOP
    // 0x2440f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2440f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2440f8: 0x0  nop
    ctx->pc = 0x2440f8u;
    // NOP
    // 0x2440fc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2440FCu;
    {
        const bool branch_taken_0x2440fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2440fc) {
            ctx->pc = 0x24412Cu;
            goto label_24412c;
        }
    }
    ctx->pc = 0x244104u;
    // 0x244104: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x244104u;
    SET_GPR_U32(ctx, 31, 0x24410Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x244104u, 0x24410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24410Cu;
label_24410c:
    // 0x24410c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x24410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244114: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x244114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x244118: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x244118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24411c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24411cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x244120: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x244120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x244124: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x244124u;
    SET_GPR_U32(ctx, 31, 0x24412Cu);
    ctx->pc = 0x244128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244124u;
    // 0x244128: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x244124u, 0x24412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24412Cu;
label_24412c:
    // 0x24412c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x24412Cu;
    SET_GPR_U32(ctx, 31, 0x244134u);
    ctx->pc = 0x244130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24412Cu;
    // 0x244130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x24412Cu, 0x244134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244134u;
label_244134:
    // 0x244134: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x244134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244138: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x244138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x24413c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24413cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x244140: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x244140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x244144: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x244144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244148: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x244148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24414c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x24414cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x244150: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x244150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x244154: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x244154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x244158: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x244158u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24415c: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x24415cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244160: 0x0  nop
    ctx->pc = 0x244160u;
    // NOP
    // 0x244164: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x244164u;
    {
        const bool branch_taken_0x244164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244164u;
        // 0x244168: 0xe6010600  swc1        $f1, 0x600($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x244164) {
            ctx->pc = 0x244170u;
            goto label_244170;
        }
    }
    ctx->pc = 0x24416Cu;
    // 0x24416c: 0xe6030600  swc1        $f3, 0x600($s0)
    ctx->pc = 0x24416cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_244170:
    // 0x244170: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x244170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244178: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x244178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24417c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24417cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x244180: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x244180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x244184: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x244184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x244188: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x244188u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24418c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24418Cu;
    SET_GPR_U32(ctx, 31, 0x244194u);
    ctx->pc = 0x244190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24418Cu;
    // 0x244190: 0xe6000338  swc1        $f0, 0x338($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24418Cu, 0x244194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244194u;
label_244194:
    // 0x244194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244198: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x244198u;
    SET_GPR_U32(ctx, 31, 0x2441A0u);
    ctx->pc = 0x24419Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244198u;
    // 0x24419c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x244198u, 0x2441A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441A0u;
label_2441a0:
    // 0x2441a0: 0xc09c36c  jal         func_270DB0
    ctx->pc = 0x2441A0u;
    SET_GPR_U32(ctx, 31, 0x2441A8u);
    ctx->pc = 0x2441A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2441A0u;
    // 0x2441a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270DB0u, 0x2441A0u, 0x2441A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441A8u;
label_2441a8:
    // 0x2441a8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2441A8u;
    {
        const bool branch_taken_0x2441a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2441a8) {
            ctx->pc = 0x2441ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2441A8u;
            // 0x2441ac: 0xc6000604  lwc1        $f0, 0x604($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2441D4u;
            goto label_2441d4;
        }
    }
    ctx->pc = 0x2441B0u;
    // 0x2441b0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2441B0u;
    SET_GPR_U32(ctx, 31, 0x2441B8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2441B0u, 0x2441B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441B8u;
label_2441b8:
    // 0x2441b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2441b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2441bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2441bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2441c0: 0xc04a5c6  jal         func_129718
    ctx->pc = 0x2441C0u;
    SET_GPR_U32(ctx, 31, 0x2441C8u);
    ctx->pc = 0x2441C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2441C0u;
    // 0x2441c4: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129718u, 0x2441C0u, 0x2441C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441C8u;
label_2441c8:
    // 0x2441c8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2441c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2441cc: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2441CCu;
    {
        const bool branch_taken_0x2441cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2441D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441CCu;
        // 0x2441d0: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441cc) {
            ctx->pc = 0x244350u;
            goto label_244350;
        }
    }
    ctx->pc = 0x2441D4u;
label_2441d4:
    // 0x2441d4: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x2441d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2441d8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2441d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2441dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2441dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2441e0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2441e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2441e4: 0x0  nop
    ctx->pc = 0x2441e4u;
    // NOP
    // 0x2441e8: 0x45000059  bc1f        . + 4 + (0x59 << 2)
    ctx->pc = 0x2441E8u;
    {
        const bool branch_taken_0x2441e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2441ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441E8u;
        // 0x2441ec: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441e8) {
            ctx->pc = 0x244350u;
            goto label_244350;
        }
    }
    ctx->pc = 0x2441F0u;
    // 0x2441f0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2441f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2441f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2441f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2441f8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2441F8u;
    {
        const bool branch_taken_0x2441f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2441FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441F8u;
        // 0x2441fc: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441f8) {
            ctx->pc = 0x244350u;
            goto label_244350;
        }
    }
    ctx->pc = 0x244200u;
label_244200:
    // 0x244200: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x244200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x244204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244208: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x244208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24420c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x24420cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x244210: 0x8c4524cc  lw          $a1, 0x24CC($v0)
    ctx->pc = 0x244210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9420)));
    // 0x244214: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x244214u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244218: 0x8c4624d0  lw          $a2, 0x24D0($v0)
    ctx->pc = 0x244218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9424)));
    // 0x24421c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24421cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244220: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x244220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x244224: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x244224u;
    SET_GPR_U32(ctx, 31, 0x24422Cu);
    ctx->pc = 0x244228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244224u;
    // 0x244228: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x244224u, 0x24422Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24422Cu;
label_24422c:
    // 0x24422c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x24422cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x244230: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x244230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x244234: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x244234u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_244238:
    // 0x244238: 0xc055f06  jal         func_157C18
    ctx->pc = 0x244238u;
    SET_GPR_U32(ctx, 31, 0x244240u);
    ctx->pc = 0x24423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244238u;
    // 0x24423c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x244238u, 0x244240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244240u;
label_244240:
    // 0x244240: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x244240u;
    {
        const bool branch_taken_0x244240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244240u;
        // 0x244244: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244240) {
            ctx->pc = 0x244258u;
            goto label_244258;
        }
    }
    ctx->pc = 0x244248u;
    // 0x244248: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x244248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x24424c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x24424cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x244250: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x244250u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x244254: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x244254u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_244258:
    // 0x244258: 0xc60205a8  lwc1        $f2, 0x5A8($s0)
    ctx->pc = 0x244258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24425c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24425cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244260: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x244260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x244264: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x244264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x244268: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24426c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24426cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x244270: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x244270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x244274: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x244274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x244278: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x244278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24427c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24427cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x244280: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x244280u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x244284: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x244284u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x244288: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x244288u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x24428c: 0xe6010600  swc1        $f1, 0x600($s0)
    ctx->pc = 0x24428cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x244290: 0xe6020338  swc1        $f2, 0x338($s0)
    ctx->pc = 0x244290u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
label_244294:
    // 0x244294: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x244294u;
    SET_GPR_U32(ctx, 31, 0x24429Cu);
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x244294u, 0x24429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24429Cu;
label_24429c:
    // 0x24429c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x24429cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2442a0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2442A0u;
    SET_GPR_U32(ctx, 31, 0x2442A8u);
    ctx->pc = 0x2442A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2442A0u;
    // 0x2442a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2442A0u, 0x2442A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2442A8u;
label_2442a8:
    // 0x2442a8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2442A8u;
    {
        const bool branch_taken_0x2442a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2442ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442A8u;
        // 0x2442ac: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2442a8) {
            ctx->pc = 0x244354u;
            goto label_244354;
        }
    }
    ctx->pc = 0x2442B0u;
label_2442b0:
    // 0x2442b0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2442b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2442b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2442b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2442b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2442b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2442bc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2442bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2442c0: 0x8c4524bc  lw          $a1, 0x24BC($v0)
    ctx->pc = 0x2442c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9404)));
    // 0x2442c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2442c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2442c8: 0x8c4624c0  lw          $a2, 0x24C0($v0)
    ctx->pc = 0x2442c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9408)));
    // 0x2442cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2442ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2442d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2442d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2442d4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2442D4u;
    SET_GPR_U32(ctx, 31, 0x2442DCu);
    ctx->pc = 0x2442D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2442D4u;
    // 0x2442d8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2442D4u, 0x2442DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2442DCu;
label_2442dc:
    // 0x2442dc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2442dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2442e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2442e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2442e4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2442e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2442e8:
    // 0x2442e8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2442E8u;
    SET_GPR_U32(ctx, 31, 0x2442F0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2442E8u, 0x2442F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2442F0u;
label_2442f0:
    // 0x2442f0: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2442f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2442f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2442f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2442f8: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x2442f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x2442fc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2442fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x244300: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x244300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x244304: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x244304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x244308: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x244308u;
    SET_GPR_U32(ctx, 31, 0x244310u);
    ctx->pc = 0x24430Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244308u;
    // 0x24430c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x244308u, 0x244310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244310u;
label_244310:
    // 0x244310: 0xc055f06  jal         func_157C18
    ctx->pc = 0x244310u;
    SET_GPR_U32(ctx, 31, 0x244318u);
    ctx->pc = 0x244314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244310u;
    // 0x244314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x244310u, 0x244318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244318u;
label_244318:
    // 0x244318: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x244318u;
    {
        const bool branch_taken_0x244318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244318u;
        // 0x24431c: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244318) {
            ctx->pc = 0x244330u;
            goto label_244330;
        }
    }
    ctx->pc = 0x244320u;
    // 0x244320: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x244320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x244324: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x244324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x244328: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x244328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x24432c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x24432cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_244330:
    // 0x244330: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x244330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x244334: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x244334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x244338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24433c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x24433Cu;
    SET_GPR_U32(ctx, 31, 0x244344u);
    ctx->pc = 0x244340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24433Cu;
    // 0x244340: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x24433Cu, 0x244344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244344u;
label_244344:
    // 0x244344: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x244344u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x244348: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x244348u;
    SET_GPR_U32(ctx, 31, 0x244350u);
    ctx->pc = 0x24434Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244348u;
    // 0x24434c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x244348u, 0x244350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244350u;
label_244350:
    // 0x244350: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x244350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_244354:
    // 0x244354: 0xc6011738  lwc1        $f1, 0x1738($s0)
    ctx->pc = 0x244354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244358: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x244358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24435c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x24435cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x244360: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x244360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x244364: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x244364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x244368: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x244368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x24436c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24436cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x244370: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x244370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x244374: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x244374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x244378: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x244378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24437c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x24437cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x244380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244384: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x244384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x244388: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x244388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24438c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24438cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x244390: 0x3e00008  jr          $ra
    ctx->pc = 0x244390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244390u;
        // 0x244394: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244398u;
}
