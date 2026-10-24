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

// Function: func_003ACA28
// Address: 0x3aca28 - 0x3acd20
void func_003ACA28_0x3aca28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003ACA28_0x3aca28");
#endif

    switch (ctx->pc) {
        case 0x3aca4cu: goto label_3aca4c;
        case 0x3acae4u: goto label_3acae4;
        case 0x3acaecu: goto label_3acaec;
        case 0x3accd0u: goto label_3accd0;
        case 0x3acd08u: goto label_3acd08;
        default: break;
    }

    ctx->pc = 0x3aca28u;

    // 0x3aca28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3aca28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3aca2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3aca2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3aca30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3aca30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3aca34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3aca34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aca38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3aca38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3aca3c: 0x120000b2  beqz        $s0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x3ACA3Cu;
    {
        const bool branch_taken_0x3aca3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA3Cu;
        // 0x3aca40: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aca3c) {
            ctx->pc = 0x3ACD08u;
            goto label_3acd08;
        }
    }
    ctx->pc = 0x3ACA44u;
    // 0x3aca44: 0xc0ea012  jal         func_3A8048
    ctx->pc = 0x3ACA44u;
    SET_GPR_U32(ctx, 31, 0x3ACA4Cu);
    ctx->pc = 0x3A8048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8048u, 0x3ACA44u, 0x3ACA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACA4Cu;
label_3aca4c:
    // 0x3aca4c: 0x260afff8  addiu       $t2, $s0, -0x8
    ctx->pc = 0x3aca4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x3aca50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3aca50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3aca54: 0x8d460004  lw          $a2, 0x4($t2)
    ctx->pc = 0x3aca54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x3aca58: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x3aca58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x3aca5c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3aca5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3aca60: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3aca60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3aca64: 0xc24824  and         $t1, $a2, $v0
    ctx->pc = 0x3aca64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3aca68: 0x24aba9d0  addiu       $t3, $a1, -0x5630
    ctx->pc = 0x3aca68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945232));
    // 0x3aca6c: 0x1493821  addu        $a3, $t2, $t1
    ctx->pc = 0x3aca6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3aca70: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x3aca70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x3aca74: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x3aca74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3aca78: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x3aca78u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aca7c: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x3aca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x3aca80: 0x14e2001c  bne         $a3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3ACA80u;
    {
        const bool branch_taken_0x3aca80 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x3ACA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA80u;
        // 0x3aca84: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aca80) {
            ctx->pc = 0x3ACAF4u;
            goto label_3acaf4;
        }
    }
    ctx->pc = 0x3ACA88u;
    // 0x3aca88: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3aca88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3aca8c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ACA8Cu;
    {
        const bool branch_taken_0x3aca8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA8Cu;
        // 0x3aca90: 0x1244821  addu        $t1, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aca8c) {
            ctx->pc = 0x3ACAB0u;
            goto label_3acab0;
        }
    }
    ctx->pc = 0x3ACA94u;
    // 0x3aca94: 0x8e05fff8  lw          $a1, -0x8($s0)
    ctx->pc = 0x3aca94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x3aca98: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x3aca98u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x3aca9c: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x3aca9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x3acaa0: 0x8d48000c  lw          $t0, 0xC($t2)
    ctx->pc = 0x3acaa0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3acaa4: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x3acaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3acaa8: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x3acaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x3acaac: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x3acaacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_3acab0:
    // 0x3acab0: 0x35230001  ori         $v1, $t1, 0x1
    ctx->pc = 0x3acab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x3acab4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3acab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3acab8: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x3acab8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
    // 0x3acabc: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x3acabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x3acac0: 0xad6a0008  sw          $t2, 0x8($t3)
    ctx->pc = 0x3acac0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 10));
    // 0x3acac4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3acac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3acac8: 0xdc83add8  ld          $v1, -0x5228($a0)
    ctx->pc = 0x3acac8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294946264)));
    // 0x3acacc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3acaccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3acad0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ACAD0u;
    {
        const bool branch_taken_0x3acad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAD0u;
        // 0x3acad4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acad0) {
            ctx->pc = 0x3ACAE4u;
            goto label_3acae4;
        }
    }
    ctx->pc = 0x3ACAD8u;
    // 0x3acad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3acad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acadc: 0xc0eb348  jal         func_3ACD20
    ctx->pc = 0x3ACADCu;
    SET_GPR_U32(ctx, 31, 0x3ACAE4u);
    ctx->pc = 0x3ACAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACADCu;
    // 0x3acae0: 0x8c45ade0  lw          $a1, -0x5220($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACD20u, 0x3ACADCu, 0x3ACAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACAE4u;
