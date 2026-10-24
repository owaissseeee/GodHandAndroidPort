#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: fileLoad__7cMcSave
// Address: 0x7c4750 - 0x7c4b18
void fileLoad__7cMcSave_0x7c4750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fileLoad__7cMcSave_0x7c4750");
#endif

    switch (ctx->pc) {
        case 0x7c47b0u: goto label_7c47b0;
        case 0x7c47d0u: goto label_7c47d0;
        case 0x7c4804u: goto label_7c4804;
        case 0x7c4858u: goto label_7c4858;
        case 0x7c48d0u: goto label_7c48d0;
        case 0x7c48e0u: goto label_7c48e0;
        case 0x7c48f0u: goto label_7c48f0;
        case 0x7c4914u: goto label_7c4914;
        case 0x7c4930u: goto label_7c4930;
        case 0x7c4978u: goto label_7c4978;
        case 0x7c4990u: goto label_7c4990;
        case 0x7c49a0u: goto label_7c49a0;
        case 0x7c4a0cu: goto label_7c4a0c;
        case 0x7c4a24u: goto label_7c4a24;
        case 0x7c4a50u: goto label_7c4a50;
        case 0x7c4a60u: goto label_7c4a60;
        case 0x7c4a8cu: goto label_7c4a8c;
        case 0x7c4aa4u: goto label_7c4aa4;
        default: break;
    }

    ctx->pc = 0x7c4750u;

    // 0x7c4750: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7c4750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7c4754: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7c4754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7c4758: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7c4758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7c475c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c475cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4760: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7c4760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7c4764: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x7c4764u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c4768: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7c4768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7c476c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7c476cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7c4770: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c4770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c4774: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c4774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c4778: 0x10720061  beq         $v1, $s2, . + 4 + (0x61 << 2)
    ctx->pc = 0x7C4778u;
    {
        const bool branch_taken_0x7c4778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4778u;
        // 0x7c477c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4778) {
            ctx->pc = 0x7C4900u;
            goto label_7c4900;
        }
    }
    ctx->pc = 0x7C4780u;
    // 0x7c4780: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C4780u;
    {
        const bool branch_taken_0x7c4780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c4780) {
            ctx->pc = 0x7C4784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C4780u;
            // 0x7c4784: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4798u;
            goto label_7c4798;
        }
    }
    ctx->pc = 0x7C4788u;
    // 0x7c4788: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C4788u;
    {
        const bool branch_taken_0x7c4788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4788u;
        // 0x7c478c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4788) {
            ctx->pc = 0x7C47B0u;
            goto label_7c47b0;
        }
    }
    ctx->pc = 0x7C4790u;
    // 0x7c4790: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x7C4790u;
    {
        const bool branch_taken_0x7c4790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4790u;
        // 0x7c4794: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4790) {
            ctx->pc = 0x7C4B00u;
            goto label_7c4b00;
        }
    }
    ctx->pc = 0x7C4798u;
label_7c4798:
    // 0x7c4798: 0x10620097  beq         $v1, $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x7C4798u;
    {
        const bool branch_taken_0x7c4798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4798u;
        // 0x7c479c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4798) {
            ctx->pc = 0x7C49F8u;
            goto label_7c49f8;
        }
    }
    ctx->pc = 0x7C47A0u;
    // 0x7c47a0: 0x106200b6  beq         $v1, $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x7C47A0u;
    {
        const bool branch_taken_0x7c47a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C47A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C47A0u;
        // 0x7c47a4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c47a0) {
            ctx->pc = 0x7C4A7Cu;
            goto label_7c4a7c;
        }
    }
    ctx->pc = 0x7C47A8u;
    // 0x7c47a8: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x7C47A8u;
    {
        const bool branch_taken_0x7c47a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C47ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C47A8u;
        // 0x7c47ac: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c47a8) {
            ctx->pc = 0x7C4B00u;
            goto label_7c4b00;
        }
    }
    ctx->pc = 0x7C47B0u;
