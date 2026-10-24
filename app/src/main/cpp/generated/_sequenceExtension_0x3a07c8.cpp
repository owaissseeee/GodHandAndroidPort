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

// Function: _sequenceExtension
// Address: 0x3a07c8 - 0x3a0908
void _sequenceExtension_0x3a07c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sequenceExtension_0x3a07c8");
#endif

    switch (ctx->pc) {
        case 0x3a0818u: goto label_3a0818;
        case 0x3a0854u: goto label_3a0854;
        case 0x3a0870u: goto label_3a0870;
        case 0x3a089cu: goto label_3a089c;
        default: break;
    }

    ctx->pc = 0x3a07c8u;

    // 0x3a07c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a07c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3a07cc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3a07ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3a07d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3a07d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3a07d4: 0x34c62010  ori         $a2, $a2, 0x2010
    ctx->pc = 0x3a07d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8208);
    // 0x3a07d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a07d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a07dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a07dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a07e0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3a07e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3a07e4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3a07e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a07e8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3a07e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3a07ec: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x3a07ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x3a07f0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3a07f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3a07f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a07f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a07f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3a07f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3a07fc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3a07fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3a0800: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x3a0800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3a0804: 0xae300858  sw          $s0, 0x858($s1)
    ctx->pc = 0x3a0804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2136), GPR_U32(ctx, 16));
    // 0x3a0808: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3a0808u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x3a080c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a080cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a0810: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0810u;
    SET_GPR_U32(ctx, 31, 0x3A0818u);
    ctx->pc = 0x3A0814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0810u;
    // 0x3a0814: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0810u, 0x3A0818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0818u;
label_3a0818:
    // 0x3a0818: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a0818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a081c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x3a081cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x3a0820: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x3a0820u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x3a0824: 0x30750fff  andi        $s5, $v1, 0xFFF
    ctx->pc = 0x3a0824u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3a0828: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3a0828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3a082c: 0x122342  srl         $a0, $s2, 13
    ctx->pc = 0x3a082cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 13));
    // 0x3a0830: 0x121bc2  srl         $v1, $s2, 15
    ctx->pc = 0x3a0830u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 15));
    // 0x3a0834: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x3a0834u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x3a0838: 0x30730003  andi        $s3, $v1, 0x3
    ctx->pc = 0x3a0838u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3a083c: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A083Cu;
    {
        const bool branch_taken_0x3a083c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3A0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A083Cu;
        // 0x3a0840: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a083c) {
            ctx->pc = 0x3A0854u;
            goto label_3a0854;
        }
    }
    ctx->pc = 0x3A0844u;
    // 0x3a0844: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3a0844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3a0848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a0848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a084c: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x3A084Cu;
    SET_GPR_U32(ctx, 31, 0x3A0854u);
    ctx->pc = 0x3A0850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A084Cu;
    // 0x3a0850: 0x24a5e810  addiu       $a1, $a1, -0x17F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x3A084Cu, 0x3A0854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0854u;
label_3a0854:
    // 0x3a0854: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x3a0854u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
    // 0x3a0858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a0858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a085c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a085cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a0860: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3a0860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a0864: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x3a0864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
    // 0x3a0868: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x3A0868u;
    SET_GPR_U32(ctx, 31, 0x3A0870u);
    ctx->pc = 0x3A086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0868u;
    // 0x3a086c: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x3A0868u, 0x3A0870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0870u;
label_3a0870:
    // 0x3a0870: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x3a0870u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3a0874: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x3a0874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3a0878: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A0878u;
    {
        const bool branch_taken_0x3a0878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0878u;
        // 0x3a087c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0878) {
            ctx->pc = 0x3A089Cu;
            goto label_3a089c;
        }
    }
    ctx->pc = 0x3A0880u;
    // 0x3a0880: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A0880u;
    {
        const bool branch_taken_0x3a0880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A0884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0880u;
        // 0x3a0884: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0880) {
            ctx->pc = 0x3A089Cu;
            goto label_3a089c;
        }
    }
    ctx->pc = 0x3A0888u;
    // 0x3a0888: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A0888u;
    {
        const bool branch_taken_0x3a0888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0888u;
        // 0x3a088c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0888) {
            ctx->pc = 0x3A089Cu;
            goto label_3a089c;
        }
    }
    ctx->pc = 0x3A0890u;
    // 0x3a0890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a0890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0894: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x3A0894u;
    SET_GPR_U32(ctx, 31, 0x3A089Cu);
    ctx->pc = 0x3A0898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0894u;
    // 0x3a0898: 0x24a5e838  addiu       $a1, $a1, -0x17C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x3A0894u, 0x3A089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A089Cu;
label_3a089c:
    // 0x3a089c: 0x8e240134  lw          $a0, 0x134($s1)
    ctx->pc = 0x3a089cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x3a08a0: 0x154480  sll         $t0, $s5, 18
    ctx->pc = 0x3a08a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 18));
    // 0x3a08a4: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x3a08a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x3a08a8: 0x124a80  sll         $t1, $s2, 10
    ctx->pc = 0x3a08a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x3a08ac: 0x8e260144  lw          $a2, 0x144($s1)
    ctx->pc = 0x3a08acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x3a08b0: 0x133b00  sll         $a3, $s3, 12
    ctx->pc = 0x3a08b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x3a08b4: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x3a08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x3a08b8: 0x142b00  sll         $a1, $s4, 12
    ctx->pc = 0x3a08b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
    // 0x3a08bc: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x3a08bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x3a08c0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3a08c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3a08c4: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x3a08c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x3a08c8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3a08c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3a08cc: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x3a08ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3a08d0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3a08d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3a08d4: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x3a08d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x3a08d8: 0xae270134  sw          $a3, 0x134($s1)
    ctx->pc = 0x3a08d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 7));
    // 0x3a08dc: 0xae250138  sw          $a1, 0x138($s1)
    ctx->pc = 0x3a08dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 5));
    // 0x3a08e0: 0xae260144  sw          $a2, 0x144($s1)
    ctx->pc = 0x3a08e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 6));
    // 0x3a08e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3a08e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a08e8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3a08e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a08ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3a08ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a08f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3a08f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a08f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3a08f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a08f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3a08f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a08fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a08fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0900: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0900u;
        // 0x3a0904: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0908u;
}
