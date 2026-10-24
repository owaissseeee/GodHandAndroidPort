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
// Function: func_007CBBB8
// Address: 0x7cbbb8 - 0x7cbee8
void func_007CBBB8_0x7cbbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CBBB8_0x7cbbb8");
#endif

    switch (ctx->pc) {
        case 0x7cbc20u: goto label_7cbc20;
        case 0x7cbc64u: goto label_7cbc64;
        case 0x7cbc8cu: goto label_7cbc8c;
        case 0x7cbca0u: goto label_7cbca0;
        case 0x7cbcc8u: goto label_7cbcc8;
        case 0x7cbd40u: goto label_7cbd40;
        case 0x7cbd64u: goto label_7cbd64;
        case 0x7cbd94u: goto label_7cbd94;
        case 0x7cbda4u: goto label_7cbda4;
        case 0x7cbdccu: goto label_7cbdcc;
        case 0x7cbe20u: goto label_7cbe20;
        case 0x7cbe30u: goto label_7cbe30;
        case 0x7cbe48u: goto label_7cbe48;
        case 0x7cbe68u: goto label_7cbe68;
        case 0x7cbe84u: goto label_7cbe84;
        default: break;
    }

    ctx->pc = 0x7cbbb8u;

    // 0x7cbbb8: 0x27bdf960  addiu       $sp, $sp, -0x6A0
    ctx->pc = 0x7cbbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965600));
    // 0x7cbbbc: 0xffbe0680  sd          $fp, 0x680($sp)
    ctx->pc = 0x7cbbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 30));
    // 0x7cbbc0: 0xffb60660  sd          $s6, 0x660($sp)
    ctx->pc = 0x7cbbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 22));
    // 0x7cbbc4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x7cbbc4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbbc8: 0xffb50650  sd          $s5, 0x650($sp)
    ctx->pc = 0x7cbbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 21));
    // 0x7cbbcc: 0xffb40640  sd          $s4, 0x640($sp)
    ctx->pc = 0x7cbbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 20));
    // 0x7cbbd0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x7cbbd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbbd4: 0xffb30630  sd          $s3, 0x630($sp)
    ctx->pc = 0x7cbbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 19));
    // 0x7cbbd8: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x7cbbd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbbdc: 0xffb00600  sd          $s0, 0x600($sp)
    ctx->pc = 0x7cbbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 16));
    // 0x7cbbe0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7cbbe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbbe4: 0xffbf0690  sd          $ra, 0x690($sp)
    ctx->pc = 0x7cbbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 31));
    // 0x7cbbe8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7cbbe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbbec: 0xffb70670  sd          $s7, 0x670($sp)
    ctx->pc = 0x7cbbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 23));
    // 0x7cbbf0: 0xffb20620  sd          $s2, 0x620($sp)
    ctx->pc = 0x7cbbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 18));
    // 0x7cbbf4: 0xffb10610  sd          $s1, 0x610($sp)
    ctx->pc = 0x7cbbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 17));
    // 0x7cbbf8: 0xafa705e4  sw          $a3, 0x5E4($sp)
    ctx->pc = 0x7cbbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1508), GPR_U32(ctx, 7));
    // 0x7cbbfc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x7cbbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x7cbc00: 0x8e770008  lw          $s7, 0x8($s3)
    ctx->pc = 0x7cbc00u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x7cbc04: 0xafb005e8  sw          $s0, 0x5E8($sp)
    ctx->pc = 0x7cbc04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1512), GPR_U32(ctx, 16));
    // 0x7cbc08: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x7cbc08u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x7cbc0c: 0x8cf10000  lw          $s1, 0x0($a3)
    ctx->pc = 0x7cbc0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x7cbc10: 0xafa005f4  sw          $zero, 0x5F4($sp)
    ctx->pc = 0x7cbc10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 0));
    // 0x7cbc14: 0xafa005f8  sw          $zero, 0x5F8($sp)
    ctx->pc = 0x7cbc14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1528), GPR_U32(ctx, 0));
    // 0x7cbc18: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x7CBC18u;
    {
        const bool branch_taken_0x7cbc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBC18u;
        // 0x7cbc1c: 0xafa005e0  sw          $zero, 0x5E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbc18) {
            ctx->pc = 0x7CBD50u;
            goto label_7cbd50;
        }
    }
    ctx->pc = 0x7CBC20u;
