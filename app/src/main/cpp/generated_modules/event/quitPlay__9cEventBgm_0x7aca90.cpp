#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: quitPlay__9cEventBgm
// Address: 0x7aca90 - 0x7acc08
void quitPlay__9cEventBgm_0x7aca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quitPlay__9cEventBgm_0x7aca90");
#endif

    switch (ctx->pc) {
        case 0x7acac0u: goto label_7acac0;
        case 0x7acb20u: goto label_7acb20;
        case 0x7acb28u: goto label_7acb28;
        case 0x7acb38u: goto label_7acb38;
        case 0x7acbe4u: goto label_7acbe4;
        default: break;
    }

    ctx->pc = 0x7aca90u;

    // 0x7aca90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7aca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7aca94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7aca94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7aca98: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7aca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7aca9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x7aca9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7acaa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7acaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7acaa4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x7acaa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7acaa8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7acaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7acaac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7acaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7acab0: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x7acab0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x7acab4: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x7ACAB4u;
    {
        const bool branch_taken_0x7acab4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ACAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACAB4u;
        // 0x7acab8: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acab4) {
            ctx->pc = 0x7ACB10u;
            goto label_7acb10;
        }
    }
    ctx->pc = 0x7ACABCu;
    // 0x7acabc: 0x0  nop
    ctx->pc = 0x7acabcu;
    // NOP
label_7acac0:
    // 0x7acac0: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x7acac0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7acac4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x7acac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x7acac8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x7ACAC8u;
    {
        const bool branch_taken_0x7acac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7acac8) {
            ctx->pc = 0x7ACACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ACAC8u;
            // 0x7acacc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ACB04u;
            goto label_7acb04;
        }
    }
    ctx->pc = 0x7ACAD0u;
    // 0x7acad0: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7ACAD0u;
    {
        const bool branch_taken_0x7acad0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x7acad0) {
            ctx->pc = 0x7ACAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ACAD0u;
            // 0x7acad4: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ACAE0u;
            goto label_7acae0;
        }
    }
    ctx->pc = 0x7ACAD8u;
    // 0x7acad8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7ACAD8u;
    {
        const bool branch_taken_0x7acad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ACADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACAD8u;
        // 0x7acadc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acad8) {
            ctx->pc = 0x7ACB00u;
            goto label_7acb00;
        }
    }
    ctx->pc = 0x7ACAE0u;
label_7acae0:
    // 0x7acae0: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x7acae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x7acae4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x7acae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x7acae8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x7ACAE8u;
    {
        const bool branch_taken_0x7acae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7acae8) {
            ctx->pc = 0x7ACAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ACAE8u;
            // 0x7acaec: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ACB04u;
            goto label_7acb04;
        }
    }
    ctx->pc = 0x7ACAF0u;
    // 0x7acaf0: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x7acaf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x7acaf4: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x7acaf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x7acaf8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7acaf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7acafc: 0xa2800b  movn        $s0, $a1, $v0
    ctx->pc = 0x7acafcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_7acb00:
    // 0x7acb00: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7acb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_7acb04:
    // 0x7acb04: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x7acb04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x7acb08: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x7ACB08u;
    {
        const bool branch_taken_0x7acb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7ACB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACB08u;
        // 0x7acb0c: 0x24a5001c  addiu       $a1, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acb08) {
            ctx->pc = 0x7ACAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7acac0;
        }
    }
    ctx->pc = 0x7ACB10u;
label_7acb10:
    // 0x7acb10: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x7ACB10u;
    {
        const bool branch_taken_0x7acb10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ACB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACB10u;
        // 0x7acb14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acb10) {
            ctx->pc = 0x7ACBECu;
            goto label_7acbec;
        }
    }
    ctx->pc = 0x7ACB18u;
    // 0x7acb18: 0xc1eb20a  jal         func_7AC828
    ctx->pc = 0x7ACB18u;
    SET_GPR_U32(ctx, 31, 0x7ACB20u);
    ctx->pc = 0x7ACB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ACB18u;
    // 0x7acb1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AC828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AC828u, 0x7ACB18u, 0x7ACB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ACB20u;
label_7acb20:
    // 0x7acb20: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x7acb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x7acb24: 0x0  nop
    ctx->pc = 0x7acb24u;
    // NOP
label_7acb28:
    // 0x7acb28: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x7acb28u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7acb2c: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x7ACB2Cu;
    {
        const bool branch_taken_0x7acb2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ACB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACB2Cu;
        // 0x7acb30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acb2c) {
            ctx->pc = 0x7ACBD0u;
            goto label_7acbd0;
        }
    }
    ctx->pc = 0x7ACB34u;
    // 0x7acb34: 0x0  nop
    ctx->pc = 0x7acb34u;
    // NOP
