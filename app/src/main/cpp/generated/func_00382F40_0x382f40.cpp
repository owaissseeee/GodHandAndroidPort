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

// Function: func_00382F40
// Address: 0x382f40 - 0x383170
void func_00382F40_0x382f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00382F40_0x382f40");
#endif

    switch (ctx->pc) {
        case 0x382fccu: goto label_382fcc;
        case 0x382fe4u: goto label_382fe4;
        case 0x383000u: goto label_383000;
        case 0x383014u: goto label_383014;
        case 0x383020u: goto label_383020;
        case 0x383030u: goto label_383030;
        case 0x383040u: goto label_383040;
        case 0x383078u: goto label_383078;
        case 0x383088u: goto label_383088;
        case 0x383098u: goto label_383098;
        case 0x3830b4u: goto label_3830b4;
        case 0x3830d0u: goto label_3830d0;
        case 0x3830e0u: goto label_3830e0;
        case 0x383110u: goto label_383110;
        case 0x383120u: goto label_383120;
        case 0x383130u: goto label_383130;
        default: break;
    }

    ctx->pc = 0x382f40u;

    // 0x382f40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x382f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x382f44: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x382f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x382f48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x382f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x382f4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x382f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382f50: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x382f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x382f54: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x382f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x382f58: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x382f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x382f5c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x382f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x382f60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x382f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x382f64: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x382f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x382f68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x382f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x382f6c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x382F6Cu;
    {
        const bool branch_taken_0x382f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F6Cu;
        // 0x382f70: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382f6c) {
            ctx->pc = 0x382FA0u;
            goto label_382fa0;
        }
    }
    ctx->pc = 0x382F74u;
    // 0x382f74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x382f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x382f78: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x382F78u;
    {
        const bool branch_taken_0x382f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x382f78) {
            ctx->pc = 0x382F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382F78u;
            // 0x382f7c: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382FA4u;
            goto label_382fa4;
        }
    }
    ctx->pc = 0x382F80u;
    // 0x382f80: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x382f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x382f84: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x382F84u;
    {
        const bool branch_taken_0x382f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x382f84) {
            ctx->pc = 0x382F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382F84u;
            // 0x382f88: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382FA4u;
            goto label_382fa4;
        }
    }
    ctx->pc = 0x382F8Cu;
    // 0x382f8c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x382f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x382f90: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x382F90u;
    {
        const bool branch_taken_0x382f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x382f90) {
            ctx->pc = 0x382F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382F90u;
            // 0x382f94: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382FA4u;
            goto label_382fa4;
        }
    }
    ctx->pc = 0x382F98u;
    // 0x382f98: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x382F98u;
    {
        const bool branch_taken_0x382f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F98u;
        // 0x382f9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382f98) {
            ctx->pc = 0x383148u;
            goto label_383148;
        }
    }
    ctx->pc = 0x382FA0u;
label_382fa0:
    // 0x382fa0: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x382fa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_382fa4:
    // 0x382fa4: 0x26120034  addiu       $s2, $s0, 0x34
    ctx->pc = 0x382fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x382fa8: 0x2615006c  addiu       $s5, $s0, 0x6C
    ctx->pc = 0x382fa8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x382fac: 0x261100a4  addiu       $s1, $s0, 0xA4
    ctx->pc = 0x382facu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    // 0x382fb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x382fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x382fb4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x382FB4u;
    {
        const bool branch_taken_0x382fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382FB4u;
        // 0x382fb8: 0x261400cc  addiu       $s4, $s0, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382fb4) {
            ctx->pc = 0x382FD4u;
            goto label_382fd4;
        }
    }
    ctx->pc = 0x382FBCu;
    // 0x382fbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x382fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382fc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382fc4: 0xc0e074e  jal         func_381D38
    ctx->pc = 0x382FC4u;
    SET_GPR_U32(ctx, 31, 0x382FCCu);
    ctx->pc = 0x382FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382FC4u;
    // 0x382fc8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381D38u, 0x382FC4u, 0x382FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382FCCu;
label_382fcc:
    // 0x382fcc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x382FCCu;
    {
        const bool branch_taken_0x382fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382FCCu;
        // 0x382fd0: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382fcc) {
            ctx->pc = 0x382FE8u;
            goto label_382fe8;
        }
    }
    ctx->pc = 0x382FD4u;
