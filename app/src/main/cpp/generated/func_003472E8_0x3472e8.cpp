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

// Function: func_003472E8
// Address: 0x3472e8 - 0x347310
void func_003472E8_0x3472e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003472E8_0x3472e8");
#endif

    ctx->pc = 0x3472e8u;

    // 0x3472e8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x3472e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3472ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3472ECu;
    {
        const bool branch_taken_0x3472ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3472F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3472ECu;
        // 0x3472f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3472ec) {
            ctx->pc = 0x347304u;
            goto label_347304;
        }
    }
    ctx->pc = 0x3472F4u;
    // 0x3472f4: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x3472f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x3472f8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3472F8u;
    {
        const bool branch_taken_0x3472f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3472FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3472F8u;
        // 0x3472fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3472f8) {
            ctx->pc = 0x347304u;
            goto label_347304;
        }
    }
    ctx->pc = 0x347300u;
    // 0x347300: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x347300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_347304:
    // 0x347304: 0x3e00008  jr          $ra
    ctx->pc = 0x347304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347304u;
        // 0x347308: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34730Cu;
    // 0x34730c: 0x0  nop
    ctx->pc = 0x34730cu;
    // NOP
    ctx->pc = 0x347310u;
}
