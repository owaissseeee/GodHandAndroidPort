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

// Function: _IO_link_in
// Address: 0x38c208 - 0x38c238
void ps2__IO_link_in_0x38c208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_link_in_0x38c208");
#endif

    ctx->pc = 0x38c208u;

    // 0x38c208: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38c208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38c20c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x38c20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38c210: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x38c210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x38c214: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38C214u;
    {
        const bool branch_taken_0x38c214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C214u;
        // 0x38c218: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c214) {
            ctx->pc = 0x38C230u;
            goto label_38c230;
        }
    }
    ctx->pc = 0x38C21Cu;
    // 0x38c21c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x38c21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x38c220: 0x8c4450f8  lw          $a0, 0x50F8($v0)
    ctx->pc = 0x38c220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20728)));
    // 0x38c224: 0xac4550f8  sw          $a1, 0x50F8($v0)
    ctx->pc = 0x38c224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20728), GPR_U32(ctx, 5));
    // 0x38c228: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x38c228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x38c22c: 0xaca40034  sw          $a0, 0x34($a1)
    ctx->pc = 0x38c22cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 4));
label_38c230:
    // 0x38c230: 0x3e00008  jr          $ra
    ctx->pc = 0x38C230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C238u;
}