label_7c47b0:
    // 0x7c47b0: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x7c47b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x7c47b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7c47b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c47b8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x7c47b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c47bc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x7c47bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c47c0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x7c47c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x7c47c4: 0x24130013  addiu       $s3, $zero, 0x13
    ctx->pc = 0x7c47c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x7c47c8: 0x24140011  addiu       $s4, $zero, 0x11
    ctx->pc = 0x7c47c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x7c47cc: 0x0  nop
    ctx->pc = 0x7c47ccu;
    // NOP
label_7c47d0:
    // 0x7c47d0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x7c47d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c47d4: 0x28620014  slti        $v0, $v1, 0x14
    ctx->pc = 0x7c47d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c47d8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x7C47D8u;
    {
        const bool branch_taken_0x7c47d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c47d8) {
            ctx->pc = 0x7C47DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C47D8u;
            // 0x7c47dc: 0x65001a  div         $zero, $v1, $a1 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4838u;
            goto label_7c4838;
        }
    }
    ctx->pc = 0x7C47E0u;
    // 0x7c47e0: 0xae2800f0  sw          $t0, 0xF0($s1)
    ctx->pc = 0x7c47e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 8));
    // 0x7c47e4: 0x24e36900  addiu       $v1, $a3, 0x6900
    ctx->pc = 0x7c47e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 26880));
    // 0x7c47e8: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c47e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x7c47ec: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c47ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c47f0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x7c47f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x7c47f4: 0x54460006  bnel        $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C47F4u;
    {
        const bool branch_taken_0x7c47f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x7c47f4) {
            ctx->pc = 0x7C47F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C47F4u;
            // 0x7c47f8: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4810u;
            goto label_7c4810;
        }
    }
    ctx->pc = 0x7C47FCu;
    // 0x7c47fc: 0xc1f23c4  jal         func_7C8F10
    ctx->pc = 0x7C47FCu;
    SET_GPR_U32(ctx, 31, 0x7C4804u);
    ctx->pc = 0x7C4800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C47FCu;
    // 0x7c4800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F10u, 0x7C47FCu, 0x7C4804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4804u;
label_7c4804:
    // 0x7c4804: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x7c4804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x7c4808: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7C4808u;
    {
        const bool branch_taken_0x7c4808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4808u;
        // 0x7c480c: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4808) {
            ctx->pc = 0x7C4818u;
            goto label_7c4818;
        }
    }
    ctx->pc = 0x7C4810u;
label_7c4810:
    // 0x7c4810: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x7c4810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7c4814: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x7c4814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
label_7c4818:
    // 0x7c4818: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x7c4818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x7c481c: 0x107300af  beq         $v1, $s3, . + 4 + (0xAF << 2)
    ctx->pc = 0x7C481Cu;
    {
        const bool branch_taken_0x7c481c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x7C4820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C481Cu;
        // 0x7c4820: 0x28620012  slti        $v0, $v1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c481c) {
            ctx->pc = 0x7C4ADCu;
            goto label_7c4adc;
        }
    }
    ctx->pc = 0x7C4824u;
    // 0x7c4824: 0x144000b4  bnez        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x7C4824u;
    {
        const bool branch_taken_0x7c4824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C4828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4824u;
        // 0x7c4828: 0x2462fff0  addiu       $v0, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4824) {
            ctx->pc = 0x7C4AF8u;
            goto label_7c4af8;
        }
    }
    ctx->pc = 0x7C482Cu;
    // 0x7c482c: 0xae3400d4  sw          $s4, 0xD4($s1)
    ctx->pc = 0x7c482cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 20));
    // 0x7c4830: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x7C4830u;
    {
        const bool branch_taken_0x7c4830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4830u;
        // 0x7c4834: 0xae2200d8  sw          $v0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4830) {
            ctx->pc = 0x7C4AF8u;
            goto label_7c4af8;
        }
    }
    ctx->pc = 0x7C4838u;
label_7c4838:
    // 0x7c4838: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C4838u;
    {
        const bool branch_taken_0x7c4838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c4838) {
            ctx->pc = 0x7C483Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C4838u;
            // 0x7c483c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4840u;
            goto label_7c4840;
        }
    }
    ctx->pc = 0x7C4840u;
