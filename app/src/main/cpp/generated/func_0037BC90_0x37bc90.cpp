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

// Function: func_0037BC90
// Address: 0x37bc90 - 0x37be98
void func_0037BC90_0x37bc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037BC90_0x37bc90");
#endif

    switch (ctx->pc) {
        case 0x37bcf8u: goto label_37bcf8;
        case 0x37bd4cu: goto label_37bd4c;
        case 0x37bd7cu: goto label_37bd7c;
        case 0x37bd9cu: goto label_37bd9c;
        case 0x37bdbcu: goto label_37bdbc;
        case 0x37bdd4u: goto label_37bdd4;
        case 0x37be04u: goto label_37be04;
        case 0x37be20u: goto label_37be20;
        case 0x37be48u: goto label_37be48;
        case 0x37be64u: goto label_37be64;
        case 0x37be7cu: goto label_37be7c;
        default: break;
    }

    ctx->pc = 0x37bc90u;

    // 0x37bc90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37bc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37bc94: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x37bc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x37bc98: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37bc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37bc9c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x37bc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x37bca0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37bca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37bca4: 0x246326e8  addiu       $v1, $v1, 0x26E8
    ctx->pc = 0x37bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9960));
    // 0x37bca8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37bca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x37bcac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37bcacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bcb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37bcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37bcb4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x37bcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x37bcb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37bcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37bcbc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37bcbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37bcc0: 0x24e7bf58  addiu       $a3, $a3, -0x40A8
    ctx->pc = 0x37bcc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950744));
    // 0x37bcc4: 0x82250028  lb          $a1, 0x28($s1)
    ctx->pc = 0x37bcc4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x37bcc8: 0x82220027  lb          $v0, 0x27($s1)
    ctx->pc = 0x37bcc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
    // 0x37bccc: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x37bcccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x37bcd0: 0x463018  mult        $a2, $v0, $a2
    ctx->pc = 0x37bcd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x37bcd4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37bcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37bcd8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x37bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x37bcdc: 0x2442016c  addiu       $v0, $v0, 0x16C
    ctx->pc = 0x37bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 364));
    // 0x37bce0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x37bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x37bce4: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x37bce4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x37bce8: 0xc58021  addu        $s0, $a2, $a1
    ctx->pc = 0x37bce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x37bcec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x37bcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x37bcf0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BCF0u;
    SET_GPR_U32(ctx, 31, 0x37BCF8u);
    ctx->pc = 0x37BCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BCF0u;
    // 0x37bcf4: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BCF0u, 0x37BCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BCF8u;
label_37bcf8:
    // 0x37bcf8: 0x82030009  lb          $v1, 0x9($s0)
    ctx->pc = 0x37bcf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x37bcfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37bd00: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x37BD00u;
    {
        const bool branch_taken_0x37bd00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BD00u;
        // 0x37bd04: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bd00) {
            ctx->pc = 0x37BD54u;
            goto label_37bd54;
        }
    }
    ctx->pc = 0x37BD08u;
    // 0x37bd08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37BD08u;
    {
        const bool branch_taken_0x37bd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BD08u;
        // 0x37bd0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bd08) {
            ctx->pc = 0x37BD20u;
            goto label_37bd20;
        }
    }
    ctx->pc = 0x37BD10u;
    // 0x37bd10: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x37BD10u;
    {
        const bool branch_taken_0x37bd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BD10u;
        // 0x37bd14: 0x3c120003  lui         $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bd10) {
            ctx->pc = 0x37BD28u;
            goto label_37bd28;
        }
    }
    ctx->pc = 0x37BD18u;
    // 0x37bd18: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x37BD18u;
    {
        const bool branch_taken_0x37bd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BD18u;
        // 0x37bd1c: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bd18) {
            ctx->pc = 0x37BDC0u;
            goto label_37bdc0;
        }
    }
    ctx->pc = 0x37BD20u;
label_37bd20:
    // 0x37bd20: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x37BD20u;
    {
        const bool branch_taken_0x37bd20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BD20u;
        // 0x37bd24: 0x3c120003  lui         $s2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bd20) {
            ctx->pc = 0x37BDBCu;
            goto label_37bdbc;
        }
    }
    ctx->pc = 0x37BD28u;
