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

// Function: Slot2_hideLayerIds
// Address: 0x1e6820 - 0x1e6870
void Slot2_hideLayerIds_0x1e6820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_hideLayerIds_0x1e6820");
#endif

    switch (ctx->pc) {
        case 0x1e6840u: goto label_1e6840;
        case 0x1e6850u: goto label_1e6850;
        default: break;
    }

    ctx->pc = 0x1e6820u;

    // 0x1e6820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6824: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e6824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e6828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e682c: 0x249003a0  addiu       $s0, $a0, 0x3A0
    ctx->pc = 0x1e682cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x1e6830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6834: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x1e6834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e6838: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e6838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e683c: 0x0  nop
    ctx->pc = 0x1e683cu;
    // NOP
label_1e6840:
    // 0x1e6840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6844: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e6844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e6848: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6848u;
    SET_GPR_U32(ctx, 31, 0x1E6850u);
    ctx->pc = 0x1E684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6848u;
    // 0x1e684c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6848u, 0x1E6850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6850u;
label_1e6850:
    // 0x1e6850: 0x623fffb  bgezl       $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E6850u;
    {
        const bool branch_taken_0x1e6850 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x1e6850) {
            ctx->pc = 0x1E6854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6850u;
            // 0x1e6854: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6840;
        }
    }
    ctx->pc = 0x1E6858u;
    // 0x1e6858: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e6858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e685c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e685cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6864: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6864u;
        // 0x1e6868: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E686Cu;
    // 0x1e686c: 0x0  nop
    ctx->pc = 0x1e686cu;
    // NOP
    ctx->pc = 0x1e6870u;
}