label_7c4840:
    // 0x7c4840: 0x2010  mfhi        $a0
    ctx->pc = 0x7c4840u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x7c4844: 0x481000e  bgez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x7C4844u;
    {
        const bool branch_taken_0x7c4844 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x7C4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4844u;
        // 0x7c4848: 0xc4102a  slt         $v0, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4844) {
            ctx->pc = 0x7C4880u;
            goto label_7c4880;
        }
    }
    ctx->pc = 0x7C484Cu;
    // 0x7c484c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7c484cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4850: 0x26230088  addiu       $v1, $s1, 0x88
    ctx->pc = 0x7c4850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x7c4854: 0x0  nop
    ctx->pc = 0x7c4854u;
    // NOP
label_7c4858:
    // 0x7c4858: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c4858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c485c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C485Cu;
    {
        const bool branch_taken_0x7c485c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C485Cu;
        // 0x7c4860: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c485c) {
            ctx->pc = 0x7C4878u;
            goto label_7c4878;
        }
    }
    ctx->pc = 0x7C4864u;
    // 0x7c4864: 0x0  nop
    ctx->pc = 0x7c4864u;
    // NOP
    // 0x7c4868: 0x1880fffb  blez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C4868u;
    {
        const bool branch_taken_0x7c4868 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7C486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4868u;
        // 0x7c486c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4868) {
            ctx->pc = 0x7C4858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c4858;
        }
    }
    ctx->pc = 0x7C4870u;
    // 0x7c4870: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7C4870u;
    {
        const bool branch_taken_0x7c4870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4870u;
        // 0x7c4874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4870) {
            ctx->pc = 0x7C48A4u;
            goto label_7c48a4;
        }
    }
    ctx->pc = 0x7C4878u;
label_7c4878:
    // 0x7c4878: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7C4878u;
    {
        const bool branch_taken_0x7c4878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4878u;
        // 0x7c487c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4878) {
            ctx->pc = 0x7C48A4u;
            goto label_7c48a4;
        }
    }
    ctx->pc = 0x7C4880u;
label_7c4880:
    // 0x7c4880: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x7c4880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x7c4884: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x7c4884u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x7c4888: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x7c4888u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x7c488c: 0x902004  sllv        $a0, $s0, $a0
    ctx->pc = 0x7c488cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x7c4890: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c4890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c4894: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x7c4894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x7c4898: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x7c4898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x7c489c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7c489cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7c48a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7c48a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7c48a4:
    // 0x7c48a4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x7c48a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c48a8: 0x50520005  beql        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C48A8u;
    {
        const bool branch_taken_0x7c48a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x7c48a8) {
            ctx->pc = 0x7C48ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C48A8u;
            // 0x7c48ac: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C48C0u;
            goto label_7c48c0;
        }
    }
    ctx->pc = 0x7C48B0u;
    // 0x7c48b0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x7c48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c48b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c48b8: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x7C48B8u;
    {
        const bool branch_taken_0x7c48b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C48BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C48B8u;
        // 0x7c48bc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c48b8) {
            ctx->pc = 0x7C47D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c47d0;
        }
    }
    ctx->pc = 0x7C48C0u;
label_7c48c0:
    // 0x7c48c0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x7c48c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c48c4: 0x26101740  addiu       $s0, $s0, 0x1740
    ctx->pc = 0x7c48c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x7c48c8: 0xc1f0c7c  jal         func_7C31F0
    ctx->pc = 0x7C48C8u;
    SET_GPR_U32(ctx, 31, 0x7C48D0u);
    ctx->pc = 0x7C48CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C48C8u;
    // 0x7c48cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C31F0u, 0x7C48C8u, 0x7C48D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C48D0u;
