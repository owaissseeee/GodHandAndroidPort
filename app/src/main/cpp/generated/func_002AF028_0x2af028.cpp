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

// Function: func_002AF028
// Address: 0x2af028 - 0x2af068
void func_002AF028_0x2af028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AF028_0x2af028");
#endif

    switch (ctx->pc) {
        case 0x2af040u: goto label_2af040;
        case 0x2af048u: goto label_2af048;
        default: break;
    }

    ctx->pc = 0x2af028u;

    // 0x2af028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af02c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af030: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2af030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2af034: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x2af034u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2af038: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AF038u;
    {
        const bool branch_taken_0x2af038 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af038) {
            ctx->pc = 0x2AF03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF038u;
            // 0x2af03c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF05Cu;
            goto label_2af05c;
        }
    }
    ctx->pc = 0x2AF040u;
label_2af040:
    // 0x2af040: 0xc0ac5bc  jal         func_2B16F0
    ctx->pc = 0x2AF040u;
    SET_GPR_U32(ctx, 31, 0x2AF048u);
    ctx->pc = 0x2AF044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF040u;
    // 0x2af044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B16F0u, 0x2AF040u, 0x2AF048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF048u;
label_2af048:
    // 0x2af048: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x2af048u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2af04c: 0x0  nop
    ctx->pc = 0x2af04cu;
    // NOP
    // 0x2af050: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AF050u;
    {
        const bool branch_taken_0x2af050 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af050) {
            ctx->pc = 0x2AF040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af040;
        }
    }
    ctx->pc = 0x2AF058u;
    // 0x2af058: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2af058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2af05c:
    // 0x2af05c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af060: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF060u;
        // 0x2af064: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF068u;
}
