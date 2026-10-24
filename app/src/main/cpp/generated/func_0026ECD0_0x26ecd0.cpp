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

// Function: func_0026ECD0
// Address: 0x26ecd0 - 0x26ee40
void func_0026ECD0_0x26ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026ECD0_0x26ecd0");
#endif

    switch (ctx->pc) {
        case 0x26ed94u: goto label_26ed94;
        case 0x26ed9cu: goto label_26ed9c;
        case 0x26edc8u: goto label_26edc8;
        case 0x26edd4u: goto label_26edd4;
        case 0x26ee28u: goto label_26ee28;
        default: break;
    }

    ctx->pc = 0x26ecd0u;

    // 0x26ecd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ecd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ecd8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26ecd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26ecdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26ecdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ece0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26ece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26ece4: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x26ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x26ece8: 0x2444fdb0  addiu       $a0, $v0, -0x250
    ctx->pc = 0x26ece8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966704));
    // 0x26ecec: 0x2c83002f  sltiu       $v1, $a0, 0x2F
    ctx->pc = 0x26ececu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)47) ? 1 : 0);
    // 0x26ecf0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26ECF0u;
    {
        const bool branch_taken_0x26ecf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ECF0u;
        // 0x26ecf4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ecf0) {
            ctx->pc = 0x26ED10u;
            goto label_26ed10;
        }
    }
    ctx->pc = 0x26ECF8u;
    // 0x26ecf8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26ecfc: 0x24425b50  addiu       $v0, $v0, 0x5B50
    ctx->pc = 0x26ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23376));
    // 0x26ed00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26ed00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26ed04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26ed04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26ed08: 0x800008  jr          $a0
    ctx->pc = 0x26ED08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26ED10u: goto label_26ed10;
            case 0x26ED18u: goto label_26ed18;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ED08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26ED10u;
label_26ed10:
    // 0x26ed10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26ED10u;
    {
        const bool branch_taken_0x26ed10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED10u;
        // 0x26ed14: 0x240700c8  addiu       $a3, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed10) {
            ctx->pc = 0x26ED1Cu;
            goto label_26ed1c;
        }
    }
    ctx->pc = 0x26ED18u;
label_26ed18:
    // 0x26ed18: 0x24070096  addiu       $a3, $zero, 0x96
    ctx->pc = 0x26ed18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_26ed1c:
    // 0x26ed1c: 0x8e260564  lw          $a2, 0x564($s1)
    ctx->pc = 0x26ed1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x26ed20: 0x24020256  addiu       $v0, $zero, 0x256
    ctx->pc = 0x26ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x26ed24: 0x54c20007  bnel        $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26ED24u;
    {
        const bool branch_taken_0x26ed24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x26ed24) {
            ctx->pc = 0x26ED28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26ED24u;
            // 0x26ed28: 0x8e2216e8  lw          $v0, 0x16E8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5864)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26ED44u;
            goto label_26ed44;
        }
    }
    ctx->pc = 0x26ED2Cu;
    // 0x26ed2c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x26ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x26ed30: 0x24040406  addiu       $a0, $zero, 0x406
    ctx->pc = 0x26ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
    // 0x26ed34: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x26ed34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x26ed38: 0x1064003c  beq         $v1, $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x26ED38u;
    {
        const bool branch_taken_0x26ed38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x26ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED38u;
        // 0x26ed3c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed38) {
            ctx->pc = 0x26EE2Cu;
            goto label_26ee2c;
        }
    }
    ctx->pc = 0x26ED40u;
    // 0x26ed40: 0x8e2216e8  lw          $v0, 0x16E8($s1)
    ctx->pc = 0x26ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5864)));
label_26ed44:
    // 0x26ed44: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x26ed44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26ed48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26ED48u;
    {
        const bool branch_taken_0x26ed48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED48u;
        // 0x26ed4c: 0x28c20224  slti        $v0, $a2, 0x224 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)548) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed48) {
            ctx->pc = 0x26ED58u;
            goto label_26ed58;
        }
    }
    ctx->pc = 0x26ED50u;
    // 0x26ed50: 0x10a00036  beqz        $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x26ED50u;
    {
        const bool branch_taken_0x26ed50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED50u;
        // 0x26ed54: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed50) {
            ctx->pc = 0x26EE2Cu;
            goto label_26ee2c;
        }
    }
    ctx->pc = 0x26ED58u;