label_7c48d0:
    // 0x7c48d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c48d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c48d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c48d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c48d8: 0xc1f0cf4  jal         func_7C33D0
    ctx->pc = 0x7C48D8u;
    SET_GPR_U32(ctx, 31, 0x7C48E0u);
    ctx->pc = 0x7C48DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C48D8u;
    // 0x7c48dc: 0x24850014  addiu       $a1, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C33D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C33D0u, 0x7C48D8u, 0x7C48E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C48E0u;
label_7c48e0:
    // 0x7c48e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c48e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c48e4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c48e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c48e8: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C48E8u;
    SET_GPR_U32(ctx, 31, 0x7C48F0u);
    ctx->pc = 0x7C48ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C48E8u;
    // 0x7c48ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C48E8u, 0x7C48F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C48F0u;
label_7c48f0:
    // 0x7c48f0: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x7C48F0u;
    {
        const bool branch_taken_0x7c48f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C48F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C48F0u;
        // 0x7c48f4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c48f0) {
            ctx->pc = 0x7C4AECu;
            goto label_7c4aec;
        }
    }
    ctx->pc = 0x7C48F8u;
    // 0x7c48f8: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x7C48F8u;
    {
        const bool branch_taken_0x7c48f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C48FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C48F8u;
        // 0x7c48fc: 0xae3200f4  sw          $s2, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c48f8) {
            ctx->pc = 0x7C4AF8u;
            goto label_7c4af8;
        }
    }
    ctx->pc = 0x7C4900u;
label_7c4900:
    // 0x7c4900: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c4900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c4904: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c4904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4908: 0x24501740  addiu       $s0, $v0, 0x1740
    ctx->pc = 0x7c4908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c490c: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C490Cu;
    SET_GPR_U32(ctx, 31, 0x7C4914u);
    ctx->pc = 0x7C4910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C490Cu;
    // 0x7c4910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C490Cu, 0x7C4914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4914u;
label_7c4914:
    // 0x7c4914: 0x54520079  bnel        $v0, $s2, . + 4 + (0x79 << 2)
    ctx->pc = 0x7C4914u;
    {
        const bool branch_taken_0x7c4914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x7c4914) {
            ctx->pc = 0x7C4918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C4914u;
            // 0x7c4918: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4AFCu;
            goto label_7c4afc;
        }
    }
    ctx->pc = 0x7C491Cu;
    // 0x7c491c: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c491cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c4920: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c4920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c4924: 0x24841800  addiu       $a0, $a0, 0x1800
    ctx->pc = 0x7c4924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6144));
    // 0x7c4928: 0xc1f1bbe  jal         func_7C6EF8
    ctx->pc = 0x7C4928u;
    SET_GPR_U32(ctx, 31, 0x7C4930u);
    ctx->pc = 0x7C492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4928u;
    // 0x7c492c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6EF8u, 0x7C4928u, 0x7C4930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4930u;
label_7c4930:
    // 0x7c4930: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7c4930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4934: 0x1073001e  beq         $v1, $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x7C4934u;
    {
        const bool branch_taken_0x7c4934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x7C4938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4934u;
        // 0x7c4938: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4934) {
            ctx->pc = 0x7C49B0u;
            goto label_7c49b0;
        }
    }
    ctx->pc = 0x7C493Cu;
    // 0x7c493c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C493Cu;
    {
        const bool branch_taken_0x7c493c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C493Cu;
        // 0x7c4940: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c493c) {
            ctx->pc = 0x7C4954u;
            goto label_7c4954;
        }
    }
    ctx->pc = 0x7C4944u;
    // 0x7c4944: 0x10720007  beq         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C4944u;
    {
        const bool branch_taken_0x7c4944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C4948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4944u;
        // 0x7c4948: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4944) {
            ctx->pc = 0x7C4964u;
            goto label_7c4964;
        }
    }
    ctx->pc = 0x7C494Cu;
    // 0x7c494c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x7C494Cu;
    {
        const bool branch_taken_0x7c494c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C494Cu;
        // 0x7c4950: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c494c) {
            ctx->pc = 0x7C4AF0u;
            goto label_7c4af0;
        }
    }
    ctx->pc = 0x7C4954u;
