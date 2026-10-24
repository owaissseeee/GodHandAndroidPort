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

// Function: func_0033C548
// Address: 0x33c548 - 0x33c708
void func_0033C548_0x33c548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033C548_0x33c548");
#endif

    switch (ctx->pc) {
        case 0x33c58cu: goto label_33c58c;
        case 0x33c5c0u: goto label_33c5c0;
        case 0x33c620u: goto label_33c620;
        case 0x33c680u: goto label_33c680;
        default: break;
    }

    ctx->pc = 0x33c548u;

    // 0x33c548: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33c548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x33c54c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33c54cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33c550: 0x8c439d3c  lw          $v1, -0x62C4($v0)
    ctx->pc = 0x33c550u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E9D3Cu));
    // 0x33c554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33c558: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33c558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c55c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33c55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33c560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33c560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c564: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33c564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33c568: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33c568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c56c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33c56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33c570: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x33c570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c574: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33c574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x33c578: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x33c578u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c57c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33C57Cu;
    {
        const bool branch_taken_0x33c57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C57Cu;
        // 0x33c580: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c57c) {
            ctx->pc = 0x33C58Cu;
            goto label_33c58c;
        }
    }
    ctx->pc = 0x33C584u;
    // 0x33c584: 0xc0cf148  jal         func_33C520
    ctx->pc = 0x33C584u;
    SET_GPR_U32(ctx, 31, 0x33C58Cu);
    ctx->pc = 0x33C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C520u, 0x33C584u, 0x33C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C58Cu;
label_33c58c:
    // 0x33c58c: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x33c58cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x33c590: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x33c590u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x33c594: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33C594u;
    {
        const bool branch_taken_0x33c594 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C594u;
        // 0x33c598: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c594) {
            ctx->pc = 0x33C5A4u;
            goto label_33c5a4;
        }
    }
    ctx->pc = 0x33C59Cu;
    // 0x33c59c: 0x1a00004f  blez        $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x33C59Cu;
    {
        const bool branch_taken_0x33c59c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x33C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C59Cu;
        // 0x33c5a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c59c) {
            ctx->pc = 0x33C6DCu;
            goto label_33c6dc;
        }
    }
    ctx->pc = 0x33C5A4u;
label_33c5a4:
    // 0x33c5a4: 0x3c0b0045  lui         $t3, 0x45
    ctx->pc = 0x33c5a4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)69 << 16));
    // 0x33c5a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33c5a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c5ac: 0x25626080  addiu       $v0, $t3, 0x6080
    ctx->pc = 0x33c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 24704));
    // 0x33c5b0: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x33C5B0u;
    {
        const bool branch_taken_0x33c5b0 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x33C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C5B0u;
        // 0x33c5b4: 0x844a0200  lh          $t2, 0x200($v0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c5b0) {
            ctx->pc = 0x33C614u;
            goto label_33c614;
        }
    }
    ctx->pc = 0x33C5B8u;
    // 0x33c5b8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x33c5b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c5bc: 0x0  nop
    ctx->pc = 0x33c5bcu;
    // NOP
label_33c5c0:
    // 0x33c5c0: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x33c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x33c5c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x33c5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x33c5c8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x33c5c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33c5cc: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x33c5ccu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x33c5d0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33c5d4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x33c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x33c5d8: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x33c5d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x33c5dc: 0x1431818  mult        $v1, $t2, $v1
    ctx->pc = 0x33c5dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33c5e0: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x33c5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x33c5e4: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x33c5e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x33c5e8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x33c5e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c5ec: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x33c5ecu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x33c5f0: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x33c5f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x33c5f4: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x33c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x33c5f8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x33c5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33c5fc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33c600: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x33c600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x33c604: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x33C604u;
    {
        const bool branch_taken_0x33c604 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C604u;
        // 0x33c608: 0x846a0000  lh          $t2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c604) {
            ctx->pc = 0x33C5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c5c0;
        }
    }
    ctx->pc = 0x33C60Cu;
    // 0x33c60c: 0x25626080  addiu       $v0, $t3, 0x6080
    ctx->pc = 0x33c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 24704));
    // 0x33c610: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33c610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33c614:
    // 0x33c614: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x33C614u;
    {
        const bool branch_taken_0x33c614 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x33C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C614u;
        // 0x33c618: 0x84480400  lh          $t0, 0x400($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c614) {
            ctx->pc = 0x33C66Cu;
            goto label_33c66c;
        }
    }
    ctx->pc = 0x33C61Cu;
    // 0x33c61c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x33c61cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33c620:
    // 0x33c620: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x33c620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x33c624: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x33c624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x33c628: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x33c628u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33c62c: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x33c62cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x33c630: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33c630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33c634: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x33c634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x33c638: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x33c638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x33c63c: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x33c63cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33c640: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x33c640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x33c644: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x33c644u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x33c648: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x33c648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c64c: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x33c64cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x33c650: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x33c650u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x33c654: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x33c654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x33c658: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x33c658u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33c65c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33c660: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x33c660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33c664: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x33C664u;
    {
        const bool branch_taken_0x33c664 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C664u;
        // 0x33c668: 0x84680000  lh          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c664) {
            ctx->pc = 0x33C620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c620;
        }
    }
    ctx->pc = 0x33C66Cu;
label_33c66c:
    // 0x33c66c: 0x25626080  addiu       $v0, $t3, 0x6080
    ctx->pc = 0x33c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 24704));
    // 0x33c670: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33c670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c674: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x33C674u;
    {
        const bool branch_taken_0x33c674 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x33C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C674u;
        // 0x33c678: 0x84440600  lh          $a0, 0x600($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c674) {
            ctx->pc = 0x33C6CCu;
            goto label_33c6cc;
        }
    }
    ctx->pc = 0x33C67Cu;
    // 0x33c67c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x33c67cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33c680:
    // 0x33c680: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x33c680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x33c684: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x33c684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x33c688: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x33c688u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33c68c: 0xf0302a  slt         $a2, $a3, $s0
    ctx->pc = 0x33c68cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x33c690: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33c690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33c694: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x33c694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x33c698: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x33c698u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x33c69c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x33c69cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33c6a0: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x33c6a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x33c6a4: 0x246503ff  addiu       $a1, $v1, 0x3FF
    ctx->pc = 0x33c6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x33c6a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x33c6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c6ac: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x33c6acu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x33c6b0: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x33c6b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x33c6b4: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x33c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x33c6b8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x33c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33c6bc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x33c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33c6c0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x33c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33c6c4: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x33C6C4u;
    {
        const bool branch_taken_0x33c6c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C6C4u;
        // 0x33c6c8: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c6c4) {
            ctx->pc = 0x33C680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c680;
        }
    }
    ctx->pc = 0x33C6CCu;
label_33c6cc:
    // 0x33c6cc: 0xa64a0000  sh          $t2, 0x0($s2)
    ctx->pc = 0x33c6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x33c6d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33c6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c6d4: 0xa6680000  sh          $t0, 0x0($s3)
    ctx->pc = 0x33c6d4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x33c6d8: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x33c6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
label_33c6dc:
    // 0x33c6dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c6dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c6e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c6e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33c6e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33c6e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c6e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33c6e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33c6ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33c6ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33c6f0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x33c6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33c6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x33C6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C6F4u;
        // 0x33c6f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C6FCu;
    // 0x33c6fc: 0x0  nop
    ctx->pc = 0x33c6fcu;
    // NOP
    // 0x33c700: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x33c700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33c704: 0x0  nop
    ctx->pc = 0x33c704u;
    // NOP
    ctx->pc = 0x33c708u;
}
