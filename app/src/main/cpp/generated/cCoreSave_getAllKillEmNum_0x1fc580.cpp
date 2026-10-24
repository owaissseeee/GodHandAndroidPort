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

// Function: cCoreSave_getAllKillEmNum
// Address: 0x1fc580 - 0x1fc5b8
void cCoreSave_getAllKillEmNum_0x1fc580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getAllKillEmNum_0x1fc580");
#endif

    ctx->pc = 0x1fc580u;

    // 0x1fc580: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc584: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC584u;
    {
        const bool branch_taken_0x1fc584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC584u;
        // 0x1fc588: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc584) {
            ctx->pc = 0x1FC594u;
            goto label_1fc594;
        }
    }
    ctx->pc = 0x1FC58Cu;
    // 0x1fc58c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC58Cu;
    {
        const bool branch_taken_0x1fc58c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1FC590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC58Cu;
        // 0x1fc590: 0x28a20005  slti        $v0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc58c) {
            ctx->pc = 0x1FC59Cu;
            goto label_1fc59c;
        }
    }
    ctx->pc = 0x1FC594u;
label_1fc594:
    // 0x1fc594: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC594u;
        // 0x1fc598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC59Cu;
label_1fc59c:
    // 0x1fc59c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC59Cu;
    {
        const bool branch_taken_0x1fc59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC59Cu;
        // 0x1fc5a0: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc59c) {
            ctx->pc = 0x1FC5B0u;
            goto label_1fc5b0;
        }
    }
    ctx->pc = 0x1FC5A4u;
    // 0x1fc5a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fc5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fc5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5A8u;
        // 0x1fc5ac: 0x94620bac  lhu         $v0, 0xBAC($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2988)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC5B0u;
label_1fc5b0:
    // 0x1fc5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5B0u;
        // 0x1fc5b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC5B8u;
}