label_7cbc20:
    // 0x7cbc20: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x7cbc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7cbc24: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CBC24u;
    {
        const bool branch_taken_0x7cbc24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x7cbc24) {
            ctx->pc = 0x7CBC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CBC24u;
            // 0x7cbc28: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CBC34u;
            goto label_7cbc34;
        }
    }
    ctx->pc = 0x7CBC2Cu;
    // 0x7cbc2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7CBC2Cu;
    {
        const bool branch_taken_0x7cbc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBC2Cu;
        // 0x7cbc30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbc2c) {
            ctx->pc = 0x7CBC44u;
            goto label_7cbc44;
        }
    }
    ctx->pc = 0x7CBC34u;
label_7cbc34:
    // 0x7cbc34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x7cbc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x7cbc38: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x7cbc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x7cbc3c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x7cbc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x7cbc40: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x7cbc40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_7cbc44:
    // 0x7cbc44: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x7CBC44u;
    {
        const bool branch_taken_0x7cbc44 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBC44u;
        // 0x7cbc48: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbc44) {
            ctx->pc = 0x7CBC70u;
            goto label_7cbc70;
        }
    }
    ctx->pc = 0x7CBC4Cu;
    // 0x7cbc4c: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x7cbc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x7cbc50: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x7cbc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7cbc54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x7cbc54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cbc58: 0x27a805e0  addiu       $t0, $sp, 0x5E0
    ctx->pc = 0x7cbc58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
    // 0x7cbc5c: 0xc1f2e34  jal         func_7CB8D0
    ctx->pc = 0x7CBC5Cu;
    SET_GPR_U32(ctx, 31, 0x7CBC64u);
    ctx->pc = 0x7CBC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CBC5Cu;
    // 0x7cbc60: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CB8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB8D0u, 0x7CBC5Cu, 0x7CBC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBC64u;
label_7cbc64:
    // 0x7cbc64: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x7cbc64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbc68: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x7CBC68u;
    {
        const bool branch_taken_0x7cbc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBC68u;
        // 0x7cbc6c: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbc68) {
            ctx->pc = 0x7CBCA4u;
            goto label_7cbca4;
        }
    }
    ctx->pc = 0x7CBC70u;
label_7cbc70:
    // 0x7cbc70: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CBC70u;
    {
        const bool branch_taken_0x7cbc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBC70u;
        // 0x7cbc74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbc70) {
            ctx->pc = 0x7CBC94u;
            goto label_7cbc94;
        }
    }
    ctx->pc = 0x7CBC78u;
    // 0x7cbc78: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x7cbc78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7cbc7c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x7cbc7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbc80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7cbc80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbc84: 0xc1f2e34  jal         func_7CB8D0
    ctx->pc = 0x7CBC84u;
    SET_GPR_U32(ctx, 31, 0x7CBC8Cu);
    ctx->pc = 0x7CBC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CBC84u;
    // 0x7cbc88: 0x27a805e0  addiu       $t0, $sp, 0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CB8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB8D0u, 0x7CBC84u, 0x7CBC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBC8Cu;
label_7cbc8c:
    // 0x7cbc8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7CBC8Cu;
    {
        const bool branch_taken_0x7cbc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBC8Cu;
        // 0x7cbc90: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbc8c) {
            ctx->pc = 0x7CBCA4u;
            goto label_7cbca4;
        }
    }
    ctx->pc = 0x7CBC94u;
label_7cbc94:
    // 0x7cbc94: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x7cbc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7cbc98: 0xc1f2dfe  jal         func_7CB7F8
    ctx->pc = 0x7CBC98u;
    SET_GPR_U32(ctx, 31, 0x7CBCA0u);
    ctx->pc = 0x7CBC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CBC98u;
    // 0x7cbc9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB7F8u, 0x7CBC98u, 0x7CBCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBCA0u;
