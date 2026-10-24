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

// Function: cCoreSave_SetOliviaCostumeNo
// Address: 0x1fc728 - 0x1fc740
void cCoreSave_SetOliviaCostumeNo_0x1fc728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_SetOliviaCostumeNo_0x1fc728");
#endif

    ctx->pc = 0x1fc728u;

    // 0x1fc728: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc72c: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FC72Cu;
    {
        const bool branch_taken_0x1fc72c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc72c) {
            ctx->pc = 0x1FC730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC72Cu;
            // 0x1fc730: 0xac850bc0  sw          $a1, 0xBC0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 3008), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC734u;
            goto label_1fc734;
        }
    }
    ctx->pc = 0x1FC734u;
label_1fc734:
    // 0x1fc734: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC73Cu;
    // 0x1fc73c: 0x0  nop
    ctx->pc = 0x1fc73cu;
    // NOP
    ctx->pc = 0x1fc740u;
}
