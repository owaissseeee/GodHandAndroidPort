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

// Function: sceGsSetDefDispEnv
// Address: 0x396570 - 0x3968e8
void sceGsSetDefDispEnv_0x396570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsSetDefDispEnv_0x396570");
#endif

    switch (ctx->pc) {
        case 0x3965c4u: goto label_3965c4;
        case 0x3965e4u: goto label_3965e4;
        case 0x396600u: goto label_396600;
        case 0x3968b8u: goto label_3968b8;
        default: break;
    }

    ctx->pc = 0x396570u;

    // 0x396570: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x396570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x396574: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x396574u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x396578: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x396578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x39657c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x39657cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x396580: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x396580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x396584: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x396584u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x396588: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x396588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x39658c: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x39658cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x396590: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x396590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x396594: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x396594u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x396598: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x396598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x39659c: 0x5b403  sra         $s6, $a1, 16
    ctx->pc = 0x39659cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 5), 16));
    // 0x3965a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3965a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3965a4: 0x79403  sra         $s2, $a3, 16
    ctx->pc = 0x3965a4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 7), 16));
    // 0x3965a8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3965a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3965ac: 0x68403  sra         $s0, $a2, 16
    ctx->pc = 0x3965acu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 16));
    // 0x3965b0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3965b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3965b4: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x3965b4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x3965b8: 0x9a403  sra         $s4, $t1, 16
    ctx->pc = 0x3965b8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 9), 16));
    // 0x3965bc: 0xc0e54e2  jal         func_395388
    ctx->pc = 0x3965BCu;
    SET_GPR_U32(ctx, 31, 0x3965C4u);
    ctx->pc = 0x3965C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3965BCu;
    // 0x3965c0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395388u, 0x3965BCu, 0x3965C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3965C4u;
label_3965c4:
    // 0x3965c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3965c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3965c8: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x3965c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3965cc: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x3965ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x3965d0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3965d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3965d4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3965D4u;
    {
        const bool branch_taken_0x3965d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3965d4) {
            ctx->pc = 0x3965D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3965D4u;
            // 0x3965d8: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396610u;
            goto label_396610;
        }
    }
    ctx->pc = 0x3965DCu;
    // 0x3965dc: 0xc0e5930  jal         func_3964C0
    ctx->pc = 0x3965DCu;
    SET_GPR_U32(ctx, 31, 0x3965E4u);
    ctx->pc = 0x3964C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3964C0u, 0x3965DCu, 0x3965E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3965E4u;
label_3965e4:
    // 0x3965e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3965E4u;
    {
        const bool branch_taken_0x3965e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3965E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3965E4u;
        // 0x3965e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3965e4) {
            ctx->pc = 0x396608u;
            goto label_396608;
        }
    }
    ctx->pc = 0x3965ECu;
    // 0x3965ec: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x3965ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3965f0: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x3965f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x3965f4: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x3965f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x3965f8: 0xc0e5958  jal         func_396560
    ctx->pc = 0x3965F8u;
    SET_GPR_U32(ctx, 31, 0x396600u);
    ctx->pc = 0x3965FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3965F8u;
    // 0x3965fc: 0x37a8000c  ori         $t0, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x396560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396560u, 0x3965F8u, 0x396600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396600u;
label_396600:
    // 0x396600: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x396600u;
    {
        const bool branch_taken_0x396600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396600u;
        // 0x396604: 0x96240002  lhu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396600) {
            ctx->pc = 0x39661Cu;
            goto label_39661c;
        }
    }
    ctx->pc = 0x396608u;
