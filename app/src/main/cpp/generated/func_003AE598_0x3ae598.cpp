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

// Function: func_003AE598
// Address: 0x3ae598 - 0x3ae730
void func_003AE598_0x3ae598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AE598_0x3ae598");
#endif

    switch (ctx->pc) {
        case 0x3ae5ecu: goto label_3ae5ec;
        case 0x3ae61cu: goto label_3ae61c;
        case 0x3ae678u: goto label_3ae678;
        default: break;
    }

    ctx->pc = 0x3ae598u;

    // 0x3ae598: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ae598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ae59c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ae59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ae5a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ae5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3ae5a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ae5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ae5a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ae5a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae5ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ae5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae5b0: 0x12220059  beq         $s1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3AE5B0u;
    {
        const bool branch_taken_0x3ae5b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AE5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE5B0u;
        // 0x3ae5b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae5b0) {
            ctx->pc = 0x3AE718u;
            goto label_3ae718;
        }
    }
    ctx->pc = 0x3AE5B8u;
    // 0x3ae5b8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3ae5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3ae5bc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AE5BCu;
    {
        const bool branch_taken_0x3ae5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae5bc) {
            ctx->pc = 0x3AE5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE5BCu;
            // 0x3ae5c0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE5D8u;
            goto label_3ae5d8;
        }
    }
    ctx->pc = 0x3AE5C4u;
    // 0x3ae5c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3ae5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3ae5c8: 0x8c43a62c  lw          $v1, -0x59D4($v0)
    ctx->pc = 0x3ae5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3ae5cc: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3ae5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x3ae5d0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3ae5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3ae5d4: 0x0  nop
    ctx->pc = 0x3ae5d4u;
    // NOP
label_3ae5d8:
    // 0x3ae5d8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3ae5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3ae5dc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AE5DCu;
    {
        const bool branch_taken_0x3ae5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae5dc) {
            ctx->pc = 0x3AE5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE5DCu;
            // 0x3ae5e0: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE5F0u;
            goto label_3ae5f0;
        }
    }
    ctx->pc = 0x3AE5E4u;
    // 0x3ae5e4: 0xc0e987c  jal         func_3A61F0
    ctx->pc = 0x3AE5E4u;
    SET_GPR_U32(ctx, 31, 0x3AE5ECu);
    ctx->pc = 0x3A61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A61F0u, 0x3AE5E4u, 0x3AE5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE5ECu;
label_3ae5ec:
    // 0x3ae5ec: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3ae5ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3ae5f0:
    // 0x3ae5f0: 0x3043ffdf  andi        $v1, $v0, 0xFFDF
    ctx->pc = 0x3ae5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
    // 0x3ae5f4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3ae5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3ae5f8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AE5F8u;
    {
        const bool branch_taken_0x3ae5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE5F8u;
        // 0x3ae5fc: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae5f8) {
            ctx->pc = 0x3AE644u;
            goto label_3ae644;
        }
    }
    ctx->pc = 0x3AE600u;
    // 0x3ae600: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x3ae600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3ae604: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3AE604u;
    {
        const bool branch_taken_0x3ae604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE604u;
        // 0x3ae608: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae604) {
            ctx->pc = 0x3AE678u;
            goto label_3ae678;
        }
    }
    ctx->pc = 0x3AE60Cu;
    // 0x3ae60c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3AE60Cu;
    {
        const bool branch_taken_0x3ae60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae60c) {
            ctx->pc = 0x3AE610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE60Cu;
            // 0x3ae610: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE63Cu;
            goto label_3ae63c;
        }
    }
    ctx->pc = 0x3AE614u;
    // 0x3ae614: 0xc0e9808  jal         func_3A6020
    ctx->pc = 0x3AE614u;
    SET_GPR_U32(ctx, 31, 0x3AE61Cu);
    ctx->pc = 0x3AE618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE614u;
    // 0x3ae618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6020u, 0x3AE614u, 0x3AE61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE61Cu;
