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

// Function: func_0032ED70
// Address: 0x32ed70 - 0x32ee88
void func_0032ED70_0x32ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032ED70_0x32ed70");
#endif

    switch (ctx->pc) {
        case 0x32edf8u: goto label_32edf8;
        case 0x32ee28u: goto label_32ee28;
        case 0x32ee30u: goto label_32ee30;
        case 0x32ee40u: goto label_32ee40;
        default: break;
    }

    ctx->pc = 0x32ed70u;

    // 0x32ed70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32ed70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32ed74: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x32ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x32ed78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32ed78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32ed7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32ed7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ed80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32ed80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32ed84: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x32ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x32ed88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x32ed88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x32ed8c: 0x44a024  and         $s4, $v0, $a0
    ctx->pc = 0x32ed8cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x32ed90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ed90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32ed94: 0x2852823  subu        $a1, $s4, $a1
    ctx->pc = 0x32ed94u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x32ed98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32ed98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32ed9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32eda0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x32eda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x32eda4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x32eda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x32eda8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x32eda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x32edac: 0x8e23026c  lw          $v1, 0x26C($s1)
    ctx->pc = 0x32edacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x32edb0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32EDB0u;
    {
        const bool branch_taken_0x32edb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EDB0u;
        // 0x32edb4: 0xc59823  subu        $s3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32edb0) {
            ctx->pc = 0x32EDC0u;
            goto label_32edc0;
        }
    }
    ctx->pc = 0x32EDB8u;
    // 0x32edb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32EDB8u;
    {
        const bool branch_taken_0x32edb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EDB8u;
        // 0x32edbc: 0x341285c0  ori         $s2, $zero, 0x85C0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32edb8) {
            ctx->pc = 0x32EDE0u;
            goto label_32ede0;
        }
    }
    ctx->pc = 0x32EDC0u;
label_32edc0:
    // 0x32edc0: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x32edc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x32edc4: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x32edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x32edc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32edcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32edccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32edd0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x32edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32edd4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x32edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x32edd8: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x32edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x32eddc: 0x449024  and         $s2, $v0, $a0
    ctx->pc = 0x32eddcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_32ede0:
    // 0x32ede0: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x32ede0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x32ede4: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x32EDE4u;
    {
        const bool branch_taken_0x32ede4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x32EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EDE4u;
        // 0x32ede8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ede4) {
            ctx->pc = 0x32EE5Cu;
            goto label_32ee5c;
        }
    }
    ctx->pc = 0x32EDECu;
    // 0x32edec: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x32edecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32edf0: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x32edf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x32edf4: 0x0  nop
    ctx->pc = 0x32edf4u;
    // NOP
label_32edf8:
    // 0x32edf8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x32edf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32edfc: 0x2729823  subu        $s3, $s3, $s2
    ctx->pc = 0x32edfcu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x32ee00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32ee00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ee04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32ee04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ee08: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x32ee08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x32ee0c: 0x6600014  bltz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x32EE0Cu;
    {
        const bool branch_taken_0x32ee0c = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x32EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EE0Cu;
        // 0x32ee10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ee0c) {
            ctx->pc = 0x32EE60u;
            goto label_32ee60;
        }
    }
    ctx->pc = 0x32EE14u;
    // 0x32ee14: 0x8e22026c  lw          $v0, 0x26C($s1)
    ctx->pc = 0x32ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x32ee18: 0x54560007  bnel        $v0, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x32EE18u;
    {
        const bool branch_taken_0x32ee18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x32ee18) {
            ctx->pc = 0x32EE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32EE18u;
            // 0x32ee1c: 0x82240002  lb          $a0, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32EE38u;
            goto label_32ee38;
        }
    }
    ctx->pc = 0x32EE20u;
    // 0x32ee20: 0xc0ca5ea  jal         func_3297A8
    ctx->pc = 0x32EE20u;
    SET_GPR_U32(ctx, 31, 0x32EE28u);
    ctx->pc = 0x32EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EE20u;
    // 0x32ee24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3297A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3297A8u, 0x32EE20u, 0x32EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EE28u;
label_32ee28:
    // 0x32ee28: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32EE28u;
    {
        const bool branch_taken_0x32ee28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EE28u;
        // 0x32ee2c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ee28) {
            ctx->pc = 0x32EE48u;
            goto label_32ee48;
        }
    }
    ctx->pc = 0x32EE30u;
label_32ee30:
    // 0x32ee30: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32EE30u;
    {
        const bool branch_taken_0x32ee30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EE30u;
        // 0x32ee34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ee30) {
            ctx->pc = 0x32EE60u;
            goto label_32ee60;
        }
    }
    ctx->pc = 0x32EE38u;
label_32ee38:
    // 0x32ee38: 0xc0ca50e  jal         func_329438
    ctx->pc = 0x32EE38u;
    SET_GPR_U32(ctx, 31, 0x32EE40u);
    ctx->pc = 0x32EE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EE38u;
    // 0x32ee3c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329438u, 0x32EE38u, 0x32EE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EE40u;
label_32ee40:
    // 0x32ee40: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x32EE40u;
    {
        const bool branch_taken_0x32ee40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EE40u;
        // 0x32ee44: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ee40) {
            ctx->pc = 0x32EE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ee30;
        }
    }
    ctx->pc = 0x32EE48u;
label_32ee48:
    // 0x32ee48: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x32ee48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x32ee4c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x32ee4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x32ee50: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x32ee50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32ee54: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x32EE54u;
    {
        const bool branch_taken_0x32ee54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EE54u;
        // 0x32ee58: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ee54) {
            ctx->pc = 0x32EDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32edf8;
        }
    }
    ctx->pc = 0x32EE5Cu;
label_32ee5c:
    // 0x32ee5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32ee5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ee60:
    // 0x32ee60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32ee60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ee64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32ee64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32ee68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32ee68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ee6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32ee6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32ee70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x32ee70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32ee74: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x32ee74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32ee78: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x32ee78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32ee7c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x32ee7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32ee80: 0x3e00008  jr          $ra
    ctx->pc = 0x32EE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EE80u;
        // 0x32ee84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EE88u;
}
