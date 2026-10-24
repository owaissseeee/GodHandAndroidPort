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

// Function: Obj0000_Get_Byte_15F4_Bit7_12CEF0
// Address: 0x12cef0 - 0x12cf08
void Obj0000_Get_Byte_15F4_Bit7_12CEF0_0x12cef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_Byte_15F4_Bit7_12CEF0_0x12cef0");
#endif

    ctx->pc = 0x12cef0u;

    // 0x12cef0: 0x908215f4  lbu         $v0, 0x15F4($a0)
    ctx->pc = 0x12cef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5620)));
    // 0x12cef4: 0x3e00008  jr          $ra
    ctx->pc = 0x12CEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEF4u;
        // 0x12cef8: 0x211fa  dsrl        $v0, $v0, 7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CEFCu;
    // 0x12cefc: 0x0  nop
    ctx->pc = 0x12cefcu;
    // NOP
    // 0x12cf00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12cf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12cf04: 0x0  nop
    ctx->pc = 0x12cf04u;
    // NOP
    ctx->pc = 0x12cf08u;
}
