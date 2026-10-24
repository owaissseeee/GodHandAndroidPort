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

// Function: func_003344C8
// Address: 0x3344c8 - 0x334500
void func_003344C8_0x3344c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003344C8_0x3344c8");
#endif

    switch (ctx->pc) {
        case 0x3344d8u: goto label_3344d8;
        default: break;
    }

    ctx->pc = 0x3344c8u;

    // 0x3344c8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3344c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3344cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3344ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3344d0: 0x24439fe0  addiu       $v1, $v0, -0x6020
    ctx->pc = 0x3344d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942688));
    // 0x3344d4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3344d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3344d8:
    // 0x3344d8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3344d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3344dc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3344dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3344e0: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x3344e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x3344e4: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3344e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3344e8: 0x0  nop
    ctx->pc = 0x3344e8u;
    // NOP
    // 0x3344ec: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3344ECu;
    {
        const bool branch_taken_0x3344ec = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3344F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344ECu;
        // 0x3344f0: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3344ec) {
            ctx->pc = 0x3344D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3344d8;
        }
    }
    ctx->pc = 0x3344F4u;
    // 0x3344f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3344F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3344F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344F4u;
        // 0x3344f8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3344F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3344FCu;
    // 0x3344fc: 0x0  nop
    ctx->pc = 0x3344fcu;
    // NOP
    ctx->pc = 0x334500u;
}
