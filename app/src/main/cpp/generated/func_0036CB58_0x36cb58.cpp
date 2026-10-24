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

// Function: func_0036CB58
// Address: 0x36cb58 - 0x36cb98
void func_0036CB58_0x36cb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CB58_0x36cb58");
#endif

    ctx->pc = 0x36cb58u;

    // 0x36cb58: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x36cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x36cb5c: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x36cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x36cb60: 0x2409001f  addiu       $t1, $zero, 0x1F
    ctx->pc = 0x36cb60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x36cb64: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x36cb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x36cb68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36cb68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cb6c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x36cb6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x36cb70: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x36cb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x36cb74: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x36cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x36cb78: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x36cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x36cb7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x36cb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x36cb80: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x36cb80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x36cb84: 0xa0660002  sb          $a2, 0x2($v1)
    ctx->pc = 0x36cb84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x36cb88: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x36cb88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x36cb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x36CB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CB8Cu;
        // 0x36cb90: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CB94u;
    // 0x36cb94: 0x0  nop
    ctx->pc = 0x36cb94u;
    // NOP
    ctx->pc = 0x36cb98u;
}
