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

// Function: Obj0000_Or_Field_0_Bit_1_Clear_Field_348_1ED7C8
// Address: 0x1ed7c8 - 0x1ed7e0
void Obj0000_Or_Field_0_Bit_1_Clear_Field_348_1ED7C8_0x1ed7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Or_Field_0_Bit_1_Clear_Field_348_1ED7C8_0x1ed7c8");
#endif

    ctx->pc = 0x1ed7c8u;

    // 0x1ed7c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ed7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ed7cc: 0xac800348  sw          $zero, 0x348($a0)
    ctx->pc = 0x1ed7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 840), GPR_U32(ctx, 0));
    // 0x1ed7d0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ed7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ed7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED7D4u;
        // 0x1ed7d8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED7DCu;
    // 0x1ed7dc: 0x0  nop
    ctx->pc = 0x1ed7dcu;
    // NOP
    ctx->pc = 0x1ed7e0u;
}
