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

// Function: func_002AEDF0
// Address: 0x2aedf0 - 0x2aee40
void func_002AEDF0_0x2aedf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AEDF0_0x2aedf0");
#endif

    switch (ctx->pc) {
        case 0x2aee10u: goto label_2aee10;
        case 0x2aee20u: goto label_2aee20;
        default: break;
    }

    ctx->pc = 0x2aedf0u;

    // 0x2aedf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aedf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aedf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aedf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aedf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aedf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aedfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2aedfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2aee00: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x2aee00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2aee04: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AEE04u;
    {
        const bool branch_taken_0x2aee04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE04u;
        // 0x2aee08: 0x30b100ff  andi        $s1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee04) {
            ctx->pc = 0x2AEE2Cu;
            goto label_2aee2c;
        }
    }
    ctx->pc = 0x2AEE0Cu;
    // 0x2aee0c: 0x9202002c  lbu         $v0, 0x2C($s0)
    ctx->pc = 0x2aee0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_2aee10:
    // 0x2aee10: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AEE10u;
    {
        const bool branch_taken_0x2aee10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2aee10) {
            ctx->pc = 0x2AEE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEE10u;
            // 0x2aee14: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEE24u;
            goto label_2aee24;
        }
    }
    ctx->pc = 0x2AEE18u;
    // 0x2aee18: 0xc0ac900  jal         func_2B2400
    ctx->pc = 0x2AEE18u;
    SET_GPR_U32(ctx, 31, 0x2AEE20u);
    ctx->pc = 0x2AEE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEE18u;
    // 0x2aee1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2400u, 0x2AEE18u, 0x2AEE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEE20u;
label_2aee20:
    // 0x2aee20: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x2aee20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2aee24:
    // 0x2aee24: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2AEE24u;
    {
        const bool branch_taken_0x2aee24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aee24) {
            ctx->pc = 0x2AEE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEE24u;
            // 0x2aee28: 0x9202002c  lbu         $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aee10;
        }
    }
    ctx->pc = 0x2AEE2Cu;
label_2aee2c:
    // 0x2aee2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2aee2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aee30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aee30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aee34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aee34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aee38: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE38u;
        // 0x2aee3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEE40u;
}
