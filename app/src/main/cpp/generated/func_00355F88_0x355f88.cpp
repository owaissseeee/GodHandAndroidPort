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

// Function: func_00355F88
// Address: 0x355f88 - 0x3562a0
void func_00355F88_0x355f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00355F88_0x355f88");
#endif

    switch (ctx->pc) {
        case 0x355fb8u: goto label_355fb8;
        case 0x3560b4u: goto label_3560b4;
        case 0x3560c4u: goto label_3560c4;
        case 0x3561c8u: goto label_3561c8;
        case 0x3561d0u: goto label_3561d0;
        case 0x356200u: goto label_356200;
        case 0x356250u: goto label_356250;
        case 0x356270u: goto label_356270;
        default: break;
    }

    ctx->pc = 0x355f88u;

    // 0x355f88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x355f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x355f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x355f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x355f90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x355f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355f94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x355f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x355f98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x355f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x355f9c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x355f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x355fa0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x355fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x355fa4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x355fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x355fa8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x355fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x355fac: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x355facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x355fb0: 0xc0ebf38  jal         func_3AFCE0
    ctx->pc = 0x355FB0u;
    SET_GPR_U32(ctx, 31, 0x355FB8u);
    ctx->pc = 0x355FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355FB0u;
    // 0x355fb4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCE0u, 0x355FB0u, 0x355FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355FB8u;
label_355fb8:
    // 0x355fb8: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x355fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x355fbc: 0x8e09001c  lw          $t1, 0x1C($s0)
    ctx->pc = 0x355fbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x355fc0: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x355fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x355fc4: 0x41c02  srl         $v1, $a0, 16
    ctx->pc = 0x355fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x355fc8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x355fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x355fcc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x355fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x355fd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x355fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x355fd4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x355fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x355fd8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x355fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x355fdc: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x355fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x355fe0: 0x1229023  subu        $s2, $t1, $v0
    ctx->pc = 0x355fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x355fe4: 0x8e0a0028  lw          $t2, 0x28($s0)
    ctx->pc = 0x355fe4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x355fe8: 0x247102b  sltu        $v0, $s2, $a3
    ctx->pc = 0x355fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x355fec: 0xa3a821  addu        $s5, $a1, $v1
    ctx->pc = 0x355fecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x355ff0: 0x3096007f  andi        $s6, $a0, 0x7F
    ctx->pc = 0x355ff0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x355ff4: 0x8e140020  lw          $s4, 0x20($s0)
    ctx->pc = 0x355ff4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x355ff8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x355FF8u;
    {
        const bool branch_taken_0x355ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355FF8u;
        // 0x355ffc: 0x35530100  ori         $s3, $t2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x355ff8) {
            ctx->pc = 0x3560A8u;
            goto label_3560a8;
        }
    }
    ctx->pc = 0x356000u;
    // 0x356000: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x356000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x356004: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x356004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x356008: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x356008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35600c: 0xf22023  subu        $a0, $a3, $s2
    ctx->pc = 0x35600cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x356010: 0x642c0  sll         $t0, $a2, 11
    ctx->pc = 0x356010u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x356014: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x356014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x356018: 0x62a024  and         $s4, $v1, $v0
    ctx->pc = 0x356018u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35601c: 0x4a902  srl         $s5, $a0, 4
    ctx->pc = 0x35601cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x356020: 0x11270004  beq         $t1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x356020u;
    {
        const bool branch_taken_0x356020 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        ctx->pc = 0x356024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356020u;
        // 0x356024: 0x2489021  addu        $s2, $s2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356020) {
            ctx->pc = 0x356034u;
            goto label_356034;
        }
    }
    ctx->pc = 0x356028u;
    // 0x356028: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x356028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x35602c: 0x15220002  bne         $t1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x35602Cu;
    {
        const bool branch_taken_0x35602c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x356030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35602Cu;
        // 0x356030: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35602c) {
            ctx->pc = 0x356038u;
            goto label_356038;
        }
    }
    ctx->pc = 0x356034u;