label_7c4954:
    // 0x7c4954: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x7C4954u;
    {
        const bool branch_taken_0x7c4954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C4958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4954u;
        // 0x7c4958: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4954) {
            ctx->pc = 0x7C49ECu;
            goto label_7c49ec;
        }
    }
    ctx->pc = 0x7C495Cu;
    // 0x7c495c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x7C495Cu;
    {
        const bool branch_taken_0x7c495c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C495Cu;
        // 0x7c4960: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c495c) {
            ctx->pc = 0x7C4AF0u;
            goto label_7c4af0;
        }
    }
    ctx->pc = 0x7C4964u;
label_7c4964:
    // 0x7c4964: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x7c4964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c4968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c4968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c496c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x7c496cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c4970: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C4970u;
    SET_GPR_U32(ctx, 31, 0x7C4978u);
    ctx->pc = 0x7C4974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4970u;
    // 0x7c4974: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C4970u, 0x7C4978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4978u;
label_7c4978:
    // 0x7c4978: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x7c4978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x7c497c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c497cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4980: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x7c4980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x7c4984: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7c4984u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4988: 0xc1f0d98  jal         func_7C3660
    ctx->pc = 0x7C4988u;
    SET_GPR_U32(ctx, 31, 0x7C4990u);
    ctx->pc = 0x7C498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4988u;
    // 0x7c498c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3660u, 0x7C4988u, 0x7C4990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4990u;
label_7c4990:
    // 0x7c4990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c4990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4994: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c4994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4998: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C4998u;
    SET_GPR_U32(ctx, 31, 0x7C49A0u);
    ctx->pc = 0x7C499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4998u;
    // 0x7c499c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C4998u, 0x7C49A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C49A0u;
label_7c49a0:
    // 0x7c49a0: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x7C49A0u;
    {
        const bool branch_taken_0x7c49a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C49A0u;
        // 0x7c49a4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c49a0) {
            ctx->pc = 0x7C4AECu;
            goto label_7c4aec;
        }
    }
    ctx->pc = 0x7C49A8u;
    // 0x7c49a8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x7C49A8u;
    {
        const bool branch_taken_0x7c49a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C49A8u;
        // 0x7c49ac: 0xae3300f4  sw          $s3, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c49a8) {
            ctx->pc = 0x7C4AF8u;
            goto label_7c4af8;
        }
    }
    ctx->pc = 0x7C49B0u;
label_7c49b0:
    // 0x7c49b0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x7c49b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c49b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c49b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c49b8: 0x26250088  addiu       $a1, $s1, 0x88
    ctx->pc = 0x7c49b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x7c49bc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x7c49bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x7c49c0: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x7c49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x7c49c4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x7c49c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x7c49c8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x7c49c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x7c49cc: 0x922004  sllv        $a0, $s2, $a0
    ctx->pc = 0x7c49ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
    // 0x7c49d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7c49d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x7c49d4: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x7c49d4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x7c49d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x7c49d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x7c49dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x7c49dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7c49e0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c49e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c49e4: 0x1000ff72  b           . + 4 + (-0x8E << 2)
    ctx->pc = 0x7C49E4u;
    {
        const bool branch_taken_0x7c49e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C49E4u;
        // 0x7c49e8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c49e4) {
            ctx->pc = 0x7C47B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c47b0;
        }
    }
    ctx->pc = 0x7C49ECu;
label_7c49ec:
    // 0x7c49ec: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c49ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c49f0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x7C49F0u;
    {
        const bool branch_taken_0x7c49f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C49F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C49F0u;
        // 0x7c49f4: 0xae2000f0  sw          $zero, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c49f0) {
            ctx->pc = 0x7C4AF4u;
            goto label_7c4af4;
        }
    }
    ctx->pc = 0x7C49F8u;
label_7c49f8:
    // 0x7c49f8: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c49f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c49fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c49fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4a00: 0x24501740  addiu       $s0, $v0, 0x1740
    ctx->pc = 0x7c4a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c4a04: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C4A04u;
    SET_GPR_U32(ctx, 31, 0x7C4A0Cu);
    ctx->pc = 0x7C4A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4A04u;
    // 0x7c4a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C4A04u, 0x7C4A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4A0Cu;
