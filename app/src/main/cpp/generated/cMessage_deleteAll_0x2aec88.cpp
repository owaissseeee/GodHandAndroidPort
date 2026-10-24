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

// Function: cMessage_deleteAll
// Address: 0x2aec88 - 0x2aecd0
void cMessage_deleteAll_0x2aec88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessage_deleteAll_0x2aec88");
#endif

    switch (ctx->pc) {
        case 0x2aeca8u: goto label_2aeca8;
        case 0x2aecb0u: goto label_2aecb0;
        default: break;
    }

    ctx->pc = 0x2aec88u;

    // 0x2aec88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aec88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aec8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2aec8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2aec90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aec94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aec94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aec98: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2aec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2aec9c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AEC9Cu;
    {
        const bool branch_taken_0x2aec9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aec9c) {
            ctx->pc = 0x2AECA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEC9Cu;
            // 0x2aeca0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AECC4u;
            goto label_2aecc4;
        }
    }
    ctx->pc = 0x2AECA4u;
    // 0x2aeca4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aeca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aeca8:
    // 0x2aeca8: 0xc0abbc4  jal         func_2AEF10
    ctx->pc = 0x2AECA8u;
    SET_GPR_U32(ctx, 31, 0x2AECB0u);
    ctx->pc = 0x2AECACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECA8u;
    // 0x2aecac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEF10u, 0x2AECA8u, 0x2AECB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AECB0u;
label_2aecb0:
    // 0x2aecb0: 0x0  nop
    ctx->pc = 0x2aecb0u;
    // NOP
    // 0x2aecb4: 0x0  nop
    ctx->pc = 0x2aecb4u;
    // NOP
    // 0x2aecb8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AECB8u;
    {
        const bool branch_taken_0x2aecb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AECB8u;
        // 0x2aecbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aecb8) {
            ctx->pc = 0x2AECA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aeca8;
        }
    }
    ctx->pc = 0x2AECC0u;
    // 0x2aecc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2aecc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2aecc4:
    // 0x2aecc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aecc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aecc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AECC8u;
        // 0x2aeccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AECC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AECD0u;
}
