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
// Function: func_007CED48
// Address: 0x7ced48 - 0x7cee60
void func_007CED48_0x7ced48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CED48_0x7ced48");
#endif

    switch (ctx->pc) {
        case 0x7ced68u: goto label_7ced68;
        case 0x7cedf8u: goto label_7cedf8;
        case 0x7cee20u: goto label_7cee20;
        default: break;
    }

    ctx->pc = 0x7ced48u;

    // 0x7ced48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7ced48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7ced4c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7ced4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7ced50: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7ced50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7ced54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7ced54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ced58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7ced58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ced5c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x7ced5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x7ced60: 0xc1f3b32  jal         func_7CECC8
    ctx->pc = 0x7CED60u;
    SET_GPR_U32(ctx, 31, 0x7CED68u);
    ctx->pc = 0x7CED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CED60u;
    // 0x7ced64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CECC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CECC8u, 0x7CED60u, 0x7CED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CED68u;
label_7ced68:
    // 0x7ced68: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x7ced68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7ced6c: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x7ced6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ced70: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x7ced70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x7ced74: 0x624826  xor         $t1, $v1, $v0
    ctx->pc = 0x7ced74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x7ced78: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x7ced78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7ced7c: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x7ced7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x7ced80: 0x95103  sra         $t2, $t1, 4
    ctx->pc = 0x7ced80u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 9), 4));
    // 0x7ced84: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x7ced84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x7ced88: 0x3122000f  andi        $v0, $t1, 0xF
    ctx->pc = 0x7ced88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x7ced8c: 0xa32826  xor         $a1, $a1, $v1
    ctx->pc = 0x7ced8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x7ced90: 0x4a4026  xor         $t0, $v0, $t2
    ctx->pc = 0x7ced90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 10));
    // 0x7ced94: 0xc41826  xor         $v1, $a2, $a0
    ctx->pc = 0x7ced94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 4));
    // 0x7ced98: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CED98u;
    {
        const bool branch_taken_0x7ced98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CED98u;
        // 0x7ced9c: 0x653826  xor         $a3, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ced98) {
            ctx->pc = 0x7CEDB0u;
            goto label_7cedb0;
        }
    }
    ctx->pc = 0x7CEDA0u;
    // 0x7ceda0: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CEDA0u;
    {
        const bool branch_taken_0x7ceda0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CEDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEDA0u;
        // 0x7ceda4: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ceda0) {
            ctx->pc = 0x7CEDB4u;
            goto label_7cedb4;
        }
    }
    ctx->pc = 0x7CEDA8u;
    // 0x7ceda8: 0x11200028  beqz        $t1, . + 4 + (0x28 << 2)
    ctx->pc = 0x7CEDA8u;
    {
        const bool branch_taken_0x7ceda8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEDA8u;
        // 0x7cedac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ceda8) {
            ctx->pc = 0x7CEE4Cu;
            goto label_7cee4c;
        }
    }
    ctx->pc = 0x7CEDB0u;
label_7cedb0:
    // 0x7cedb0: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x7cedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_7cedb4:
    // 0x7cedb4: 0x14e2000c  bne         $a3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7CEDB4u;
    {
        const bool branch_taken_0x7cedb4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x7CEDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEDB4u;
        // 0x7cedb8: 0x82843  sra         $a1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cedb4) {
            ctx->pc = 0x7CEDE8u;
            goto label_7cede8;
        }
    }
    ctx->pc = 0x7CEDBCu;
    // 0x7cedbc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x7cedbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7cedc0: 0x1502000a  bne         $t0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7CEDC0u;
    {
        const bool branch_taken_0x7cedc0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x7CEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEDC0u;
        // 0x7cedc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cedc0) {
            ctx->pc = 0x7CEDECu;
            goto label_7cedec;
        }
    }
    ctx->pc = 0x7CEDC8u;
    // 0x7cedc8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x7cedc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x7cedcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7cedccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cedd0: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x7cedd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7cedd4: 0x1442004  sllv        $a0, $a0, $t2
    ctx->pc = 0x7cedd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 10) & 0x1F));
    // 0x7cedd8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7cedd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7ceddc: 0xa42826  xor         $a1, $a1, $a0
    ctx->pc = 0x7ceddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x7cede0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x7CEDE0u;
    {
        const bool branch_taken_0x7cede0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CEDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEDE0u;
        // 0x7cede4: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cede0) {
            ctx->pc = 0x7CEE4Cu;
            goto label_7cee4c;
        }
    }
    ctx->pc = 0x7CEDE8u;
label_7cede8:
    // 0x7cede8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7cede8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7cedec:
    // 0x7cedec: 0x31060001  andi        $a2, $t0, 0x1
    ctx->pc = 0x7cedecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x7cedf0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x7cedf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7cedf4: 0x0  nop
    ctx->pc = 0x7cedf4u;
    // NOP
label_7cedf8:
    // 0x7cedf8: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x7cedf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x7cedfc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x7cedfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x7cee00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x7cee00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x7cee04: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x7cee04u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x7cee08: 0x0  nop
    ctx->pc = 0x7cee08u;
    // NOP
    // 0x7cee0c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7CEE0Cu;
    {
        const bool branch_taken_0x7cee0c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x7cee0c) {
            ctx->pc = 0x7CEDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cedf8;
        }
    }
    ctx->pc = 0x7CEE14u;
    // 0x7cee14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CEE14u;
    {
        const bool branch_taken_0x7cee14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CEE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEE14u;
        // 0x7cee18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cee14) {
            ctx->pc = 0x7CEE28u;
            goto label_7cee28;
        }
    }
    ctx->pc = 0x7CEE1Cu;
    // 0x7cee1c: 0x0  nop
    ctx->pc = 0x7cee1cu;
    // NOP
label_7cee20:
    // 0x7cee20: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x7cee20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x7cee24: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x7cee24u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_7cee28:
    // 0x7cee28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x7cee28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x7cee2c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x7cee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x7cee30: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x7cee30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x7cee34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7CEE34u;
    {
        const bool branch_taken_0x7cee34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7cee34) {
            ctx->pc = 0x7CEE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cee20;
        }
    }
    ctx->pc = 0x7CEE3Cu;
    // 0x7cee3c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x7cee3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x7cee40: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x7cee40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x7cee44: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x7cee44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x7cee48: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x7cee48u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_7cee4c:
    // 0x7cee4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x7cee4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cee50: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7cee50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cee54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7cee54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cee58: 0x3e00008  jr          $ra
    ctx->pc = 0x7CEE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CEE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEE58u;
        // 0x7cee5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CEE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CEE60u;
}
} // namespace gh_mcport
