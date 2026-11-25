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

// Function: func_0038F050
// Address: 0x38f050 - 0x38f070
void func_0038F050_0x38f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038F050_0x38f050");
#endif

    if (__builtin_expect(ctx->pc != 0x38f050u, 0)) {
        switch (ctx->pc) {
            case 0x38f060u: goto label_38f060;
            default: break;
        }
    }


    // 0x38f050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38f054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38f058: 0xc0e4c8c  jal         func_393230
    ctx->pc = 0x38F058u;
    SET_GPR_U32(ctx, 31, 0x38F060u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00393230_0x393230, 0x393230u, 0x38f060u)) {
        return;
    }
    ctx->pc = 0x38F060u;
label_38f060:
    // 0x38f060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38f060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f064: 0x3e00008  jr          $ra
    ctx->pc = 0x38F064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F064u;
        // 0x38f068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x38f06c: 0x0  nop
    // NOP
    ctx->pc = 0x38f070u;
}