label_382fd4:
    // 0x382fd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x382fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382fd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x382fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382fdc: 0xc0e03a2  jal         func_380E88
    ctx->pc = 0x382FDCu;
    SET_GPR_U32(ctx, 31, 0x382FE4u);
    ctx->pc = 0x382FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382FDCu;
    // 0x382fe0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380E88u, 0x382FDCu, 0x382FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382FE4u;
label_382fe4:
    // 0x382fe4: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x382fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_382fe8:
    // 0x382fe8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x382fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x382fec: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x382FECu;
    {
        const bool branch_taken_0x382fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382FECu;
        // 0x382ff0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382fec) {
            ctx->pc = 0x3830A8u;
            goto label_3830a8;
        }
    }
    ctx->pc = 0x382FF4u;
    // 0x382ff4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382ff8: 0xc0e06ce  jal         func_381B38
    ctx->pc = 0x382FF8u;
    SET_GPR_U32(ctx, 31, 0x383000u);
    ctx->pc = 0x382FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382FF8u;
    // 0x382ffc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381B38u, 0x382FF8u, 0x383000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383000u;
label_383000:
    // 0x383000: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x383000u;
    {
        const bool branch_taken_0x383000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383000) {
            ctx->pc = 0x383004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383000u;
            // 0x383004: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3830C0u;
            goto label_3830c0;
        }
    }
    ctx->pc = 0x383008u;
    // 0x383008: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x383008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x38300c: 0xc0cb7a2  jal         func_32DE88
    ctx->pc = 0x38300Cu;
    SET_GPR_U32(ctx, 31, 0x383014u);
    ctx->pc = 0x383010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38300Cu;
    // 0x383010: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DE88u, 0x38300Cu, 0x383014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383014u;
label_383014:
    // 0x383014: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x383014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x383018: 0xc0cb7be  jal         func_32DEF8
    ctx->pc = 0x383018u;
    SET_GPR_U32(ctx, 31, 0x383020u);
    ctx->pc = 0x38301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383018u;
    // 0x38301c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEF8u, 0x383018u, 0x383020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383020u;
label_383020:
    // 0x383020: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x383020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x383024: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x383024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x383028: 0xc0cb7dc  jal         func_32DF70
    ctx->pc = 0x383028u;
    SET_GPR_U32(ctx, 31, 0x383030u);
    ctx->pc = 0x38302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383028u;
    // 0x38302c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF70u, 0x383028u, 0x383030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383030u;
label_383030:
    // 0x383030: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x383030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x383034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x383034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383038: 0xc0cb810  jal         func_32E040
    ctx->pc = 0x383038u;
    SET_GPR_U32(ctx, 31, 0x383040u);
    ctx->pc = 0x38303Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383038u;
    // 0x38303c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E040u, 0x383038u, 0x383040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383040u;
label_383040:
    // 0x383040: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x383040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x383044: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x383044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383048: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x383048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38304c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38304cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x383050: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x383050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x383054: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x383054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x383058: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x383058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x38305c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x38305cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x383060: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x383060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x383064: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x383064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x383068: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x383068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x38306c: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x38306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x383070: 0xc0e0c5c  jal         func_383170
    ctx->pc = 0x383070u;
    SET_GPR_U32(ctx, 31, 0x383078u);
    ctx->pc = 0x383074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383070u;
    // 0x383074: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383170u, 0x383070u, 0x383078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383078u;
label_383078:
    // 0x383078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x383078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38307c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38307cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383080: 0xc0e0cb2  jal         func_3832C8
    ctx->pc = 0x383080u;
    SET_GPR_U32(ctx, 31, 0x383088u);
    ctx->pc = 0x383084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383080u;
    // 0x383084: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3832C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3832C8u, 0x383080u, 0x383088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383088u;
label_383088:
    // 0x383088: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x383088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x38308c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x38308cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x383090: 0xc0cb68a  jal         func_32DA28
    ctx->pc = 0x383090u;
    SET_GPR_U32(ctx, 31, 0x383098u);
    ctx->pc = 0x383094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383090u;
    // 0x383094: 0x92660006  lbu         $a2, 0x6($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DA28u, 0x383090u, 0x383098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383098u;
