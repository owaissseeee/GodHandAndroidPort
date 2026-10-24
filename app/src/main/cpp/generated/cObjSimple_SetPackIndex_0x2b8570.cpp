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

// Function: cObjSimple_SetPackIndex
// Address: 0x2b8570 - 0x2b8588
void cObjSimple_SetPackIndex_0x2b8570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjSimple_SetPackIndex_0x2b8570");
#endif

    ctx->pc = 0x2b8570u;

    // 0x2b8570: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8570u;
    {
        const bool branch_taken_0x2b8570 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2B8574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8570u;
        // 0x2b8574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8570) {
            ctx->pc = 0x2B8580u;
            goto label_2b8580;
        }
    }
    ctx->pc = 0x2B8578u;
    // 0x2b8578: 0xac8504d4  sw          $a1, 0x4D4($a0)
    ctx->pc = 0x2b8578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1236), GPR_U32(ctx, 5));
    // 0x2b857c: 0xa08204d0  sb          $v0, 0x4D0($a0)
    ctx->pc = 0x2b857cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1232), (uint8_t)GPR_U32(ctx, 2));
label_2b8580:
    // 0x2b8580: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8588u;
}
