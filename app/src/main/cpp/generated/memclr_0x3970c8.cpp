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

// Function: memclr
// Address: 0x3970c8 - 0x397100
void memclr_0x3970c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memclr_0x3970c8");
#endif

    switch (ctx->pc) {
        case 0x3970d8u: goto label_3970d8;
        default: break;
    }

    ctx->pc = 0x3970c8u;

    // 0x3970c8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3970C8u;
    {
        const bool branch_taken_0x3970c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3970CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3970C8u;
        // 0x3970cc: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3970c8) {
            ctx->pc = 0x3970F4u;
            goto label_3970f4;
        }
    }
    ctx->pc = 0x3970D0u;
    // 0x3970d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3970d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3970d4: 0x0  nop
    ctx->pc = 0x3970d4u;
    // NOP
label_3970d8:
    // 0x3970d8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3970d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3970dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3970dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3970e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3970e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3970e4: 0x0  nop
    ctx->pc = 0x3970e4u;
    // NOP
    // 0x3970e8: 0x0  nop
    ctx->pc = 0x3970e8u;
    // NOP
    // 0x3970ec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3970ECu;
    {
        const bool branch_taken_0x3970ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3970ec) {
            ctx->pc = 0x3970D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3970d8;
        }
    }
    ctx->pc = 0x3970F4u;
label_3970f4:
    // 0x3970f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3970F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3970F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3970FCu;
    // 0x3970fc: 0x0  nop
    ctx->pc = 0x3970fcu;
    // NOP
    ctx->pc = 0x397100u;
}
