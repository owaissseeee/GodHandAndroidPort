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

// Function: func_001D4D60
// Address: 0x1d4d60 - 0x1d4d80
void func_001D4D60_0x1d4d60(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D4D60_0x1d4d60");
#endif

    if (__builtin_expect(ctx->pc != 0x1d4d60u, 0)) {
        switch (ctx->pc) {
            case 0x1d4d74u: goto label_1d4d74;
            default: break;
        }
    }


    // 0x1d4d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d4d64: 0x24040001  addiu       $a0, $zero, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4d6c: 0xc0752de  jal         func_1D4B78
    SET_GPR_U32(ctx, 31, 0x1D4D74u);
    ctx->pc = 0x1D4D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D6Cu;
    // 0x1d4d70: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001D4B78_0x1d4b78, 0x1d4b78u, 0x1d4d74u)) {
        return;
    }
label_1d4d74:
    // 0x1d4d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4d78: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D78u;
        // 0x1d4d7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4D80u;
}