label_7c4a0c:
    // 0x7c4a0c: 0x5452003b  bnel        $v0, $s2, . + 4 + (0x3B << 2)
    ctx->pc = 0x7C4A0Cu;
    {
        const bool branch_taken_0x7c4a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x7c4a0c) {
            ctx->pc = 0x7C4A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C4A0Cu;
            // 0x7c4a10: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4AFCu;
            goto label_7c4afc;
        }
    }
    ctx->pc = 0x7C4A14u;
    // 0x7c4a14: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c4a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c4a18: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c4a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c4a1c: 0xc1f1c12  jal         func_7C7048
    ctx->pc = 0x7C4A1Cu;
    SET_GPR_U32(ctx, 31, 0x7C4A24u);
    ctx->pc = 0x7C4A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4A1Cu;
    // 0x7c4a20: 0x24841800  addiu       $a0, $a0, 0x1800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7048u, 0x7C4A1Cu, 0x7C4A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4A24u;
label_7c4a24:
    // 0x7c4a24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7c4a24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4a28: 0x10720005  beq         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C4A28u;
    {
        const bool branch_taken_0x7c4a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4A28u;
        // 0x7c4a2c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4a28) {
            ctx->pc = 0x7C4A40u;
            goto label_7c4a40;
        }
    }
    ctx->pc = 0x7C4A30u;
    // 0x7c4a30: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x7C4A30u;
    {
        const bool branch_taken_0x7c4a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C4A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4A30u;
        // 0x7c4a34: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4a30) {
            ctx->pc = 0x7C4A70u;
            goto label_7c4a70;
        }
    }
    ctx->pc = 0x7C4A38u;
    // 0x7c4a38: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x7C4A38u;
    {
        const bool branch_taken_0x7c4a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4A38u;
        // 0x7c4a3c: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4a38) {
            ctx->pc = 0x7C4AF0u;
            goto label_7c4af0;
        }
    }
    ctx->pc = 0x7C4A40u;
label_7c4a40:
    // 0x7c4a40: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x7c4a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x7c4a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c4a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4a48: 0xc1f0ce0  jal         func_7C3380
    ctx->pc = 0x7C4A48u;
    SET_GPR_U32(ctx, 31, 0x7C4A50u);
    ctx->pc = 0x7C4A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4A48u;
    // 0x7c4a4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3380u, 0x7C4A48u, 0x7C4A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4A50u;
label_7c4a50:
    // 0x7c4a50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c4a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4a54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c4a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4a58: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C4A58u;
    SET_GPR_U32(ctx, 31, 0x7C4A60u);
    ctx->pc = 0x7C4A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4A58u;
    // 0x7c4a5c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C4A58u, 0x7C4A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4A60u;
label_7c4a60:
    // 0x7c4a60: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x7C4A60u;
    {
        const bool branch_taken_0x7c4a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4A60u;
        // 0x7c4a64: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4a60) {
            ctx->pc = 0x7C4AE8u;
            goto label_7c4ae8;
        }
    }
    ctx->pc = 0x7C4A68u;
    // 0x7c4a68: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x7C4A68u;
    {
        const bool branch_taken_0x7c4a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4A68u;
        // 0x7c4a6c: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4a68) {
            ctx->pc = 0x7C4AF8u;
            goto label_7c4af8;
        }
    }
    ctx->pc = 0x7C4A70u;
label_7c4a70:
    // 0x7c4a70: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c4a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c4a74: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x7C4A74u;
    {
        const bool branch_taken_0x7c4a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4A74u;
        // 0x7c4a78: 0xae2000f0  sw          $zero, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4a74) {
            ctx->pc = 0x7C4AF4u;
            goto label_7c4af4;
        }
    }
    ctx->pc = 0x7C4A7Cu;
label_7c4a7c:
    // 0x7c4a7c: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c4a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c4a80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c4a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4a84: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C4A84u;
    SET_GPR_U32(ctx, 31, 0x7C4A8Cu);
    ctx->pc = 0x7C4A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4A84u;
    // 0x7c4a88: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C4A84u, 0x7C4A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4A8Cu;