label_7cbca0:
    // 0x7cbca0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x7cbca0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7cbca4:
    // 0x7cbca4: 0x12a00022  beqz        $s5, . + 4 + (0x22 << 2)
    ctx->pc = 0x7CBCA4u;
    {
        const bool branch_taken_0x7cbca4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBCA4u;
        // 0x7cbca8: 0x8fa205e0  lw          $v0, 0x5E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbca4) {
            ctx->pc = 0x7CBD30u;
            goto label_7cbd30;
        }
    }
    ctx->pc = 0x7CBCACu;
    // 0x7cbcac: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7CBCACu;
    {
        const bool branch_taken_0x7cbcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBCACu;
        // 0x7cbcb0: 0x8fa205f8  lw          $v0, 0x5F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbcac) {
            ctx->pc = 0x7CBD28u;
            goto label_7cbd28;
        }
    }
    ctx->pc = 0x7CBCB4u;
    // 0x7cbcb4: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x7CBCB4u;
    {
        const bool branch_taken_0x7cbcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7cbcb4) {
            ctx->pc = 0x7CBCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CBCB4u;
            // 0x7cbcb8: 0x9624029a  lhu         $a0, 0x29A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CBD34u;
            goto label_7cbd34;
        }
    }
    ctx->pc = 0x7CBCBCu;
    // 0x7cbcbc: 0x27a302f0  addiu       $v1, $sp, 0x2F0
    ctx->pc = 0x7cbcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x7cbcc0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x7cbcc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbcc4: 0x262402e0  addiu       $a0, $s1, 0x2E0
    ctx->pc = 0x7cbcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
label_7cbcc8:
    // 0x7cbcc8: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x7cbcc8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cbccc: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x7cbcccu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x7cbcd0: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x7cbcd0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x7cbcd4: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x7cbcd4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x7cbcd8: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x7cbcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x7cbcdc: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x7cbcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x7cbce0: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x7cbce0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x7cbce4: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x7cbce4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x7cbce8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x7cbce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x7cbcec: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7cbcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7cbcf0: 0x0  nop
    ctx->pc = 0x7cbcf0u;
    // NOP
    // 0x7cbcf4: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x7CBCF4u;
    {
        const bool branch_taken_0x7cbcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x7cbcf4) {
            ctx->pc = 0x7CBCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cbcc8;
        }
    }
    ctx->pc = 0x7CBCFCu;
    // 0x7cbcfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7cbcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cbd00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7cbd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cbd04: 0xafb005f0  sw          $s0, 0x5F0($sp)
    ctx->pc = 0x7cbd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1520), GPR_U32(ctx, 16));
    // 0x7cbd08: 0xafb505ec  sw          $s5, 0x5EC($sp)
    ctx->pc = 0x7cbd08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1516), GPR_U32(ctx, 21));
    // 0x7cbd0c: 0xafa405f8  sw          $a0, 0x5F8($sp)
    ctx->pc = 0x7cbd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1528), GPR_U32(ctx, 4));
    // 0x7cbd10: 0xafa505f4  sw          $a1, 0x5F4($sp)
    ctx->pc = 0x7cbd10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 5));
    // 0x7cbd14: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x7cbd14u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cbd18: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x7cbd18u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x7cbd1c: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x7cbd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x7cbd20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7CBD20u;
    {
        const bool branch_taken_0x7cbd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBD20u;
        // 0x7cbd24: 0xfc670008  sd          $a3, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbd20) {
            ctx->pc = 0x7CBD30u;
            goto label_7cbd30;
        }
    }
    ctx->pc = 0x7CBD28u;
label_7cbd28:
    // 0x7cbd28: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x7CBD28u;
    {
        const bool branch_taken_0x7cbd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBD28u;
        // 0x7cbd2c: 0xafa005f4  sw          $zero, 0x5F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbd28) {
            ctx->pc = 0x7CBD70u;
            goto label_7cbd70;
        }
    }
    ctx->pc = 0x7CBD30u;
