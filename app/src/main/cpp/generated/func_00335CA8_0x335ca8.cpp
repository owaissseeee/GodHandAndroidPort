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

// Function: func_00335CA8
// Address: 0x335ca8 - 0x335cd8
void func_00335CA8_0x335ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335CA8_0x335ca8");
#endif

    ctx->pc = 0x335ca8u;

    // 0x335ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x335cac: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x335CACu;
    {
        const bool branch_taken_0x335cac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x335CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335CACu;
        // 0x335cb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335cac) {
            ctx->pc = 0x335CC8u;
            goto label_335cc8;
        }
    }
    ctx->pc = 0x335CB4u;
    // 0x335cb4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x335cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x335cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335cbc: 0x24844fa0  addiu       $a0, $a0, 0x4FA0
    ctx->pc = 0x335cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20384));
    // 0x335cc0: 0x80cd750  j           func_335D40
    ctx->pc = 0x335CC0u;
    ctx->pc = 0x335CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335CC0u;
    // 0x335cc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D40u, 0x335CC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x335CC8u;
label_335cc8:
    // 0x335cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335ccc: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x335cccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x335cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x335CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335CD0u;
        // 0x335cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335CD8u;
}