label_7c4a8c:
    // 0x7c4a8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c4a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4a90: 0x5612001a  bnel        $s0, $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x7C4A90u;
    {
        const bool branch_taken_0x7c4a90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x7c4a90) {
            ctx->pc = 0x7C4A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C4A90u;
            // 0x7c4a94: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C4AFCu;
            goto label_7c4afc;
        }
    }
    ctx->pc = 0x7C4A98u;
    // 0x7c4a98: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c4a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c4a9c: 0xc1f1bee  jal         func_7C6FB8
    ctx->pc = 0x7C4A9Cu;
    SET_GPR_U32(ctx, 31, 0x7C4AA4u);
    ctx->pc = 0x7C4AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C4A9Cu;
    // 0x7c4aa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6FB8u, 0x7C4A9Cu, 0x7C4AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C4AA4u;
label_7c4aa4:
    // 0x7c4aa4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7c4aa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c4aa8: 0x10700005  beq         $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C4AA8u;
    {
        const bool branch_taken_0x7c4aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x7C4AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4AA8u;
        // 0x7c4aac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4aa8) {
            ctx->pc = 0x7C4AC0u;
            goto label_7c4ac0;
        }
    }
    ctx->pc = 0x7C4AB0u;
    // 0x7c4ab0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C4AB0u;
    {
        const bool branch_taken_0x7c4ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4AB0u;
        // 0x7c4ab4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4ab0) {
            ctx->pc = 0x7C4AD0u;
            goto label_7c4ad0;
        }
    }
    ctx->pc = 0x7C4AB8u;
    // 0x7c4ab8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7C4AB8u;
    {
        const bool branch_taken_0x7c4ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4AB8u;
        // 0x7c4abc: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4ab8) {
            ctx->pc = 0x7C4AF0u;
            goto label_7c4af0;
        }
    }
    ctx->pc = 0x7C4AC0u;
label_7c4ac0:
    // 0x7c4ac0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x7c4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c4ac4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c4ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c4ac8: 0x1000ff39  b           . + 4 + (-0xC7 << 2)
    ctx->pc = 0x7C4AC8u;
    {
        const bool branch_taken_0x7c4ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4AC8u;
        // 0x7c4acc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4ac8) {
            ctx->pc = 0x7C47B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c47b0;
        }
    }
    ctx->pc = 0x7C4AD0u;
label_7c4ad0:
    // 0x7c4ad0: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c4ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c4ad4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7C4AD4u;
    {
        const bool branch_taken_0x7c4ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4AD4u;
        // 0x7c4ad8: 0xae2000f0  sw          $zero, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4ad4) {
            ctx->pc = 0x7C4AF4u;
            goto label_7c4af4;
        }
    }
    ctx->pc = 0x7C4ADCu;
label_7c4adc:
    // 0x7c4adc: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x7c4adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
    // 0x7c4ae0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7C4AE0u;
    {
        const bool branch_taken_0x7c4ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C4AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4AE0u;
        // 0x7c4ae4: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c4ae0) {
            ctx->pc = 0x7C4AF8u;
            goto label_7c4af8;
        }
    }
    ctx->pc = 0x7C4AE8u;
label_7c4ae8:
    // 0x7c4ae8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x7c4ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_7c4aec:
    // 0x7c4aec: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c4aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
label_7c4af0:
    // 0x7c4af0: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c4af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_7c4af4:
    // 0x7c4af4: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c4af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_7c4af8:
    // 0x7c4af8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7c4af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7c4afc:
    // 0x7c4afc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7c4afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7c4b00:
    // 0x7c4b00: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7c4b00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c4b04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7c4b04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c4b08: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7c4b08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c4b0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c4b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c4b10: 0x3e00008  jr          $ra
    ctx->pc = 0x7C4B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C4B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C4B10u;
        // 0x7c4b14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C4B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C4B18u;
}
} // namespace gh_mcport