label_356034:
    // 0x356034: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x356034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356038:
    // 0x356038: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x356038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x35603c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x35603cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x356040: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x356040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x356044: 0x42700  sll         $a0, $a0, 28
    ctx->pc = 0x356044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 28));
    // 0x356048: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x356048u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x35604c: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x35604cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x356050: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x356050u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x356054: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x356054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x356058: 0x34530100  ori         $s3, $v0, 0x100
    ctx->pc = 0x356058u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x35605c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x35605Cu;
    {
        const bool branch_taken_0x35605c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x35605c) {
            ctx->pc = 0x356060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35605Cu;
            // 0x356060: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x356064u;
            goto label_356064;
        }
    }
    ctx->pc = 0x356064u;
label_356064:
    // 0x356064: 0x2810  mfhi        $a1
    ctx->pc = 0x356064u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x356068: 0x4a20009  bltzl       $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x356068u;
    {
        const bool branch_taken_0x356068 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x356068) {
            ctx->pc = 0x35606Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356068u;
            // 0x35606c: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356090u;
            goto label_356090;
        }
    }
    ctx->pc = 0x356070u;
    // 0x356070: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x356070u;
    {
        const bool branch_taken_0x356070 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x356070) {
            ctx->pc = 0x356074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356070u;
            // 0x356074: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x356078u;
            goto label_356078;
        }
    }
    ctx->pc = 0x356078u;
label_356078:
    // 0x356078: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x356078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x35607c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x35607cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x356080: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x356080u;
    {
        const bool branch_taken_0x356080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356080) {
            ctx->pc = 0x356084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356080u;
            // 0x356084: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356190u;
            goto label_356190;
        }
    }
    ctx->pc = 0x356088u;
    // 0x356088: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x356088u;
    {
        const bool branch_taken_0x356088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356088u;
        // 0x35608c: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356088) {
            ctx->pc = 0x356094u;
            goto label_356094;
        }
    }
    ctx->pc = 0x356090u;
label_356090:
    // 0x356090: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x356090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_356094:
    // 0x356094: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x356094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x356098: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x356098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x35609c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x35609Cu;
    {
        const bool branch_taken_0x35609c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3560A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35609Cu;
        // 0x3560a0: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35609c) {
            ctx->pc = 0x35618Cu;
            goto label_35618c;
        }
    }
    ctx->pc = 0x3560A4u;
    // 0x3560a4: 0x0  nop
    ctx->pc = 0x3560a4u;
    // NOP
label_3560a8:
    // 0x3560a8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x3560a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3560ac: 0xc0d55f2  jal         func_3557C8
    ctx->pc = 0x3560ACu;
    SET_GPR_U32(ctx, 31, 0x3560B4u);
    ctx->pc = 0x3560B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3560ACu;
    // 0x3560b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3557C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3557C8u, 0x3560ACu, 0x3560B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3560B4u;
label_3560b4:
    // 0x3560b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3560b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3560b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3560b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3560bc: 0xc0d55f2  jal         func_3557C8
    ctx->pc = 0x3560BCu;
    SET_GPR_U32(ctx, 31, 0x3560C4u);
    ctx->pc = 0x3560C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3560BCu;
    // 0x3560c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3557C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3557C8u, 0x3560BCu, 0x3560C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3560C4u;
label_3560c4:
    // 0x3560c4: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x3560c4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3560c8: 0x122e0030  beq         $s1, $t6, . + 4 + (0x30 << 2)
    ctx->pc = 0x3560C8u;
    {
        const bool branch_taken_0x3560c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 14));
        ctx->pc = 0x3560CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3560C8u;
        // 0x3560cc: 0x3c090fff  lui         $t1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3560c8) {
            ctx->pc = 0x35618Cu;
            goto label_35618c;
        }
    }
    ctx->pc = 0x3560D0u;
    // 0x3560d0: 0x8e0c0008  lw          $t4, 0x8($s0)
    ctx->pc = 0x3560d0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3560d4: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x3560d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3560d8: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x3560d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3560dc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3560dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3560e0: 0xc1ac0  sll         $v1, $t4, 11
    ctx->pc = 0x3560e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 11));
    // 0x3560e4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3560E4u;
    {
        const bool branch_taken_0x3560e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3560e4) {
            ctx->pc = 0x3560E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3560E4u;
            // 0x3560e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3560ECu;
            goto label_3560ec;
        }
    }
    ctx->pc = 0x3560ECu;