label_26ed58:
    // 0x26ed58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26ED58u;
    {
        const bool branch_taken_0x26ed58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED58u;
        // 0x26ed5c: 0x28c20220  slti        $v0, $a2, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed58) {
            ctx->pc = 0x26ED68u;
            goto label_26ed68;
        }
    }
    ctx->pc = 0x26ED60u;
    // 0x26ed60: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x26ED60u;
    {
        const bool branch_taken_0x26ed60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ed60) {
            ctx->pc = 0x26ED64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26ED60u;
            // 0x26ed64: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EDCCu;
            goto label_26edcc;
        }
    }
    ctx->pc = 0x26ED68u;
label_26ed68:
    // 0x26ed68: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x26ed68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x26ed6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26ed6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed70: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x26ed70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x26ed74: 0x240600f7  addiu       $a2, $zero, 0xF7
    ctx->pc = 0x26ed74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x26ed78: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26ed78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26ed7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26ed80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26ed84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed88: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26ed88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed8c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x26ED8Cu;
    SET_GPR_U32(ctx, 31, 0x26ED94u);
    ctx->pc = 0x26ED90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ED8Cu;
    // 0x26ed90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x26ED8Cu, 0x26ED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED94u;
label_26ed94:
    // 0x26ed94: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x26ED94u;
    SET_GPR_U32(ctx, 31, 0x26ED9Cu);
    ctx->pc = 0x26ED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ED94u;
    // 0x26ed98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x26ED94u, 0x26ED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ED9Cu;
label_26ed9c:
    // 0x26ed9c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x26ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x26eda0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26eda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eda4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x26eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x26eda8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26eda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26edac: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x26edacu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x26edb0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x26edb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26edb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26edb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26edb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26edb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26edbc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26edbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26edc0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x26EDC0u;
    SET_GPR_U32(ctx, 31, 0x26EDC8u);
    ctx->pc = 0x26EDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDC0u;
    // 0x26edc4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x26EDC0u, 0x26EDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDC8u;
label_26edc8:
    // 0x26edc8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26edc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26edcc:
    // 0x26edcc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x26EDCCu;
    SET_GPR_U32(ctx, 31, 0x26EDD4u);
    ctx->pc = 0x26EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDCCu;
    // 0x26edd0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x26EDCCu, 0x26EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDD4u;
label_26edd4:
    // 0x26edd4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x26edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26edd8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x26edd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x26eddc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26EDDCu;
    {
        const bool branch_taken_0x26eddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDDCu;
        // 0x26ede0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eddc) {
            ctx->pc = 0x26EDFCu;
            goto label_26edfc;
        }
    }
    ctx->pc = 0x26EDE4u;
    // 0x26ede4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26ede4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26ede8: 0x24425c10  addiu       $v0, $v0, 0x5C10
    ctx->pc = 0x26ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23568));
    // 0x26edec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26edecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26edf0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26edf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26edf4: 0x800008  jr          $a0
    ctx->pc = 0x26EDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26EDFCu: goto label_26edfc;
            case 0x26EE04u: goto label_26ee04;
            case 0x26EE0Cu: goto label_26ee0c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EDF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26EDFCu;
label_26edfc:
    // 0x26edfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26EDFCu;
    {
        const bool branch_taken_0x26edfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDFCu;
        // 0x26ee00: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26edfc) {
            ctx->pc = 0x26EE10u;
            goto label_26ee10;
        }
    }
    ctx->pc = 0x26EE04u;
label_26ee04:
    // 0x26ee04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26EE04u;
    {
        const bool branch_taken_0x26ee04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE04u;
        // 0x26ee08: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee04) {
            ctx->pc = 0x26EE10u;
            goto label_26ee10;
        }
    }
    ctx->pc = 0x26EE0Cu;
label_26ee0c:
    // 0x26ee0c: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x26ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_26ee10:
    // 0x26ee10: 0xae2216ec  sw          $v0, 0x16EC($s1)
    ctx->pc = 0x26ee10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5868), GPR_U32(ctx, 2));
    // 0x26ee14: 0xae2016e8  sw          $zero, 0x16E8($s1)
    ctx->pc = 0x26ee14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5864), GPR_U32(ctx, 0));
    // 0x26ee18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ee18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26ee1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee20: 0xc09bb90  jal         func_26EE40
    ctx->pc = 0x26EE20u;
    SET_GPR_U32(ctx, 31, 0x26EE28u);
    ctx->pc = 0x26EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EE20u;
    // 0x26ee24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EE40u, 0x26EE20u, 0x26EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE28u;
label_26ee28:
    // 0x26ee28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26ee28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26ee2c:
    // 0x26ee2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ee2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ee30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ee30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ee34: 0x3e00008  jr          $ra
    ctx->pc = 0x26EE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE34u;
        // 0x26ee38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EE3Cu;
    // 0x26ee3c: 0x0  nop
    ctx->pc = 0x26ee3cu;
    // NOP
    ctx->pc = 0x26ee40u;
}
