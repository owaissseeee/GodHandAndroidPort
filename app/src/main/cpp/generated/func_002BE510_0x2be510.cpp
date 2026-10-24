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

// Function: func_002BE510
// Address: 0x2be510 - 0x2be530
void func_002BE510_0x2be510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BE510_0x2be510");
#endif

    ctx->pc = 0x2be510u;

    // 0x2be510: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2be510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2be514: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE514u;
    {
        const bool branch_taken_0x2be514 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2be514) {
            ctx->pc = 0x2BE528u;
            goto label_2be528;
        }
    }
    ctx->pc = 0x2BE51Cu;
    // 0x2be51c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BE51Cu;
    {
        const bool branch_taken_0x2be51c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE51Cu;
        // 0x2be520: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be51c) {
            ctx->pc = 0x2BE528u;
            goto label_2be528;
        }
    }
    ctx->pc = 0x2BE524u;
    // 0x2be524: 0xac408600  sw          $zero, -0x7A00($v0)
    ctx->pc = 0x2be524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936064), GPR_U32(ctx, 0));
label_2be528:
    // 0x2be528: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE530u;
}
