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

// Function: func_00344D50
// Address: 0x344d50 - 0x344d98
void func_00344D50_0x344d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344D50_0x344d50");
#endif

    ctx->pc = 0x344d50u;

    // 0x344d50: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x344d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x344d54: 0x24840088  addiu       $a0, $a0, 0x88
    ctx->pc = 0x344d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
    // 0x344d58: 0x8ca6003c  lw          $a2, 0x3C($a1)
    ctx->pc = 0x344d58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x344d5c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x344d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x344d60: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x344d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x344d64: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x344d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x344d68: 0x80a3006c  lb          $v1, 0x6C($a1)
    ctx->pc = 0x344d68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x344d6c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x344d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x344d70: 0x80a2006d  lb          $v0, 0x6D($a1)
    ctx->pc = 0x344d70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 109)));
    // 0x344d74: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x344d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x344d78: 0x80a3006e  lb          $v1, 0x6E($a1)
    ctx->pc = 0x344d78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 110)));
    // 0x344d7c: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x344d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x344d80: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x344d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x344d84: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x344d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x344d88: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x344d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x344d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x344D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D8Cu;
        // 0x344d90: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344D94u;
    // 0x344d94: 0x0  nop
    ctx->pc = 0x344d94u;
    // NOP
    ctx->pc = 0x344d98u;
}
