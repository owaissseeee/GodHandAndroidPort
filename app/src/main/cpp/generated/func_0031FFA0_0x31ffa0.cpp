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

// Function: func_0031FFA0
// Address: 0x31ffa0 - 0x31ffc0
void func_0031FFA0_0x31ffa0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FFA0_0x31ffa0");
#endif

    if (__builtin_expect(ctx->pc != 0x31ffa0u, 0)) {
        switch (ctx->pc) {
            case 0x31ffb0u: goto label_31ffb0;
            default: break;
        }
    }


    // 0x31ffa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31ffa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31ffa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31ffa8: 0xc0c7b84  jal         func_31EE10
    ctx->pc = 0x31FFA8u;
    SET_GPR_U32(ctx, 31, 0x31FFB0u);
    if (!runtime->callDirectStatic(rdram, ctx, &ps2____9type_info_0x31ee10, 0x31ee10u, 0x31ffb0u)) {
        return;
    }
label_31ffb0:
    // 0x31ffb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ffb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ffb4: 0x3e00008  jr          $ra
    ctx->pc = 0x31FFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFB4u;
        // 0x31ffb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x31ffbc: 0x0  nop
    // NOP
    ctx->pc = 0x31ffc0u;
}