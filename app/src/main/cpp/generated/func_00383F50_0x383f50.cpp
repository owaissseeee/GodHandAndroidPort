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

// Function: func_00383F50
// Address: 0x383f50 - 0x384138
void func_00383F50_0x383f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00383F50_0x383f50");
#endif

    switch (ctx->pc) {
        case 0x383fd8u: goto label_383fd8;
        case 0x38401cu: goto label_38401c;
        case 0x384078u: goto label_384078;
        case 0x384090u: goto label_384090;
        case 0x3840b8u: goto label_3840b8;
        case 0x3840c8u: goto label_3840c8;
        case 0x3840f0u: goto label_3840f0;
        case 0x384104u: goto label_384104;
        default: break;
    }

    ctx->pc = 0x383f50u;

    // 0x383f50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x383f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x383f54: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x383f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x383f58: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x383f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x383f5c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x383f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x383f60: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x383f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x383f64: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x383f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x383f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383f6c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x383f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x383f70: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x383f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383f74: 0x24b00370  addiu       $s0, $a1, 0x370
    ctx->pc = 0x383f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 880));
    // 0x383f78: 0x24b10414  addiu       $s1, $a1, 0x414
    ctx->pc = 0x383f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1044));
    // 0x383f7c: 0x3042a000  andi        $v0, $v0, 0xA000
    ctx->pc = 0x383f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)40960);
    // 0x383f80: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x383F80u;
    {
        const bool branch_taken_0x383f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383F80u;
        // 0x383f84: 0x24b4043c  addiu       $s4, $a1, 0x43C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 1084));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383f80) {
            ctx->pc = 0x384118u;
            goto label_384118;
        }
    }
    ctx->pc = 0x383F88u;
    // 0x383f88: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x383f88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x383f8c: 0x24b2042c  addiu       $s2, $a1, 0x42C
    ctx->pc = 0x383f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1068));
    // 0x383f90: 0x24b30454  addiu       $s3, $a1, 0x454
    ctx->pc = 0x383f90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 1108));
    // 0x383f94: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x383f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x383f98: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x383f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x383f9c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x383f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x383fa0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x383fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x383fa4: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x383fa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x383fa8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x383fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x383fac: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x383facu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x383fb0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x383fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x383fb4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x383fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x383fb8: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x383fb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x383fbc: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x383FBCu;
    {
        const bool branch_taken_0x383fbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x383FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383FBCu;
        // 0x383fc0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383fbc) {
            ctx->pc = 0x384014u;
            goto label_384014;
        }
    }
    ctx->pc = 0x383FC4u;
    // 0x383fc4: 0x24a6042d  addiu       $a2, $a1, 0x42D
    ctx->pc = 0x383fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1069));
    // 0x383fc8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x383fc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383fcc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x383fccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383fd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x383fd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383fd4: 0x24a50455  addiu       $a1, $a1, 0x455
    ctx->pc = 0x383fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1109));
label_383fd8:
    // 0x383fd8: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x383fd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x383fdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x383fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x383fe0: 0x28e40004  slti        $a0, $a3, 0x4
    ctx->pc = 0x383fe0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x383fe4: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x383fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x383fe8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x383fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x383fec: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x383fecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x383ff0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x383ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x383ff4: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x383ff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x383ff8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x383ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x383ffc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x383ffcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x384000: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x384000u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x384004: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x384004u;
    {
        const bool branch_taken_0x384004 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x384008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384004u;
        // 0x384008: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384004) {
            ctx->pc = 0x383FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383fd8;
        }
    }
    ctx->pc = 0x38400Cu;
    // 0x38400c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x38400Cu;
    {
        const bool branch_taken_0x38400c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38400Cu;
        // 0x384010: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38400c) {
            ctx->pc = 0x384048u;
            goto label_384048;
        }
    }
    ctx->pc = 0x384014u;
label_384014:
    // 0x384014: 0xc0e104e  jal         func_384138
    ctx->pc = 0x384014u;
    SET_GPR_U32(ctx, 31, 0x38401Cu);
    ctx->pc = 0x384018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384014u;
    // 0x384018: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384138u, 0x384014u, 0x38401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38401Cu;
label_38401c:
    // 0x38401c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x38401Cu;
    {
        const bool branch_taken_0x38401c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38401c) {
            ctx->pc = 0x384020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38401Cu;
            // 0x384020: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384048u;
            goto label_384048;
        }
    }
    ctx->pc = 0x384024u;
    // 0x384024: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x384024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x384028: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x384028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x38402c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x38402cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x384030: 0xa2230018  sb          $v1, 0x18($s1)
    ctx->pc = 0x384030u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x384034: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x384034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x384038: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x384038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x38403c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x38403cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x384040: 0xa2830018  sb          $v1, 0x18($s4)
    ctx->pc = 0x384040u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x384044: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x384044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_384048:
    // 0x384048: 0x50800034  beql        $a0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x384048u;
    {
        const bool branch_taken_0x384048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x384048) {
            ctx->pc = 0x38404Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384048u;
            // 0x38404c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38411Cu;
            goto label_38411c;
        }
    }
    ctx->pc = 0x384050u;
    // 0x384050: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x384050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x384054: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x384054u;
    {
        const bool branch_taken_0x384054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384054u;
        // 0x384058: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384054) {
            ctx->pc = 0x384098u;
            goto label_384098;
        }
    }
    ctx->pc = 0x38405Cu;
    // 0x38405c: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x38405cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x384060: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x384060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x384064: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x384064u;
    {
        const bool branch_taken_0x384064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x384068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384064u;
        // 0x384068: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384064) {
            ctx->pc = 0x384080u;
            goto label_384080;
        }
    }
    ctx->pc = 0x38406Cu;
    // 0x38406c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x38406cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x384070: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x384070u;
    SET_GPR_U32(ctx, 31, 0x384078u);
    ctx->pc = 0x384074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384070u;
    // 0x384074: 0x2406fc40  addiu       $a2, $zero, -0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x384070u, 0x384078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384078u;