label_7cbd30:
    // 0x7cbd30: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x7cbd30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_7cbd34:
    // 0x7cbd34: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x7cbd34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbd38: 0xc1f2e86  jal         func_7CBA18
    ctx->pc = 0x7CBD38u;
    SET_GPR_U32(ctx, 31, 0x7CBD40u);
    ctx->pc = 0x7CBD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CBD38u;
    // 0x7cbd3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CBA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBA18u, 0x7CBD38u, 0x7CBD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBD40u;
label_7cbd40:
    // 0x7cbd40: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x7cbd40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cbd44: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x7cbd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x7cbd48: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x7cbd48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x7cbd4c: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x7cbd4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_7cbd50:
    // 0x7cbd50: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x7cbd50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbd54: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x7cbd54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbd58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cbd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbd5c: 0xc1f2ec8  jal         func_7CBB20
    ctx->pc = 0x7CBD5Cu;
    SET_GPR_U32(ctx, 31, 0x7CBD64u);
    ctx->pc = 0x7CBD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CBD5Cu;
    // 0x7cbd60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CBB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBB20u, 0x7CBD5Cu, 0x7CBD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBD64u;
label_7cbd64:
    // 0x7cbd64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7cbd64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbd68: 0x1620ffad  bnez        $s1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x7CBD68u;
    {
        const bool branch_taken_0x7cbd68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBD68u;
        // 0x7cbd6c: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbd68) {
            ctx->pc = 0x7CBC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cbc20;
        }
    }
    ctx->pc = 0x7CBD70u;
label_7cbd70:
    // 0x7cbd70: 0x8fa505f8  lw          $a1, 0x5F8($sp)
    ctx->pc = 0x7cbd70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1528)));
    // 0x7cbd74: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x7CBD74u;
    {
        const bool branch_taken_0x7cbd74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBD74u;
        // 0x7cbd78: 0x8fa605f4  lw          $a2, 0x5F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbd74) {
            ctx->pc = 0x7CBD94u;
            goto label_7cbd94;
        }
    }
    ctx->pc = 0x7CBD7Cu;
    // 0x7cbd7c: 0x27b102f0  addiu       $s1, $sp, 0x2F0
    ctx->pc = 0x7cbd7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x7cbd80: 0x8fb505ec  lw          $s5, 0x5EC($sp)
    ctx->pc = 0x7cbd80u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1516)));
    // 0x7cbd84: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CBD84u;
    {
        const bool branch_taken_0x7cbd84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBD84u;
        // 0x7cbd88: 0x8fb005f0  lw          $s0, 0x5F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbd84) {
            ctx->pc = 0x7CBD94u;
            goto label_7cbd94;
        }
    }
    ctx->pc = 0x7CBD8Cu;
    // 0x7cbd8c: 0xc1f2eec  jal         func_7CBBB0
    ctx->pc = 0x7CBD8Cu;
    SET_GPR_U32(ctx, 31, 0x7CBD94u);
    ctx->pc = 0x7CBBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBBB0u, 0x7CBD8Cu, 0x7CBD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBD94u;
label_7cbd94:
    // 0x7cbd94: 0x56a00004  bnel        $s5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CBD94u;
    {
        const bool branch_taken_0x7cbd94 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x7cbd94) {
            ctx->pc = 0x7CBD98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CBD94u;
            // 0x7cbd98: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CBDA8u;
            goto label_7cbda8;
        }
    }
    ctx->pc = 0x7CBD9Cu;
    // 0x7cbd9c: 0xc1f2cd4  jal         func_7CB350
    ctx->pc = 0x7CBD9Cu;
    SET_GPR_U32(ctx, 31, 0x7CBDA4u);
    ctx->pc = 0x7CB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CB350u, 0x7CBD9Cu, 0x7CBDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBDA4u;
label_7cbda4:
    // 0x7cbda4: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x7cbda4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_7cbda8:
    // 0x7cbda8: 0x8fa705e8  lw          $a3, 0x5E8($sp)
    ctx->pc = 0x7cbda8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x7cbdac: 0x16070003  bne         $s0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CBDACu;
    {
        const bool branch_taken_0x7cbdac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        ctx->pc = 0x7CBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBDACu;
        // 0x7cbdb0: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbdac) {
            ctx->pc = 0x7CBDBCu;
            goto label_7cbdbc;
        }
    }
    ctx->pc = 0x7CBDB4u;
    // 0x7cbdb4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x7CBDB4u;
    {
        const bool branch_taken_0x7cbdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBDB4u;
        // 0x7cbdb8: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbdb4) {
            ctx->pc = 0x7CBEACu;
            goto label_7cbeac;
        }
    }
    ctx->pc = 0x7CBDBCu;
