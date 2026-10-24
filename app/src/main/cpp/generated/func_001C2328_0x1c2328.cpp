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

// Function: func_001C2328
// Address: 0x1c2328 - 0x1c2370
void func_001C2328_0x1c2328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C2328_0x1c2328");
#endif

    switch (ctx->pc) {
        case 0x1c2334u: goto label_1c2334;
        default: break;
    }

    ctx->pc = 0x1c2328u;

    // 0x1c2328: 0x908202f4  lbu         $v0, 0x2F4($a0)
    ctx->pc = 0x1c2328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x1c232c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C232Cu;
    {
        const bool branch_taken_0x1c232c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c232c) {
            ctx->pc = 0x1C2330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C232Cu;
            // 0x1c2330: 0x908402f6  lbu         $a0, 0x2F6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C233Cu;
            goto label_1c233c;
        }
    }
    ctx->pc = 0x1C2334u;
label_1c2334:
    // 0x1c2334: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2334u;
        // 0x1c2338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C233Cu;
label_1c233c:
    // 0x1c233c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1c233cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c2340: 0x0  nop
    ctx->pc = 0x1c2340u;
    // NOP
    // 0x1c2344: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C2344u;
    {
        const bool branch_taken_0x1c2344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2344u;
        // 0x1c2348: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2344) {
            ctx->pc = 0x1C2334u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2334;
        }
    }
    ctx->pc = 0x1C234Cu;
    // 0x1c234c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C234Cu;
    {
        const bool branch_taken_0x1c234c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C234Cu;
        // 0x1c2350: 0x28820008  slti        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c234c) {
            ctx->pc = 0x1C2364u;
            goto label_1c2364;
        }
    }
    ctx->pc = 0x1C2354u;
    // 0x1c2354: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C2354u;
    {
        const bool branch_taken_0x1c2354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2354u;
        // 0x1c2358: 0x28820006  slti        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2354) {
            ctx->pc = 0x1C2334u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2334;
        }
    }
    ctx->pc = 0x1C235Cu;
    // 0x1c235c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1C235Cu;
    {
        const bool branch_taken_0x1c235c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c235c) {
            ctx->pc = 0x1C2334u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2334;
        }
    }
    ctx->pc = 0x1C2364u;
label_1c2364:
    // 0x1c2364: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2364u;
        // 0x1c2368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C236Cu;
    // 0x1c236c: 0x0  nop
    ctx->pc = 0x1c236cu;
    // NOP
    ctx->pc = 0x1c2370u;
}
