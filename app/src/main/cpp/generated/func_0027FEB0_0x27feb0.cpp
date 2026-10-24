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

// Function: func_0027FEB0
// Address: 0x27feb0 - 0x280000
void func_0027FEB0_0x27feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027FEB0_0x27feb0");
#endif

    switch (ctx->pc) {
        case 0x27ff34u: goto label_27ff34;
        case 0x27ff48u: goto label_27ff48;
        case 0x27ff7cu: goto label_27ff7c;
        case 0x27ff90u: goto label_27ff90;
        case 0x27ffd8u: goto label_27ffd8;
        case 0x27ffecu: goto label_27ffec;
        default: break;
    }

    ctx->pc = 0x27feb0u;

    // 0x27feb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27feb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27feb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27feb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27feb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27feb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27febc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27febcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fec0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27fec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27fec4: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x27fec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x27fec8: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x27FEC8u;
    {
        const bool branch_taken_0x27fec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEC8u;
        // 0x27fecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fec8) {
            ctx->pc = 0x27FFECu;
            goto label_27ffec;
        }
    }
    ctx->pc = 0x27FED0u;
    // 0x27fed0: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x27fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x27fed4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27fed8: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x27fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x27fedc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27fee0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27fee4: 0x800008  jr          $a0
    ctx->pc = 0x27FEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27FEECu: goto label_27feec;
            case 0x27FF08u: goto label_27ff08;
            case 0x27FF40u: goto label_27ff40;
            case 0x27FF50u: goto label_27ff50;
            case 0x27FF88u: goto label_27ff88;
            case 0x27FFACu: goto label_27ffac;
            case 0x27FFE4u: goto label_27ffe4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FEE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27FEECu;
label_27feec:
    // 0x27feec: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27feecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27fef0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27fef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27fef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fef8: 0x8c450138  lw          $a1, 0x138($v0)
    ctx->pc = 0x27fef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x27fefc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27fefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27ff00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27FF00u;
    {
        const bool branch_taken_0x27ff00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF00u;
        // 0x27ff04: 0x8c46013c  lw          $a2, 0x13C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff00) {
            ctx->pc = 0x27FF20u;
            goto label_27ff20;
        }
    }
    ctx->pc = 0x27FF08u;
label_27ff08:
    // 0x27ff08: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27ff0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27ff0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27ff10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ff10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff14: 0x8c450140  lw          $a1, 0x140($v0)
    ctx->pc = 0x27ff14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x27ff18: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27ff18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27ff1c: 0x8c460144  lw          $a2, 0x144($v0)
    ctx->pc = 0x27ff1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_27ff20:
    // 0x27ff20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27ff20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff24: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27ff24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27ff28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27ff28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff2c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27FF2Cu;
    SET_GPR_U32(ctx, 31, 0x27FF34u);
    ctx->pc = 0x27FF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF2Cu;
    // 0x27ff30: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27FF2Cu, 0x27FF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF34u;
label_27ff34:
    // 0x27ff34: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27ff34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27ff38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27ff3c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27ff3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27ff40:
    // 0x27ff40: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27FF40u;
    SET_GPR_U32(ctx, 31, 0x27FF48u);
    ctx->pc = 0x27FF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF40u;
    // 0x27ff44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27FF40u, 0x27FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF48u;
label_27ff48:
    // 0x27ff48: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x27FF48u;
    {
        const bool branch_taken_0x27ff48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF48u;
        // 0x27ff4c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff48) {
            ctx->pc = 0x27FFF0u;
            goto label_27fff0;
        }
    }
    ctx->pc = 0x27FF50u;
label_27ff50:
    // 0x27ff50: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27ff54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27ff54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27ff58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ff58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff5c: 0x8c450140  lw          $a1, 0x140($v0)
    ctx->pc = 0x27ff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x27ff60: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27ff60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27ff64: 0x8c460144  lw          $a2, 0x144($v0)
    ctx->pc = 0x27ff64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
    // 0x27ff68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27ff68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff6c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27ff6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27ff70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27ff70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ff74: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27FF74u;
    SET_GPR_U32(ctx, 31, 0x27FF7Cu);
    ctx->pc = 0x27FF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF74u;
    // 0x27ff78: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27FF74u, 0x27FF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF7Cu;
label_27ff7c:
    // 0x27ff7c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27ff7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27ff80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27ff84: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27ff84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27ff88:
    // 0x27ff88: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27FF88u;
    SET_GPR_U32(ctx, 31, 0x27FF90u);
    ctx->pc = 0x27FF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF88u;
    // 0x27ff8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27FF88u, 0x27FF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF90u;
label_27ff90:
    // 0x27ff90: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x27FF90u;
    {
        const bool branch_taken_0x27ff90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ff90) {
            ctx->pc = 0x27FF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FF90u;
            // 0x27ff94: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FFF0u;
            goto label_27fff0;
        }
    }
    ctx->pc = 0x27FF98u;
    // 0x27ff98: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27ff98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ff9c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27ff9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ffa0: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27ffa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ffa4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x27FFA4u;
    {
        const bool branch_taken_0x27ffa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFA4u;
        // 0x27ffa8: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ffa4) {
            ctx->pc = 0x27FFECu;
            goto label_27ffec;
        }
    }
    ctx->pc = 0x27FFACu;
label_27ffac:
    // 0x27ffac: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27ffb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27ffb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27ffb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ffb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ffb8: 0x8c450150  lw          $a1, 0x150($v0)
    ctx->pc = 0x27ffb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x27ffbc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27ffbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27ffc0: 0x8c460154  lw          $a2, 0x154($v0)
    ctx->pc = 0x27ffc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x27ffc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27ffc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ffc8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27ffc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27ffcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27ffccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ffd0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27FFD0u;
    SET_GPR_U32(ctx, 31, 0x27FFD8u);
    ctx->pc = 0x27FFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFD0u;
    // 0x27ffd4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27FFD0u, 0x27FFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFD8u;
label_27ffd8:
    // 0x27ffd8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27ffd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27ffdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27ffe0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27ffe0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27ffe4:
    // 0x27ffe4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27FFE4u;
    SET_GPR_U32(ctx, 31, 0x27FFECu);
    ctx->pc = 0x27FFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFE4u;
    // 0x27ffe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27FFE4u, 0x27FFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFECu;
label_27ffec:
    // 0x27ffec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27ffecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27fff0:
    // 0x27fff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27fff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fff4: 0x3e00008  jr          $ra
    ctx->pc = 0x27FFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFF4u;
        // 0x27fff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FFFCu;
    // 0x27fffc: 0x0  nop
    ctx->pc = 0x27fffcu;
    // NOP
    ctx->pc = 0x280000u;
}
