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

// Function: func_002BE818
// Address: 0x2be818 - 0x2be838
void func_002BE818_0x2be818(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BE818_0x2be818");
#endif

    if (__builtin_expect(ctx->pc != 0x2be818u, 0)) {
        switch (ctx->pc) {
            case 0x2be828u: goto label_2be828;
            default: break;
        }
    }


    // 0x2be818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2be81c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be820: 0xc0afa16  jal         func_2BE858
    SET_GPR_U32(ctx, 31, 0x2BE828u);
    ctx->pc = 0x2BE824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE820u;
    // 0x2be824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002BE858_0x2be858, 0x2be858u, 0x2be828u)) {
        return;
    }
label_2be828:
    // 0x2be828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be82c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE82Cu;
        // 0x2be830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2be834: 0x0  nop
    // NOP
    ctx->pc = 0x2be838u;
}