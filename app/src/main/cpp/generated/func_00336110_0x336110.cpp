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

// Function: func_00336110
// Address: 0x336110 - 0x336218
void func_00336110_0x336110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00336110_0x336110");
#endif

    switch (ctx->pc) {
        case 0x3361c0u: goto label_3361c0;
        case 0x3361f0u: goto label_3361f0;
        default: break;
    }

    ctx->pc = 0x336110u;

    // 0x336110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x336110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x336114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x336118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x336118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33611c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33611cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x336120: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x336120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336124: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x336124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x336128: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x336128u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33612c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33612cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x336130: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x336130u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336134: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x336134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x336138: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x336138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33613c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33613cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x336140: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x336140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x336144: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x336144u;
    {
        const bool branch_taken_0x336144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336144u;
        // 0x336148: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336144) {
            ctx->pc = 0x3361F0u;
            goto label_3361f0;
        }
    }
    ctx->pc = 0x33614Cu;
    // 0x33614c: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x33614cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x336150: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x336150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336154: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x336154u;
    {
        const bool branch_taken_0x336154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x336158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336154u;
        // 0x336158: 0x92070003  lbu         $a3, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336154) {
            ctx->pc = 0x336180u;
            goto label_336180;
        }
    }
    ctx->pc = 0x33615Cu;
    // 0x33615c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x33615cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x336160: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x336160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x336164: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x336164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x336168: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x336168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x33616c: 0x8c550014  lw          $s5, 0x14($v0)
    ctx->pc = 0x33616cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x336170: 0x8c540010  lw          $s4, 0x10($v0)
    ctx->pc = 0x336170u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x336174: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x336174u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x336178: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x336178u;
    {
        const bool branch_taken_0x336178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336178u;
        // 0x33617c: 0x8c52000c  lw          $s2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336178) {
            ctx->pc = 0x336184u;
            goto label_336184;
        }
    }
    ctx->pc = 0x336180u;
label_336180:
    // 0x336180: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x336180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_336184:
    // 0x336184: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x336184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x336188: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x336188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x33618c: 0x28850000  slti        $a1, $a0, 0x0
    ctx->pc = 0x33618cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x336190: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x336190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336194: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x336194u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x336198: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x336198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x33619c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x33619cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3361a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3361a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3361a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3361a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3361a8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x3361a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3361ac: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x3361acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x3361b0: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3361B0u;
    {
        const bool branch_taken_0x3361b0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3361B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361B0u;
        // 0x3361b4: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3361b0) {
            ctx->pc = 0x3361C8u;
            goto label_3361c8;
        }
    }
    ctx->pc = 0x3361B8u;
    // 0x3361b8: 0xc0cd70c  jal         func_335C30
    ctx->pc = 0x3361B8u;
    SET_GPR_U32(ctx, 31, 0x3361C0u);
    ctx->pc = 0x335C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335C30u, 0x3361B8u, 0x3361C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3361C0u;
label_3361c0:
    // 0x3361c0: 0xa2110001  sb          $s1, 0x1($s0)
    ctx->pc = 0x3361c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x3361c4: 0x92070003  lbu         $a3, 0x3($s0)
    ctx->pc = 0x3361c4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_3361c8:
    // 0x3361c8: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x3361c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x3361cc: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3361ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3361d0: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3361D0u;
    {
        const bool branch_taken_0x3361d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x3361d0) {
            ctx->pc = 0x3361D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3361D0u;
            // 0x3361d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3361F4u;
            goto label_3361f4;
        }
    }
    ctx->pc = 0x3361D8u;
    // 0x3361d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3361d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3361dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3361dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3361e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3361e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3361e4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3361e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3361e8: 0xc0cd58e  jal         func_335638
    ctx->pc = 0x3361E8u;
    SET_GPR_U32(ctx, 31, 0x3361F0u);
    ctx->pc = 0x3361ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3361E8u;
    // 0x3361ec: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335638u, 0x3361E8u, 0x3361F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3361F0u;
label_3361f0:
    // 0x3361f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3361f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3361f4:
    // 0x3361f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3361f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3361f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3361f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3361fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3361fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x336200: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x336200u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336204: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x336204u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x336208: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x336208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33620c: 0x3e00008  jr          $ra
    ctx->pc = 0x33620Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33620Cu;
        // 0x336210: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33620Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336214u;
    // 0x336214: 0x0  nop
    ctx->pc = 0x336214u;
    // NOP
    ctx->pc = 0x336218u;
}
