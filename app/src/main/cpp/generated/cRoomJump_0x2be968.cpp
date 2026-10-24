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

// Function: cRoomJump
// Address: 0x2be968 - 0x2be980
void cRoomJump_0x2be968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cRoomJump_0x2be968");
#endif

    ctx->pc = 0x2be968u;

    // 0x2be968: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2be968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2be96c: 0x8c437a44  lw          $v1, 0x7A44($v0)
    ctx->pc = 0x2be96cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A44u));
    // 0x2be970: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2be970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be974: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE974u;
        // 0x2be978: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE97Cu;
    // 0x2be97c: 0x0  nop
    ctx->pc = 0x2be97cu;
    // NOP
    ctx->pc = 0x2be980u;
}
