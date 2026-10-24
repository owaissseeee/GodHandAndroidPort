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

// Function: func_0031D2B8
// Address: 0x31d2b8 - 0x31d2f8
void func_0031D2B8_0x31d2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031D2B8_0x31d2b8");
#endif

    ctx->pc = 0x31d2b8u;

    // 0x31d2b8: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x31d2b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
    // 0x31d2bc: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x31d2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x31d2c0: 0x250874a0  addiu       $t0, $t0, 0x74A0
    ctx->pc = 0x31d2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 29856));
    // 0x31d2c4: 0x24c658a8  addiu       $a2, $a2, 0x58A8
    ctx->pc = 0x31d2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22696));
    // 0x31d2c8: 0x91020600  lbu         $v0, 0x600($t0)
    ctx->pc = 0x31d2c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x747AA0u));
    // 0x31d2cc: 0x91070600  lbu         $a3, 0x600($t0)
    ctx->pc = 0x31d2ccu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x747AA0u));
    // 0x31d2d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31d2d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d2d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x31d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x31d2d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x31d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x31d2dc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x31d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x31d2e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x31d2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31d2e4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x31d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x31d2e8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x31d2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x31d2ec: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x31d2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x31d2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x31D2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D2F0u;
        // 0x31d2f4: 0xa1070600  sb          $a3, 0x600($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 1536), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D2F8u;
}
