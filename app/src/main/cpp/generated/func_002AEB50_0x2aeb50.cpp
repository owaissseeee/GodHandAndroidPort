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

// Function: func_002AEB50
// Address: 0x2aeb50 - 0x2aeb68
void func_002AEB50_0x2aeb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AEB50_0x2aeb50");
#endif

    ctx->pc = 0x2aeb50u;

    // 0x2aeb50: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2aeb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2aeb54: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2aeb54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2aeb58: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2aeb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2aeb5c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2aeb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2aeb60: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB60u;
        // 0x2aeb64: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEB68u;
}
