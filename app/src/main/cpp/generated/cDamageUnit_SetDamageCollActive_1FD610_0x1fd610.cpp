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

// Function: cDamageUnit_SetDamageCollActive_1FD610
// Address: 0x1fd610 - 0x1fd668
void cDamageUnit_SetDamageCollActive_1FD610_0x1fd610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDamageUnit_SetDamageCollActive_1FD610_0x1fd610");
#endif

    switch (ctx->pc) {
        case 0x1fd628u: goto label_1fd628;
        default: break;
    }

    ctx->pc = 0x1fd610u;

    // 0x1fd610: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x1fd610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1fd614: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FD614u;
    {
        const bool branch_taken_0x1fd614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD614u;
        // 0x1fd618: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd614) {
            ctx->pc = 0x1FD660u;
            goto label_1fd660;
        }
    }
    ctx->pc = 0x1FD61Cu;
    // 0x1fd61c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1fd61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1fd620: 0x3484fffd  ori         $a0, $a0, 0xFFFD
    ctx->pc = 0x1fd620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65533);
    // 0x1fd624: 0x8462002c  lh          $v0, 0x2C($v1)
    ctx->pc = 0x1fd624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
label_1fd628:
    // 0x1fd628: 0x5445000b  bnel        $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1FD628u;
    {
        const bool branch_taken_0x1fd628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fd628) {
            ctx->pc = 0x1FD62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD628u;
            // 0x1fd62c: 0x8c630024  lw          $v1, 0x24($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD658u;
            goto label_1fd658;
        }
    }
    ctx->pc = 0x1FD630u;
    // 0x1fd630: 0x14c70005  bne         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD630u;
    {
        const bool branch_taken_0x1fd630 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x1FD634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD630u;
        // 0x1fd634: 0x8c630028  lw          $v1, 0x28($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd630) {
            ctx->pc = 0x1FD648u;
            goto label_1fd648;
        }
    }
    ctx->pc = 0x1FD638u;
    // 0x1fd638: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fd638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd63c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1fd63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1fd640: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD640u;
        // 0x1fd644: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD648u;
label_1fd648:
    // 0x1fd648: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fd648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd64c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fd64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fd650: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD650u;
        // 0x1fd654: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD658u;
label_1fd658:
    // 0x1fd658: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1FD658u;
    {
        const bool branch_taken_0x1fd658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd658) {
            ctx->pc = 0x1FD65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD658u;
            // 0x1fd65c: 0x8462002c  lh          $v0, 0x2C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd628;
        }
    }
    ctx->pc = 0x1FD660u;
label_1fd660:
    // 0x1fd660: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD668u;
}