label_384078:
    // 0x384078: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x384078u;
    {
        const bool branch_taken_0x384078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384078u;
        // 0x38407c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384078) {
            ctx->pc = 0x38411Cu;
            goto label_38411c;
        }
    }
    ctx->pc = 0x384080u;
label_384080:
    // 0x384080: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x384080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x384084: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x384084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x384088: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x384088u;
    SET_GPR_U32(ctx, 31, 0x384090u);
    ctx->pc = 0x38408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384088u;
    // 0x38408c: 0x84460008  lh          $a2, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x384088u, 0x384090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384090u;
label_384090:
    // 0x384090: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x384090u;
    {
        const bool branch_taken_0x384090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384090u;
        // 0x384094: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384090) {
            ctx->pc = 0x38411Cu;
            goto label_38411c;
        }
    }
    ctx->pc = 0x384098u;
label_384098:
    // 0x384098: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x384098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x38409c: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x38409cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3840a0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3840A0u;
    {
        const bool branch_taken_0x3840a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3840A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3840A0u;
        // 0x3840a4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3840a0) {
            ctx->pc = 0x3840E0u;
            goto label_3840e0;
        }
    }
    ctx->pc = 0x3840A8u;
    // 0x3840a8: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3840A8u;
    {
        const bool branch_taken_0x3840a8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3840ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3840A8u;
        // 0x3840ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3840a8) {
            ctx->pc = 0x384118u;
            goto label_384118;
        }
    }
    ctx->pc = 0x3840B0u;
    // 0x3840b0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x3840b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3840b4: 0x0  nop
    ctx->pc = 0x3840b4u;
    // NOP
label_3840b8:
    // 0x3840b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3840b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3840bc: 0x2406fc40  addiu       $a2, $zero, -0x3C0
    ctx->pc = 0x3840bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
    // 0x3840c0: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x3840C0u;
    SET_GPR_U32(ctx, 31, 0x3840C8u);
    ctx->pc = 0x3840C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3840C0u;
    // 0x3840c4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x3840C0u, 0x3840C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3840C8u;
label_3840c8:
    // 0x3840c8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3840c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3840cc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3840ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3840d0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3840D0u;
    {
        const bool branch_taken_0x3840d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3840d0) {
            ctx->pc = 0x3840D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3840D0u;
            // 0x3840d4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3840B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3840b8;
        }
    }
    ctx->pc = 0x3840D8u;
    // 0x3840d8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3840D8u;
    {
        const bool branch_taken_0x3840d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3840DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3840D8u;
        // 0x3840dc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3840d8) {
            ctx->pc = 0x38411Cu;
            goto label_38411c;
        }
    }
    ctx->pc = 0x3840E0u;
label_3840e0:
    // 0x3840e0: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3840E0u;
    {
        const bool branch_taken_0x3840e0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3840E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3840E0u;
        // 0x3840e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3840e0) {
            ctx->pc = 0x384118u;
            goto label_384118;
        }
    }
    ctx->pc = 0x3840E8u;
    // 0x3840e8: 0x26120008  addiu       $s2, $s0, 0x8
    ctx->pc = 0x3840e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3840ec: 0x24b00001  addiu       $s0, $a1, 0x1
    ctx->pc = 0x3840ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3840f0:
    // 0x3840f0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x3840f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3840f4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x3840f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3840f8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3840f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3840fc: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x3840FCu;
    SET_GPR_U32(ctx, 31, 0x384104u);
    ctx->pc = 0x384100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3840FCu;
    // 0x384100: 0x84460000  lh          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x3840FCu, 0x384104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384104u;
label_384104:
    // 0x384104: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x384104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x384108: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x384108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38410c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x38410cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x384110: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x384110u;
    {
        const bool branch_taken_0x384110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384110u;
        // 0x384114: 0x24b00001  addiu       $s0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384110) {
            ctx->pc = 0x3840F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3840f0;
        }
    }
    ctx->pc = 0x384118u;
label_384118:
    // 0x384118: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x384118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38411c:
    // 0x38411c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x38411cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x384120: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x384120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x384124: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x384124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384128: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x384128u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38412c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38412cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384130: 0x3e00008  jr          $ra
    ctx->pc = 0x384130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384130u;
        // 0x384134: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384138u;
}
