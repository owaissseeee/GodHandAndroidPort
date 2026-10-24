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

// Function: unget__7istream
// Address: 0x389e88 - 0x389ed8
void unget__7istream_0x389e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("unget__7istream_0x389e88");
#endif

    switch (ctx->pc) {
        case 0x389eb0u: goto label_389eb0;
        default: break;
    }

    ctx->pc = 0x389e88u;

    // 0x389e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x389e8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x389e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x389e90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x389e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x389e94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x389e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389e98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x389e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x389e9c: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x389e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x389ea0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x389EA0u;
    {
        const bool branch_taken_0x389ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389EA0u;
        // 0x389ea4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389ea0) {
            ctx->pc = 0x389EC8u;
            goto label_389ec8;
        }
    }
    ctx->pc = 0x389EA8u;
    // 0x389ea8: 0xc0e2d20  jal         func_38B480
    ctx->pc = 0x389EA8u;
    SET_GPR_U32(ctx, 31, 0x389EB0u);
    ctx->pc = 0x389EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389EA8u;
    // 0x389eac: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B480u, 0x389EA8u, 0x389EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389EB0u;
label_389eb0:
    // 0x389eb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x389eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x389eb4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x389EB4u;
    {
        const bool branch_taken_0x389eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x389EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389EB4u;
        // 0x389eb8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389eb4) {
            ctx->pc = 0x389EC8u;
            goto label_389ec8;
        }
    }
    ctx->pc = 0x389EBCu;
    // 0x389ebc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x389ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x389ec0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x389ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x389ec4: 0xa064001a  sb          $a0, 0x1A($v1)
    ctx->pc = 0x389ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 4));
label_389ec8:
    // 0x389ec8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x389ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389ecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x389eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x389ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389ED0u;
        // 0x389ed4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389ED8u;
}
