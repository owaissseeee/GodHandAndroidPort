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

// Function: cDoor_setDoorJump
// Address: 0x1fff80 - 0x2000f8
void cDoor_setDoorJump_0x1fff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDoor_setDoorJump_0x1fff80");
#endif

    switch (ctx->pc) {
        case 0x1fffd8u: goto label_1fffd8;
        case 0x200034u: goto label_200034;
        case 0x200060u: goto label_200060;
        case 0x2000c0u: goto label_2000c0;
        case 0x2000ccu: goto label_2000cc;
        case 0x2000d4u: goto label_2000d4;
        default: break;
    }

    ctx->pc = 0x1fff80u;

    // 0x1fff80: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1fff80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1fff84: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fff84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fff88: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x1fff88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x1fff8c: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x1fff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x1fff90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fff90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fff94: 0x24467a84  addiu       $a2, $v0, 0x7A84
    ctx->pc = 0x1fff94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 31364));
    // 0x1fff98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fff98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fff9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fff9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fffa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fffa4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1fffa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1fffa8: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1FFFA8u;
    {
        const bool branch_taken_0x1fffa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFA8u;
        // 0x1fffac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffa8) {
            ctx->pc = 0x2000E4u;
            goto label_2000e4;
        }
    }
    ctx->pc = 0x1FFFB0u;
    // 0x1fffb0: 0x8cc3ffa0  lw          $v1, -0x60($a2)
    ctx->pc = 0x1fffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967200)));
    // 0x1fffb4: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1fffb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1fffb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFFB8u;
    {
        const bool branch_taken_0x1fffb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFB8u;
        // 0x1fffbc: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffb8) {
            ctx->pc = 0x1FFFCCu;
            goto label_1fffcc;
        }
    }
    ctx->pc = 0x1FFFC0u;
    // 0x1fffc0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1fffc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fffc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFFC4u;
    {
        const bool branch_taken_0x1fffc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFC4u;
        // 0x1fffc8: 0xacc2ffa0  sw          $v0, -0x60($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294967200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffc4) {
            ctx->pc = 0x1FFFD8u;
            goto label_1fffd8;
        }
    }
    ctx->pc = 0x1FFFCCu;
label_1fffcc:
    // 0x1fffcc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1fffccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1fffd0: 0xc0abb34  jal         func_2AECD0
    ctx->pc = 0x1FFFD0u;
    SET_GPR_U32(ctx, 31, 0x1FFFD8u);
    ctx->pc = 0x1FFFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFFD0u;
    // 0x1fffd4: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AECD0u, 0x1FFFD0u, 0x1FFFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFFD8u;
label_1fffd8:
    // 0x1fffd8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1fffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1fffdc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1fffdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1fffe0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FFFE0u;
    {
        const bool branch_taken_0x1fffe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFFE0u;
        // 0x1fffe4: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffe0) {
            ctx->pc = 0x20000Cu;
            goto label_20000c;
        }
    }
    ctx->pc = 0x1FFFE8u;
    // 0x1fffe8: 0x3c0800a0  lui         $t0, 0xA0
    ctx->pc = 0x1fffe8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)160 << 16));
    // 0x1fffec: 0x3c0980a0  lui         $t1, 0x80A0
    ctx->pc = 0x1fffecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32928 << 16));
    // 0x1ffff0: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1ffff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x1ffff4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ffff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffff8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ffff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ffffc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ffffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200000: 0x3508a0a0  ori         $t0, $t0, 0xA0A0
    ctx->pc = 0x200000u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)41120);
    // 0x200004: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x200004u;
    {
        const bool branch_taken_0x200004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200004u;
        // 0x200008: 0x3529a0a0  ori         $t1, $t1, 0xA0A0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)41120);
        ctx->in_delay_slot = false;
        if (branch_taken_0x200004) {
            ctx->pc = 0x20002Cu;
            goto label_20002c;
        }
    }
    ctx->pc = 0x20000Cu;
