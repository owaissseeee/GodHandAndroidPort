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

// Function: GetField0OrZero_346828
// Address: 0x346828 - 0x346848
void GetField0OrZero_346828_0x346828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetField0OrZero_346828_0x346828");
#endif

    ctx->pc = 0x346828u;

    // 0x346828: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x346828u;
    {
        const bool branch_taken_0x346828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346828u;
        // 0x34682c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346828) {
            ctx->pc = 0x346834u;
            goto label_346834;
        }
    }
    ctx->pc = 0x346830u;
    // 0x346830: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x346830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_346834:
    // 0x346834: 0x3e00008  jr          $ra
    ctx->pc = 0x346834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34683Cu;
    // 0x34683c: 0x0  nop
    ctx->pc = 0x34683cu;
    // NOP
    // 0x346840: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x346840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x346844: 0x0  nop
    ctx->pc = 0x346844u;
    // NOP
    ctx->pc = 0x346848u;
}
