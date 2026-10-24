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

// Function: func_003356B0
// Address: 0x3356b0 - 0x335848
void func_003356B0_0x3356b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003356B0_0x3356b0");
#endif

    switch (ctx->pc) {
        case 0x3356f8u: goto label_3356f8;
        case 0x335724u: goto label_335724;
        case 0x335790u: goto label_335790;
        case 0x3357a0u: goto label_3357a0;
        default: break;
    }

    ctx->pc = 0x3356b0u;

    // 0x3356b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3356b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3356b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3356b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3356b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3356b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3356bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3356bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3356c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3356c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3356c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3356c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3356c8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3356c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3356cc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3356ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3356d0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3356d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3356d4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3356d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3356d8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3356d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3356dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3356dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3356e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3356e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3356e4: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3356E4u;
    {
        const bool branch_taken_0x3356e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3356E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356E4u;
        // 0x3356e8: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3356e4) {
            ctx->pc = 0x335700u;
            goto label_335700;
        }
    }
    ctx->pc = 0x3356ECu;
    // 0x3356ec: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3356ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3356f0: 0xc0cd750  jal         func_335D40
    ctx->pc = 0x3356F0u;
    SET_GPR_U32(ctx, 31, 0x3356F8u);
    ctx->pc = 0x3356F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3356F0u;
    // 0x3356f4: 0x24844c18  addiu       $a0, $a0, 0x4C18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x3356F0u, 0x3356F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3356F8u;
label_3356f8:
    // 0x3356f8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3356F8u;
    {
        const bool branch_taken_0x3356f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3356FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356F8u;
        // 0x3356fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3356f8) {
            ctx->pc = 0x335820u;
            goto label_335820;
        }
    }
    ctx->pc = 0x335700u;
label_335700:
    // 0x335700: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x335700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x335704: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x335704u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x335708: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x335708u;
    {
        const bool branch_taken_0x335708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335708u;
        // 0x33570c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335708) {
            ctx->pc = 0x335820u;
            goto label_335820;
        }
    }
    ctx->pc = 0x335710u;
    // 0x335710: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x335710u;
    {
        const bool branch_taken_0x335710 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x335710) {
            ctx->pc = 0x335714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335710u;
            // 0x335714: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335730u;
            goto label_335730;
        }
    }
    ctx->pc = 0x335718u;
    // 0x335718: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x335718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33571c: 0xc0cd750  jal         func_335D40
    ctx->pc = 0x33571Cu;
    SET_GPR_U32(ctx, 31, 0x335724u);
    ctx->pc = 0x335720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33571Cu;
    // 0x335720: 0x24844c48  addiu       $a0, $a0, 0x4C48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x33571Cu, 0x335724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335724u;
label_335724:
    // 0x335724: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x335724u;
    {
        const bool branch_taken_0x335724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335724u;
        // 0x335728: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335724) {
            ctx->pc = 0x335820u;
            goto label_335820;
        }
    }
    ctx->pc = 0x33572Cu;
    // 0x33572c: 0x0  nop
    ctx->pc = 0x33572cu;
    // NOP
label_335730:
    // 0x335730: 0x3c087fff  lui         $t0, 0x7FFF
    ctx->pc = 0x335730u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32767 << 16));
    // 0x335734: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x335734u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x335738: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x335738u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33573c: 0x2466000f  addiu       $a2, $v1, 0xF
    ctx->pc = 0x33573cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x335740: 0x2467001e  addiu       $a3, $v1, 0x1E
    ctx->pc = 0x335740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x335744: 0x28c50000  slti        $a1, $a2, 0x0
    ctx->pc = 0x335744u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x335748: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x335748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33574c: 0xe5100b  movn        $v0, $a3, $a1
    ctx->pc = 0x33574cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x335750: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x335750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x335754: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x335754u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x335758: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x335758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x33575c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33575cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x335760: 0x24700038  addiu       $s0, $v1, 0x38
    ctx->pc = 0x335760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x335764: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x335764u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x335768: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x335768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x33576c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x33576cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x335770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x335770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335774: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x335774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x335778: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x335778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x33577c: 0x684026  xor         $t0, $v1, $t0
    ctx->pc = 0x33577cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x335780: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x335780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x335784: 0x68980b  movn        $s3, $v1, $t0
    ctx->pc = 0x335784u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x335788: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x335788u;
    SET_GPR_U32(ctx, 31, 0x335790u);
    ctx->pc = 0x33578Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335788u;
    // 0x33578c: 0xae130000  sw          $s3, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x335788u, 0x335790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335790u;
label_335790:
    // 0x335790: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x335790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x335794: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x335794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335798: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x335798u;
    {
        const bool branch_taken_0x335798 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x33579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335798u;
        // 0x33579c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335798) {
            ctx->pc = 0x3357C0u;
            goto label_3357c0;
        }
    }
    ctx->pc = 0x3357A0u;
label_3357a0:
    // 0x3357a0: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x3357a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x3357a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3357a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3357a8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3357a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3357ac: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x3357acu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3357b0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3357b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3357b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3357b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3357b8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3357B8u;
    {
        const bool branch_taken_0x3357b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3357BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3357B8u;
        // 0x3357bc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3357b8) {
            ctx->pc = 0x3357A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3357a0;
        }
    }
    ctx->pc = 0x3357C0u;
label_3357c0:
    // 0x3357c0: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x3357c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x3357c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3357c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3357c8: 0xae150014  sw          $s5, 0x14($s0)
    ctx->pc = 0x3357c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 21));
    // 0x3357cc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3357ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x3357d0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3357d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x3357d4: 0xae16000c  sw          $s6, 0xC($s0)
    ctx->pc = 0x3357d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
    // 0x3357d8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x3357d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3357dc: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x3357dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3357e0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x3357e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3357e4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3357e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3357e8: 0x28850000  slti        $a1, $a0, 0x0
    ctx->pc = 0x3357e8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3357ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3357ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3357f0: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x3357f0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x3357f4: 0x82270001  lb          $a3, 0x1($s1)
    ctx->pc = 0x3357f4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3357f8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3357f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3357fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3357fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x335800: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x335800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x335804: 0xae260024  sw          $a2, 0x24($s1)
    ctx->pc = 0x335804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
    // 0x335808: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x335808u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33580c: 0x14e80003  bne         $a3, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33580Cu;
    {
        const bool branch_taken_0x33580c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x335810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33580Cu;
        // 0x335810: 0xae24001c  sw          $a0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33580c) {
            ctx->pc = 0x33581Cu;
            goto label_33581c;
        }
    }
    ctx->pc = 0x335814u;
    // 0x335814: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x335814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x335818: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x335818u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_33581c:
    // 0x33581c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x33581cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_335820:
    // 0x335820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335828: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x335828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33582c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33582cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x335830: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x335830u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335834: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x335834u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x335838: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x335838u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33583c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x33583cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x335840: 0x3e00008  jr          $ra
    ctx->pc = 0x335840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335840u;
        // 0x335844: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335848u;
}
