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

// Function: Obj0000_IsSet_Field_15F4_Bit_400000_10B698
// Address: 0x10b698 - 0x10b6b0
void Obj0000_IsSet_Field_15F4_Bit_400000_10B698_0x10b698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_IsSet_Field_15F4_Bit_400000_10B698_0x10b698");
#endif

    ctx->pc = 0x10b698u;

    // 0x10b698: 0x8c8215f4  lw          $v0, 0x15F4($a0)
    ctx->pc = 0x10b698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5620)));
    // 0x10b69c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x10b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x10b6a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10b6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10b6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x10B6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6A4u;
        // 0x10b6a8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B6ACu;
    // 0x10b6ac: 0x0  nop
    ctx->pc = 0x10b6acu;
    // NOP
    ctx->pc = 0x10b6b0u;
}