label_396608:
    // 0x396608: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x396608u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x39660c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x39660cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_396610:
    // 0x396610: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x396610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x396614: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x396614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x396618: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x396618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_39661c:
    // 0x39661c: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x39661cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x396620: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x396620u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x396624: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x396624u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x396628: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x396628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x39662c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39662Cu;
    {
        const bool branch_taken_0x39662c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39662Cu;
        // 0x396630: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39662c) {
            ctx->pc = 0x396644u;
            goto label_396644;
        }
    }
    ctx->pc = 0x396634u;
    // 0x396634: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x396634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x396638: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x396638u;
    {
        const bool branch_taken_0x396638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396638u;
        // 0x39663c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396638) {
            ctx->pc = 0x396644u;
            goto label_396644;
        }
    }
    ctx->pc = 0x396640u;
    // 0x396640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x396640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_396644:
    // 0x396644: 0xfe620008  sd          $v0, 0x8($s3)
    ctx->pc = 0x396644u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 2));
    // 0x396648: 0x2602003f  addiu       $v0, $s0, 0x3F
    ctx->pc = 0x396648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x39664c: 0x32c3000f  andi        $v1, $s6, 0xF
    ctx->pc = 0x39664cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x396650: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x396650u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x396654: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x396654u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x396658: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x396658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x39665c: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x39665cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x396660: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x396660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x396664: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x396664u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x396668: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x396668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39666c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x39666cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x396670: 0x14a4002b  bne         $a1, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x396670u;
    {
        const bool branch_taken_0x396670 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x396674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396670u;
        // 0x396674: 0xfe630010  sd          $v1, 0x10($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396670) {
            ctx->pc = 0x396720u;
            goto label_396720;
        }
    }
    ctx->pc = 0x396678u;
    // 0x396678: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x396678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x39667c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39667cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396680: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x396680u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x396684: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x396684u;
    {
        const bool branch_taken_0x396684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x396688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396684u;
        // 0x396688: 0x260209ff  addiu       $v0, $s0, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396684) {
            ctx->pc = 0x3966F4u;
            goto label_3966f4;
        }
    }
    ctx->pc = 0x39668Cu;
    // 0x39668c: 0x260309ff  addiu       $v1, $s0, 0x9FF
    ctx->pc = 0x39668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
    // 0x396690: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x396690u;
    {
        const bool branch_taken_0x396690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x396690) {
            ctx->pc = 0x396694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396690u;
            // 0x396694: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x396698u;
            goto label_396698;
        }
    }
    ctx->pc = 0x396698u;
label_396698:
    // 0x396698: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x396698u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39669c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39669cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3966a0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3966a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3966a4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3966a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3966a8: 0x86260004  lh          $a2, 0x4($s1)
    ctx->pc = 0x3966a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3966ac: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x3966acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x3966b0: 0x64a5027c  daddiu      $a1, $a1, 0x27C
    ctx->pc = 0x3966b0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)636);
    // 0x3966b4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3966b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3966b8: 0x23b38  dsll        $a3, $v0, 12
    ctx->pc = 0x3966b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 12);
    // 0x3966bc: 0x1812  mflo        $v1
    ctx->pc = 0x3966bcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3966c0: 0x702018  mult        $a0, $v1, $s0
    ctx->pc = 0x3966c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3966c4: 0x72a31018  mult1       $v0, $s5, $v1
    ctx->pc = 0x3966c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3966c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3966c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3966cc: 0x355f8  dsll        $t2, $v1, 23
    ctx->pc = 0x3966ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 23);
    // 0x3966d0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3966d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3966d4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3966d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3966d8: 0x45282d  daddu       $a1, $v0, $a1
    ctx->pc = 0x3966d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3966dc: 0x10c00032  beqz        $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x3966DCu;
    {
        const bool branch_taken_0x3966dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3966E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3966DCu;
        // 0x3966e0: 0x30a50fff  andi        $a1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3966dc) {
            ctx->pc = 0x3967A8u;
            goto label_3967a8;
        }
    }
    ctx->pc = 0x3966E4u;
    // 0x3966e4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x3966e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x3966e8: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x3966e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x3966ec: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3966ECu;
    {
        const bool branch_taken_0x3966ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3966F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3966ECu;
        // 0x3966f0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3966ec) {
            ctx->pc = 0x3967B0u;
            goto label_3967b0;
        }
    }
    ctx->pc = 0x3966F4u;
label_3966f4:
    // 0x3966f4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3966F4u;
    {
        const bool branch_taken_0x3966f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3966f4) {
            ctx->pc = 0x3966F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3966F4u;
            // 0x3966f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3966FCu;
            goto label_3966fc;
        }
    }
    ctx->pc = 0x3966FCu;
label_3966fc:
    // 0x3966fc: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x3966fcu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x396700: 0x2647ffff  addiu       $a3, $s2, -0x1
    ctx->pc = 0x396700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x396704: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x396704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396708: 0x73b3c  dsll32      $a3, $a3, 12
    ctx->pc = 0x396708u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
    // 0x39670c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x39670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x396710: 0x64a5027c  daddiu      $a1, $a1, 0x27C
    ctx->pc = 0x396710u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)636);
    // 0x396714: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x396714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x396718: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x396718u;
    {
        const bool branch_taken_0x396718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396718u;
        // 0x39671c: 0x24630019  addiu       $v1, $v1, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396718) {
            ctx->pc = 0x3967F0u;
            goto label_3967f0;
        }
    }
    ctx->pc = 0x396720u;
