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

// Function: cSnd_SetBgmLevel
// Address: 0x2d2d68 - 0x2d2d98
void cSnd_SetBgmLevel_0x2d2d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SetBgmLevel_0x2d2d68");
#endif

    ctx->pc = 0x2d2d68u;

    // 0x2d2d68: 0xe48c0124  swc1        $f12, 0x124($a0)
    ctx->pc = 0x2d2d68u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x2d2d6c: 0xac850118  sw          $a1, 0x118($a0)
    ctx->pc = 0x2d2d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 5));
    // 0x2d2d70: 0xac86011c  sw          $a2, 0x11C($a0)
    ctx->pc = 0x2d2d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 6));
    // 0x2d2d74: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D74u;
        // 0x2d2d78: 0xac870120  sw          $a3, 0x120($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2D7Cu;
    // 0x2d2d7c: 0x0  nop
    ctx->pc = 0x2d2d7cu;
    // NOP
    // 0x2d2d80: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d2d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d2d84: 0x0  nop
    ctx->pc = 0x2d2d84u;
    // NOP
    // 0x2d2d88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d2d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d2d8c: 0x0  nop
    ctx->pc = 0x2d2d8cu;
    // NOP
    // 0x2d2d90: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d2d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d2d94: 0x0  nop
    ctx->pc = 0x2d2d94u;
    // NOP
    ctx->pc = 0x2d2d98u;
}
