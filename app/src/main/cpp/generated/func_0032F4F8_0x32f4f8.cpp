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

// Function: func_0032F4F8
// Address: 0x32f4f8 - 0x32f528
void func_0032F4F8_0x32f4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032F4F8_0x32f4f8");
#endif

    ctx->pc = 0x32f4f8u;

    // 0x32f4f8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x32f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32f4fc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x32f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32f500: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F500u;
    {
        const bool branch_taken_0x32f500 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F500u;
        // 0x32f504: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f500) {
            ctx->pc = 0x32F510u;
            goto label_32f510;
        }
    }
    ctx->pc = 0x32F508u;
    // 0x32f508: 0x8ca202b4  lw          $v0, 0x2B4($a1)
    ctx->pc = 0x32f508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x32f50c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x32f50cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_32f510:
    // 0x32f510: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F510u;
    {
        const bool branch_taken_0x32f510 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f510) {
            ctx->pc = 0x32F520u;
            goto label_32f520;
        }
    }
    ctx->pc = 0x32F518u;
    // 0x32f518: 0x8c6202b8  lw          $v0, 0x2B8($v1)
    ctx->pc = 0x32f518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 696)));
    // 0x32f51c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x32f51cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_32f520:
    // 0x32f520: 0x3e00008  jr          $ra
    ctx->pc = 0x32F520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F528u;
}
