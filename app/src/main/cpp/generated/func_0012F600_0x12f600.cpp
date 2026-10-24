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

// Function: func_0012F600
// Address: 0x12f600 - 0x12f750
void func_0012F600_0x12f600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012F600_0x12f600");
#endif

    switch (ctx->pc) {
        case 0x12f648u: goto label_12f648;
        case 0x12f6b0u: goto label_12f6b0;
        case 0x12f720u: goto label_12f720;
        default: break;
    }

    ctx->pc = 0x12f600u;

    // 0x12f600: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x12f600u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f604: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12f604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f608: 0x8d63001c  lw          $v1, 0x1C($t3)
    ctx->pc = 0x12f608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x12f60c: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x12f60cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x12f610: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x12f610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x12f614: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x12F614u;
    {
        const bool branch_taken_0x12f614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F614u;
        // 0x12f618: 0x626021  addu        $t4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f614) {
            ctx->pc = 0x12F670u;
            goto label_12f670;
        }
    }
    ctx->pc = 0x12F61Cu;
    // 0x12f61c: 0x90a70004  lbu         $a3, 0x4($a1)
    ctx->pc = 0x12f61cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12f620: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12f620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12f624: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12f624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12f628: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12f628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12f62c: 0x10e20010  beq         $a3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x12F62Cu;
    {
        const bool branch_taken_0x12f62c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x12F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F62Cu;
        // 0x12f630: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f62c) {
            ctx->pc = 0x12F670u;
            goto label_12f670;
        }
    }
    ctx->pc = 0x12F634u;
    // 0x12f634: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x12f634u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x12f638: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x12f638u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x12f63c: 0x240d0014  addiu       $t5, $zero, 0x14
    ctx->pc = 0x12f63cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12f640: 0x354afffb  ori         $t2, $t2, 0xFFFB
    ctx->pc = 0x12f640u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65531);
    // 0x12f644: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x12f644u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_12f648:
    // 0x12f648: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x12f648u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12f64c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x12f64cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x12f650: 0x8d640014  lw          $a0, 0x14($t3)
    ctx->pc = 0x12f650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x12f654: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x12f654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x12f658: 0x6d1818  mult        $v1, $v1, $t5
    ctx->pc = 0x12f658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12f65c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12f65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12f660: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x12f660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12f664: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x12f664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x12f668: 0x14e9fff7  bne         $a3, $t1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12F668u;
    {
        const bool branch_taken_0x12f668 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x12F66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F668u;
        // 0x12f66c: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f668) {
            ctx->pc = 0x12F648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f648;
        }
    }
    ctx->pc = 0x12F670u;
label_12f670:
    // 0x12f670: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x12f670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x12f674: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12F674u;
    {
        const bool branch_taken_0x12f674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F674u;
        // 0x12f678: 0x30cd0004  andi        $t5, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f674) {
            ctx->pc = 0x12F6D8u;
            goto label_12f6d8;
        }
    }
    ctx->pc = 0x12F67Cu;
    // 0x12f67c: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x12f67cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12f680: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x12f680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12f684: 0x90a60005  lbu         $a2, 0x5($a1)
    ctx->pc = 0x12f684u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x12f688: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12f688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12f68c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x12f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x12f690: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x12f690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12f694: 0x10c30010  beq         $a2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12F694u;
    {
        const bool branch_taken_0x12f694 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x12F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F694u;
        // 0x12f698: 0x1823821  addu        $a3, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f694) {
            ctx->pc = 0x12F6D8u;
            goto label_12f6d8;
        }
    }
    ctx->pc = 0x12F69Cu;
    // 0x12f69c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x12f69cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x12f6a0: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x12f6a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x12f6a4: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x12f6a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12f6a8: 0x3529fffb  ori         $t1, $t1, 0xFFFB
    ctx->pc = 0x12f6a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65531);
    // 0x12f6ac: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x12f6acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_12f6b0:
    // 0x12f6b0: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x12f6b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12f6b4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x12f6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12f6b8: 0x8d640014  lw          $a0, 0x14($t3)
    ctx->pc = 0x12f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x12f6bc: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x12f6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x12f6c0: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x12f6c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12f6c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12f6c8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x12f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12f6cc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x12f6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x12f6d0: 0x14c8fff7  bne         $a2, $t0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12F6D0u;
    {
        const bool branch_taken_0x12f6d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x12F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6D0u;
        // 0x12f6d4: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f6d0) {
            ctx->pc = 0x12F6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f6b0;
        }
    }
    ctx->pc = 0x12F6D8u;
label_12f6d8:
    // 0x12f6d8: 0x11a0001b  beqz        $t5, . + 4 + (0x1B << 2)
    ctx->pc = 0x12F6D8u;
    {
        const bool branch_taken_0x12f6d8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f6d8) {
            ctx->pc = 0x12F748u;
            goto label_12f748;
        }
    }
    ctx->pc = 0x12F6E0u;
    // 0x12f6e0: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x12f6e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12f6e4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x12f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x12f6e8: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x12f6e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x12f6ec: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x12f6ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x12f6f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x12f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x12f6f4: 0x90a50006  lbu         $a1, 0x6($a1)
    ctx->pc = 0x12f6f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x12f6f8: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x12f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x12f6fc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x12f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12f700: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x12f700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x12f704: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x12F704u;
    {
        const bool branch_taken_0x12f704 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x12F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F704u;
        // 0x12f708: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f704) {
            ctx->pc = 0x12F748u;
            goto label_12f748;
        }
    }
    ctx->pc = 0x12F70Cu;
    // 0x12f70c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x12f70cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x12f710: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x12f710u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x12f714: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x12f714u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12f718: 0x3508fffb  ori         $t0, $t0, 0xFFFB
    ctx->pc = 0x12f718u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65531);
    // 0x12f71c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x12f71cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_12f720:
    // 0x12f720: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x12f720u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12f724: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x12f724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x12f728: 0x8d640014  lw          $a0, 0x14($t3)
    ctx->pc = 0x12f728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x12f72c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x12f72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x12f730: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x12f730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12f734: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12f734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12f738: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x12f738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12f73c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x12f73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x12f740: 0x14a7fff7  bne         $a1, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12F740u;
    {
        const bool branch_taken_0x12f740 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x12F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F740u;
        // 0x12f744: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f740) {
            ctx->pc = 0x12F720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f720;
        }
    }
    ctx->pc = 0x12F748u;
label_12f748:
    // 0x12f748: 0x3e00008  jr          $ra
    ctx->pc = 0x12F748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F750u;
}
