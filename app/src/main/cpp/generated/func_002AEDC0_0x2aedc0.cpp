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

// Function: func_002AEDC0
// Address: 0x2aedc0 - 0x2aedf0
void func_002AEDC0_0x2aedc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AEDC0_0x2aedc0");
#endif

    switch (ctx->pc) {
        case 0x2aedd0u: goto label_2aedd0;
        default: break;
    }

    ctx->pc = 0x2aedc0u;

    // 0x2aedc0: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x2aedc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2aedc4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2aedc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2aedc8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AEDC8u;
    {
        const bool branch_taken_0x2aedc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEDC8u;
        // 0x2aedcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aedc8) {
            ctx->pc = 0x2AEDE8u;
            goto label_2aede8;
        }
    }
    ctx->pc = 0x2AEDD0u;
label_2aedd0:
    // 0x2aedd0: 0x9082002c  lbu         $v0, 0x2C($a0)
    ctx->pc = 0x2aedd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2aedd4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2aedd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2aedd8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2aedd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2aeddc: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x2aeddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x2aede0: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AEDE0u;
    {
        const bool branch_taken_0x2aede0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEDE0u;
        // 0x2aede4: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aede0) {
            ctx->pc = 0x2AEDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aedd0;
        }
    }
    ctx->pc = 0x2AEDE8u;
label_2aede8:
    // 0x2aede8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEDE8u;
        // 0x2aedec: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEDF0u;
}
