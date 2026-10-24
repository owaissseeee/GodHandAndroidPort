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

// Function: SearchData
// Address: 0x31ccf0 - 0x31cdc0
void SearchData_0x31ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchData_0x31ccf0");
#endif

    switch (ctx->pc) {
        case 0x31cd2cu: goto label_31cd2c;
        case 0x31cd60u: goto label_31cd60;
        case 0x31cd6cu: goto label_31cd6c;
        default: break;
    }

    ctx->pc = 0x31ccf0u;

    // 0x31ccf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31ccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x31ccf4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31ccf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x31ccf8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x31ccf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x31ccfc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31ccfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd00: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x31cd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x31cd04: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x31cd04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd08: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x31cd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x31cd0c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x31cd0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd10: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x31cd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x31cd14: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x31cd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x31cd18: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x31cd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x31cd1c: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x31CD1Cu;
    {
        const bool branch_taken_0x31cd1c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD1Cu;
        // 0x31cd20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd1c) {
            ctx->pc = 0x31CD40u;
            goto label_31cd40;
        }
    }
    ctx->pc = 0x31CD24u;
    // 0x31cd24: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x31CD24u;
    {
        const bool branch_taken_0x31cd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD24u;
        // 0x31cd28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd24) {
            ctx->pc = 0x31CD94u;
            goto label_31cd94;
        }
    }
    ctx->pc = 0x31CD2Cu;
label_31cd2c:
    // 0x31cd2c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x31cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x31cd30: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x31cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x31cd34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31cd38: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x31CD38u;
    {
        const bool branch_taken_0x31cd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD38u;
        // 0x31cd3c: 0x531021  addu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd38) {
            ctx->pc = 0x31CD94u;
            goto label_31cd94;
        }
    }
    ctx->pc = 0x31CD40u;
label_31cd40:
    // 0x31cd40: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x31cd40u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31cd44: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31cd44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd48: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x31cd48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31cd4c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x31cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x31cd50: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x31CD50u;
    {
        const bool branch_taken_0x31cd50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD50u;
        // 0x31cd54: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd50) {
            ctx->pc = 0x31CD90u;
            goto label_31cd90;
        }
    }
    ctx->pc = 0x31CD58u;
    // 0x31cd58: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x31cd58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x31cd5c: 0x0  nop
    ctx->pc = 0x31cd5cu;
    // NOP
label_31cd60:
    // 0x31cd60: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x31cd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd64: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x31CD64u;
    SET_GPR_U32(ctx, 31, 0x31CD6Cu);
    ctx->pc = 0x31CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CD64u;
    // 0x31cd68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x31CD64u, 0x31CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CD6Cu;
label_31cd6c:
    // 0x31cd6c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31CD6Cu;
    {
        const bool branch_taken_0x31cd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cd6c) {
            ctx->pc = 0x31CD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CD6Cu;
            // 0x31cd70: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31CD84u;
            goto label_31cd84;
        }
    }
    ctx->pc = 0x31CD74u;
    // 0x31cd74: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x31cd74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cd78: 0x1055ffec  beq         $v0, $s5, . + 4 + (-0x14 << 2)
    ctx->pc = 0x31CD78u;
    {
        const bool branch_taken_0x31cd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x31CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD78u;
        // 0x31cd7c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd78) {
            ctx->pc = 0x31CD2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31cd2c;
        }
    }
    ctx->pc = 0x31CD80u;
    // 0x31cd80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31cd80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_31cd84:
    // 0x31cd84: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x31cd84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31cd88: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x31CD88u;
    {
        const bool branch_taken_0x31cd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CD88u;
        // 0x31cd8c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cd88) {
            ctx->pc = 0x31CD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31cd60;
        }
    }
    ctx->pc = 0x31CD90u;
label_31cd90:
    // 0x31cd90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31cd90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31cd94:
    // 0x31cd94: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x31cd94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31cd98: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x31cd98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31cd9c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x31cd9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31cda0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31cda0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31cda4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x31cda4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31cda8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x31cda8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31cdac: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x31cdacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31cdb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31cdb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31cdb4: 0x3e00008  jr          $ra
    ctx->pc = 0x31CDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CDB4u;
        // 0x31cdb8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CDBCu;
    // 0x31cdbc: 0x0  nop
    ctx->pc = 0x31cdbcu;
    // NOP
    ctx->pc = 0x31cdc0u;
}
