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

// Function: func_003761D0
// Address: 0x3761d0 - 0x376200
void func_003761D0_0x3761d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003761D0_0x3761d0");
#endif

    switch (ctx->pc) {
        case 0x3761d8u: goto label_3761d8;
        default: break;
    }

    ctx->pc = 0x3761d0u;

    // 0x3761d0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x3761d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x3761d4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3761d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3761d8:
    // 0x3761d8: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x3761d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x3761dc: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x3761dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3761e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3761e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3761e4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3761e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3761e8: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x3761e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3761ec: 0xa4800012  sh          $zero, 0x12($a0)
    ctx->pc = 0x3761ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x3761f0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3761F0u;
    {
        const bool branch_taken_0x3761f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3761F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3761F0u;
        // 0x3761f4: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3761f0) {
            ctx->pc = 0x3761D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3761d8;
        }
    }
    ctx->pc = 0x3761F8u;
    // 0x3761f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3761F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3761F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376200u;
}
