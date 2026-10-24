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

// Function: func_00318700
// Address: 0x318700 - 0x318788
void func_00318700_0x318700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00318700_0x318700");
#endif

    switch (ctx->pc) {
        case 0x318730u: goto label_318730;
        case 0x31873cu: goto label_31873c;
        default: break;
    }

    ctx->pc = 0x318700u;

    // 0x318700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x318700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x318704: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x318704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x318708: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x318708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x31870c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31870cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318710: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x318710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x318714: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x318714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318718: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x318718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31871c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31871cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x318720: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x318720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x318724: 0x8cb20144  lw          $s2, 0x144($a1)
    ctx->pc = 0x318724u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 324)));
    // 0x318728: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x318728u;
    {
        const bool branch_taken_0x318728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318728u;
        // 0x31872c: 0x8e700144  lw          $s0, 0x144($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318728) {
            ctx->pc = 0x318760u;
            goto label_318760;
        }
    }
    ctx->pc = 0x318730u;
label_318730:
    // 0x318730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x318730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318734: 0xc051d4a  jal         func_147528
    ctx->pc = 0x318734u;
    SET_GPR_U32(ctx, 31, 0x31873Cu);
    ctx->pc = 0x318738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318734u;
    // 0x318738: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x318734u, 0x31873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31873Cu;
label_31873c:
    // 0x31873c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31873cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x318740: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x318740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x318744: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x318744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x318748: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x318748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x31874c: 0x8e100144  lw          $s0, 0x144($s0)
    ctx->pc = 0x31874cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x318750: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x318750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x318754: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x318754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x318758: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x318758u;
    {
        const bool branch_taken_0x318758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318758u;
        // 0x31875c: 0x8e520144  lw          $s2, 0x144($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318758) {
            ctx->pc = 0x318730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318730;
        }
    }
    ctx->pc = 0x318760u;
label_318760:
    // 0x318760: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x318760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x318764: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x318764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x318768: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x318768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31876c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x31876cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x318770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318774: 0x3e00008  jr          $ra
    ctx->pc = 0x318774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318774u;
        // 0x318778: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31877Cu;
    // 0x31877c: 0x0  nop
    ctx->pc = 0x31877cu;
    // NOP
    // 0x318780: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x318780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x318784: 0x0  nop
    ctx->pc = 0x318784u;
    // NOP
    ctx->pc = 0x318788u;
}
