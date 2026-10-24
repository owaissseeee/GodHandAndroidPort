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

// Function: SetFirstFreeSlot_Field_1644_1268B0
// Address: 0x1268b0 - 0x1268f0
void SetFirstFreeSlot_Field_1644_1268B0_0x1268b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFirstFreeSlot_Field_1644_1268B0_0x1268b0");
#endif

    switch (ctx->pc) {
        case 0x1268c0u: goto label_1268c0;
        default: break;
    }

    ctx->pc = 0x1268b0u;

    // 0x1268b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1268b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1268b4: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x1268b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1268b8: 0x24831644  addiu       $v1, $a0, 0x1644
    ctx->pc = 0x1268b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5700));
    // 0x1268bc: 0x0  nop
    ctx->pc = 0x1268bcu;
    // NOP
label_1268c0:
    // 0x1268c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1268c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1268c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1268C4u;
    {
        const bool branch_taken_0x1268c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1268C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268C4u;
        // 0x1268c8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268c4) {
            ctx->pc = 0x1268D8u;
            goto label_1268d8;
        }
    }
    ctx->pc = 0x1268CCu;
    // 0x1268cc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1268ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1268d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1268D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1268D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268D0u;
        // 0x1268d4: 0xac871658  sw          $a3, 0x1658($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5720), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1268D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1268D8u;
label_1268d8:
    // 0x1268d8: 0x2cc20005  sltiu       $v0, $a2, 0x5
    ctx->pc = 0x1268d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1268dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1268DCu;
    {
        const bool branch_taken_0x1268dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1268E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268DCu;
        // 0x1268e0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268dc) {
            ctx->pc = 0x1268C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1268c0;
        }
    }
    ctx->pc = 0x1268E4u;
    // 0x1268e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1268E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1268E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1268ECu;
    // 0x1268ec: 0x0  nop
    ctx->pc = 0x1268ecu;
    // NOP
    ctx->pc = 0x1268f0u;
}