label_20000c:
    // 0x20000c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x20000cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x200010: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x200010u;
    {
        const bool branch_taken_0x200010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200010u;
        // 0x200014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200010) {
            ctx->pc = 0x200040u;
            goto label_200040;
        }
    }
    ctx->pc = 0x200018u;
    // 0x200018: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x200018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x20001c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x20001cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x200020: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x200020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200024: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x200024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200028: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x200028u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_20002c:
    // 0x20002c: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x20002Cu;
    SET_GPR_U32(ctx, 31, 0x200034u);
    ctx->pc = 0x200030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20002Cu;
    // 0x200030: 0x240a001e  addiu       $t2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x20002Cu, 0x200034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200034u;
label_200034:
    // 0x200034: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x200034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x200038: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x200038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x20003c: 0xa462ae40  sh          $v0, -0x51C0($v1)
    ctx->pc = 0x20003cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CAE40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CAE40u, _value); } while (0);
label_200040:
    // 0x200040: 0xa2000039  sb          $zero, 0x39($s0)
    ctx->pc = 0x200040u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 0));
    // 0x200044: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x200044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x200048: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x200048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x20004c: 0x26307a84  addiu       $s0, $s1, 0x7A84
    ctx->pc = 0x20004cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 31364));
    // 0x200050: 0x8e227a84  lw          $v0, 0x7A84($s1)
    ctx->pc = 0x200050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31364)));
    // 0x200054: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x200054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x200058: 0xc0c6be8  jal         func_31AFA0
    ctx->pc = 0x200058u;
    SET_GPR_U32(ctx, 31, 0x200060u);
    ctx->pc = 0x20005Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200058u;
    // 0x20005c: 0xae227a84  sw          $v0, 0x7A84($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 31364), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AFA0u, 0x200058u, 0x200060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200060u;
label_200060:
    // 0x200060: 0x8e02fff4  lw          $v0, -0xC($s0)
    ctx->pc = 0x200060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
    // 0x200064: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x200064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x200068: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x200068u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x20006c: 0x8e05fffc  lw          $a1, -0x4($s0)
    ctx->pc = 0x20006cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x200070: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x200070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x200074: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x200074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x200078: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x200078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x20007c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x20007cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x200080: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x200080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x200084: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x200084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x200088: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x200088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20008c: 0xae05fffc  sw          $a1, -0x4($s0)
    ctx->pc = 0x20008cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 5));
    // 0x200090: 0xae02fff4  sw          $v0, -0xC($s0)
    ctx->pc = 0x200090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), GPR_U32(ctx, 2));
    // 0x200094: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x200094u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x200098: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x200098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x20009c: 0x8cc42f84  lw          $a0, 0x2F84($a2)
    ctx->pc = 0x20009cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x2000a0: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2000a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2000a4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2000a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2000a8: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x2000a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x2000ac: 0x9603ffcc  lhu         $v1, -0x34($s0)
    ctx->pc = 0x2000acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294967244)));
    // 0x2000b0: 0x1067000d  beq         $v1, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2000B0u;
    {
        const bool branch_taken_0x2000b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x2000B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000B0u;
        // 0x2000b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2000b0) {
            ctx->pc = 0x2000E8u;
            goto label_2000e8;
        }
    }
    ctx->pc = 0x2000B8u;
    // 0x2000b8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2000B8u;
    SET_GPR_U32(ctx, 31, 0x2000C0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2000B8u, 0x2000C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2000C0u;
label_2000c0:
    // 0x2000c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2000c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2000c4: 0xc04ab18  jal         func_12AC60
    ctx->pc = 0x2000C4u;
    SET_GPR_U32(ctx, 31, 0x2000CCu);
    ctx->pc = 0x2000C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2000C4u;
    // 0x2000c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC60u, 0x2000C4u, 0x2000CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2000CCu;
label_2000cc:
    // 0x2000cc: 0xc04ae7c  jal         func_12B9F0
    ctx->pc = 0x2000CCu;
    SET_GPR_U32(ctx, 31, 0x2000D4u);
    ctx->pc = 0x2000D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2000CCu;
    // 0x2000d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B9F0u, 0x2000CCu, 0x2000D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2000D4u;
label_2000d4:
    // 0x2000d4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2000d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2000d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2000d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2000dc: 0x0  nop
    ctx->pc = 0x2000dcu;
    // NOP
    // 0x2000e0: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x2000e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_2000e4:
    // 0x2000e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2000e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2000e8:
    // 0x2000e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2000e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2000ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2000ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2000f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2000F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2000F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2000F0u;
        // 0x2000f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2000F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2000F8u;
}