label_3ae61c:
    // 0x3ae61c: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3AE61Cu;
    {
        const bool branch_taken_0x3ae61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE61Cu;
        // 0x3ae620: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae61c) {
            ctx->pc = 0x3AE718u;
            goto label_3ae718;
        }
    }
    ctx->pc = 0x3AE624u;
    // 0x3ae624: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3ae624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3ae628: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3ae628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3ae62c: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x3ae62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x3ae630: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3ae630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x3ae634: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3ae634u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ae638: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3ae638u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3ae63c:
    // 0x3ae63c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3ae63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3ae640: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3ae640u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_3ae644:
    // 0x3ae644: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3ae644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3ae648: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3AE648u;
    {
        const bool branch_taken_0x3ae648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE648u;
        // 0x3ae64c: 0x323100ff  andi        $s1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae648) {
            ctx->pc = 0x3AE6A0u;
            goto label_3ae6a0;
        }
    }
    ctx->pc = 0x3AE650u;
    // 0x3ae650: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3ae650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3ae654: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x3ae654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3ae658: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3ae658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3ae65c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AE65Cu;
    {
        const bool branch_taken_0x3ae65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae65c) {
            ctx->pc = 0x3AE660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE65Cu;
            // 0x3ae660: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE680u;
            goto label_3ae680;
        }
    }
    ctx->pc = 0x3AE664u;
    // 0x3ae664: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3ae664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3ae668: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ae668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae66c: 0x24a5fc90  addiu       $a1, $a1, -0x370
    ctx->pc = 0x3ae66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966416));
    // 0x3ae670: 0xc0ec09a  jal         func_3B0268
    ctx->pc = 0x3AE670u;
    SET_GPR_U32(ctx, 31, 0x3AE678u);
    ctx->pc = 0x3AE674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE670u;
    // 0x3ae674: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0268u, 0x3AE670u, 0x3AE678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE678u;
label_3ae678:
    // 0x3ae678: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3AE678u;
    {
        const bool branch_taken_0x3ae678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE678u;
        // 0x3ae67c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae678) {
            ctx->pc = 0x3AE718u;
            goto label_3ae718;
        }
    }
    ctx->pc = 0x3AE680u;
label_3ae680:
    // 0x3ae680: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ae680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae684: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3ae684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ae688: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3ae688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3ae68c: 0xa091ffff  sb          $s1, -0x1($a0)
    ctx->pc = 0x3ae68cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x3ae690: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ae690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3ae694: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ae694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ae698: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3AE698u;
    {
        const bool branch_taken_0x3ae698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE698u;
        // 0x3ae69c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae698) {
            ctx->pc = 0x3AE718u;
            goto label_3ae718;
        }
    }
    ctx->pc = 0x3AE6A0u;
label_3ae6a0:
    // 0x3ae6a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3ae6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3ae6a4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3AE6A4u;
    {
        const bool branch_taken_0x3ae6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae6a4) {
            ctx->pc = 0x3AE6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE6A4u;
            // 0x3ae6a8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE6E4u;
            goto label_3ae6e4;
        }
    }
    ctx->pc = 0x3AE6ACu;
    // 0x3ae6ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3ae6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ae6b0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3ae6b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3ae6b4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3AE6B4u;
    {
        const bool branch_taken_0x3ae6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae6b4) {
            ctx->pc = 0x3AE6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE6B4u;
            // 0x3ae6b8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE6E4u;
            goto label_3ae6e4;
        }
    }
    ctx->pc = 0x3AE6BCu;
    // 0x3ae6bc: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x3ae6bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x3ae6c0: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AE6C0u;
    {
        const bool branch_taken_0x3ae6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x3ae6c0) {
            ctx->pc = 0x3AE6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE6C0u;
            // 0x3ae6c4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE6E4u;
            goto label_3ae6e4;
        }
    }
    ctx->pc = 0x3AE6C8u;
    // 0x3ae6c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ae6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3ae6cc: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3ae6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3ae6d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3ae6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3ae6d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ae6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ae6d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ae6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae6dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3AE6DCu;
    {
        const bool branch_taken_0x3ae6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6DCu;
        // 0x3ae6e0: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae6dc) {
            ctx->pc = 0x3AE718u;
            goto label_3ae718;
        }
    }
    ctx->pc = 0x3AE6E4u;
label_3ae6e4:
    // 0x3ae6e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ae6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae6e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ae6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ae6ec: 0x26070040  addiu       $a3, $s0, 0x40
    ctx->pc = 0x3ae6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3ae6f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3ae6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ae6f4: 0x26060042  addiu       $a2, $s0, 0x42
    ctx->pc = 0x3ae6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 66));
    // 0x3ae6f8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3ae6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3ae6fc: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x3ae6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x3ae700: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ae700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae704: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x3ae704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x3ae708: 0xae070030  sw          $a3, 0x30($s0)
    ctx->pc = 0x3ae708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 7));
    // 0x3ae70c: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x3ae70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x3ae710: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x3ae710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x3ae714: 0xa2110042  sb          $s1, 0x42($s0)
    ctx->pc = 0x3ae714u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 17));
label_3ae718:
    // 0x3ae718: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ae718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae71c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ae71cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae724: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE724u;
        // 0x3ae728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE72Cu;
    // 0x3ae72c: 0x0  nop
    ctx->pc = 0x3ae72cu;
    // NOP
    ctx->pc = 0x3ae730u;
}
