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

// Function: Obj0000_IsSet_Field_16D4_Bit_4_26F308
// Address: 0x26f308 - 0x26f318
void Obj0000_IsSet_Field_16D4_Bit_4_26F308_0x26f308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_IsSet_Field_16D4_Bit_4_26F308_0x26f308");
#endif

    ctx->pc = 0x26f308u;

    // 0x26f308: 0x8c8216d4  lw          $v0, 0x16D4($a0)
    ctx->pc = 0x26f308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5844)));
    // 0x26f30c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x26f30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x26f310: 0x3e00008  jr          $ra
    ctx->pc = 0x26F310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F310u;
        // 0x26f314: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F318u;
}