label_37bd28:
    // 0x37bd28: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x37bd28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37bd2c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37bd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37bd30: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x37bd30u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x37bd34: 0x24e7bf70  addiu       $a3, $a3, -0x4090
    ctx->pc = 0x37bd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950768));
    // 0x37bd38: 0x102402  srl         $a0, $s0, 16
    ctx->pc = 0x37bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x37bd3c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x37bd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x37bd40: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x37bd40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37bd44: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BD44u;
    SET_GPR_U32(ctx, 31, 0x37BD4Cu);
    ctx->pc = 0x37BD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BD44u;
    // 0x37bd48: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BD44u, 0x37BD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BD4Cu;
label_37bd4c:
    // 0x37bd4c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x37BD4Cu;
    {
        const bool branch_taken_0x37bd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BD4Cu;
        // 0x37bd50: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bd4c) {
            ctx->pc = 0x37BDC0u;
            goto label_37bdc0;
        }
    }
    ctx->pc = 0x37BD54u;
label_37bd54:
    // 0x37bd54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x37bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37bd58: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37bd58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37bd5c: 0x24e7bf80  addiu       $a3, $a3, -0x4080
    ctx->pc = 0x37bd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950784));
    // 0x37bd60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37bd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37bd64: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x37bd64u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37bd68: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x37bd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x37bd6c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x37bd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37bd70: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x37bd70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bd74: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BD74u;
    SET_GPR_U32(ctx, 31, 0x37BD7Cu);
    ctx->pc = 0x37BD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BD74u;
    // 0x37bd78: 0x3c120003  lui         $s2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BD74u, 0x37BD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BD7Cu;
label_37bd7c:
    // 0x37bd7c: 0x8608000a  lh          $t0, 0xA($s0)
    ctx->pc = 0x37bd7cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x37bd80: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37bd80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37bd84: 0x24e7bf98  addiu       $a3, $a3, -0x4068
    ctx->pc = 0x37bd84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950808));
    // 0x37bd88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37bd8c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x37bd8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bd90: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x37bd90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x37bd94: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BD94u;
    SET_GPR_U32(ctx, 31, 0x37BD9Cu);
    ctx->pc = 0x37BD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BD94u;
    // 0x37bd98: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BD94u, 0x37BD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BD9Cu;
label_37bd9c:
    // 0x37bd9c: 0x8608000c  lh          $t0, 0xC($s0)
    ctx->pc = 0x37bd9cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x37bda0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37bda0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37bda4: 0x24e7bfb0  addiu       $a3, $a3, -0x4050
    ctx->pc = 0x37bda4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950832));
    // 0x37bda8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37bda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37bdac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x37bdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x37bdb0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x37bdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37bdb4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BDB4u;
    SET_GPR_U32(ctx, 31, 0x37BDBCu);
    ctx->pc = 0x37BDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BDB4u;
    // 0x37bdb8: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BDB4u, 0x37BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BDBCu;
label_37bdbc:
    // 0x37bdbc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37bdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_37bdc0:
    // 0x37bdc0: 0x122402  srl         $a0, $s2, 16
    ctx->pc = 0x37bdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x37bdc4: 0x24e7bfc8  addiu       $a3, $a3, -0x4038
    ctx->pc = 0x37bdc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950856));
    // 0x37bdc8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x37bdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x37bdcc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BDCCu;
    SET_GPR_U32(ctx, 31, 0x37BDD4u);
    ctx->pc = 0x37BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BDCCu;
    // 0x37bdd0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BDCCu, 0x37BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BDD4u;
