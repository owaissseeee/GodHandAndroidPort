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

// Function: Obj0000_Set_Vtbl_00451288_3218E0
// Address: 0x3218e0 - 0x3218f8
void Obj0000_Set_Vtbl_00451288_3218E0_0x3218e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Vtbl_00451288_3218E0_0x3218e0");
#endif

    ctx->pc = 0x3218e0u;

    // 0x3218e0: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x3218e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x3218e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3218e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3218e8: 0x24631288  addiu       $v1, $v1, 0x1288
    ctx->pc = 0x3218e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4744));
    // 0x3218ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3218ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3218F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3218ECu;
        // 0x3218f0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3218ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3218F4u;
    // 0x3218f4: 0x0  nop
    ctx->pc = 0x3218f4u;
    // NOP
    ctx->pc = 0x3218f8u;
}
