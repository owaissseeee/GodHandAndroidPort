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

// Function: func_0037CEE0
// Address: 0x37cee0 - 0x37cf00
void func_0037CEE0_0x37cee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037CEE0_0x37cee0");
#endif

    ctx->pc = 0x37cee0u;

    // 0x37cee0: 0x80820006  lb          $v0, 0x6($a0)
    ctx->pc = 0x37cee0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x37cee4: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x37cee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
    // 0x37cee8: 0x2463c8c0  addiu       $v1, $v1, -0x3740
    ctx->pc = 0x37cee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953152));
    // 0x37ceec: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x37ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x37cef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37cef4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x37cef4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37cef8: 0x3e00008  jr          $ra
    ctx->pc = 0x37CEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CEF8u;
        // 0x37cefc: 0x4100b  movn        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CF00u;
}
