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

// Function: cCoreSave_GetOliviaCostumeNo
// Address: 0x1fc740 - 0x1fc758
void cCoreSave_GetOliviaCostumeNo_0x1fc740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_GetOliviaCostumeNo_0x1fc740");
#endif

    ctx->pc = 0x1fc740u;

    // 0x1fc740: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fc740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc744: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC744u;
    {
        const bool branch_taken_0x1fc744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC744u;
        // 0x1fc748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc744) {
            ctx->pc = 0x1FC750u;
            goto label_1fc750;
        }
    }
    ctx->pc = 0x1FC74Cu;
    // 0x1fc74c: 0x8c820bc0  lw          $v0, 0xBC0($a0)
    ctx->pc = 0x1fc74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3008)));
label_1fc750:
    // 0x1fc750: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC758u;
}
