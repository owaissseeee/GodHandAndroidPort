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

// Function: Obj0000_Set_Field_80_372C68
// Address: 0x372c68 - 0x372c80
void Obj0000_Set_Field_80_372C68_0x372c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Set_Field_80_372C68_0x372c68");
#endif

    ctx->pc = 0x372c68u;

    // 0x372c68: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x372c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x372c6c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x372c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372c70: 0x2463afe0  addiu       $v1, $v1, -0x5020
    ctx->pc = 0x372c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946784));
    // 0x372c74: 0x3e00008  jr          $ra
    ctx->pc = 0x372C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372C74u;
        // 0x372c78: 0xac830080  sw          $v1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372C7Cu;
    // 0x372c7c: 0x0  nop
    ctx->pc = 0x372c7cu;
    // NOP
    ctx->pc = 0x372c80u;
}
