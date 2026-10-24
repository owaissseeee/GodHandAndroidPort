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

// Function: func_002B31F8
// Address: 0x2b31f8 - 0x2b3230
void func_002B31F8_0x2b31f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B31F8_0x2b31f8");
#endif

    switch (ctx->pc) {
        case 0x2b3220u: goto label_2b3220;
        default: break;
    }

    ctx->pc = 0x2b31f8u;

    // 0x2b31f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b31f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b31fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b31fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b3200: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2b3200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2b3204: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3204u;
    {
        const bool branch_taken_0x2b3204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3204) {
            ctx->pc = 0x2B3208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3204u;
            // 0x2b3208: 0x8c850020  lw          $a1, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3214u;
            goto label_2b3214;
        }
    }
    ctx->pc = 0x2B320Cu;
    // 0x2b320c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B320Cu;
    {
        const bool branch_taken_0x2b320c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B320Cu;
        // 0x2b3210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b320c) {
            ctx->pc = 0x2B3220u;
            goto label_2b3220;
        }
    }
    ctx->pc = 0x2B3214u;
label_2b3214:
    // 0x2b3214: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2b3214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2b3218: 0xc0b2dde  jal         func_2CB778
    ctx->pc = 0x2B3218u;
    SET_GPR_U32(ctx, 31, 0x2B3220u);
    ctx->pc = 0x2B321Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3218u;
    // 0x2b321c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB778u, 0x2B3218u, 0x2B3220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3220u;
label_2b3220:
    // 0x2b3220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b3220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3224: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3224u;
        // 0x2b3228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B322Cu;
    // 0x2b322c: 0x0  nop
    ctx->pc = 0x2b322cu;
    // NOP
    ctx->pc = 0x2b3230u;
}
