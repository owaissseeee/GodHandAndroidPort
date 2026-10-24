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

// Function: func_0035C1C0
// Address: 0x35c1c0 - 0x35c200
void func_0035C1C0_0x35c1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035C1C0_0x35c1c0");
#endif

    ctx->pc = 0x35c1c0u;

    // 0x35c1c0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x35c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x35c1c4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x35c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x35c1c8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x35c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x35c1cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x35c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35c1d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c1d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35c1d8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x35c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x35c1dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x35c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35c1e0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x35c1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x35c1e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35c1e8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x35c1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x35c1ec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x35c1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x35c1f0: 0xacc71f44  sw          $a3, 0x1F44($a2)
    ctx->pc = 0x35c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8004), GPR_U32(ctx, 7));
    // 0x35c1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x35C1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C1F4u;
        // 0x35c1f8: 0xac85135c  sw          $a1, 0x135C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4956), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C1FCu;
    // 0x35c1fc: 0x0  nop
    ctx->pc = 0x35c1fcu;
    // NOP
    ctx->pc = 0x35c200u;
}
