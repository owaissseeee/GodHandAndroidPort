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

// Function: func_00334B38
// Address: 0x334b38 - 0x334b58
void func_00334B38_0x334b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334B38_0x334b38");
#endif

    ctx->pc = 0x334b38u;

    // 0x334b38: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x334b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x334b3c: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x334b3cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x334b40: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x334b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x334b44: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x334b44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x334b48: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x334b48u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x334b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x334B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B4Cu;
        // 0x334b50: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334B54u;
    // 0x334b54: 0x0  nop
    ctx->pc = 0x334b54u;
    // NOP
    ctx->pc = 0x334b58u;
}
