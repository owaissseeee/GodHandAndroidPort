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

// Function: Obj0000_IsSet_Field_16D0_Bit_100000_26F2F0
// Address: 0x26f2f0 - 0x26f308
void Obj0000_IsSet_Field_16D0_Bit_100000_26F2F0_0x26f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_IsSet_Field_16D0_Bit_100000_26F2F0_0x26f2f0");
#endif

    ctx->pc = 0x26f2f0u;

    // 0x26f2f0: 0x8c8216d0  lw          $v0, 0x16D0($a0)
    ctx->pc = 0x26f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5840)));
    // 0x26f2f4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x26f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x26f2f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26f2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26f2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x26F2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F2FCu;
        // 0x26f300: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F304u;
    // 0x26f304: 0x0  nop
    ctx->pc = 0x26f304u;
    // NOP
    ctx->pc = 0x26f308u;
}