label_3acae4:
    // 0x3acae4: 0xc0ea02a  jal         func_3A80A8
    ctx->pc = 0x3ACAE4u;
    SET_GPR_U32(ctx, 31, 0x3ACAECu);
    ctx->pc = 0x3ACAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACAE4u;
    // 0x3acae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A80A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A80A8u, 0x3ACAE4u, 0x3ACAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACAECu;
label_3acaec:
    // 0x3acaec: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x3ACAECu;
    {
        const bool branch_taken_0x3acaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAECu;
        // 0x3acaf0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acaec) {
            ctx->pc = 0x3ACD0Cu;
            goto label_3acd0c;
        }
    }
    ctx->pc = 0x3ACAF4u;
label_3acaf4:
    // 0x3acaf4: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3acaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3acaf8: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x3acaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x3acafc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3ACAFCu;
    {
        const bool branch_taken_0x3acafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAFCu;
        // 0x3acb00: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acafc) {
            ctx->pc = 0x3ACB34u;
            goto label_3acb34;
        }
    }
    ctx->pc = 0x3ACB04u;
    // 0x3acb04: 0x8e05fff8  lw          $a1, -0x8($s0)
    ctx->pc = 0x3acb04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x3acb08: 0x25620008  addiu       $v0, $t3, 0x8
    ctx->pc = 0x3acb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x3acb0c: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x3acb0cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x3acb10: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x3acb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3acb14: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ACB14u;
    {
        const bool branch_taken_0x3acb14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3ACB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB14u;
        // 0x3acb18: 0x1254821  addu        $t1, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acb14) {
            ctx->pc = 0x3ACB24u;
            goto label_3acb24;
        }
    }
    ctx->pc = 0x3ACB1Cu;
    // 0x3acb1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3ACB1Cu;
    {
        const bool branch_taken_0x3acb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB1Cu;
        // 0x3acb20: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acb1c) {
            ctx->pc = 0x3ACB34u;
            goto label_3acb34;
        }
    }
    ctx->pc = 0x3ACB24u;
label_3acb24:
    // 0x3acb24: 0x8d48000c  lw          $t0, 0xC($t2)
    ctx->pc = 0x3acb24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3acb28: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3acb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acb2c: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x3acb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x3acb30: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x3acb30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_3acb34:
    // 0x3acb34: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x3acb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3acb38: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3acb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3acb3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3acb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3acb40: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3ACB40u;
    {
        const bool branch_taken_0x3acb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB40u;
        // 0x3acb44: 0x35220001  ori         $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acb40) {
            ctx->pc = 0x3ACB90u;
            goto label_3acb90;
        }
    }
    ctx->pc = 0x3ACB48u;
    // 0x3acb48: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x3acb48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x3acb4c: 0x1580000b  bnez        $t4, . + 4 + (0xB << 2)
    ctx->pc = 0x3ACB4Cu;
    {
        const bool branch_taken_0x3acb4c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB4Cu;
        // 0x3acb50: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acb4c) {
            ctx->pc = 0x3ACB7Cu;
            goto label_3acb7c;
        }
    }
    ctx->pc = 0x3ACB54u;
    // 0x3acb54: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3acb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3acb58: 0x2442a9d8  addiu       $v0, $v0, -0x5628
    ctx->pc = 0x3acb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945240));
    // 0x3acb5c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ACB5Cu;
    {
        const bool branch_taken_0x3acb5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3acb5c) {
            ctx->pc = 0x3ACB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACB5Cu;
            // 0x3acb60: 0x8ce8000c  lw          $t0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACB80u;
            goto label_3acb80;
        }
    }
    ctx->pc = 0x3ACB64u;
    // 0x3acb64: 0xac6a000c  sw          $t2, 0xC($v1)
    ctx->pc = 0x3acb64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
    // 0x3acb68: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x3acb68u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3acb6c: 0xac6a0008  sw          $t2, 0x8($v1)
    ctx->pc = 0x3acb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
    // 0x3acb70: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x3acb70u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x3acb74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3ACB74u;
    {
        const bool branch_taken_0x3acb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB74u;
        // 0x3acb78: 0xad43000c  sw          $v1, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acb74) {
            ctx->pc = 0x3ACB8Cu;
            goto label_3acb8c;
        }
    }
    ctx->pc = 0x3ACB7Cu;
label_3acb7c:
    // 0x3acb7c: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x3acb7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_3acb80:
    // 0x3acb80: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3acb80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acb84: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x3acb84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x3acb88: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x3acb88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_3acb8c:
    // 0x3acb8c: 0x35220001  ori         $v0, $t1, 0x1
    ctx->pc = 0x3acb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
