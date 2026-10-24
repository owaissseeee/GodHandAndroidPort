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

// Function: cOmTrump_Initialize
// Address: 0x1c8ff0 - 0x1c90b0
void cOmTrump_Initialize_0x1c8ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmTrump_Initialize_0x1c8ff0");
#endif

    switch (ctx->pc) {
        case 0x1c900cu: goto label_1c900c;
        case 0x1c904cu: goto label_1c904c;
        case 0x1c9084u: goto label_1c9084;
        default: break;
    }

    ctx->pc = 0x1c8ff0u;

    // 0x1c8ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c8ff4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c8ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c8ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c8ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c8ffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9004: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1C9004u;
    SET_GPR_U32(ctx, 31, 0x1C900Cu);
    ctx->pc = 0x1C9008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9004u;
    // 0x1c9008: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1C9004u, 0x1C900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C900Cu;
label_1c900c:
    // 0x1c900c: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1c900cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x1c9010: 0x2463fc1c  addiu       $v1, $v1, -0x3E4
    ctx->pc = 0x1c9010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966300));
    // 0x1c9014: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1c9014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c9018: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C9018u;
    {
        const bool branch_taken_0x1c9018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9018u;
        // 0x1c901c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9018) {
            ctx->pc = 0x1C908Cu;
            goto label_1c908c;
        }
    }
    ctx->pc = 0x1C9020u;
    // 0x1c9020: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c9020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c9024: 0x24429eb0  addiu       $v0, $v0, -0x6150
    ctx->pc = 0x1c9024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942384));
    // 0x1c9028: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c9028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c902c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c902cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c9030: 0x800008  jr          $a0
    ctx->pc = 0x1C9030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9038u: goto label_1c9038;
            case 0x1C9054u: goto label_1c9054;
            case 0x1C9060u: goto label_1c9060;
            case 0x1C9068u: goto label_1c9068;
            case 0x1C9070u: goto label_1c9070;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9030u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C9038u;
label_1c9038:
    // 0x1c9038: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c9038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c903c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c903cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9040: 0xae020600  sw          $v0, 0x600($s0)
    ctx->pc = 0x1c9040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
    // 0x1c9044: 0xc06df7a  jal         func_1B7DE8
    ctx->pc = 0x1C9044u;
    SET_GPR_U32(ctx, 31, 0x1C904Cu);
    ctx->pc = 0x1C9048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9044u;
    // 0x1c9048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DE8u, 0x1C9044u, 0x1C904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C904Cu;
label_1c904c:
    // 0x1c904c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C904Cu;
    {
        const bool branch_taken_0x1c904c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C904Cu;
        // 0x1c9050: 0xae110604  sw          $s1, 0x604($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c904c) {
            ctx->pc = 0x1C9094u;
            goto label_1c9094;
        }
    }
    ctx->pc = 0x1C9054u;
label_1c9054:
    // 0x1c9054: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1c9054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x1c9058: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9058u;
    {
        const bool branch_taken_0x1c9058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9058u;
        // 0x1c905c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9058) {
            ctx->pc = 0x1C907Cu;
            goto label_1c907c;
        }
    }
    ctx->pc = 0x1C9060u;
label_1c9060:
    // 0x1c9060: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9060u;
    {
        const bool branch_taken_0x1c9060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9060u;
        // 0x1c9064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9060) {
            ctx->pc = 0x1C9074u;
            goto label_1c9074;
        }
    }
    ctx->pc = 0x1C9068u;
label_1c9068:
    // 0x1c9068: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C9068u;
    {
        const bool branch_taken_0x1c9068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9068u;
        // 0x1c906c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9068) {
            ctx->pc = 0x1C9074u;
            goto label_1c9074;
        }
    }
    ctx->pc = 0x1C9070u;
label_1c9070:
    // 0x1c9070: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c9070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c9074:
    // 0x1c9074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9078: 0xae020600  sw          $v0, 0x600($s0)
    ctx->pc = 0x1c9078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
label_1c907c:
    // 0x1c907c: 0xc06df7a  jal         func_1B7DE8
    ctx->pc = 0x1C907Cu;
    SET_GPR_U32(ctx, 31, 0x1C9084u);
    ctx->pc = 0x1C9080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C907Cu;
    // 0x1c9080: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DE8u, 0x1C907Cu, 0x1C9084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9084u;
label_1c9084:
    // 0x1c9084: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9084u;
    {
        const bool branch_taken_0x1c9084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9084u;
        // 0x1c9088: 0xae110604  sw          $s1, 0x604($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9084) {
            ctx->pc = 0x1C9094u;
            goto label_1c9094;
        }
    }
    ctx->pc = 0x1C908Cu;
label_1c908c:
    // 0x1c908c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C908Cu;
    {
        const bool branch_taken_0x1c908c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C908Cu;
        // 0x1c9090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c908c) {
            ctx->pc = 0x1C9098u;
            goto label_1c9098;
        }
    }
    ctx->pc = 0x1C9094u;
label_1c9094:
    // 0x1c9094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9098:
    // 0x1c9098: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c9098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c909c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c909cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c90a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c90a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c90a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C90A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C90A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C90A4u;
        // 0x1c90a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C90A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C90ACu;
    // 0x1c90ac: 0x0  nop
    ctx->pc = 0x1c90acu;
    // NOP
    ctx->pc = 0x1c90b0u;
}