label_3560ec:
    // 0x3560ec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3560ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3560f0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x3560f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3560f4: 0x8e0d0010  lw          $t5, 0x10($s0)
    ctx->pc = 0x3560f4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3560f8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x3560f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3560fc: 0x111ac0  sll         $v1, $s1, 11
    ctx->pc = 0x3560fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x356100: 0x8d1021  addu        $v0, $a0, $t5
    ctx->pc = 0x356100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x356104: 0x1cc2821  addu        $a1, $t6, $t4
    ctx->pc = 0x356104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x356108: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x356108u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x35610c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x35610cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x356110: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x356110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x356114: 0x8e0a0004  lw          $t2, 0x4($s0)
    ctx->pc = 0x356114u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x356118: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x356118u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x35611c: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x35611cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x356120: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x356120u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x356124: 0x3a902  srl         $s5, $v1, 4
    ctx->pc = 0x356124u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x356128: 0x3010  mfhi        $a2
    ctx->pc = 0x356128u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x35612c: 0x4c001a  div         $zero, $v0, $t4
    ctx->pc = 0x35612cu;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x356130: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x356130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x356134: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x356134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x356138: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x356138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x35613c: 0x49a024  and         $s4, $v0, $t1
    ctx->pc = 0x35613cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x356140: 0x3810  mfhi        $a3
    ctx->pc = 0x356140u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x356144: 0xac001a  div         $zero, $a1, $t4
    ctx->pc = 0x356144u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x356148: 0x73ac0  sll         $a3, $a3, 11
    ctx->pc = 0x356148u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x35614c: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x35614cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x356150: 0xc83026  xor         $a2, $a2, $t0
    ctx->pc = 0x356150u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 8));
    // 0x356154: 0x6580a  movz        $t3, $zero, $a2
    ctx->pc = 0x356154u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 0));
    // 0x356158: 0xb5f00  sll         $t3, $t3, 28
    ctx->pc = 0x356158u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 28));
    // 0x35615c: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x35615cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x356160: 0x1010  mfhi        $v0
    ctx->pc = 0x356160u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x356164: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x356164u;
    {
        const bool branch_taken_0x356164 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x356168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356164u;
        // 0x356168: 0x34930100  ori         $s3, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x356164) {
            ctx->pc = 0x356180u;
            goto label_356180;
        }
    }
    ctx->pc = 0x35616Cu;
    // 0x35616c: 0x4d102a  slt         $v0, $v0, $t5
    ctx->pc = 0x35616cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x356170: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x356170u;
    {
        const bool branch_taken_0x356170 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x356170) {
            ctx->pc = 0x356174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356170u;
            // 0x356174: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x356178u;
            goto label_356178;
        }
    }
    ctx->pc = 0x356178u;
label_356178:
    // 0x356178: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x356178u;
    {
        const bool branch_taken_0x356178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356178) {
            ctx->pc = 0x35617Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356178u;
            // 0x35617c: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356190u;
            goto label_356190;
        }
    }
    ctx->pc = 0x356180u;
label_356180:
    // 0x356180: 0x25a20001  addiu       $v0, $t5, 0x1
    ctx->pc = 0x356180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x356184: 0xae0e000c  sw          $t6, 0xC($s0)
    ctx->pc = 0x356184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
    // 0x356188: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x356188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_35618c:
    // 0x35618c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x35618cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_356190:
    // 0x356190: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x356190u;
    {
        const bool branch_taken_0x356190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x356190) {
            ctx->pc = 0x356194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356190u;
            // 0x356194: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3561CCu;
            goto label_3561cc;
        }
    }
    ctx->pc = 0x356198u;
    // 0x356198: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x356198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x35619c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35619Cu;
    {
        const bool branch_taken_0x35619c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3561A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35619Cu;
        // 0x3561a0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35619c) {
            ctx->pc = 0x3561C8u;
            goto label_3561c8;
        }
    }
    ctx->pc = 0x3561A4u;
    // 0x3561a4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3561a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3561a8: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x3561a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x3561ac: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x3561acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x3561b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3561b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3561b4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x3561b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3561b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3561b8u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 3));
    // 0x3561bc: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x3561bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3561c0: 0xc0d5606  jal         func_355818
    ctx->pc = 0x3561C0u;
    SET_GPR_U32(ctx, 31, 0x3561C8u);
    ctx->pc = 0x3561C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3561C0u;
    // 0x3561c4: 0x34840100  ori         $a0, $a0, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x355818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355818u, 0x3561C0u, 0x3561C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3561C8u;