label_383098:
    // 0x383098: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x383098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x38309c: 0x92630006  lbu         $v1, 0x6($s3)
    ctx->pc = 0x38309cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x3830a0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3830A0u;
    {
        const bool branch_taken_0x3830a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3830A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3830A0u;
        // 0x3830a4: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3830a0) {
            ctx->pc = 0x38313Cu;
            goto label_38313c;
        }
    }
    ctx->pc = 0x3830A8u;
label_3830a8:
    // 0x3830a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3830a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3830ac: 0xc0e02ba  jal         func_380AE8
    ctx->pc = 0x3830ACu;
    SET_GPR_U32(ctx, 31, 0x3830B4u);
    ctx->pc = 0x3830B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3830ACu;
    // 0x3830b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380AE8u, 0x3830ACu, 0x3830B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3830B4u;
label_3830b4:
    // 0x3830b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3830B4u;
    {
        const bool branch_taken_0x3830b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3830b4) {
            ctx->pc = 0x3830B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3830B4u;
            // 0x3830b8: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3830C8u;
            goto label_3830c8;
        }
    }
    ctx->pc = 0x3830BCu;
    // 0x3830bc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x3830bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_3830c0:
    // 0x3830c0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3830C0u;
    {
        const bool branch_taken_0x3830c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3830C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3830C0u;
        // 0x3830c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3830c0) {
            ctx->pc = 0x383148u;
            goto label_383148;
        }
    }
    ctx->pc = 0x3830C8u;
label_3830c8:
    // 0x3830c8: 0xc0cac62  jal         func_32B188
    ctx->pc = 0x3830C8u;
    SET_GPR_U32(ctx, 31, 0x3830D0u);
    ctx->pc = 0x3830CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3830C8u;
    // 0x3830cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B188u, 0x3830C8u, 0x3830D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3830D0u;
label_3830d0:
    // 0x3830d0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3830d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3830d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3830d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3830d8: 0xc0cacc0  jal         func_32B300
    ctx->pc = 0x3830D8u;
    SET_GPR_U32(ctx, 31, 0x3830E0u);
    ctx->pc = 0x3830DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3830D8u;
    // 0x3830dc: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B300u, 0x3830D8u, 0x3830E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3830E0u;
label_3830e0:
    // 0x3830e0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3830e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3830e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3830e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3830e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3830e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3830ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3830ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3830f0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3830f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x3830f4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3830f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3830f8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3830f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x3830fc: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x3830fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x383100: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x383100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x383104: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x383104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x383108: 0xc0e0c5c  jal         func_383170
    ctx->pc = 0x383108u;
    SET_GPR_U32(ctx, 31, 0x383110u);
    ctx->pc = 0x38310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383108u;
    // 0x38310c: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383170u, 0x383108u, 0x383110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383110u;
label_383110:
    // 0x383110: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x383110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x383114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383118: 0xc0e0cb2  jal         func_3832C8
    ctx->pc = 0x383118u;
    SET_GPR_U32(ctx, 31, 0x383120u);
    ctx->pc = 0x38311Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383118u;
    // 0x38311c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3832C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3832C8u, 0x383118u, 0x383120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383120u;
label_383120:
    // 0x383120: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x383120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x383124: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x383124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x383128: 0xc0caed2  jal         func_32BB48
    ctx->pc = 0x383128u;
    SET_GPR_U32(ctx, 31, 0x383130u);
    ctx->pc = 0x38312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383128u;
    // 0x38312c: 0x92660006  lbu         $a2, 0x6($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BB48u, 0x383128u, 0x383130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383130u;
label_383130:
    // 0x383130: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x383130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x383134: 0x92630006  lbu         $v1, 0x6($s3)
    ctx->pc = 0x383134u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x383138: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x383138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_38313c:
    // 0x38313c: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x38313cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x383140: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x383140u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x383144: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x383144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383148:
    // 0x383148: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x383148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38314c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x38314cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x383150: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x383150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x383154: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x383154u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x383158: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x383158u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38315c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x38315cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383164: 0x3e00008  jr          $ra
    ctx->pc = 0x383164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383164u;
        // 0x383168: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38316Cu;
    // 0x38316c: 0x0  nop
    ctx->pc = 0x38316cu;
    // NOP
    ctx->pc = 0x383170u;
}
