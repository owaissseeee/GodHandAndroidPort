#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: overWriteChoise__7cMcSave
// Address: 0x7c5830 - 0x7c5aa0
void overWriteChoise__7cMcSave_0x7c5830(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("overWriteChoise__7cMcSave_0x7c5830");
#endif

    if (__builtin_expect(ctx->pc != 0x7c5830u, 0)) {
        switch (ctx->pc) {
            case 0x7c5878u: goto label_7c5878;
            case 0x7c5898u: goto label_7c5898;
            case 0x7c58a8u: goto label_7c58a8;
            case 0x7c58c8u: goto label_7c58c8;
            case 0x7c58e4u: goto label_7c58e4;
            case 0x7c590cu: goto label_7c590c;
            case 0x7c5938u: goto label_7c5938;
            case 0x7c5970u: goto label_7c5970;
            case 0x7c59c4u: goto label_7c59c4;
            case 0x7c5a18u: goto label_7c5a18;
            case 0x7c5a40u: goto label_7c5a40;
            case 0x7c5a7cu: goto label_7c5a7c;
            default: break;
        }
    }



    // 0x7c5830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7c5834: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7c5834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7c5838: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7c5838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7c583c: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5840: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c5840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c5844: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c5844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c5848: 0x2c620005  sltiu       $v0, $v1, 0x5
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x7c584c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x7C584Cu;
    {
        const bool branch_taken_0x7c584c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C584Cu;
        // 0x7c5850: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c584c) {
            ctx->pc = 0x7C5988u;
            goto label_7c5988;
        }
    }
    // 0x7c5854: 0x31880  sll         $v1, $v1, 2
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c5858: 0x24420c80  addiu       $v0, $v0, 0xC80
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3200));
    // 0x7c585c: 0x621821  addu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7c5860: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7c5860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c5864: 0x800008  jr          $a0
    ctx->pc = 0x7C5864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x7C5868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5864u;
        // 0x7c5868: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7C586Cu: goto label_7c586c;
            case 0x7C5888u: goto label_7c5888;
            case 0x7C58BCu: goto label_7c58bc;
            case 0x7C58FCu: goto label_7c58fc;
            case 0x7C5928u: goto label_7c5928;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C5864u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_7c586c:
    // 0x7c586c: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5870: 0xc1f1eb8  jal         func_7C7AE0
    SET_GPR_U32(ctx, 31, 0x7C5878u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5870u;
    // 0x7c5874: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C5870u, 0x7C5878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c5878:
    // 0x7c5878: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c587c: 0xae300078  sw          $s0, 0x78($s1)
    ctx->pc = 0x7c587cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
    // 0x7c5880: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c5880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
    // 0x7c5884: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x7c5884u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_7c5888:
    // 0x7c5888: 0x3c10007d  lui         $s0, 0x7D
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    // 0x7c588c: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5890: 0xc1f0e34  jal         func_7C38D0
    SET_GPR_U32(ctx, 31, 0x7C5898u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5890u;
    // 0x7c5894: 0x26041740  addiu       $a0, $s0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C38D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C38D0u, 0x7C5890u, 0x7C5898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c5898:
    // 0x7c5898: 0x40282d  daddu       $a1, $v0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c589c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c589cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c58a0: 0xc1f1b78  jal         func_7C6DE0
    SET_GPR_U32(ctx, 31, 0x7C58A8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C58A0u;
    // 0x7c58a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C58A0u, 0x7C58A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c58a8:
    // 0x7c58a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C58A8u;
    {
        const bool branch_taken_0x7c58a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C58ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C58A8u;
        // 0x7c58ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c58a8) {
            ctx->pc = 0x7C58B8u;
            goto label_7c58b8;
        }
    }
    // 0x7c58b0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x7C58B0u;
    {
        const bool branch_taken_0x7c58b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C58B0u;
        // 0x7c58b4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c58b0) {
            ctx->pc = 0x7C5978u;
            goto label_7c5978;
        }
    }
label_7c58b8:
    // 0x7c58b8: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x7c58b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_7c58bc:
    // 0x7c58bc: 0x26041740  addiu       $a0, $s0, 0x1740
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x7c58c0: 0xc1f0c92  jal         func_7C3248
    SET_GPR_U32(ctx, 31, 0x7C58C8u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C58C0u;
    // 0x7c58c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C58C0u, 0x7C58C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c58c8:
    // 0x7c58c8: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c58cc: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c58d0: 0x1602002e  bne         $s0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x7C58D0u;
    {
        const bool branch_taken_0x7c58d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C58D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C58D0u;
        // 0x7c58d4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c58d0) {
            ctx->pc = 0x7C598Cu;
            goto label_7c598c;
        }
    }
    // 0x7c58d8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c58d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c58dc: 0xc1f1b8e  jal         func_7C6E38
    SET_GPR_U32(ctx, 31, 0x7C58E4u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C58DCu;
    // 0x7c58e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6E38u, 0x7C58DCu, 0x7C58E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c58e4:
    // 0x7c58e4: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C58E4u;
    {
        const bool branch_taken_0x7c58e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x7c58e4) {
            ctx->pc = 0x7C58E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C58E4u;
            // 0x7c58e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C58F4u;
            goto label_7c58f4;
        }
    }
    // 0x7c58ec: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x7C58ECu;
    {
        const bool branch_taken_0x7c58ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C58ECu;
        // 0x7c58f0: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c58ec) {
            ctx->pc = 0x7C5988u;
            goto label_7c5988;
        }
    }
