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

// Function: func_0036C518
// Address: 0x36c518 - 0x36c568
void func_0036C518_0x36c518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C518_0x36c518");
#endif

    switch (ctx->pc) {
        case 0x36c538u: goto label_36c538;
        default: break;
    }

    ctx->pc = 0x36c518u;

    // 0x36c518: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x36c518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x36c51c: 0x24426ce8  addiu       $v0, $v0, 0x6CE8
    ctx->pc = 0x36c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27880));
    // 0x36c520: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x36c520u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x766D3Cu));
    // 0x36c524: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x36C524u;
    {
        const bool branch_taken_0x36c524 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x36C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C524u;
        // 0x36c528: 0x8c430058  lw          $v1, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c524) {
            ctx->pc = 0x36C55Cu;
            goto label_36c55c;
        }
    }
    ctx->pc = 0x36C52Cu;
    // 0x36c52c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x36c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36c530: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x36c530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c534: 0x24440190  addiu       $a0, $v0, 0x190
    ctx->pc = 0x36c534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
label_36c538:
    // 0x36c538: 0x8c620188  lw          $v0, 0x188($v1)
    ctx->pc = 0x36c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 392)));
    // 0x36c53c: 0x14470003  bne         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x36C53Cu;
    {
        const bool branch_taken_0x36c53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x36C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C53Cu;
        // 0x36c540: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c53c) {
            ctx->pc = 0x36C54Cu;
            goto label_36c54c;
        }
    }
    ctx->pc = 0x36C544u;
    // 0x36c544: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x36c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36c548: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36c548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_36c54c:
    // 0x36c54c: 0x0  nop
    ctx->pc = 0x36c54cu;
    // NOP
    // 0x36c550: 0x0  nop
    ctx->pc = 0x36c550u;
    // NOP
    // 0x36c554: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x36C554u;
    {
        const bool branch_taken_0x36c554 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C554u;
        // 0x36c558: 0x24630440  addiu       $v1, $v1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c554) {
            ctx->pc = 0x36C538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c538;
        }
    }
    ctx->pc = 0x36C55Cu;
label_36c55c:
    // 0x36c55c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C564u;
    // 0x36c564: 0x0  nop
    ctx->pc = 0x36c564u;
    // NOP
    ctx->pc = 0x36c568u;
}
