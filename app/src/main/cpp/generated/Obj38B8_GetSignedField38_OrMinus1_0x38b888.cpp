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

// Function: Obj38B8_GetSignedField38_OrMinus1
// Address: 0x38b888 - 0x38b8a0
void Obj38B8_GetSignedField38_OrMinus1_0x38b888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj38B8_GetSignedField38_OrMinus1_0x38b888");
#endif

    ctx->pc = 0x38b888u;

    // 0x38b888: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x38b888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x38b88c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x38b88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38b890: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x38b890u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x38b894: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x38b894u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x38b898: 0x3e00008  jr          $ra
    ctx->pc = 0x38B898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B898u;
        // 0x38b89c: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B8A0u;
}
