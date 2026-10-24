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

// Function: cOm53_setGetOffEm
// Address: 0x1a7f20 - 0x1a7f58
void cOm53_setGetOffEm_0x1a7f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm53_setGetOffEm_0x1a7f20");
#endif

    ctx->pc = 0x1a7f20u;

    // 0x1a7f20: 0x90820612  lbu         $v0, 0x612($a0)
    ctx->pc = 0x1a7f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1554)));
    // 0x1a7f24: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A7F24u;
    {
        const bool branch_taken_0x1a7f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F24u;
        // 0x1a7f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f24) {
            ctx->pc = 0x1A7F4Cu;
            goto label_1a7f4c;
        }
    }
    ctx->pc = 0x1A7F2Cu;
    // 0x1a7f2c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7F2Cu;
    {
        const bool branch_taken_0x1a7f2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F2Cu;
        // 0x1a7f30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f2c) {
            ctx->pc = 0x1A7F44u;
            goto label_1a7f44;
        }
    }
    ctx->pc = 0x1A7F34u;
    // 0x1a7f34: 0x90830615  lbu         $v1, 0x615($a0)
    ctx->pc = 0x1a7f34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1557)));
    // 0x1a7f38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a7f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a7f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F3Cu;
        // 0x1a7f40: 0xa0830615  sb          $v1, 0x615($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1557), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7F44u;
label_1a7f44:
    // 0x1a7f44: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F44u;
        // 0x1a7f48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7F4Cu;
label_1a7f4c:
    // 0x1a7f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7F54u;
    // 0x1a7f54: 0x0  nop
    ctx->pc = 0x1a7f54u;
    // NOP
    ctx->pc = 0x1a7f58u;
}