label_396720:
    // 0x396720: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x396720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x396724: 0x14a20043  bne         $a1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x396724u;
    {
        const bool branch_taken_0x396724 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x396728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396724u;
        // 0x396728: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396724) {
            ctx->pc = 0x396834u;
            goto label_396834;
        }
    }
    ctx->pc = 0x39672Cu;
    // 0x39672c: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x39672cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x396730: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x396730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396734: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x396734u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x396738: 0x14430023  bne         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x396738u;
    {
        const bool branch_taken_0x396738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x39673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396738u;
        // 0x39673c: 0x260209ff  addiu       $v0, $s0, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396738) {
            ctx->pc = 0x3967C8u;
            goto label_3967c8;
        }
    }
    ctx->pc = 0x396740u;
    // 0x396740: 0x260309ff  addiu       $v1, $s0, 0x9FF
    ctx->pc = 0x396740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
    // 0x396744: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x396744u;
    {
        const bool branch_taken_0x396744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x396744) {
            ctx->pc = 0x396748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396744u;
            // 0x396748: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39674Cu;
            goto label_39674c;
        }
    }
    ctx->pc = 0x39674Cu;
label_39674c:
    // 0x39674c: 0x70001a  div         $zero, $v1, $s0
    ctx->pc = 0x39674cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x396750: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x396750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x396754: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x396754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396758: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x396758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x39675c: 0x86260004  lh          $a2, 0x4($s1)
    ctx->pc = 0x39675cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x396760: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x396760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x396764: 0x64a50290  daddiu      $a1, $a1, 0x290
    ctx->pc = 0x396764u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)656);
    // 0x396768: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x396768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x39676c: 0x23b38  dsll        $a3, $v0, 12
    ctx->pc = 0x39676cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 12);
    // 0x396770: 0x1812  mflo        $v1
    ctx->pc = 0x396770u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x396774: 0x702018  mult        $a0, $v1, $s0
    ctx->pc = 0x396774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x396778: 0x72a31018  mult1       $v0, $s5, $v1
    ctx->pc = 0x396778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39677c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x39677cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x396780: 0x355f8  dsll        $t2, $v1, 23
    ctx->pc = 0x396780u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 23);
    // 0x396784: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x396784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x396788: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x396788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x39678c: 0x45282d  daddu       $a1, $v0, $a1
    ctx->pc = 0x39678cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x396790: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x396790u;
    {
        const bool branch_taken_0x396790 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x396794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396790u;
        // 0x396794: 0x30a50fff  andi        $a1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x396790) {
            ctx->pc = 0x3967A8u;
            goto label_3967a8;
        }
    }
    ctx->pc = 0x396798u;
    // 0x396798: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x396798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x39679c: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x39679cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x3967a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3967A0u;
    {
        const bool branch_taken_0x3967a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3967A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3967A0u;
        // 0x3967a4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3967a0) {
            ctx->pc = 0x3967B0u;
            goto label_3967b0;
        }
    }
    ctx->pc = 0x3967A8u;
label_3967a8:
    // 0x3967a8: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x3967a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3967ac: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x3967acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
label_3967b0:
    // 0x3967b0: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x3967b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x3967b4: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x3967b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3967b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3967b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3967bc: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x3967bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x3967c0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3967C0u;
    {
        const bool branch_taken_0x3967c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3967C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3967C0u;
        // 0x3967c4: 0xfe620018  sd          $v0, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3967c0) {
            ctx->pc = 0x3968B8u;
            goto label_3968b8;
        }
    }
    ctx->pc = 0x3967C8u;
label_3967c8:
    // 0x3967c8: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3967C8u;
    {
        const bool branch_taken_0x3967c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3967c8) {
            ctx->pc = 0x3967CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3967C8u;
            // 0x3967cc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3967D0u;
            goto label_3967d0;
        }
    }
    ctx->pc = 0x3967D0u;
