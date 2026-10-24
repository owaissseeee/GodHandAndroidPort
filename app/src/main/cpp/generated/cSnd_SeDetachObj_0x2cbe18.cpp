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

// Function: cSnd_SeDetachObj
// Address: 0x2cbe18 - 0x2cbe68
void cSnd_SeDetachObj_0x2cbe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SeDetachObj_0x2cbe18");
#endif

    switch (ctx->pc) {
        case 0x2cbe38u: goto label_2cbe38;
        case 0x2cbe40u: goto label_2cbe40;
        default: break;
    }

    ctx->pc = 0x2cbe18u;

    // 0x2cbe18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cbe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cbe1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cbe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cbe20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cbe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cbe24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cbe24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2cbe28: 0x8c90001c  lw          $s0, 0x1C($a0)
    ctx->pc = 0x2cbe28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2cbe2c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CBE2Cu;
    {
        const bool branch_taken_0x2cbe2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE2Cu;
        // 0x2cbe30: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe2c) {
            ctx->pc = 0x2CBE50u;
            goto label_2cbe50;
        }
    }
    ctx->pc = 0x2CBE34u;
    // 0x2cbe34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbe34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cbe38:
    // 0x2cbe38: 0xc0b3922  jal         func_2CE488
    ctx->pc = 0x2CBE38u;
    SET_GPR_U32(ctx, 31, 0x2CBE40u);
    ctx->pc = 0x2CBE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE38u;
    // 0x2cbe3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE488u, 0x2CBE38u, 0x2CBE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE40u;
label_2cbe40:
    // 0x2cbe40: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2cbe40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2cbe44: 0x0  nop
    ctx->pc = 0x2cbe44u;
    // NOP
    // 0x2cbe48: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CBE48u;
    {
        const bool branch_taken_0x2cbe48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE48u;
        // 0x2cbe4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe48) {
            ctx->pc = 0x2CBE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbe38;
        }
    }
    ctx->pc = 0x2CBE50u;
label_2cbe50:
    // 0x2cbe50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cbe50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbe54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cbe54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbe58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbe58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbe5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE5Cu;
        // 0x2cbe60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBE64u;
    // 0x2cbe64: 0x0  nop
    ctx->pc = 0x2cbe64u;
    // NOP
    ctx->pc = 0x2cbe68u;
}
