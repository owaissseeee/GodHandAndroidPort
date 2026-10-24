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

// Function: func_00383A20
// Address: 0x383a20 - 0x383b60
void func_00383A20_0x383a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00383A20_0x383a20");
#endif

    switch (ctx->pc) {
        case 0x383a58u: goto label_383a58;
        case 0x383ac8u: goto label_383ac8;
        case 0x383ae8u: goto label_383ae8;
        case 0x383b10u: goto label_383b10;
        case 0x383b40u: goto label_383b40;
        default: break;
    }

    ctx->pc = 0x383a20u;

    // 0x383a20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x383a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x383a24: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x383a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x383a28: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x383a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x383a2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x383a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383a30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x383a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x383a34: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x383a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x383a38: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x383a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x383a3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383a40: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x383a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x383a44: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x383A44u;
    {
        const bool branch_taken_0x383a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383a44) {
            ctx->pc = 0x383A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383A44u;
            // 0x383a48: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383A80u;
            goto label_383a80;
        }
    }
    ctx->pc = 0x383A4Cu;
    // 0x383a4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x383a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383a50: 0x2605000a  addiu       $a1, $s0, 0xA
    ctx->pc = 0x383a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x383a54: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x383a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_383a58:
    // 0x383a58: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x383a58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x383a5c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x383a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x383a60: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x383a60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x383a64: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x383a64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x383a68: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x383a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x383a6c: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x383a6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x383a70: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x383a70u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x383a74: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x383A74u;
    {
        const bool branch_taken_0x383a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x383A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A74u;
        // 0x383a78: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a74) {
            ctx->pc = 0x383A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383a58;
        }
    }
    ctx->pc = 0x383A7Cu;
    // 0x383a7c: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x383a7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_383a80:
    // 0x383a80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x383a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x383a84: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x383A84u;
    {
        const bool branch_taken_0x383a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A84u;
        // 0x383a88: 0x261200a4  addiu       $s2, $s0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a84) {
            ctx->pc = 0x383B2Cu;
            goto label_383b2c;
        }
    }
    ctx->pc = 0x383A8Cu;
    // 0x383a8c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x383a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x383a90: 0x5080002c  beql        $a0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x383A90u;
    {
        const bool branch_taken_0x383a90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x383a90) {
            ctx->pc = 0x383A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383A90u;
            // 0x383a94: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383B44u;
            goto label_383b44;
        }
    }
    ctx->pc = 0x383A98u;
    // 0x383a98: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x383a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x383a9c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x383A9Cu;
    {
        const bool branch_taken_0x383a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A9Cu;
        // 0x383aa0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a9c) {
            ctx->pc = 0x383AD0u;
            goto label_383ad0;
        }
    }
    ctx->pc = 0x383AA4u;
    // 0x383aa4: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x383aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x383aa8: 0x904300bc  lbu         $v1, 0xBC($v0)
    ctx->pc = 0x383aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x383aac: 0x54600025  bnel        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x383AACu;
    {
        const bool branch_taken_0x383aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x383aac) {
            ctx->pc = 0x383AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383AACu;
            // 0x383ab0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383B44u;
            goto label_383b44;
        }
    }
    ctx->pc = 0x383AB4u;
    // 0x383ab4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x383ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x383ab8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x383ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x383abc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x383abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x383ac0: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x383AC0u;
    SET_GPR_U32(ctx, 31, 0x383AC8u);
    ctx->pc = 0x383AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383AC0u;
    // 0x383ac4: 0x84460008  lh          $a2, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x383AC0u, 0x383AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383AC8u;
label_383ac8:
    // 0x383ac8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x383AC8u;
    {
        const bool branch_taken_0x383ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AC8u;
        // 0x383acc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ac8) {
            ctx->pc = 0x383B44u;
            goto label_383b44;
        }
    }
    ctx->pc = 0x383AD0u;
label_383ad0:
    // 0x383ad0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x383ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x383ad4: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x383AD4u;
    {
        const bool branch_taken_0x383ad4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x383AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AD4u;
        // 0x383ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ad4) {
            ctx->pc = 0x383B40u;
            goto label_383b40;
        }
    }
    ctx->pc = 0x383ADCu;
    // 0x383adc: 0x261400bc  addiu       $s4, $s0, 0xBC
    ctx->pc = 0x383adcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    // 0x383ae0: 0x26130008  addiu       $s3, $s0, 0x8
    ctx->pc = 0x383ae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x383ae4: 0x24b10001  addiu       $s1, $a1, 0x1
    ctx->pc = 0x383ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_383ae8:
    // 0x383ae8: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x383ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x383aec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x383aecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x383af0: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x383AF0u;
    {
        const bool branch_taken_0x383af0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x383af0) {
            ctx->pc = 0x383AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383AF0u;
            // 0x383af4: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383B14u;
            goto label_383b14;
        }
    }
    ctx->pc = 0x383AF8u;
    // 0x383af8: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x383af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x383afc: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x383afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x383b00: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x383b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x383b04: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x383b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x383b08: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x383B08u;
    SET_GPR_U32(ctx, 31, 0x383B10u);
    ctx->pc = 0x383B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383B08u;
    // 0x383b0c: 0x84460000  lh          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x383B08u, 0x383B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383B10u;
label_383b10:
    // 0x383b10: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x383b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_383b14:
    // 0x383b14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x383b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383b18: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x383b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x383b1c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x383B1Cu;
    {
        const bool branch_taken_0x383b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B1Cu;
        // 0x383b20: 0x24b10001  addiu       $s1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383b1c) {
            ctx->pc = 0x383AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383ae8;
        }
    }
    ctx->pc = 0x383B24u;
    // 0x383b24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x383B24u;
    {
        const bool branch_taken_0x383b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B24u;
        // 0x383b28: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383b24) {
            ctx->pc = 0x383B44u;
            goto label_383b44;
        }
    }
    ctx->pc = 0x383B2Cu;
label_383b2c:
    // 0x383b2c: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x383b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x383b30: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x383B30u;
    {
        const bool branch_taken_0x383b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x383b30) {
            ctx->pc = 0x383B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383B30u;
            // 0x383b34: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383B44u;
            goto label_383b44;
        }
    }
    ctx->pc = 0x383B38u;
    // 0x383b38: 0xc0caa7c  jal         func_32A9F0
    ctx->pc = 0x383B38u;
    SET_GPR_U32(ctx, 31, 0x383B40u);
    ctx->pc = 0x383B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383B38u;
    // 0x383b3c: 0x86050008  lh          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A9F0u, 0x383B38u, 0x383B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383B40u;
label_383b40:
    // 0x383b40: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x383b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_383b44:
    // 0x383b44: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x383b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x383b48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x383b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x383b4c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x383b4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x383b50: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x383b50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383b58: 0x3e00008  jr          $ra
    ctx->pc = 0x383B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B58u;
        // 0x383b5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383B60u;
}