label_3967d0:
    // 0x3967d0: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x3967d0u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3967d4: 0x2647ffff  addiu       $a3, $s2, -0x1
    ctx->pc = 0x3967d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3967d8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3967d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3967dc: 0x73b3c  dsll32      $a3, $a3, 12
    ctx->pc = 0x3967dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
    // 0x3967e0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3967e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3967e4: 0x64a50290  daddiu      $a1, $a1, 0x290
    ctx->pc = 0x3967e4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)656);
    // 0x3967e8: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x3967e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x3967ec: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x3967ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
label_3967f0:
    // 0x3967f0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3967f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3967f4: 0x31b38  dsll        $v1, $v1, 12
    ctx->pc = 0x3967f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 12);
    // 0x3967f8: 0x1012  mflo        $v0
    ctx->pc = 0x3967f8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3967fc: 0x2a23018  mult        $a2, $s5, $v0
    ctx->pc = 0x3967fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x396800: 0x70502018  mult1       $a0, $v0, $s0
    ctx->pc = 0x396800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x396804: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x396804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x396808: 0xc5282d  daddu       $a1, $a2, $a1
    ctx->pc = 0x396808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 5));
    // 0x39680c: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x39680cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x396810: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x396810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x396814: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x396814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x396818: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x396818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x39681c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x39681cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x396820: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x396820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x396824: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x396824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x396828: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x396828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x39682c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x39682Cu;
    {
        const bool branch_taken_0x39682c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39682Cu;
        // 0x396830: 0xfe620018  sd          $v0, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39682c) {
            ctx->pc = 0x3968B8u;
            goto label_3968b8;
        }
    }
    ctx->pc = 0x396834u;
label_396834:
    // 0x396834: 0x14a2001e  bne         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x396834u;
    {
        const bool branch_taken_0x396834 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x396838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396834u;
        // 0x396838: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396834) {
            ctx->pc = 0x3968B0u;
            goto label_3968b0;
        }
    }
    ctx->pc = 0x39683Cu;
    // 0x39683c: 0x240202d0  addiu       $v0, $zero, 0x2D0
    ctx->pc = 0x39683cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
    // 0x396840: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x396840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396844: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x396844u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x396848: 0x153040  sll         $a2, $s5, 1
    ctx->pc = 0x396848u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x39684c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x39684cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x396850: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x396850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x396854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x396854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x396858: 0x64c700e8  daddiu      $a3, $a2, 0xE8
    ctx->pc = 0x396858u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)232);
    // 0x39685c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x39685cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x396860: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x396860u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x396864: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x396864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x396868: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x396868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x39686c: 0x45282d  daddu       $a1, $v0, $a1
    ctx->pc = 0x39686cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x396870: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x396870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x396874: 0xa7282d  daddu       $a1, $a1, $a3
    ctx->pc = 0x396874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 7));
    // 0x396878: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x396878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x39687c: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x39687cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x396880: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x396880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x396884: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x396884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x396888: 0x24840023  addiu       $a0, $a0, 0x23
    ctx->pc = 0x396888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 35));
    // 0x39688c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x39688cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x396890: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x396890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x396894: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x396894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x396898: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x396898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x39689c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x39689cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3968a0: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x3968a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x3968a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3968a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3968a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3968A8u;
    {
        const bool branch_taken_0x3968a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3968ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3968A8u;
        // 0x3968ac: 0xfe630018  sd          $v1, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3968a8) {
            ctx->pc = 0x3968B8u;
            goto label_3968b8;
        }
    }
    ctx->pc = 0x3968B0u;
label_3968b0:
    // 0x3968b0: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x3968B0u;
    SET_GPR_U32(ctx, 31, 0x3968B8u);
    ctx->pc = 0x3968B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3968B0u;
    // 0x3968b4: 0x2484df60  addiu       $a0, $a0, -0x20A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x3968B0u, 0x3968B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3968B8u;
label_3968b8:
    // 0x3968b8: 0xfe600020  sd          $zero, 0x20($s3)
    ctx->pc = 0x3968b8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 0));
    // 0x3968bc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3968bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3968c0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x3968c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3968c4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x3968c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3968c8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3968c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3968cc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x3968ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3968d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3968d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3968d4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3968d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3968d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3968d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3968dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3968DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3968E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3968DCu;
        // 0x3968e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3968DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3968E4u;
    // 0x3968e4: 0x0  nop
    ctx->pc = 0x3968e4u;
    // NOP
    ctx->pc = 0x3968e8u;
}
