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

// Function: func_0035E8F8
// Address: 0x35e8f8 - 0x35e968
void func_0035E8F8_0x35e8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E8F8_0x35e8f8");
#endif

    ctx->pc = 0x35e8f8u;

    // 0x35e8f8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x35e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x35e8fc: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x35e8fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x35e900: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x35E900u;
    {
        const bool branch_taken_0x35e900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e900) {
            ctx->pc = 0x35E960u;
            goto label_35e960;
        }
    }
    ctx->pc = 0x35E908u;
    // 0x35e908: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x35e908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35e90c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x35e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x35e910: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x35e910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35e914: 0x8c639c50  lw          $v1, -0x63B0($v1)
    ctx->pc = 0x35e914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941776)));
    // 0x35e918: 0x600008  jr          $v1
    ctx->pc = 0x35E918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x35E920u: goto label_35e920;
            case 0x35E928u: goto label_35e928;
            case 0x35E930u: goto label_35e930;
            case 0x35E938u: goto label_35e938;
            case 0x35E940u: goto label_35e940;
            case 0x35E948u: goto label_35e948;
            case 0x35E950u: goto label_35e950;
            case 0x35E958u: goto label_35e958;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E918u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x35E920u;
label_35e920:
    // 0x35e920: 0x3e00008  jr          $ra
    ctx->pc = 0x35E920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E920u;
        // 0x35e924: 0x24025da8  addiu       $v0, $zero, 0x5DA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23976));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E928u;
label_35e928:
    // 0x35e928: 0x3e00008  jr          $ra
    ctx->pc = 0x35E928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E928u;
        // 0x35e92c: 0x24025dc0  addiu       $v0, $zero, 0x5DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E930u;
label_35e930:
    // 0x35e930: 0x3e00008  jr          $ra
    ctx->pc = 0x35E930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E930u;
        // 0x35e934: 0x240261a8  addiu       $v0, $zero, 0x61A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E938u;
label_35e938:
    // 0x35e938: 0x3e00008  jr          $ra
    ctx->pc = 0x35E938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E938u;
        // 0x35e93c: 0x24027512  addiu       $v0, $zero, 0x7512 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29970));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E940u;
label_35e940:
    // 0x35e940: 0x3e00008  jr          $ra
    ctx->pc = 0x35E940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E940u;
        // 0x35e944: 0x24027530  addiu       $v0, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E948u;
label_35e948:
    // 0x35e948: 0x3e00008  jr          $ra
    ctx->pc = 0x35E948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E948u;
        // 0x35e94c: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E950u;
label_35e950:
    // 0x35e950: 0x3e00008  jr          $ra
    ctx->pc = 0x35E950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E950u;
        // 0x35e954: 0x3402ea24  ori         $v0, $zero, 0xEA24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59940);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E958u;
label_35e958:
    // 0x35e958: 0x3e00008  jr          $ra
    ctx->pc = 0x35E958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E958u;
        // 0x35e95c: 0x3402ea60  ori         $v0, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E960u;
label_35e960:
    // 0x35e960: 0x3e00008  jr          $ra
    ctx->pc = 0x35E960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E960u;
        // 0x35e964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E968u;
}
