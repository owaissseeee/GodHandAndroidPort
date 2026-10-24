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

// Function: cMessage_closeAll
// Address: 0x2aecd0 - 0x2aed10
void cMessage_closeAll_0x2aecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessage_closeAll_0x2aecd0");
#endif

    switch (ctx->pc) {
        case 0x2aece8u: goto label_2aece8;
        case 0x2aecf0u: goto label_2aecf0;
        default: break;
    }

    ctx->pc = 0x2aecd0u;

    // 0x2aecd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aecd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aecd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2aecd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2aecdc: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x2aecdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2aece0: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AECE0u;
    {
        const bool branch_taken_0x2aece0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aece0) {
            ctx->pc = 0x2AECE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AECE0u;
            // 0x2aece4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AED04u;
            goto label_2aed04;
        }
    }
    ctx->pc = 0x2AECE8u;
label_2aece8:
    // 0x2aece8: 0xc0ac900  jal         func_2B2400
    ctx->pc = 0x2AECE8u;
    SET_GPR_U32(ctx, 31, 0x2AECF0u);
    ctx->pc = 0x2AECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AECE8u;
    // 0x2aecec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2400u, 0x2AECE8u, 0x2AECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AECF0u;
label_2aecf0:
    // 0x2aecf0: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x2aecf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2aecf4: 0x0  nop
    ctx->pc = 0x2aecf4u;
    // NOP
    // 0x2aecf8: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AECF8u;
    {
        const bool branch_taken_0x2aecf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aecf8) {
            ctx->pc = 0x2AECE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aece8;
        }
    }
    ctx->pc = 0x2AED00u;
    // 0x2aed00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2aed00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2aed04:
    // 0x2aed04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aed04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aed08: 0x3e00008  jr          $ra
    ctx->pc = 0x2AED08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AED08u;
        // 0x2aed0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AED08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AED10u;
}
