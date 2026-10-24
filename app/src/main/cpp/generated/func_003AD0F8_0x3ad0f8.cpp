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

// Function: func_003AD0F8
// Address: 0x3ad0f8 - 0x3ad118
void func_003AD0F8_0x3ad0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AD0F8_0x3ad0f8");
#endif

    ctx->pc = 0x3ad0f8u;

    // 0x3ad0f8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3ad0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3ad0fc: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x3ad0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3ad100: 0x24a5f039  addiu       $a1, $a1, -0xFC7
    ctx->pc = 0x3ad100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963257));
    // 0x3ad104: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3ad104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3ad108: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ad108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ad10c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3ad10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3ad110: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD110u;
        // 0x3ad114: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD118u;
}