label_7c58f4:
    // 0x7c58f4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x7C58F4u;
    {
        const bool branch_taken_0x7c58f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C58F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C58F4u;
        // 0x7c58f8: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c58f4) {
            ctx->pc = 0x7C5A88u;
            goto label_7c5a88;
        }
    }
label_7c58fc:
    // 0x7c58fc: 0x3c04007d  lui         $a0, 0x7D
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c5900: 0x3a0282d  daddu       $a1, $sp, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5904: 0xc1f0c92  jal         func_7C3248
    SET_GPR_U32(ctx, 31, 0x7C590Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5904u;
    // 0x7c5908: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C5904u, 0x7C590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c590c:
    // 0x7c590c: 0x24030001  addiu       $v1, $zero, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c5910: 0x1443005e  bne         $v0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x7C5910u;
    {
        const bool branch_taken_0x7c5910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7C5914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5910u;
        // 0x7c5914: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5910) {
            ctx->pc = 0x7C5A8Cu;
            goto label_7c5a8c;
        }
    }
    // 0x7c5918: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c5918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c591c: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x7c591cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x7c5920: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x7C5920u;
    {
        const bool branch_taken_0x7c5920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5920u;
        // 0x7c5924: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5920) {
            ctx->pc = 0x7C5A8Cu;
            goto label_7c5a8c;
        }
    }
label_7c5928:
    // 0x7c5928: 0x3c04007d  lui         $a0, 0x7D
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c592c: 0x3a0282d  daddu       $a1, $sp, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5930: 0xc1f0c92  jal         func_7C3248
    SET_GPR_U32(ctx, 31, 0x7C5938u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5930u;
    // 0x7c5934: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C5930u, 0x7C5938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c5938:
    // 0x7c5938: 0x40182d  daddu       $v1, $v0, $zero
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c593c: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c5940: 0x14620052  bne         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x7C5940u;
    {
        const bool branch_taken_0x7c5940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C5944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5940u;
        // 0x7c5944: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5940) {
            ctx->pc = 0x7C5A8Cu;
            goto label_7c5a8c;
        }
    }
    // 0x7c5948: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x7c5948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7c594c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x7C594Cu;
    {
        const bool branch_taken_0x7c594c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7C5950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C594Cu;
        // 0x7c5950: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c594c) {
            ctx->pc = 0x7C5978u;
            goto label_7c5978;
        }
    }
    // 0x7c5954: 0x24020009  addiu       $v0, $zero, 0x9
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x7c5958: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c5958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x7c595c: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c595cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c5960: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5964: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c5964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c5968: 0xc1f1eb8  jal         func_7C7AE0
    SET_GPR_U32(ctx, 31, 0x7C5970u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5968u;
    // 0x7c596c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C5968u, 0x7C5970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_7c5970:
    // 0x7c5970: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x7C5970u;
    {
        const bool branch_taken_0x7c5970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5970u;
        // 0x7c5974: 0xae300078  sw          $s0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5970) {
            ctx->pc = 0x7C5A88u;
            goto label_7c5a88;
        }
    }
label_7c5978:
    // 0x7c5978: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c5978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c597c: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c597cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x7c5980: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x7C5980u;
    {
        const bool branch_taken_0x7c5980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5980u;
        // 0x7c5984: 0xae2000f4  sw          $zero, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5980) {
            ctx->pc = 0x7C5A88u;
            goto label_7c5a88;
        }
    }
label_7c5988:
    // 0x7c5988: 0x3c020074  lui         $v0, 0x74
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_7c598c:
    // 0x7c598c: 0x3c040c00  lui         $a0, 0xC00
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3072 << 16));
    // 0x7c5990: 0x244274a0  addiu       $v0, $v0, 0x74A0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x7c5994: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x7c5994u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x7c5998: 0x641824  and         $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c599c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x7C599Cu;
    {
        const bool branch_taken_0x7c599c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C59A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C599Cu;
        // 0x7c59a0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c599c) {
            ctx->pc = 0x7C59D8u;
            goto label_7c59d8;
        }
    }
    // 0x7c59a4: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c59a8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c59ac: 0x24060161  addiu       $a2, $zero, 0x161
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x7c59b0: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c59b4: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c59b8: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c59bc: 0xc0b2e28  jal         func_2CB8A0
    SET_GPR_U32(ctx, 31, 0x7C59C4u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C59BCu;
    // 0x7c59c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CB8A0_0x2cb8a0, 0x2CB8A0u, 0x7C59C4u)) {
        return;
    }
