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

// Function: func_00334B58
// Address: 0x334b58 - 0x334b88
void func_00334B58_0x334b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334B58_0x334b58");
#endif

    ctx->pc = 0x334b58u;

    // 0x334b58: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x334b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x334b5c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x334b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x334b60: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x334b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x334b64: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x334b64u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x334b68: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x334b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x334b6c: 0xa2182b  sltu        $v1, $a1, $v0
    ctx->pc = 0x334b6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x334b70: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x334b70u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x334b74: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x334b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x334b78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x334B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B7Cu;
        // 0x334b80: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334B84u;
    // 0x334b84: 0x0  nop
    ctx->pc = 0x334b84u;
    // NOP
    ctx->pc = 0x334b88u;
}
