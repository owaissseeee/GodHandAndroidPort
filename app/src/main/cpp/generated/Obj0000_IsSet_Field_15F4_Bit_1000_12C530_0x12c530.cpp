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

// Function: Obj0000_IsSet_Field_15F4_Bit_1000_12C530
// Address: 0x12c530 - 0x12c540
void Obj0000_IsSet_Field_15F4_Bit_1000_12C530_0x12c530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_IsSet_Field_15F4_Bit_1000_12C530_0x12c530");
#endif

    ctx->pc = 0x12c530u;

    // 0x12c530: 0x8c8215f4  lw          $v0, 0x15F4($a0)
    ctx->pc = 0x12c530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5620)));
    // 0x12c534: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x12c534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x12c538: 0x3e00008  jr          $ra
    ctx->pc = 0x12C538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C538u;
        // 0x12c53c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C540u;
}