label_37bdd4:
    // 0x37bdd4: 0x82220029  lb          $v0, 0x29($s1)
    ctx->pc = 0x37bdd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x37bdd8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x37BDD8u;
    {
        const bool branch_taken_0x37bdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37bdd8) {
            ctx->pc = 0x37BDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37BDD8u;
            // 0x37bddc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BE28u;
            goto label_37be28;
        }
    }
    ctx->pc = 0x37BDE0u;
    // 0x37bde0: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x37bde0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x37bde4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x37BDE4u;
    {
        const bool branch_taken_0x37bde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BDE4u;
        // 0x37bde8: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bde4) {
            ctx->pc = 0x37BE0Cu;
            goto label_37be0c;
        }
    }
    ctx->pc = 0x37BDECu;
    // 0x37bdec: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37bdecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37bdf0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x37bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37bdf4: 0x24e7bfd8  addiu       $a3, $a3, -0x4028
    ctx->pc = 0x37bdf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950872));
    // 0x37bdf8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x37bdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x37bdfc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BDFCu;
    SET_GPR_U32(ctx, 31, 0x37BE04u);
    ctx->pc = 0x37BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BDFCu;
    // 0x37be00: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BDFCu, 0x37BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BE04u;
label_37be04:
    // 0x37be04: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x37BE04u;
    {
        const bool branch_taken_0x37be04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BE04u;
        // 0x37be08: 0x128403  sra         $s0, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37be04) {
            ctx->pc = 0x37BE4Cu;
            goto label_37be4c;
        }
    }
    ctx->pc = 0x37BE0Cu;
label_37be0c:
    // 0x37be0c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x37be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37be10: 0x24e7bfe0  addiu       $a3, $a3, -0x4020
    ctx->pc = 0x37be10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950880));
    // 0x37be14: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x37be14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x37be18: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BE18u;
    SET_GPR_U32(ctx, 31, 0x37BE20u);
    ctx->pc = 0x37BE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BE18u;
    // 0x37be1c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BE18u, 0x37BE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BE20u;
label_37be20:
    // 0x37be20: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x37BE20u;
    {
        const bool branch_taken_0x37be20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BE20u;
        // 0x37be24: 0x128403  sra         $s0, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37be20) {
            ctx->pc = 0x37BE4Cu;
            goto label_37be4c;
        }
    }
    ctx->pc = 0x37BE28u;
label_37be28:
    // 0x37be28: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x37be28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x37be2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37BE2Cu;
    {
        const bool branch_taken_0x37be2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BE2Cu;
        // 0x37be30: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37be2c) {
            ctx->pc = 0x37BE48u;
            goto label_37be48;
        }
    }
    ctx->pc = 0x37BE34u;
    // 0x37be34: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x37be34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37be38: 0x24e7bfe8  addiu       $a3, $a3, -0x4018
    ctx->pc = 0x37be38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950888));
    // 0x37be3c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x37be3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x37be40: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BE40u;
    SET_GPR_U32(ctx, 31, 0x37BE48u);
    ctx->pc = 0x37BE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BE40u;
    // 0x37be44: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BE40u, 0x37BE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BE48u;
label_37be48:
    // 0x37be48: 0x128403  sra         $s0, $s2, 16
    ctx->pc = 0x37be48u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 16));
label_37be4c:
    // 0x37be4c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37be4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37be50: 0x24e7bff8  addiu       $a3, $a3, -0x4008
    ctx->pc = 0x37be50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950904));
    // 0x37be54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37be54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37be58: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x37be58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x37be5c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BE5Cu;
    SET_GPR_U32(ctx, 31, 0x37BE64u);
    ctx->pc = 0x37BE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BE5Cu;
    // 0x37be60: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BE5Cu, 0x37BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BE64u;
label_37be64:
    // 0x37be64: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37be64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37be68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37be68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37be6c: 0x24e7c010  addiu       $a3, $a3, -0x3FF0
    ctx->pc = 0x37be6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950928));
    // 0x37be70: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x37be70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x37be74: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BE74u;
    SET_GPR_U32(ctx, 31, 0x37BE7Cu);
    ctx->pc = 0x37BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BE74u;
    // 0x37be78: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BE74u, 0x37BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BE7Cu;
label_37be7c:
    // 0x37be7c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37be7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37be80: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37be80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37be84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37be84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37be88: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x37be88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37be8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37be8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37be90: 0x3e00008  jr          $ra
    ctx->pc = 0x37BE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BE90u;
        // 0x37be94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BE98u;
}