label_7acb38:
    // 0x7acb38: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x7acb38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7acb3c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x7acb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x7acb40: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x7ACB40u;
    {
        const bool branch_taken_0x7acb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7acb40) {
            ctx->pc = 0x7ACB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ACB40u;
            // 0x7acb44: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ACBC4u;
            goto label_7acbc4;
        }
    }
    ctx->pc = 0x7ACB48u;
    // 0x7acb48: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x7acb48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x7acb4c: 0x92080003  lbu         $t0, 0x3($s0)
    ctx->pc = 0x7acb4cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x7acb50: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x7acb50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7acb54: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x7acb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x7acb58: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x7acb58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x7acb5c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x7ACB5Cu;
    {
        const bool branch_taken_0x7acb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7acb5c) {
            ctx->pc = 0x7ACB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ACB5Cu;
            // 0x7acb60: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ACBC4u;
            goto label_7acbc4;
        }
    }
    ctx->pc = 0x7ACB64u;
    // 0x7acb64: 0x86060006  lh          $a2, 0x6($s0)
    ctx->pc = 0x7acb64u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x7acb68: 0x84a40006  lh          $a0, 0x6($a1)
    ctx->pc = 0x7acb68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x7acb6c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x7acb6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x7acb70: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x7ACB70u;
    {
        const bool branch_taken_0x7acb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7ACB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACB70u;
        // 0x7acb74: 0x94a90006  lhu         $t1, 0x6($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acb70) {
            ctx->pc = 0x7ACBC0u;
            goto label_7acbc0;
        }
    }
    ctx->pc = 0x7ACB78u;
    // 0x7acb78: 0x15030005  bne         $t0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7ACB78u;
    {
        const bool branch_taken_0x7acb78 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x7acb78) {
            ctx->pc = 0x7ACB90u;
            goto label_7acb90;
        }
    }
    ctx->pc = 0x7ACB80u;
    // 0x7acb80: 0x14c40003  bne         $a2, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7ACB80u;
    {
        const bool branch_taken_0x7acb80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x7ACB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACB80u;
        // 0x7acb84: 0xb0102b  sltu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acb80) {
            ctx->pc = 0x7ACB90u;
            goto label_7acb90;
        }
    }
    ctx->pc = 0x7ACB88u;
    // 0x7acb88: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x7ACB88u;
    {
        const bool branch_taken_0x7acb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7acb88) {
            ctx->pc = 0x7ACB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ACB88u;
            // 0x7acb8c: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ACBC4u;
            goto label_7acbc4;
        }
    }
    ctx->pc = 0x7ACB90u;
label_7acb90:
    // 0x7acb90: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7ACB90u;
    {
        const bool branch_taken_0x7acb90 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x7acb90) {
            ctx->pc = 0x7ACB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ACB90u;
            // 0x7acb94: 0x90e20003  lbu         $v0, 0x3($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ACBA0u;
            goto label_7acba0;
        }
    }
    ctx->pc = 0x7ACB98u;
    // 0x7acb98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7ACB98u;
    {
        const bool branch_taken_0x7acb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ACB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACB98u;
        // 0x7acb9c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acb98) {
            ctx->pc = 0x7ACBC0u;
            goto label_7acbc0;
        }
    }
    ctx->pc = 0x7ACBA0u;
label_7acba0:
    // 0x7acba0: 0x4a102b  sltu        $v0, $v0, $t2
    ctx->pc = 0x7acba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x7acba4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x7ACBA4u;
    {
        const bool branch_taken_0x7acba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7acba4) {
            ctx->pc = 0x7ACBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ACBA4u;
            // 0x7acba8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ACBC4u;
            goto label_7acbc4;
        }
    }
    ctx->pc = 0x7ACBACu;
    // 0x7acbac: 0x84e30006  lh          $v1, 0x6($a3)
    ctx->pc = 0x7acbacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x7acbb0: 0x91400  sll         $v0, $t1, 16
    ctx->pc = 0x7acbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x7acbb4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x7acbb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x7acbb8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x7acbb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7acbbc: 0xa2380b  movn        $a3, $a1, $v0
    ctx->pc = 0x7acbbcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
label_7acbc0:
    // 0x7acbc0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x7acbc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_7acbc4:
    // 0x7acbc4: 0x171102b  sltu        $v0, $t3, $s1
    ctx->pc = 0x7acbc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x7acbc8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x7ACBC8u;
    {
        const bool branch_taken_0x7acbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7ACBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACBC8u;
        // 0x7acbcc: 0x24a5001c  addiu       $a1, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acbc8) {
            ctx->pc = 0x7ACB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7acb38;
        }
    }
    ctx->pc = 0x7ACBD0u;
label_7acbd0:
    // 0x7acbd0: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x7ACBD0u;
    {
        const bool branch_taken_0x7acbd0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ACBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACBD0u;
        // 0x7acbd4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acbd0) {
            ctx->pc = 0x7ACBECu;
            goto label_7acbec;
        }
    }
    ctx->pc = 0x7ACBD8u;
    // 0x7acbd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7acbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7acbdc: 0xc1eb20a  jal         func_7AC828
    ctx->pc = 0x7ACBDCu;
    SET_GPR_U32(ctx, 31, 0x7ACBE4u);
    ctx->pc = 0x7ACBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ACBDCu;
    // 0x7acbe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AC828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AC828u, 0x7ACBDCu, 0x7ACBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ACBE4u;
label_7acbe4:
    // 0x7acbe4: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x7ACBE4u;
    {
        const bool branch_taken_0x7acbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ACBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACBE4u;
        // 0x7acbe8: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acbe4) {
            ctx->pc = 0x7ACB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7acb28;
        }
    }
    ctx->pc = 0x7ACBECu;
label_7acbec:
    // 0x7acbec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7acbecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7acbf0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7acbf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7acbf4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7acbf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7acbf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7acbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7acbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x7ACBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ACC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACBFCu;
        // 0x7acc00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ACBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ACC04u;
    // 0x7acc04: 0x0  nop
    ctx->pc = 0x7acc04u;
    // NOP
    ctx->pc = 0x7acc08u;
}
} // namespace gh_event
