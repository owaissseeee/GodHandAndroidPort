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

// Function: func_002998D8
// Address: 0x2998d8 - 0x299908
void func_002998D8_0x2998d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002998D8_0x2998d8");
#endif

    ctx->pc = 0x2998d8u;

    // 0x2998d8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2998d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2998dc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2998dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2998e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2998e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2998e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2998e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2998e8: 0xa4850014  sh          $a1, 0x14($a0)
    ctx->pc = 0x2998e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 5));
    // 0x2998ec: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2998ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2998f0: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x2998f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x2998f4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2998f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2998f8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2998f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2998fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2998FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2998FCu;
        // 0x299900: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2998FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299904u;
    // 0x299904: 0x0  nop
    ctx->pc = 0x299904u;
    // NOP
    ctx->pc = 0x299908u;
}
