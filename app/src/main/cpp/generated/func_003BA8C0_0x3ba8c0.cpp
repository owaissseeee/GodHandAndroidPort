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

// Function: func_003BA8C0
// Address: 0x3ba8c0 - 0x3ba900
void func_003BA8C0_0x3ba8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BA8C0_0x3ba8c0");
#endif

    ctx->pc = 0x3ba8c0u;

    // 0x3ba8c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ba8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ba8c4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA8C4u;
    {
        const bool branch_taken_0x3ba8c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA8C4u;
        // 0x3ba8c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba8c4) {
            ctx->pc = 0x3BA8DCu;
            goto label_3ba8dc;
        }
    }
    ctx->pc = 0x3BA8CCu;
    // 0x3ba8cc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA8CCu;
    {
        const bool branch_taken_0x3ba8cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba8cc) {
            ctx->pc = 0x3BA8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA8CCu;
            // 0x3ba8d0: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA8E0u;
            goto label_3ba8e0;
        }
    }
    ctx->pc = 0x3BA8D4u;
    // 0x3ba8d4: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BA8D4u;
    {
        const bool branch_taken_0x3ba8d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA8D4u;
        // 0x3ba8d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba8d4) {
            ctx->pc = 0x3BA8F0u;
            goto label_3ba8f0;
        }
    }
    ctx->pc = 0x3BA8DCu;
label_3ba8dc:
    // 0x3ba8dc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3ba8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_3ba8e0:
    // 0x3ba8e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ba8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba8e4: 0x24840b20  addiu       $a0, $a0, 0xB20
    ctx->pc = 0x3ba8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2848));
    // 0x3ba8e8: 0x80ee778  j           func_3B9DE0
    ctx->pc = 0x3BA8E8u;
    ctx->pc = 0x3BA8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA8E8u;
    // 0x3ba8ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DE0u, 0x3BA8E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BA8F0u;
label_3ba8f0:
    // 0x3ba8f0: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x3ba8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x3ba8f4: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x3ba8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x3ba8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA8F8u;
        // 0x3ba8fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA900u;
}