label_3561c8:
    // 0x3561c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3561c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3561cc:
    // 0x3561cc: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x3561ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_3561d0:
    // 0x3561d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3561d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3561d4: 0x0  nop
    ctx->pc = 0x3561d4u;
    // NOP
    // 0x3561d8: 0x0  nop
    ctx->pc = 0x3561d8u;
    // NOP
    // 0x3561dc: 0x0  nop
    ctx->pc = 0x3561dcu;
    // NOP
    // 0x3561e0: 0x0  nop
    ctx->pc = 0x3561e0u;
    // NOP
    // 0x3561e4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3561E4u;
    {
        const bool branch_taken_0x3561e4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3561E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3561E4u;
        // 0x3561e8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3561e4) {
            ctx->pc = 0x3561D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3561d0;
        }
    }
    ctx->pc = 0x3561ECu;
    // 0x3561ec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3561ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3561f0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3561f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3561f4: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x3561f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x3561f8: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x3561f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x3561fc: 0x0  nop
    ctx->pc = 0x3561fcu;
    // NOP
label_356200:
    // 0x356200: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x356200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x356204: 0x0  nop
    ctx->pc = 0x356204u;
    // NOP
    // 0x356208: 0x0  nop
    ctx->pc = 0x356208u;
    // NOP
    // 0x35620c: 0x0  nop
    ctx->pc = 0x35620cu;
    // NOP
    // 0x356210: 0x0  nop
    ctx->pc = 0x356210u;
    // NOP
    // 0x356214: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x356214u;
    {
        const bool branch_taken_0x356214 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x356218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356214u;
        // 0x356218: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356214) {
            ctx->pc = 0x356200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356200;
        }
    }
    ctx->pc = 0x35621Cu;
    // 0x35621c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35621cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x356220: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x356220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x356224: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x356224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x356228: 0x3463b430  ori         $v1, $v1, 0xB430
    ctx->pc = 0x356228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46128);
    // 0x35622c: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x35622cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x356230: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x356230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x356234: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x356234u;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 20));
    // 0x356238: 0xac950000  sw          $s5, 0x0($a0)
    ctx->pc = 0x356238u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 21));
    // 0x35623c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x35623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x356240: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x356240u;
    {
        const bool branch_taken_0x356240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356240) {
            ctx->pc = 0x356244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356240u;
            // 0x356244: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356254u;
            goto label_356254;
        }
    }
    ctx->pc = 0x356248u;
    // 0x356248: 0xc0d5620  jal         func_355880
    ctx->pc = 0x356248u;
    SET_GPR_U32(ctx, 31, 0x356250u);
    ctx->pc = 0x35624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356248u;
    // 0x35624c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355880u, 0x356248u, 0x356250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356250u;
label_356250:
    // 0x356250: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x356250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_356254:
    // 0x356254: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x356254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x356258: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x356258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x35625c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35625cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356260: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x356260u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2));
    // 0x356264: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x356264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x356268: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x356268u;
    SET_GPR_U32(ctx, 31, 0x356270u);
    ctx->pc = 0x35626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356268u;
    // 0x35626c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x356268u, 0x356270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356270u;
label_356270:
    // 0x356270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x356274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356278: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x356278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35627c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35627cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356280: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x356280u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x356284: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x356284u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x356288: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x356288u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35628c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x35628cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x356290: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x356290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x356294: 0x3e00008  jr          $ra
    ctx->pc = 0x356294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356294u;
        // 0x356298: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35629Cu;
    // 0x35629c: 0x0  nop
    ctx->pc = 0x35629cu;
    // NOP
    ctx->pc = 0x3562a0u;
}
