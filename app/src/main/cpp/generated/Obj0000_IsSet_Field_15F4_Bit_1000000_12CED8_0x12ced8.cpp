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

// Function: Obj0000_IsSet_Field_15F4_Bit_1000000_12CED8
// Address: 0x12ced8 - 0x12cef0
void Obj0000_IsSet_Field_15F4_Bit_1000000_12CED8_0x12ced8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_IsSet_Field_15F4_Bit_1000000_12CED8_0x12ced8");
#endif

    ctx->pc = 0x12ced8u;

    // 0x12ced8: 0x8c8215f4  lw          $v0, 0x15F4($a0)
    ctx->pc = 0x12ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5620)));
    // 0x12cedc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x12cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x12cee0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12cee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12cee4: 0x3e00008  jr          $ra
    ctx->pc = 0x12CEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEE4u;
        // 0x12cee8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CEECu;
    // 0x12ceec: 0x0  nop
    ctx->pc = 0x12ceecu;
    // NOP
    ctx->pc = 0x12cef0u;
}
