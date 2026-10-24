#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: setCameraCut__12cEventCameraP15cEventCameraCutUi
// Address: 0x7acc08 - 0x7acc58
void setCameraCut__12cEventCameraP15cEventCameraCutUi_0x7acc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setCameraCut__12cEventCameraP15cEventCameraCutUi_0x7acc08");
#endif

    switch (ctx->pc) {
        case 0x7acc20u: goto label_7acc20;
        default: break;
    }

    ctx->pc = 0x7acc08u;

    // 0x7acc08: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x7acc08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x7acc0c: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7acc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7acc10: 0x8c425288  lw          $v0, 0x5288($v0)
    ctx->pc = 0x7acc10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7B5288u));
    // 0x7acc14: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7ACC14u;
    {
        const bool branch_taken_0x7acc14 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7ACC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACC14u;
        // 0x7acc18: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acc14) {
            ctx->pc = 0x7ACC4Cu;
            goto label_7acc4c;
        }
    }
    ctx->pc = 0x7ACC1Cu;
    // 0x7acc1c: 0x0  nop
    ctx->pc = 0x7acc1cu;
    // NOP
label_7acc20:
    // 0x7acc20: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x7acc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x7acc24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x7ACC24u;
    {
        const bool branch_taken_0x7acc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ACC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACC24u;
        // 0x7acc28: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acc24) {
            ctx->pc = 0x7ACC30u;
            goto label_7acc30;
        }
    }
    ctx->pc = 0x7ACC2Cu;
    // 0x7acc2c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7acc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_7acc30:
    // 0x7acc30: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x7acc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7acc34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x7ACC34u;
    {
        const bool branch_taken_0x7acc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ACC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACC34u;
        // 0x7acc38: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acc34) {
            ctx->pc = 0x7ACC40u;
            goto label_7acc40;
        }
    }
    ctx->pc = 0x7ACC3Cu;
    // 0x7acc3c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x7acc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_7acc40:
    // 0x7acc40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x7acc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x7acc44: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x7ACC44u;
    {
        const bool branch_taken_0x7acc44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7ACC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACC44u;
        // 0x7acc48: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acc44) {
            ctx->pc = 0x7ACC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7acc20;
        }
    }
    ctx->pc = 0x7ACC4Cu;
label_7acc4c:
    // 0x7acc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x7ACC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ACC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ACC54u;
    // 0x7acc54: 0x0  nop
    ctx->pc = 0x7acc54u;
    // NOP
    ctx->pc = 0x7acc58u;
}
} // namespace gh_event