label_3acb90:
    // 0x3acb90: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x3acb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3acb94: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x3acb94u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x3acb98: 0x15800059  bnez        $t4, . + 4 + (0x59 << 2)
    ctx->pc = 0x3ACB98u;
    {
        const bool branch_taken_0x3acb98 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB98u;
        // 0x3acb9c: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acb98) {
            ctx->pc = 0x3ACD00u;
            goto label_3acd00;
        }
    }
    ctx->pc = 0x3ACBA0u;
    // 0x3acba0: 0x2d220200  sltiu       $v0, $t1, 0x200
    ctx->pc = 0x3acba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x3acba4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3ACBA4u;
    {
        const bool branch_taken_0x3acba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBA4u;
        // 0x3acba8: 0x938c2  srl         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acba4) {
            ctx->pc = 0x3ACBF0u;
            goto label_3acbf0;
        }
    }
    ctx->pc = 0x3ACBACu;
    // 0x3acbac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3acbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3acbb0: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3acbb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3acbb4: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x3acbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x3acbb8: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x3acbb8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x3acbbc: 0x25a5a9d0  addiu       $a1, $t5, -0x5630
    ctx->pc = 0x3acbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 4294945232));
    // 0x3acbc0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3acbc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3acbc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3acbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3acbc8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3acbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3acbcc: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x3acbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x3acbd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3acbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3acbd4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3acbd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3acbd8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x3acbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3acbdc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3acbdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3acbe0: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x3acbe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3acbe4: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x3acbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x3acbe8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3ACBE8u;
    {
        const bool branch_taken_0x3acbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBE8u;
        // 0x3acbec: 0x8d060008  lw          $a2, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acbe8) {
            ctx->pc = 0x3ACCF0u;
            goto label_3accf0;
        }
    }
    ctx->pc = 0x3ACBF0u;
label_3acbf0:
    // 0x3acbf0: 0x91a42  srl         $v1, $t1, 9
    ctx->pc = 0x3acbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 9));
    // 0x3acbf4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ACBF4u;
    {
        const bool branch_taken_0x3acbf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBF4u;
        // 0x3acbf8: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acbf4) {
            ctx->pc = 0x3ACC04u;
            goto label_3acc04;
        }
    }
    ctx->pc = 0x3ACBFCu;
    // 0x3acbfc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3ACBFCu;
    {
        const bool branch_taken_0x3acbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACBFCu;
        // 0x3acc00: 0x938c2  srl         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acbfc) {
            ctx->pc = 0x3ACC60u;
            goto label_3acc60;
        }
    }
    ctx->pc = 0x3ACC04u;
label_3acc04:
    // 0x3acc04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ACC04u;
    {
        const bool branch_taken_0x3acc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC04u;
        // 0x3acc08: 0x91182  srl         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc04) {
            ctx->pc = 0x3ACC14u;
            goto label_3acc14;
        }
    }
    ctx->pc = 0x3ACC0Cu;
    // 0x3acc0c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3ACC0Cu;
    {
        const bool branch_taken_0x3acc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC0Cu;
        // 0x3acc10: 0x24470038  addiu       $a3, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc0c) {
            ctx->pc = 0x3ACC60u;
            goto label_3acc60;
        }
    }
    ctx->pc = 0x3ACC14u;
label_3acc14:
    // 0x3acc14: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x3acc14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x3acc18: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3ACC18u;
    {
        const bool branch_taken_0x3acc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC18u;
        // 0x3acc1c: 0x2467005b  addiu       $a3, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc18) {
            ctx->pc = 0x3ACC60u;
            goto label_3acc60;
        }
    }
    ctx->pc = 0x3ACC20u;
    // 0x3acc20: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x3acc20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x3acc24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ACC24u;
    {
        const bool branch_taken_0x3acc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC24u;
        // 0x3acc28: 0x91302  srl         $v0, $t1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc24) {
            ctx->pc = 0x3ACC34u;
            goto label_3acc34;
        }
    }
    ctx->pc = 0x3ACC2Cu;
    // 0x3acc2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3ACC2Cu;
    {
        const bool branch_taken_0x3acc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC2Cu;
        // 0x3acc30: 0x2447006e  addiu       $a3, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc2c) {
            ctx->pc = 0x3ACC60u;
            goto label_3acc60;
        }
    }
    ctx->pc = 0x3ACC34u;
label_3acc34:
    // 0x3acc34: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x3acc34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x3acc38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ACC38u;
    {
        const bool branch_taken_0x3acc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC38u;
        // 0x3acc3c: 0x913c2  srl         $v0, $t1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc38) {
            ctx->pc = 0x3ACC48u;
            goto label_3acc48;
        }
    }
    ctx->pc = 0x3ACC40u;
    // 0x3acc40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3ACC40u;
    {
        const bool branch_taken_0x3acc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC40u;
        // 0x3acc44: 0x24470077  addiu       $a3, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc40) {
            ctx->pc = 0x3ACC60u;
            goto label_3acc60;
        }
    }
    ctx->pc = 0x3ACC48u;
