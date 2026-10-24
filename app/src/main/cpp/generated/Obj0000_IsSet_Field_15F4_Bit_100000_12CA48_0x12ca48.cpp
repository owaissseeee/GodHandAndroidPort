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

// Function: Obj0000_IsSet_Field_15F4_Bit_100000_12CA48
// Address: 0x12ca48 - 0x12ca60
void Obj0000_IsSet_Field_15F4_Bit_100000_12CA48_0x12ca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_IsSet_Field_15F4_Bit_100000_12CA48_0x12ca48");
#endif

    ctx->pc = 0x12ca48u;

    // 0x12ca48: 0x8c8215f4  lw          $v0, 0x15F4($a0)
    ctx->pc = 0x12ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5620)));
    // 0x12ca4c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x12ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x12ca50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12ca50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12ca54: 0x3e00008  jr          $ra
    ctx->pc = 0x12CA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA54u;
        // 0x12ca58: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CA5Cu;
    // 0x12ca5c: 0x0  nop
    ctx->pc = 0x12ca5cu;
    // NOP
    ctx->pc = 0x12ca60u;
}
