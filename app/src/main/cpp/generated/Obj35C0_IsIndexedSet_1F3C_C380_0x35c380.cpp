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

// Function: Obj35C0_IsIndexedSet_1F3C_C380
// Address: 0x35c380 - 0x35c3a0
void Obj35C0_IsIndexedSet_1F3C_C380_0x35c380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj35C0_IsIndexedSet_1F3C_C380_0x35c380");
#endif

    ctx->pc = 0x35c380u;

    // 0x35c380: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x35c380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x35c384: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x35c384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35c388: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c38c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x35c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x35c390: 0x8c821f3c  lw          $v0, 0x1F3C($a0)
    ctx->pc = 0x35c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7996)));
    // 0x35c394: 0x3e00008  jr          $ra
    ctx->pc = 0x35C394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C394u;
        // 0x35c398: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C39Cu;
    // 0x35c39c: 0x0  nop
    ctx->pc = 0x35c39cu;
    // NOP
    ctx->pc = 0x35c3a0u;
}