label_7cbdbc:
    // 0x7cbdbc: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x7cbdbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbdc0: 0x8fb005e8  lw          $s0, 0x5E8($sp)
    ctx->pc = 0x7cbdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x7cbdc4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x7cbdc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbdc8: 0x27c402e0  addiu       $a0, $fp, 0x2E0
    ctx->pc = 0x7cbdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 736));
label_7cbdcc:
    // 0x7cbdcc: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x7cbdccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cbdd0: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x7cbdd0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x7cbdd4: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x7cbdd4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x7cbdd8: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x7cbdd8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x7cbddc: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x7cbddcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x7cbde0: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x7cbde0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x7cbde4: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x7cbde4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x7cbde8: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x7cbde8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x7cbdec: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x7cbdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x7cbdf0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7cbdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7cbdf4: 0x0  nop
    ctx->pc = 0x7cbdf4u;
    // NOP
    // 0x7cbdf8: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x7CBDF8u;
    {
        const bool branch_taken_0x7cbdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x7cbdf8) {
            ctx->pc = 0x7CBDCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cbdcc;
        }
    }
    ctx->pc = 0x7CBE00u;
    // 0x7cbe00: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x7cbe00u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cbe04: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x7cbe04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x7cbe08: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x7cbe08u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x7cbe0c: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x7cbe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x7cbe10: 0x8fa705e8  lw          $a3, 0x5E8($sp)
    ctx->pc = 0x7cbe10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x7cbe14: 0x50f60022  beql        $a3, $s6, . + 4 + (0x22 << 2)
    ctx->pc = 0x7CBE14u;
    {
        const bool branch_taken_0x7cbe14 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 22));
        if (branch_taken_0x7cbe14) {
            ctx->pc = 0x7CBE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CBE14u;
            // 0x7cbe18: 0x9622029a  lhu         $v0, 0x29A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CBEA0u;
            goto label_7cbea0;
        }
    }
    ctx->pc = 0x7CBE1Cu;
    // 0x7cbe1c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x7cbe1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7cbe20:
    // 0x7cbe20: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x7cbe20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbe24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cbe24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbe28: 0xc1f2ec8  jal         func_7CBB20
    ctx->pc = 0x7CBE28u;
    SET_GPR_U32(ctx, 31, 0x7CBE30u);
    ctx->pc = 0x7CBE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CBE28u;
    // 0x7cbe2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CBB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBB20u, 0x7CBE28u, 0x7CBE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBE30u;
label_7cbe30:
    // 0x7cbe30: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x7cbe30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbe34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7cbe34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbe38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x7cbe38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbe3c: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x7cbe3cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
    // 0x7cbe40: 0x2633029c  addiu       $s3, $s1, 0x29C
    ctx->pc = 0x7cbe40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 668));
    // 0x7cbe44: 0x0  nop
    ctx->pc = 0x7cbe44u;
    // NOP
label_7cbe48:
    // 0x7cbe48: 0x12040008  beq         $s0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7CBE48u;
    {
        const bool branch_taken_0x7cbe48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x7CBE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBE48u;
        // 0x7cbe4c: 0x2701021  addu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbe48) {
            ctx->pc = 0x7CBE6Cu;
            goto label_7cbe6c;
        }
    }
    ctx->pc = 0x7CBE50u;
    // 0x7cbe50: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x7cbe50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cbe54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CBE54u;
    {
        const bool branch_taken_0x7cbe54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CBE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBE54u;
        // 0x7cbe58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbe54) {
            ctx->pc = 0x7CBE6Cu;
            goto label_7cbe6c;
        }
    }
    ctx->pc = 0x7CBE5Cu;
    // 0x7cbe5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cbe5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbe60: 0xc1f2ea8  jal         func_7CBAA0
    ctx->pc = 0x7CBE60u;
    SET_GPR_U32(ctx, 31, 0x7CBE68u);
    ctx->pc = 0x7CBE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CBE60u;
    // 0x7cbe64: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBAA0u, 0x7CBE60u, 0x7CBE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBE68u;
