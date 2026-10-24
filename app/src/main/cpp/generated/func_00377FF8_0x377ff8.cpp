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

// Function: func_00377FF8
// Address: 0x377ff8 - 0x378020
void func_00377FF8_0x377ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00377FF8_0x377ff8");
#endif

    ctx->pc = 0x377ff8u;

    // 0x377ff8: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x377ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
    // 0x377ffc: 0x2463a790  addiu       $v1, $v1, -0x5870
    ctx->pc = 0x377ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944656));
    // 0x378000: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x378000u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x76A7A8u));
    // 0x378004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x378004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x378008: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x378008u;
    {
        const bool branch_taken_0x378008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378008u;
        // 0x37800c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378008) {
            ctx->pc = 0x378018u;
            goto label_378018;
        }
    }
    ctx->pc = 0x378010u;
    // 0x378010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x378010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378014: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x378014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_378018:
    // 0x378018: 0x3e00008  jr          $ra
    ctx->pc = 0x378018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378018u;
        // 0x37801c: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378020u;
}
