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

// Function: func_00389D50
// Address: 0x389d50 - 0x389d70
void func_00389D50_0x389d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00389D50_0x389d50");
#endif

    switch (ctx->pc) {
        case 0x389d50u: goto label_389d50;
        case 0x389d54u: goto label_389d54;
        case 0x389d58u: goto label_389d58;
        case 0x389d5cu: goto label_389d5c;
        case 0x389d60u: goto label_389d60;
        case 0x389d64u: goto label_389d64;
        case 0x389d68u: goto label_389d68;
        case 0x389d6cu: goto label_389d6c;
        default: break;
    }

    ctx->pc = 0x389d50u;

label_389d50:
    // 0x389d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x389d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_389d54:
    // 0x389d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_389d58:
    // 0x389d58: 0xa0f809  jalr        $a1
label_389d5c:
    if (ctx->pc == 0x389D5Cu) {
        ctx->pc = 0x389D60u;
        goto label_389d60;
    }
    ctx->pc = 0x389D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x389D60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389D58u, 0x389D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389D60u;
label_389d60:
    // 0x389d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_389d64:
    // 0x389d64: 0x3e00008  jr          $ra
label_389d68:
    if (ctx->pc == 0x389D68u) {
        ctx->pc = 0x389D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D64u;
        // 0x389d68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389D6Cu;
        goto label_389d6c;
    }
    ctx->pc = 0x389D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D64u;
        // 0x389d68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389D6Cu;
label_389d6c:
    // 0x389d6c: 0x0  nop
    ctx->pc = 0x389d6cu;
    // NOP
    ctx->pc = 0x389d70u;
}
