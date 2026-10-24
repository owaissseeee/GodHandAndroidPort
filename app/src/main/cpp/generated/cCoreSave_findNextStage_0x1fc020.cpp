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

// Function: cCoreSave_findNextStage
// Address: 0x1fc020 - 0x1fc090
void cCoreSave_findNextStage_0x1fc020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_findNextStage_0x1fc020");
#endif

    switch (ctx->pc) {
        case 0x1fc050u: goto label_1fc050;
        case 0x1fc068u: goto label_1fc068;
        default: break;
    }

    ctx->pc = 0x1fc020u;

    // 0x1fc020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fc024: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fc024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fc028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fc02c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc030: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fc030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc034: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC034u;
    {
        const bool branch_taken_0x1fc034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC034u;
        // 0x1fc038: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc034) {
            ctx->pc = 0x1FC044u;
            goto label_1fc044;
        }
    }
    ctx->pc = 0x1FC03Cu;
    // 0x1fc03c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FC03Cu;
    {
        const bool branch_taken_0x1fc03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC03Cu;
        // 0x1fc040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc03c) {
            ctx->pc = 0x1FC078u;
            goto label_1fc078;
        }
    }
    ctx->pc = 0x1FC044u;
label_1fc044:
    // 0x1fc044: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC044u;
    {
        const bool branch_taken_0x1fc044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC044u;
        // 0x1fc048: 0x3c110057  lui         $s1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc044) {
            ctx->pc = 0x1FC054u;
            goto label_1fc054;
        }
    }
    ctx->pc = 0x1FC04Cu;
    // 0x1fc04c: 0x0  nop
    ctx->pc = 0x1fc04cu;
    // NOP
label_1fc050:
    // 0x1fc050: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1fc050u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1fc054:
    // 0x1fc054: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x1fc054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1fc058: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC058u;
    {
        const bool branch_taken_0x1fc058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC058u;
        // 0x1fc05c: 0x26249b70  addiu       $a0, $s1, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc058) {
            ctx->pc = 0x1FC070u;
            goto label_1fc070;
        }
    }
    ctx->pc = 0x1FC060u;
    // 0x1fc060: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x1FC060u;
    SET_GPR_U32(ctx, 31, 0x1FC068u);
    ctx->pc = 0x1FC064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC060u;
    // 0x1fc064: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x1FC060u, 0x1FC068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC068u;
label_1fc068:
    // 0x1fc068: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FC068u;
    {
        const bool branch_taken_0x1fc068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC068u;
        // 0x1fc06c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc068) {
            ctx->pc = 0x1FC050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc050;
        }
    }
    ctx->pc = 0x1FC070u;
label_1fc070:
    // 0x1fc070: 0x101600  sll         $v0, $s0, 24
    ctx->pc = 0x1fc070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x1fc074: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1fc074u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1fc078:
    // 0x1fc078: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fc078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc07c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc07cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc084: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC084u;
        // 0x1fc088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC08Cu;
    // 0x1fc08c: 0x0  nop
    ctx->pc = 0x1fc08cu;
    // NOP
    ctx->pc = 0x1fc090u;
}