label_7cbe68:
    // 0x7cbe68: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x7cbe68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_7cbe6c:
    // 0x7cbe6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x7cbe6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x7cbe70: 0x2a02004f  slti        $v0, $s0, 0x4F
    ctx->pc = 0x7cbe70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)79) ? 1 : 0);
    // 0x7cbe74: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x7CBE74u;
    {
        const bool branch_taken_0x7cbe74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CBE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBE74u;
        // 0x7cbe78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbe74) {
            ctx->pc = 0x7CBE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cbe48;
        }
    }
    ctx->pc = 0x7CBE7Cu;
    // 0x7cbe7c: 0xc1f2e86  jal         func_7CBA18
    ctx->pc = 0x7CBE7Cu;
    SET_GPR_U32(ctx, 31, 0x7CBE84u);
    ctx->pc = 0x7CBE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CBE7Cu;
    // 0x7cbe80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CBA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CBA18u, 0x7CBE7Cu, 0x7CBE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CBE84u;
label_7cbe84:
    // 0x7cbe84: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x7cbe84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cbe88: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x7cbe88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x7cbe8c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x7cbe8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x7cbe90: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x7cbe90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x7cbe94: 0x1616ffe2  bne         $s0, $s6, . + 4 + (-0x1E << 2)
    ctx->pc = 0x7CBE94u;
    {
        const bool branch_taken_0x7cbe94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x7CBE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBE94u;
        // 0x7cbe98: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cbe94) {
            ctx->pc = 0x7CBE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cbe20;
        }
    }
    ctx->pc = 0x7CBE9Cu;
    // 0x7cbe9c: 0x9622029a  lhu         $v0, 0x29A($s1)
    ctx->pc = 0x7cbe9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_7cbea0:
    // 0x7cbea0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x7cbea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7cbea4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x7cbea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x7cbea8: 0x8043029c  lb          $v1, 0x29C($v0)
    ctx->pc = 0x7cbea8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 668)));
label_7cbeac:
    // 0x7cbeac: 0x8fa805e4  lw          $t0, 0x5E4($sp)
    ctx->pc = 0x7cbeacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1508)));
    // 0x7cbeb0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x7cbeb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cbeb4: 0xdfbf0690  ld          $ra, 0x690($sp)
    ctx->pc = 0x7cbeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1680)));
    // 0x7cbeb8: 0xad110000  sw          $s1, 0x0($t0)
    ctx->pc = 0x7cbeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 17));
    // 0x7cbebc: 0xdfbe0680  ld          $fp, 0x680($sp)
    ctx->pc = 0x7cbebcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
    // 0x7cbec0: 0xdfb70670  ld          $s7, 0x670($sp)
    ctx->pc = 0x7cbec0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
    // 0x7cbec4: 0xdfb60660  ld          $s6, 0x660($sp)
    ctx->pc = 0x7cbec4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x7cbec8: 0xdfb50650  ld          $s5, 0x650($sp)
    ctx->pc = 0x7cbec8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x7cbecc: 0xdfb40640  ld          $s4, 0x640($sp)
    ctx->pc = 0x7cbeccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
    // 0x7cbed0: 0xdfb30630  ld          $s3, 0x630($sp)
    ctx->pc = 0x7cbed0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x7cbed4: 0xdfb20620  ld          $s2, 0x620($sp)
    ctx->pc = 0x7cbed4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
    // 0x7cbed8: 0xdfb10610  ld          $s1, 0x610($sp)
    ctx->pc = 0x7cbed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
    // 0x7cbedc: 0xdfb00600  ld          $s0, 0x600($sp)
    ctx->pc = 0x7cbedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
    // 0x7cbee0: 0x3e00008  jr          $ra
    ctx->pc = 0x7CBEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CBEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CBEE0u;
        // 0x7cbee4: 0x27bd06a0  addiu       $sp, $sp, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CBEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CBEE8u;
}
} // namespace gh_mcport
