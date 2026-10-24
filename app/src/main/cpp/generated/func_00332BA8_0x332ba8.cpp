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

// Function: func_00332BA8
// Address: 0x332ba8 - 0x332be0
void func_00332BA8_0x332ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00332BA8_0x332ba8");
#endif

    switch (ctx->pc) {
        case 0x332bb8u: goto label_332bb8;
        default: break;
    }

    ctx->pc = 0x332ba8u;

    // 0x332ba8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x332ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x332bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x332bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332bb0: 0x24439150  addiu       $v1, $v0, -0x6EB0
    ctx->pc = 0x332bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938960));
    // 0x332bb4: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x332bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_332bb8:
    // 0x332bb8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x332bb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x332bbc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x332bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x332bc0: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x332bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x332bc4: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x332bc4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x332bc8: 0x0  nop
    ctx->pc = 0x332bc8u;
    // NOP
    // 0x332bcc: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332BCCu;
    {
        const bool branch_taken_0x332bcc = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x332BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332BCCu;
        // 0x332bd0: 0x24630048  addiu       $v1, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332bcc) {
            ctx->pc = 0x332BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332bb8;
        }
    }
    ctx->pc = 0x332BD4u;
    // 0x332bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x332BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332BD4u;
        // 0x332bd8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332BDCu;
    // 0x332bdc: 0x0  nop
    ctx->pc = 0x332bdcu;
    // NOP
    ctx->pc = 0x332be0u;
}