label_3acc48:
    // 0x3acc48: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x3acc48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x3acc4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ACC4Cu;
    {
        const bool branch_taken_0x3acc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC4Cu;
        // 0x3acc50: 0x91482  srl         $v0, $t1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc4c) {
            ctx->pc = 0x3ACC5Cu;
            goto label_3acc5c;
        }
    }
    ctx->pc = 0x3ACC54u;
    // 0x3acc54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3ACC54u;
    {
        const bool branch_taken_0x3acc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC54u;
        // 0x3acc58: 0x2447007c  addiu       $a3, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc54) {
            ctx->pc = 0x3ACC60u;
            goto label_3acc60;
        }
    }
    ctx->pc = 0x3ACC5Cu;
label_3acc5c:
    // 0x3acc5c: 0x2407007e  addiu       $a3, $zero, 0x7E
    ctx->pc = 0x3acc5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_3acc60:
    // 0x3acc60: 0x25aba9d0  addiu       $t3, $t5, -0x5630
    ctx->pc = 0x3acc60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 4294945232));
    // 0x3acc64: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x3acc64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3acc68: 0x4b4021  addu        $t0, $v0, $t3
    ctx->pc = 0x3acc68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3acc6c: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x3acc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3acc70: 0x54c8000e  bnel        $a2, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x3ACC70u;
    {
        const bool branch_taken_0x3acc70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x3acc70) {
            ctx->pc = 0x3ACC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACC70u;
            // 0x3acc74: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACCACu;
            goto label_3accac;
        }
    }
    ctx->pc = 0x3ACC78u;
    // 0x3acc78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3acc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3acc7c: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x3acc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x3acc80: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3acc80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3acc84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3acc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3acc88: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x3acc88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x3acc8c: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x3acc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x3acc90: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3acc90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3acc94: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x3acc94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x3acc98: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3acc98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3acc9c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3acc9cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3acca0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3acca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3acca4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3ACCA4u;
    {
        const bool branch_taken_0x3acca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACCA4u;
        // 0x3acca8: 0xad650004  sw          $a1, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acca4) {
            ctx->pc = 0x3ACCF0u;
            goto label_3accf0;
        }
    }
    ctx->pc = 0x3ACCACu;
label_3accac:
    // 0x3accac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3accacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3accb0: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3accb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3accb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3accb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3accb8: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x3accb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3accbc: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3ACCBCu;
    {
        const bool branch_taken_0x3accbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3accbc) {
            ctx->pc = 0x3ACCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACCBCu;
            // 0x3accc0: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACCF0u;
            goto label_3accf0;
        }
    }
    ctx->pc = 0x3ACCC4u;
    // 0x3accc4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3accc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3accc8: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x3accc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x3acccc: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3accccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3accd0:
    // 0x3accd0: 0x50c80007  beql        $a2, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3ACCD0u;
    {
        const bool branch_taken_0x3accd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x3accd0) {
            ctx->pc = 0x3ACCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACCD0u;
            // 0x3accd4: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACCF0u;
            goto label_3accf0;
        }
    }
    ctx->pc = 0x3ACCD8u;
    // 0x3accd8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3accd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3accdc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3accdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3acce0: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x3acce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3acce4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3ACCE4u;
    {
        const bool branch_taken_0x3acce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3acce4) {
            ctx->pc = 0x3ACCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACCE4u;
            // 0x3acce8: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3accd0;
        }
    }
    ctx->pc = 0x3ACCECu;
    // 0x3accec: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x3accecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3accf0:
    // 0x3accf0: 0xad48000c  sw          $t0, 0xC($t2)
    ctx->pc = 0x3accf0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 8));
    // 0x3accf4: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x3accf4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
    // 0x3accf8: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x3accf8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
    // 0x3accfc: 0xacca000c  sw          $t2, 0xC($a2)
    ctx->pc = 0x3accfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 10));
label_3acd00:
    // 0x3acd00: 0xc0ea02a  jal         func_3A80A8
    ctx->pc = 0x3ACD00u;
    SET_GPR_U32(ctx, 31, 0x3ACD08u);
    ctx->pc = 0x3ACD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACD00u;
    // 0x3acd04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A80A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A80A8u, 0x3ACD00u, 0x3ACD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACD08u;
label_3acd08:
    // 0x3acd08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3acd08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3acd0c:
    // 0x3acd0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3acd0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3acd10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3acd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3acd14: 0x3e00008  jr          $ra
    ctx->pc = 0x3ACD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD14u;
        // 0x3acd18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACD1Cu;
    // 0x3acd1c: 0x0  nop
    ctx->pc = 0x3acd1cu;
    // NOP
    ctx->pc = 0x3acd20u;
}
