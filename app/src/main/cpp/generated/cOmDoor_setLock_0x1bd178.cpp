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

// Function: cOmDoor_setLock
// Address: 0x1bd178 - 0x1bd1a0
void cOmDoor_setLock_0x1bd178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmDoor_setLock_0x1bd178");
#endif

    ctx->pc = 0x1bd178u;

    // 0x1bd178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd17c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD17Cu;
    {
        const bool branch_taken_0x1bd17c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD17Cu;
        // 0x1bd180: 0x8c820620  lw          $v0, 0x620($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd17c) {
            ctx->pc = 0x1BD190u;
            goto label_1bd190;
        }
    }
    ctx->pc = 0x1BD184u;
    // 0x1bd184: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1bd184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1bd188: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD188u;
        // 0x1bd18c: 0xac820620  sw          $v0, 0x620($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD190u;
label_1bd190:
    // 0x1bd190: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1bd190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1bd194: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1bd194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1bd198: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD198u;
        // 0x1bd19c: 0xac820620  sw          $v0, 0x620($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD1A0u;
}
