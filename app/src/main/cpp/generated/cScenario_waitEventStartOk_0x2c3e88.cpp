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

// Function: cScenario_waitEventStartOk
// Address: 0x2c3e88 - 0x2c3ed8
void cScenario_waitEventStartOk_0x2c3e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_waitEventStartOk_0x2c3e88");
#endif

    switch (ctx->pc) {
        case 0x2c3ea8u: goto label_2c3ea8;
        case 0x2c3eb0u: goto label_2c3eb0;
        case 0x2c3eb8u: goto label_2c3eb8;
        default: break;
    }

    ctx->pc = 0x2c3e88u;

    // 0x2c3e88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c3e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c3e8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c3e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c3e90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c3e94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c3e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c3e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c3e9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3E9Cu;
    {
        const bool branch_taken_0x2c3e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E9Cu;
        // 0x2c3ea0: 0x2611001c  addiu       $s1, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e9c) {
            ctx->pc = 0x2C3EB0u;
            goto label_2c3eb0;
        }
    }
    ctx->pc = 0x2C3EA4u;
    // 0x2c3ea4: 0x0  nop
    ctx->pc = 0x2c3ea4u;
    // NOP
label_2c3ea8:
    // 0x2c3ea8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x2C3EA8u;
    SET_GPR_U32(ctx, 31, 0x2C3EB0u);
    ctx->pc = 0x2C3EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3EA8u;
    // 0x2c3eac: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x2C3EA8u, 0x2C3EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EB0u;
label_2c3eb0:
    // 0x2c3eb0: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x2C3EB0u;
    SET_GPR_U32(ctx, 31, 0x2C3EB8u);
    ctx->pc = 0x2C3EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3EB0u;
    // 0x2c3eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x2C3EB0u, 0x2C3EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EB8u;
label_2c3eb8:
    // 0x2c3eb8: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C3EB8u;
    {
        const bool branch_taken_0x2c3eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EB8u;
        // 0x2c3ebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3eb8) {
            ctx->pc = 0x2C3EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3ea8;
        }
    }
    ctx->pc = 0x2C3EC0u;
    // 0x2c3ec0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c3ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3ec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c3ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3ECCu;
        // 0x2c3ed0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3ED4u;
    // 0x2c3ed4: 0x0  nop
    ctx->pc = 0x2c3ed4u;
    // NOP
    ctx->pc = 0x2c3ed8u;
}