label_7c59c4:
    // 0x7c59c4: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x7c59c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7c59c8: 0x38630001  xori        $v1, $v1, 0x1
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x7c59cc: 0x3182b  sltu        $v1, $zero, $v1
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7c59d0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x7C59D0u;
    {
        const bool branch_taken_0x7c59d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C59D0u;
        // 0x7c59d4: 0xa223000c  sb          $v1, 0xC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c59d0) {
            ctx->pc = 0x7C5A88u;
            goto label_7c5a88;
        }
    }
label_7c59d8:
    // 0x7c59d8: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x7c59d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x7c59dc: 0x3c021000  lui         $v0, 0x1000
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x7c59e0: 0x621024  and         $v0, $v1, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c59e4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x7C59E4u;
    {
        const bool branch_taken_0x7c59e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C59E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C59E4u;
        // 0x7c59e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c59e4) {
            ctx->pc = 0x7C5A4Cu;
            goto label_7c5a4c;
        }
    }
    // 0x7c59ec: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x7c59ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x7c59f0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C59F0u;
    {
        const bool branch_taken_0x7c59f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C59F0u;
        // 0x7c59f4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c59f0) {
            ctx->pc = 0x7C5A20u;
            goto label_7c5a20;
        }
    }
    // 0x7c59f8: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c59fc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c5a00: 0x24060160  addiu       $a2, $zero, 0x160
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x7c5a04: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c5a08: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c5a0c: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5a10: 0xc0b2e28  jal         func_2CB8A0
    SET_GPR_U32(ctx, 31, 0x7C5A18u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5A10u;
    // 0x7c5a14: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CB8A0_0x2cb8a0, 0x2CB8A0u, 0x7C5A18u)) {
        return;
    }
label_7c5a18:
    // 0x7c5a18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7C5A18u;
    {
        const bool branch_taken_0x7c5a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5A18u;
        // 0x7c5a1c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5a18) {
            ctx->pc = 0x7C5A44u;
            goto label_7c5a44;
        }
    }
label_7c5a20:
    // 0x7c5a20: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5a24: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c5a28: 0x2406015e  addiu       $a2, $zero, 0x15E
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x7c5a2c: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c5a30: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c5a34: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5a38: 0xc0b2e28  jal         func_2CB8A0
    SET_GPR_U32(ctx, 31, 0x7C5A40u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5A38u;
    // 0x7c5a3c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CB8A0_0x2cb8a0, 0x2CB8A0u, 0x7C5A40u)) {
        return;
    }
label_7c5a40:
    // 0x7c5a40: 0x24020004  addiu       $v0, $zero, 0x4
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7c5a44:
    // 0x7c5a44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x7C5A44u;
    {
        const bool branch_taken_0x7c5a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5A44u;
        // 0x7c5a48: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5a44) {
            ctx->pc = 0x7C5A88u;
            goto label_7c5a88;
        }
    }
label_7c5a4c:
    // 0x7c5a4c: 0x3c022000  lui         $v0, 0x2000
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x7c5a50: 0x621024  and         $v0, $v1, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7c5a54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7C5A54u;
    {
        const bool branch_taken_0x7c5a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5A54u;
        // 0x7c5a58: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c5a54) {
            ctx->pc = 0x7C5A88u;
            goto label_7c5a88;
        }
    }
    // 0x7c5a5c: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5a60: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7c5a64: 0x2406015e  addiu       $a2, $zero, 0x15E
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x7c5a68: 0x2407ffff  addiu       $a3, $zero, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c5a6c: 0x2408ffff  addiu       $t0, $zero, -0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c5a70: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c5a74: 0xc0b2e28  jal         func_2CB8A0
    SET_GPR_U32(ctx, 31, 0x7C5A7Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C5A74u;
    // 0x7c5a78: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CB8A0_0x2cb8a0, 0x2CB8A0u, 0x7C5A7Cu)) {
        return;
    }
label_7c5a7c:
    // 0x7c5a7c: 0x24030004  addiu       $v1, $zero, 0x4
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7c5a80: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x7c5a80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x7c5a84: 0xae2300f4  sw          $v1, 0xF4($s1)
    ctx->pc = 0x7c5a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
label_7c5a88:
    // 0x7c5a88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7c5a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7c5a8c:
    // 0x7c5a8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7c5a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c5a90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c5a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c5a94: 0x3e00008  jr          $ra
    ctx->pc = 0x7C5A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C5A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C5A94u;
        // 0x7c5a98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C5A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x7c5a9c: 0x0  nop
    // NOP
    ctx->pc = 0x7c5aa0u;
}
} // namespace gh_mcport
