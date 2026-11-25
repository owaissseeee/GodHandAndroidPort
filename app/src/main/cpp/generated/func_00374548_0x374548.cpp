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

// Function: func_00374548
// Address: 0x374548 - 0x374570
void func_00374548_0x374548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00374548_0x374548");
#endif

    if (__builtin_expect(ctx->pc != 0x374548u, 0)) {
        switch (ctx->pc) {
            case 0x374564u: goto label_374564;
            default: break;
        }
    }


    // 0x374548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37454c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37454cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374550: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x374550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x374554: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x374554u;
    {
        const bool branch_taken_0x374554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x374558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374554u;
        // 0x374558: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374554) {
            ctx->pc = 0x374568u;
            goto label_374568;
        }
    }
    // 0x37455c: 0xc0cb6dc  jal         func_32DB70
    ctx->pc = 0x37455Cu;
    SET_GPR_U32(ctx, 31, 0x374564u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_0032DB70_0x32db70, 0x32db70u, 0x374564u)) {
        return;
    }
    ctx->pc = 0x374564u;
label_374564:
    // 0x374564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_374568:
    // 0x374568: 0x3e00008  jr          $ra
    ctx->pc = 0x374568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374568u;
        // 0x37456c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374570u;
}