#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: func_0079AB58
// Address: 0x79ab58 - 0x79ac50
void func_0079AB58_0x79ab58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AB58_0x79ab58");
#endif

    switch (ctx->pc) {
        case 0x79ab90u: goto label_79ab90;
        case 0x79abc4u: goto label_79abc4;
        case 0x79ac10u: goto label_79ac10;
        case 0x79ac20u: goto label_79ac20;
        case 0x79ac30u: goto label_79ac30;
        case 0x79ac40u: goto label_79ac40;
        default: break;
    }

    ctx->pc = 0x79ab58u;

    // 0x79ab58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79ab58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79ab5c: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79ab60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79ab60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79ab64: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79ab68: 0x8045b800  lb          $a1, -0x4800($v0)
    ctx->pc = 0x79ab68u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x79B800u));
    // 0x79ab6c: 0x2448b800  addiu       $t0, $v0, -0x4800
    ctx->pc = 0x79ab6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948864));
    // 0x79ab70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79ab70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79ab74: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x79ab74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79ab78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79ab78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79ab7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab80: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x79AB80u;
    {
        const bool branch_taken_0x79ab80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB80u;
        // 0x79ab84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab80) {
            ctx->pc = 0x79ABB8u;
            goto label_79abb8;
        }
    }
    ctx->pc = 0x79AB88u;
    // 0x79ab88: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x79ab88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab8c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79ab8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_79ab90:
    // 0x79ab90: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x79ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x79ab94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79ab94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79ab98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79ab98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x79ab9c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79ab9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79aba0: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x79aba0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79aba4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79ABA4u;
    {
        const bool branch_taken_0x79aba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABA4u;
        // 0x79aba8: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aba4) {
            ctx->pc = 0x79ABB8u;
            goto label_79abb8;
        }
    }
    ctx->pc = 0x79ABACu;
    // 0x79abac: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79abacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79abb0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79ABB0u;
    {
        const bool branch_taken_0x79abb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79abb0) {
            ctx->pc = 0x79ABB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ABB0u;
            // 0x79abb4: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ab90;
        }
    }
    ctx->pc = 0x79ABB8u;
label_79abb8:
    // 0x79abb8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x79abb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79abbc: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79ABBCu;
    SET_GPR_U32(ctx, 31, 0x79ABC4u);
    ctx->pc = 0x79ABC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABBCu;
    // 0x79abc0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79ABBCu, 0x79ABC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABC4u;
label_79abc4:
    // 0x79abc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79abc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79abc8: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x79ABC8u;
    {
        const bool branch_taken_0x79abc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABC8u;
        // 0x79abcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abc8) {
            ctx->pc = 0x79AC40u;
            goto label_79ac40;
        }
    }
    ctx->pc = 0x79ABD0u;
    // 0x79abd0: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x79ABD0u;
    {
        const bool branch_taken_0x79abd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x79ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABD0u;
        // 0x79abd4: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abd0) {
            ctx->pc = 0x79AC28u;
            goto label_79ac28;
        }
    }
    ctx->pc = 0x79ABD8u;
    // 0x79abd8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79ABD8u;
    {
        const bool branch_taken_0x79abd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79abd8) {
            ctx->pc = 0x79ABDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ABD8u;
            // 0x79abdc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ABF0u;
            goto label_79abf0;
        }
    }
    ctx->pc = 0x79ABE0u;
    // 0x79abe0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79ABE0u;
    {
        const bool branch_taken_0x79abe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABE0u;
        // 0x79abe4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abe0) {
            ctx->pc = 0x79AC08u;
            goto label_79ac08;
        }
    }
    ctx->pc = 0x79ABE8u;
    // 0x79abe8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x79ABE8u;
    {
        const bool branch_taken_0x79abe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABE8u;
        // 0x79abec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abe8) {
            ctx->pc = 0x79AC48u;
            goto label_79ac48;
        }
    }
    ctx->pc = 0x79ABF0u;
label_79abf0:
    // 0x79abf0: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79ABF0u;
    {
        const bool branch_taken_0x79abf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x79ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABF0u;
        // 0x79abf4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abf0) {
            ctx->pc = 0x79AC18u;
            goto label_79ac18;
        }
    }
    ctx->pc = 0x79ABF8u;
    // 0x79abf8: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x79ABF8u;
    {
        const bool branch_taken_0x79abf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x79ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABF8u;
        // 0x79abfc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abf8) {
            ctx->pc = 0x79AC38u;
            goto label_79ac38;
        }
    }
    ctx->pc = 0x79AC00u;
    // 0x79ac00: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x79AC00u;
    {
        const bool branch_taken_0x79ac00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC00u;
        // 0x79ac04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac00) {
            ctx->pc = 0x79AC48u;
            goto label_79ac48;
        }
    }
    ctx->pc = 0x79AC08u;
label_79ac08:
    // 0x79ac08: 0xc05fe6c  jal         func_17F9B0
    ctx->pc = 0x79AC08u;
    SET_GPR_U32(ctx, 31, 0x79AC10u);
    ctx->pc = 0x17F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F9B0u, 0x79AC08u, 0x79AC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC10u;
label_79ac10:
    // 0x79ac10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79AC10u;
    {
        const bool branch_taken_0x79ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC10u;
        // 0x79ac14: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac10) {
            ctx->pc = 0x79AC44u;
            goto label_79ac44;
        }
    }
    ctx->pc = 0x79AC18u;
label_79ac18:
    // 0x79ac18: 0xc05fe80  jal         func_17FA00
    ctx->pc = 0x79AC18u;
    SET_GPR_U32(ctx, 31, 0x79AC20u);
    ctx->pc = 0x17FA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FA00u, 0x79AC18u, 0x79AC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC20u;
label_79ac20:
    // 0x79ac20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x79AC20u;
    {
        const bool branch_taken_0x79ac20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC20u;
        // 0x79ac24: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac20) {
            ctx->pc = 0x79AC44u;
            goto label_79ac44;
        }
    }
    ctx->pc = 0x79AC28u;
label_79ac28:
    // 0x79ac28: 0xc05fe76  jal         func_17F9D8
    ctx->pc = 0x79AC28u;
    SET_GPR_U32(ctx, 31, 0x79AC30u);
    ctx->pc = 0x17F9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F9D8u, 0x79AC28u, 0x79AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC30u;
label_79ac30:
    // 0x79ac30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79AC30u;
    {
        const bool branch_taken_0x79ac30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC30u;
        // 0x79ac34: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac30) {
            ctx->pc = 0x79AC44u;
            goto label_79ac44;
        }
    }
    ctx->pc = 0x79AC38u;
label_79ac38:
    // 0x79ac38: 0xc05fe9e  jal         func_17FA78
    ctx->pc = 0x79AC38u;
    SET_GPR_U32(ctx, 31, 0x79AC40u);
    ctx->pc = 0x17FA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FA78u, 0x79AC38u, 0x79AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC40u;
label_79ac40:
    // 0x79ac40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79ac40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_79ac44:
    // 0x79ac44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ac44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79ac48:
    // 0x79ac48: 0x3e00008  jr          $ra
    ctx->pc = 0x79AC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC48u;
        // 0x79ac4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AC50u;
}
} // namespace gh_r600
